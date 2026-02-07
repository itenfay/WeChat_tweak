#import "WeChatRedEnvelop.h"
#import "WeChatRedEnvelopParam.h"
#import "WCRedEnvelopesNetworkHelper.h"
#import "WCPLReceiveRedEnvelopOperation.h"
#import "WCPLRedEnvelopTaskManager.h"
#import "WCPLRedEnvelopConfig.h"
#import "WCPLRedEnvelopParamQueue.h"
#import "WCPLServiceCenter.h"
#import "WCPLFuncService.h"
#import "WCPLLogger.h"
#import <objc/runtime.h>
#import <objc/message.h>

@interface WCRedEnvelopesLogicMgr (WCPLRedEnvelopOpen)
- (void)wcpl_handleRedEnvelopReceiverQueryResponse:(HongBaoRes *)res request:(HongBaoReq *)req;
@end

@interface WCRedEnvelopesLogicMgr (WCPLRedEnvelopAutoReply)
- (void)wcpl_handleRedEnvelopOpenResponse:(HongBaoRes *)res request:(HongBaoReq *)req;
- (void)wcpl_trySendAutoReplyForSession:(NSString *)sessionUserName isGroup:(BOOL)isGroup;
- (void)wcpl_trySendRedEnvelopNotifyForSession:(NSString *)sessionUserName isGroup:(BOOL)isGroup amount:(NSInteger)amount totalAmount:(NSInteger)totalAmount;
- (BOOL)wcpl_sendTextMessage:(NSString *)content toSession:(NSString *)sessionUserName;
@end

static NSString *const kWCPLFileHelperUserName = @"filehelper";

static NSString *wcpl_stringFromSelector(id obj, SEL sel);
static NSString *wcpl_stringForKeysInDictionary(NSDictionary *dict, NSArray<NSString *> *keys);
static NSDictionary *wcpl_nativeUrlDictionaryFromRequestDictionary(NSDictionary *requestDict);
static NSString *wcpl_sessionFromDictionary(NSDictionary *dict);

static NSString *wcpl_trimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return nil;
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *wcpl_normalizeSessionUserName(NSString *text) {
    NSString *session = wcpl_trimString(text);
    if (session.length == 0) {
        return nil;
    }

    for (NSInteger i = 0; i < 2; i++) {
        if ([session rangeOfString:@"%"].location == NSNotFound) {
            break;
        }
        NSString *decoded = [session stringByRemovingPercentEncoding];
        NSString *normalized = wcpl_trimString(decoded);
        if (normalized.length == 0 || [normalized isEqualToString:session]) {
            break;
        }
        session = normalized;
    }

    return session;
}

static BOOL wcpl_userNameInList(NSString *userName, NSArray *list) {
    NSString *target = wcpl_normalizeSessionUserName(userName);
    if (target.length == 0 || ![list isKindOfClass:[NSArray class]] || list.count == 0) {
        return NO;
    }

    for (id obj in list) {
        if (![obj isKindOfClass:[NSString class]]) {
            continue;
        }
        NSString *candidate = wcpl_normalizeSessionUserName((NSString *)obj);
        if (candidate.length > 0 && [candidate isEqualToString:target]) {
            return YES;
        }
    }
    return NO;
}

static NSString *wcpl_replyTextForSession(NSString *sessionUserName, BOOL isGroup) {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSString *rawText = isGroup ? config.groupAutoReplyText : config.privateAutoReplyText;
    NSString *trimmed = wcpl_trimString(rawText);
    if (trimmed.length == 0) {
        return nil;
    }

    if (isGroup) {
        if (!config.groupRedEnvelopEnable) {
            return nil;
        }
        if (config.groupRedEnvelopScope == 1 && !wcpl_userNameInList(sessionUserName, config.allowedGroupList)) {
            return nil;
        }
        if (config.groupRedEnvelopScope == 2 && wcpl_userNameInList(sessionUserName, config.blockedGroupList)) {
            return nil;
        }
    } else {
        if (!config.privateRedEnvelopEnable) {
            return nil;
        }
    }

    return trimmed;
}

static NSTimeInterval const kWCPLAutoReplyTrackTTL = 180.0;
static NSTimeInterval const kWCPLAutoReplyTrackFallbackAge = 12.0;
static NSUInteger const kWCPLAutoReplyTrackHardLimit = 512;

static dispatch_queue_t wcpl_openReplyTrackQueue(void) {
    static dispatch_queue_t queue;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        queue = dispatch_queue_create("com.wcpl.red_envelop.reply_track", DISPATCH_QUEUE_SERIAL);
    });
    return queue;
}

static NSMutableDictionary<NSString *, NSDictionary *> *wcpl_openReplyTrackMap(void) {
    static NSMutableDictionary<NSString *, NSDictionary *> *tracker;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        tracker = [NSMutableDictionary dictionary];
    });
    return tracker;
}

static NSString *wcpl_openReplyTrackKey(NSString *prefix, NSString *token) {
    NSString *safePrefix = wcpl_trimString(prefix);
    NSString *safeToken = wcpl_trimString(token);
    if (safePrefix.length == 0 || safeToken.length == 0) {
        return nil;
    }
    return [NSString stringWithFormat:@"%@:%@", safePrefix, safeToken];
}

static void wcpl_openReplyTrackCleanupLocked(NSMutableDictionary<NSString *, NSDictionary *> *tracker, NSTimeInterval now) {
    if (![tracker isKindOfClass:[NSMutableDictionary class]]) return;

    NSTimeInterval expireBefore = now - kWCPLAutoReplyTrackTTL;
    NSArray<NSString *> *allKeys = [tracker allKeys];
    for (NSString *key in allKeys) {
        NSDictionary *entry = [tracker[key] isKindOfClass:[NSDictionary class]] ? tracker[key] : nil;
        NSNumber *ts = [entry[@"ts"] isKindOfClass:[NSNumber class]] ? entry[@"ts"] : nil;
        if (!ts || ts.doubleValue < expireBefore) {
            [tracker removeObjectForKey:key];
        }
    }

    if (tracker.count > kWCPLAutoReplyTrackHardLimit) {
        [tracker removeAllObjects];
    }
}

static void wcpl_trackOpenReplySession(NSString *sendId, NSString *sign, NSString *timingIdentifier, NSString *sessionUserName) {
    NSString *session = wcpl_normalizeSessionUserName(sessionUserName);
    if (session.length == 0) {
        return;
    }

    dispatch_sync(wcpl_openReplyTrackQueue(), ^{
        NSMutableDictionary<NSString *, NSDictionary *> *tracker = wcpl_openReplyTrackMap();
        NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
        wcpl_openReplyTrackCleanupLocked(tracker, now);

        NSDictionary *entry = @{
            @"session": session,
            @"ts": @(now)
        };

        NSString *sendKey = wcpl_openReplyTrackKey(@"sendId", sendId);
        NSString *signKey = wcpl_openReplyTrackKey(@"sign", sign);
        NSString *timingKey = wcpl_openReplyTrackKey(@"timing", timingIdentifier);

        if (sendKey.length > 0) tracker[sendKey] = entry;
        if (signKey.length > 0) tracker[signKey] = entry;
        if (timingKey.length > 0) tracker[timingKey] = entry;

        tracker[@"__last__"] = entry;
    });
}

static void wcpl_trackOpenReplySessionFromRequest(NSDictionary *params) {
    if (![params isKindOfClass:[NSDictionary class]] || params.count == 0) {
        return;
    }

    NSString *sendId = wcpl_stringForKeysInDictionary(params, @[@"sendId", @"sendid", @"send_id"]);
    NSString *sign = wcpl_stringForKeysInDictionary(params, @[@"sign"]);
    NSString *timingIdentifier = wcpl_stringForKeysInDictionary(params, @[@"timingIdentifier", @"timing_identifier"]);

    NSString *session = wcpl_stringForKeysInDictionary(params, @[@"sessionUserName", @"sessionusername", @"session_user_name"]);
    if (session.length == 0) {
        NSDictionary *nativeUrlDict = wcpl_nativeUrlDictionaryFromRequestDictionary(params);
        session = wcpl_sessionFromDictionary(nativeUrlDict);
    }
    session = wcpl_normalizeSessionUserName(session);
    if (session.length == 0) {
        return;
    }

    wcpl_trackOpenReplySession(sendId, sign, timingIdentifier, session);
}

static NSString *wcpl_lookupTrackedOpenSession(NSString *sendId, NSString *sign, NSString *timingIdentifier, NSString **sourceOut) {
    __block NSString *session = nil;
    __block NSString *source = nil;

    dispatch_sync(wcpl_openReplyTrackQueue(), ^{
        NSMutableDictionary<NSString *, NSDictionary *> *tracker = wcpl_openReplyTrackMap();
        NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
        wcpl_openReplyTrackCleanupLocked(tracker, now);

        NSString *(^lookupSessionForKey)(NSString *) = ^NSString *(NSString *key) {
            if (key.length == 0) return nil;
            NSDictionary *entry = [tracker[key] isKindOfClass:[NSDictionary class]] ? tracker[key] : nil;
            NSString *trackedSession = wcpl_normalizeSessionUserName(entry[@"session"]);
            if (trackedSession.length == 0) return nil;
            NSNumber *ts = [entry[@"ts"] isKindOfClass:[NSNumber class]] ? entry[@"ts"] : nil;
            if (!ts || (now - ts.doubleValue > kWCPLAutoReplyTrackTTL)) return nil;
            return trackedSession;
        };

        NSString *sendKey = wcpl_openReplyTrackKey(@"sendId", sendId);
        NSString *signKey = wcpl_openReplyTrackKey(@"sign", sign);
        NSString *timingKey = wcpl_openReplyTrackKey(@"timing", timingIdentifier);

        session = lookupSessionForKey(sendKey);
        if (session.length > 0) {
            source = @"sendId";
            return;
        }

        session = lookupSessionForKey(signKey);
        if (session.length > 0) {
            source = @"sign";
            return;
        }

        session = lookupSessionForKey(timingKey);
        if (session.length > 0) {
            source = @"timing";
            return;
        }

        NSDictionary *lastEntry = [tracker[@"__last__"] isKindOfClass:[NSDictionary class]] ? tracker[@"__last__"] : nil;
        NSString *lastSession = wcpl_normalizeSessionUserName(lastEntry[@"session"]);
        NSNumber *lastTs = [lastEntry[@"ts"] isKindOfClass:[NSNumber class]] ? lastEntry[@"ts"] : nil;
        if (lastSession.length > 0 && lastTs && (now - lastTs.doubleValue <= kWCPLAutoReplyTrackFallbackAge)) {
            session = lastSession;
            source = @"last";
        }
    });

    if (sourceOut) {
        *sourceOut = source;
    }
    return session;
}

static BOOL wcpl_hongbaoOpenLooksSuccessful(NSDictionary *responseDict,
                                            HongBaoRes *res,
                                            NSInteger *amountOut,
                                            NSInteger *totalAmountOut,
                                            NSInteger *receiveStatusOut,
                                            NSInteger *retCodeOut) {
    BOOL hasReceiveStatus = NO;
    NSInteger receiveStatus = wcpl_integerForKeysInDictionary(responseDict, @[@"receiveStatus", @"receive_status"], &hasReceiveStatus);

    BOOL hasRetCode = NO;
    NSInteger retCode = wcpl_integerForKeysInDictionary(responseDict, @[@"retCode", @"retcode"], &hasRetCode);
    if (!hasRetCode && [res respondsToSelector:@selector(retCode)]) {
        hasRetCode = YES;
        retCode = wcpl_intFromSelector(res, @selector(retCode));
    } else if (!hasRetCode && [res respondsToSelector:@selector(retcode)]) {
        hasRetCode = YES;
        retCode = wcpl_intFromSelector(res, @selector(retcode));
    }

    BOOL hasAmount = NO;
    NSInteger amount = wcpl_integerForKeysInDictionary(responseDict,
                                                       @[@"amount", @"receiveAmount", @"receive_amount", @"recvAmount", @"recv_amount"],
                                                       &hasAmount);

    BOOL hasTotalAmount = NO;
    NSInteger totalAmount = wcpl_integerForKeysInDictionary(responseDict,
                                                            @[@"totalAmount", @"total_amount", @"totalFee", @"total_fee", @"totalMoney", @"total_money", @"hbTotalAmount", @"hb_total_amount"],
                                                            &hasTotalAmount);

    int errorType = wcpl_intFromSelector(res, @selector(errorType));
    int platRet = wcpl_intFromSelector(res, @selector(platRet));

    BOOL successByStatus = (hasReceiveStatus && receiveStatus == 2);
    BOOL successByAmount = (hasAmount && amount > 0);
    BOOL successByRetCode = (hasRetCode && retCode == 0);
    BOOL successByTransport = (errorType == 0 && platRet == 0);
    BOOL hasUsefulPayload = (responseDict.count > 0 || hasRetCode || hasReceiveStatus || hasAmount);

    BOOL success = (successByTransport && (successByStatus || successByAmount || successByRetCode));
    if (!success) {
        success = (successByTransport && hasUsefulPayload && (retCode == 0 || receiveStatus == 2 || amount > 0));
    }

    if (amountOut) {
        *amountOut = amount;
    }
    if (totalAmountOut) {
        *totalAmountOut = hasTotalAmount ? totalAmount : 0;
    }
    if (receiveStatusOut) {
        *receiveStatusOut = receiveStatus;
    }
    if (retCodeOut) {
        *retCodeOut = retCode;
    }

    return success;
}

static NSString *wcpl_sessionFromDictionary(NSDictionary *dict) {
    if (![dict isKindOfClass:[NSDictionary class]] || dict.count == 0) {
        return nil;
    }

    NSString *session = wcpl_stringForKeysInDictionary(dict,
                                                       @[@"sessionUserName", @"sessionusername", @"session_user_name",
                                                         @"chatroomname", @"chatRoomName", @"chat_room_name",
                                                         @"talker", @"fromUsername", @"fromUserName", @"from_username",
                                                         @"toUsername", @"toUserName", @"to_username"]);
    return wcpl_normalizeSessionUserName(session);
}

static NSString *wcpl_guessSessionFromRequestObject(HongBaoReq *req) {
    if (!req) {
        return nil;
    }

    NSArray<NSString *> *keys = @[@"sessionUserName", @"sessionusername", @"session_user_name",
                                  @"chatroomname", @"chatRoomName", @"chat_room_name",
                                  @"talker", @"fromUsername", @"fromUserName", @"from_username",
                                  @"toUsername", @"toUserName", @"to_username"];
    for (NSString *key in keys) {
        @try {
            id value = [req valueForKey:key];
            NSString *session = wcpl_normalizeSessionUserName(value);
            if (session.length > 0) {
                return session;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    return nil;
}

static NSString *wcpl_bestSessionCandidate(NSString *primarySession,
                                           NSDictionary *requestDict,
                                           NSDictionary *responseDict,
                                           NSDictionary *requestNativeUrlDict,
                                           HongBaoReq *req,
                                           NSString **sourceOut) {
    NSString *session = wcpl_normalizeSessionUserName(primarySession);
    NSString *source = @"request";
    if (session.length > 0) {
        if (sourceOut) {
            *sourceOut = source;
        }
        return session;
    }

    session = wcpl_sessionFromDictionary(requestDict);
    if (session.length > 0) {
        source = @"request.dict";
        if (sourceOut) {
            *sourceOut = source;
        }
        return session;
    }

    session = wcpl_sessionFromDictionary(requestNativeUrlDict);
    if (session.length > 0) {
        source = @"request.nativeUrl";
        if (sourceOut) {
            *sourceOut = source;
        }
        return session;
    }

    session = wcpl_sessionFromDictionary(responseDict);
    if (session.length > 0) {
        source = @"response";
        if (sourceOut) {
            *sourceOut = source;
        }
        return session;
    }

    session = wcpl_guessSessionFromRequestObject(req);
    if (session.length > 0) {
        source = @"request.kvc";
        if (sourceOut) {
            *sourceOut = source;
        }
        return session;
    }

    if (sourceOut) {
        *sourceOut = source;
    }
    return nil;
}

static unsigned int wcpl_hongbaoCmdId(HongBaoRes *res, HongBaoReq *req) {
    unsigned int cmd = 0;
    @try {
        if (req && [req respondsToSelector:@selector(cgiCmd)]) {
            cmd = req.cgiCmd;
        }
    } @catch (__unused NSException *exception) {
        cmd = 0;
    }

    if (cmd == 0 && req) {
        NSArray<NSString *> *keys = @[@"cgiCmd", @"cgiCmdId", @"cgiCmdid", @"cmdId", @"cmdid"];
        for (NSString *key in keys) {
            @try {
                id value = [req valueForKey:key];
                if ([value respondsToSelector:@selector(unsignedIntValue)]) {
                    cmd = [value unsignedIntValue];
                    if (cmd != 0) break;
                } else if ([value respondsToSelector:@selector(intValue)]) {
                    int v = [value intValue];
                    if (v > 0) { cmd = (unsigned int)v; break; }
                }
            } @catch (__unused NSException *exception) {
            }
        }
    }

    if (cmd == 0) {
        @try {
            if (res && [res respondsToSelector:@selector(cgiCmdid)]) {
                cmd = (unsigned int)res.cgiCmdid;
            }
        } @catch (__unused NSException *exception) {
            cmd = 0;
        }
    }

    if (cmd == 0 && res) {
        NSArray<NSString *> *keys = @[@"cgiCmdid", @"cgiCmdId", @"cgiCmd", @"cmdId", @"cmdid"];
        for (NSString *key in keys) {
            @try {
                id value = [res valueForKey:key];
                if ([value respondsToSelector:@selector(unsignedIntValue)]) {
                    cmd = [value unsignedIntValue];
                    if (cmd != 0) break;
                } else if ([value respondsToSelector:@selector(intValue)]) {
                    int v = [value intValue];
                    if (v > 0) { cmd = (unsigned int)v; break; }
                }
            } @catch (__unused NSException *exception) {
            }
        }
    }

    return cmd;
}

static NSString *wcpl_safeUserNameFromObject(id obj) {
    if (!obj) return nil;
    if ([obj isKindOfClass:[NSString class]]) {
        return wcpl_trimString((NSString *)obj);
    }

    Class contactClass = objc_getClass("CContact");
    if (contactClass && [obj isKindOfClass:contactClass]) {
        @try {
            return wcpl_trimString(((CContact *)obj).m_nsUsrName);
        } @catch (__unused NSException *exception) {
        }
    }

    if ([obj respondsToSelector:@selector(m_nsUsrName)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(obj, @selector(m_nsUsrName));
            if ([value isKindOfClass:[NSString class]]) {
                return wcpl_trimString((NSString *)value);
            }
        } @catch (__unused NSException *exception) {
        }
    }

    @try {
        id value = [obj valueForKey:@"m_nsUsrName"];
        if ([value isKindOfClass:[NSString class]]) {
            return wcpl_trimString((NSString *)value);
        }
    } @catch (__unused NSException *exception) {
    }

    return nil;
}

static id wcpl_contactForUserName(NSString *userName) {
    NSString *target = wcpl_normalizeSessionUserName(userName);
    if (target.length == 0) {
        return nil;
    }

    __block id contact = nil;
    void (^resolveBlock)(void) = ^{
        CContactMgr *contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
        if (!contactMgr) {
            return;
        }

        @try {
            if ([contactMgr respondsToSelector:@selector(getContactByName:)]) {
                contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByName:), target);
            }
            if (!contact && [contactMgr respondsToSelector:@selector(getContactByNameFromDB:)]) {
                contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByNameFromDB:), target);
            }
            if (!contact && [contactMgr respondsToSelector:@selector(getContactByNameFromCache:)]) {
                contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByNameFromCache:), target);
            }
        } @catch (__unused NSException *exception) {
            contact = nil;
        }
    };

    if ([NSThread isMainThread]) {
        resolveBlock();
    } else {
        dispatch_sync(dispatch_get_main_queue(), resolveBlock);
    }

    return contact;
}

static NSString *wcpl_contactDisplayName(id contact) {
    if (!contact) {
        return nil;
    }

    NSString *displayName = nil;
    @try {
        if ([contact respondsToSelector:@selector(getContactDisplayName)]) {
            id value = ((id (*)(id, SEL))objc_msgSend)(contact, @selector(getContactDisplayName));
            displayName = wcpl_trimString(value);
        }
    } @catch (__unused NSException *exception) {
        displayName = nil;
    }

    if (displayName.length == 0) {
        @try {
            if ([contact respondsToSelector:@selector(m_nsNickName)]) {
                id value = ((id (*)(id, SEL))objc_msgSend)(contact, @selector(m_nsNickName));
                displayName = wcpl_trimString(value);
            }
        } @catch (__unused NSException *exception) {
            displayName = nil;
        }
    }

    if (displayName.length == 0) {
        @try {
            id value = [contact valueForKey:@"m_nsRemark"];
            displayName = wcpl_trimString(value);
        } @catch (__unused NSException *exception) {
            displayName = nil;
        }
    }

    if (displayName.length > 0) {
        displayName = [[displayName stringByReplacingOccurrencesOfString:@"\r" withString:@" "]
                       stringByReplacingOccurrencesOfString:@"\n" withString:@" "];
    }
    return displayName;
}

static NSString *wcpl_displayNameForUserName(NSString *userName) {
    NSString *target = wcpl_normalizeSessionUserName(userName);
    if (target.length == 0) {
        return nil;
    }

    if ([target isEqualToString:kWCPLFileHelperUserName]) {
        return @"文件传输助手";
    }

    id contact = wcpl_contactForUserName(target);
    return wcpl_contactDisplayName(contact);
}

static NSString *wcpl_notifySceneDisplayText(NSString *sessionUserName) {
    NSString *session = wcpl_normalizeSessionUserName(sessionUserName);
    if (session.length == 0) {
        return @"当前会话";
    }

    BOOL isGroup = ([session rangeOfString:@"@chatroom"].location != NSNotFound);
    NSString *displayName = wcpl_displayNameForUserName(session);

    if (isGroup) {
        if (displayName.length > 0) {
            return [NSString stringWithFormat:@"群聊(%@)", displayName];
        }

        NSString *groupId = [session stringByReplacingOccurrencesOfString:@"@chatroom" withString:@""];
        if (groupId.length > 10) {
            groupId = [groupId substringToIndex:10];
        }
        return [NSString stringWithFormat:@"群聊(%@)", groupId.length > 0 ? groupId : @"未知"];
    }

    if (displayName.length > 0) {
        return [NSString stringWithFormat:@"私聊(%@)", displayName];
    }

    NSString *peer = session;
    if (peer.length > 12) {
        peer = [peer substringToIndex:12];
    }
    return [NSString stringWithFormat:@"私聊(%@)", peer];
}

static NSString *wcpl_currentSelfUserName(void) {
    __block NSString *selfUserName = nil;
    void (^resolveBlock)(void) = ^{
        CContactMgr *contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
        if (!(contactMgr && [contactMgr respondsToSelector:@selector(getSelfContact)])) {
            return;
        }
        @try {
            id selfContact = [contactMgr getSelfContact];
            selfUserName = [wcpl_safeUserNameFromObject(selfContact) copy];
        } @catch (__unused NSException *exception) {
            selfUserName = nil;
        }
    };

    if ([NSThread isMainThread]) {
        resolveBlock();
    } else {
        dispatch_sync(dispatch_get_main_queue(), resolveBlock);
    }

    return selfUserName;
}

static NSString *wcpl_currencyYuanString(NSInteger amountInCent) {
    if (amountInCent <= 0) {
        return @"0.00";
    }
    double amount = ((double)amountInCent) / 100.0;
    return [NSString stringWithFormat:@"%.2f", amount];
}

static NSString *wcpl_redEnvelopNotifyMessage(NSString *sessionUserName, NSInteger amount, NSInteger totalAmount) {
    NSString *sceneName = wcpl_notifySceneDisplayText(sessionUserName);

    NSString *receiveYuan = wcpl_currencyYuanString(amount);
    NSString *totalYuan = wcpl_currencyYuanString(totalAmount);
    BOOL hasTotal = (totalAmount > 0);
    if (!hasTotal && amount > 0) {
        totalYuan = receiveYuan;
        hasTotal = YES;
    }

    NSMutableString *message = [NSMutableString stringWithFormat:@"🎉 抢到红包提醒\n会话：%@\n本次金额：¥%@", sceneName, receiveYuan];
    [message appendFormat:@"\n红包总额：%@", hasTotal ? [NSString stringWithFormat:@"¥%@", totalYuan] : @"未获取"];
    [message appendString:@"\n状态：已自动领取"];
    return message;
}

static NSString *wcpl_sanitizeInlineText(NSString *text, NSUInteger maxLen) {
    NSString *value = wcpl_trimString(text);
    if (value.length == 0) return nil;

    value = [[value stringByReplacingOccurrencesOfString:@"\r" withString:@" "]
                stringByReplacingOccurrencesOfString:@"\n" withString:@" "];

    if (maxLen > 0 && value.length > maxLen) {
        value = [[value substringToIndex:maxLen] stringByAppendingString:@"…"];
    }
    return value;
}

static NSString *wcpl_stringForKeyInDictionary(NSDictionary *dict, NSString *key) {
    if (![dict isKindOfClass:[NSDictionary class]] || key.length == 0) return nil;
    id value = dict[key];
    if ([value isKindOfClass:[NSString class]]) {
        return wcpl_trimString((NSString *)value);
    }
    if ([value respondsToSelector:@selector(stringValue)]) {
        @try {
            return wcpl_trimString([value stringValue]);
        } @catch (__unused NSException *exception) {
            return nil;
        }
    }
    return nil;
}

static NSString *wcpl_stringForKeysInDictionary(NSDictionary *dict, NSArray<NSString *> *keys) {
    if (![keys isKindOfClass:[NSArray class]] || keys.count == 0) {
        return nil;
    }

    for (NSString *key in keys) {
        NSString *value = wcpl_stringForKeyInDictionary(dict, key);
        if (value.length > 0) {
            return value;
        }
    }

    return nil;
}

static NSInteger wcpl_integerForKeysInDictionary(NSDictionary *dict, NSArray<NSString *> *keys, BOOL *found) {
    if (found) {
        *found = NO;
    }

    if (![dict isKindOfClass:[NSDictionary class]] || ![keys isKindOfClass:[NSArray class]] || keys.count == 0) {
        return 0;
    }

    for (NSString *key in keys) {
        id value = dict[key];
        if (!value || value == [NSNull null]) {
            continue;
        }

        if (found) {
            *found = YES;
        }

        if ([value respondsToSelector:@selector(integerValue)]) {
            @try {
                return [value integerValue];
            } @catch (__unused NSException *exception) {
                return 0;
            }
        }

        return 0;
    }

    return 0;
}

static NSDictionary *wcpl_dictionaryFromQueryString(NSString *text) {
    NSString *value = wcpl_trimString(text);
    if (value.length == 0) return nil;
    if ([value hasPrefix:@"?"] && value.length > 1) {
        value = [value substringFromIndex:1];
    }
    NSDictionary *dict = nil;
    @try {
        dict = [%c(WCBizUtil) dictionaryWithDecodedComponets:value separator:@"&"];
    } @catch (__unused NSException *exception) {
        dict = nil;
    }
    return [dict isKindOfClass:[NSDictionary class]] ? dict : nil;
}

static NSDictionary *wcpl_dictionaryFromJsonString(NSString *text) {
    NSString *value = wcpl_trimString(text);
    if (value.length == 0) return nil;
    NSDictionary *dict = nil;
    @try {
        dict = [value JSONDictionary];
    } @catch (__unused NSException *exception) {
        dict = nil;
    }
    return [dict isKindOfClass:[NSDictionary class]] ? dict : nil;
}

static NSDictionary *wcpl_dictionaryFromHongbaoBuffer(SKBuiltinBuffer_t *buffer) {
    if (![buffer isKindOfClass:%c(SKBuiltinBuffer_t)]) return nil;
    NSData *data = buffer.buffer;
    if (![data isKindOfClass:[NSData class]] || data.length == 0) return nil;

    NSString *text = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    if (text.length == 0) {
        text = [[NSString alloc] initWithData:data encoding:NSISOLatin1StringEncoding];
    }
    if (text.length == 0) return nil;

    NSDictionary *dict = wcpl_dictionaryFromJsonString(text);
    if (dict.count > 0) return dict;

    dict = wcpl_dictionaryFromQueryString(text);
    if (dict.count > 0) return dict;

    return nil;
}

static NSDictionary *wcpl_nativeUrlDictionaryFromRequestDictionary(NSDictionary *requestDict) {
    if (![requestDict isKindOfClass:[NSDictionary class]] || requestDict.count == 0) {
        return nil;
    }

    NSString *nativeUrl = wcpl_stringForKeysInDictionary(requestDict, @[@"nativeUrl", @"nativeurl", @"native_url"]);
    if (nativeUrl.length == 0) {
        return nil;
    }

    NSString *decodedNativeUrl = [nativeUrl stringByRemovingPercentEncoding] ?: nativeUrl;
    decodedNativeUrl = wcpl_trimString(decodedNativeUrl);
    if (decodedNativeUrl.length == 0) {
        return nil;
    }

    NSDictionary *nativeUrlDict = wcpl_dictionaryFromQueryString(decodedNativeUrl);
    if (nativeUrlDict.count > 0) {
        return nativeUrlDict;
    }

    NSRange qmark = [decodedNativeUrl rangeOfString:@"?"];
    if (qmark.location != NSNotFound && qmark.location + 1 < decodedNativeUrl.length) {
        nativeUrlDict = wcpl_dictionaryFromQueryString([decodedNativeUrl substringFromIndex:qmark.location + 1]);
        if (nativeUrlDict.count > 0) {
            return nativeUrlDict;
        }
    }

    return nil;
}

static int wcpl_intFromSelector(id obj, SEL sel) {
    if (!obj || !sel) return 0;
    if (![obj respondsToSelector:sel]) return 0;
    @try {
        return ((int (*)(id, SEL))objc_msgSend)(obj, sel);
    } @catch (__unused NSException *exception) {
        return 0;
    }
}

static NSString *wcpl_stringFromSelector(id obj, SEL sel) {
    if (!obj || !sel) return nil;
    if (![obj respondsToSelector:sel]) return nil;
    @try {
        id value = ((id (*)(id, SEL))objc_msgSend)(obj, sel);
        if ([value isKindOfClass:[NSString class]]) {
            return wcpl_trimString((NSString *)value);
        }
        return nil;
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static void wcpl_logHongbaoCommonErrorResponse(NSString *tag, id resObj, id reqObj) {
    unsigned int cmdId = 0;
    @try {
        if (reqObj && [reqObj respondsToSelector:@selector(cgiCmd)]) {
            cmdId = ((unsigned int (*)(id, SEL))objc_msgSend)(reqObj, @selector(cgiCmd));
        }
    } @catch (__unused NSException *exception) {
        cmdId = 0;
    }
    if (cmdId == 0) {
        @try {
            if (resObj && [resObj respondsToSelector:@selector(cgiCmdid)]) {
                cmdId = (unsigned int)((int (*)(id, SEL))objc_msgSend)(resObj, @selector(cgiCmdid));
            }
        } @catch (__unused NSException *exception) {
            cmdId = 0;
        }
    }

    NSDictionary *requestDict = nil;
    @try {
        if (reqObj && [reqObj respondsToSelector:@selector(reqText)]) {
            SKBuiltinBuffer_t *buf = ((id (*)(id, SEL))objc_msgSend)(reqObj, @selector(reqText));
            requestDict = wcpl_dictionaryFromHongbaoBuffer(buf);
        }
    } @catch (__unused NSException *exception) {
        requestDict = nil;
    }

    NSString *sendId = wcpl_stringForKeyInDictionary(requestDict, @"sendId")
        ?: wcpl_stringForKeyInDictionary(requestDict, @"sendid")
        ?: wcpl_stringForKeyInDictionary(requestDict, @"send_id");
    NSString *timingIdentifier = wcpl_stringForKeyInDictionary(requestDict, @"timingIdentifier")
        ?: wcpl_stringForKeyInDictionary(requestDict, @"timing_identifier");

    int errorType = wcpl_intFromSelector(resObj, @selector(errorType));
    int platRet = wcpl_intFromSelector(resObj, @selector(platRet));
    NSString *errorMsg = wcpl_stringFromSelector(resObj, @selector(errorMsg));
    NSString *platMsg = wcpl_stringFromSelector(resObj, @selector(platMsg));

    WCPLLogDebug(@"红包%@回包: cmd=%u sendId=%@ timing=%@ errorType=%d platRet=%d errorMsg=%@ platMsg=%@ res=%@ req=%@",
                 wcpl_trimString(tag) ?: @"错误",
                 cmdId,
                 sendId ?: @"",
                 timingIdentifier ?: @"",
                 errorType,
                 platRet,
                 wcpl_sanitizeInlineText(errorMsg, 120) ?: @"",
                 wcpl_sanitizeInlineText(platMsg, 120) ?: @"",
                 resObj ? NSStringFromClass([resObj class]) : @"",
                 reqObj ? NSStringFromClass([reqObj class]) : @"");
}

%hook WCRedEnvelopesLogicMgr

- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1 {
    if ([arg1 isKindOfClass:[NSDictionary class]]) {
        wcpl_trackOpenReplySessionFromRequest((NSDictionary *)arg1);
    }

    NSDictionary *params = [arg1 isKindOfClass:[NSDictionary class]] ? (NSDictionary *)arg1 : nil;
    NSString *sendId = wcpl_stringForKeyInDictionary(params, @"sendId")
        ?: wcpl_stringForKeyInDictionary(params, @"sendid")
        ?: wcpl_stringForKeyInDictionary(params, @"send_id");
    NSString *channelId = wcpl_stringForKeyInDictionary(params, @"channelId")
        ?: wcpl_stringForKeyInDictionary(params, @"channelid")
        ?: wcpl_stringForKeyInDictionary(params, @"channel_id");
    NSString *msgType = wcpl_stringForKeyInDictionary(params, @"msgType")
        ?: wcpl_stringForKeyInDictionary(params, @"msgtype")
        ?: wcpl_stringForKeyInDictionary(params, @"msg_type");
    WCPLLogDebug(@"ReceiverQueryRedEnvelopesRequest: mainThread=%d sendId=%@ channelId=%@ msgType=%@ keys=%lu",
                 [NSThread isMainThread],
                 sendId ?: @"",
                 channelId ?: @"",
                 msgType ?: @"",
                 (unsigned long)params.count);
    %orig;
}

- (void)OpenRedEnvelopesRequest:(id)arg1 {
    NSDictionary *params = [arg1 isKindOfClass:[NSDictionary class]] ? (NSDictionary *)arg1 : nil;
    NSString *sendId = wcpl_stringForKeyInDictionary(params, @"sendId")
        ?: wcpl_stringForKeyInDictionary(params, @"sendid")
        ?: wcpl_stringForKeyInDictionary(params, @"send_id");
    NSString *channelId = wcpl_stringForKeyInDictionary(params, @"channelId")
        ?: wcpl_stringForKeyInDictionary(params, @"channelid")
        ?: wcpl_stringForKeyInDictionary(params, @"channel_id");
    NSString *msgType = wcpl_stringForKeyInDictionary(params, @"msgType")
        ?: wcpl_stringForKeyInDictionary(params, @"msgtype")
        ?: wcpl_stringForKeyInDictionary(params, @"msg_type");
    NSString *timingIdentifier = wcpl_stringForKeyInDictionary(params, @"timingIdentifier")
        ?: wcpl_stringForKeyInDictionary(params, @"timing_identifier");
    NSString *sessionUserName = wcpl_stringForKeyInDictionary(params, @"sessionUserName")
        ?: wcpl_stringForKeyInDictionary(params, @"sessionusername")
        ?: wcpl_stringForKeyInDictionary(params, @"session_user_name");
    NSString *sign = wcpl_stringForKeyInDictionary(params, @"sign");

    wcpl_trackOpenReplySession(sendId, sign, timingIdentifier, sessionUserName);
    if (params) {
        wcpl_trackOpenReplySessionFromRequest(params);
    }

    WCPLLogDebug(@"OpenRedEnvelopesRequest: mainThread=%d sendId=%@ channelId=%@ msgType=%@ timingType=%@ timingLen=%lu signLen=%lu session=%@ tracked=%d keys=%lu",
                 [NSThread isMainThread],
                 sendId ?: @"",
                 channelId ?: @"",
                 msgType ?: @"",
                 params[@"timingIdentifier"] ? NSStringFromClass([params[@"timingIdentifier"] class]) : @"",
                 (unsigned long)timingIdentifier.length,
                 (unsigned long)sign.length,
                 sessionUserName ?: @"",
                 sessionUserName.length > 0,
                 (unsigned long)params.count);

    %orig;
}

- (void)OnWCToHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2 {
    %orig;

    unsigned int cmdId = wcpl_hongbaoCmdId(arg1, arg2);
    WCPLLogDebug(@"红包公共回包: selector=%@ cmd=%u res=%@ req=%@",
                 NSStringFromSelector(_cmd),
                 cmdId,
                 arg1 ? NSStringFromClass([arg1 class]) : @"",
                 arg2 ? NSStringFromClass([arg2 class]) : @"");

    // 自动抢红包：处理查询回包 -> 排队打开
    [self wcpl_handleRedEnvelopReceiverQueryResponse:arg1 request:arg2];
    // 自动回复：处理打开回包（cmd=4）
    [self wcpl_handleRedEnvelopOpenResponse:arg1 request:arg2];
}

- (void)OnWCToOpenIMHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2 {
    %orig;
    unsigned int cmdId = wcpl_hongbaoCmdId(arg1, arg2);
    WCPLLogDebug(@"OpenIM红包回包: selector=%@ cmd=%u res=%@ req=%@",
                 NSStringFromSelector(_cmd),
                 cmdId,
                 arg1 ? NSStringFromClass([arg1 class]) : @"",
                 arg2 ? NSStringFromClass([arg2 class]) : @"");
    [self wcpl_handleRedEnvelopReceiverQueryResponse:arg1 request:arg2];
    [self wcpl_handleRedEnvelopOpenResponse:arg1 request:arg2];
}

- (void)OnWCToLiveStreamHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2 {
    %orig;
    unsigned int cmdId = wcpl_hongbaoCmdId(arg1, arg2);
    WCPLLogDebug(@"LiveStream红包回包: selector=%@ cmd=%u res=%@ req=%@",
                 NSStringFromSelector(_cmd),
                 cmdId,
                 arg1 ? NSStringFromClass([arg1 class]) : @"",
                 arg2 ? NSStringFromClass([arg2 class]) : @"");
    [self wcpl_handleRedEnvelopReceiverQueryResponse:arg1 request:arg2];
    [self wcpl_handleRedEnvelopOpenResponse:arg1 request:arg2];
}

- (void)OnWCToHongbaoCommonErrorResponse:(id)arg1 Request:(id)arg2 {
    %orig;
    wcpl_logHongbaoCommonErrorResponse(@"错误", arg1, arg2);
}

- (void)OnWCToHongbaoCommonSystemErrorResponse:(id)arg1 Request:(id)arg2 {
    %orig;
    wcpl_logHongbaoCommonErrorResponse(@"系统错误", arg1, arg2);
}

%new
- (void)wcpl_handleRedEnvelopReceiverQueryResponse:(HongBaoRes *)res request:(HongBaoReq *)req {
    if (!res || !req) return;

    unsigned int cmdId = wcpl_hongbaoCmdId(res, req);
    // 非参数查询请求
    if (cmdId != 3) {
        return;
    }

    NSDictionary *responseDict = wcpl_dictionaryFromHongbaoBuffer(res.retText);
    if (![responseDict isKindOfClass:[NSDictionary class]] || responseDict.count == 0) {
        return;
    }

    NSDictionary *requestDict = wcpl_dictionaryFromHongbaoBuffer(req.reqText);
    if (![requestDict isKindOfClass:[NSDictionary class]]) {
        requestDict = @{};
    }

    NSDictionary *requestNativeUrlDict = wcpl_nativeUrlDictionaryFromRequestDictionary(requestDict);
    NSString *requestSign = wcpl_stringForKeyInDictionary(requestNativeUrlDict, @"sign");
    NSString *requestSendId = wcpl_stringForKeyInDictionary(requestNativeUrlDict, @"sendid")
        ?: wcpl_stringForKeyInDictionary(requestNativeUrlDict, @"sendId")
        ?: wcpl_stringForKeyInDictionary(requestNativeUrlDict, @"send_id");

    WeChatRedEnvelopParam *mgrParams = [[WCPLRedEnvelopParamQueue sharedQueue] dequeueMatchingSign:requestSign sendId:requestSendId];
    WCPLLogDebug(@"红包查询回包: cmd=%u matched=%d signLen=%lu sendId=%@",
                 cmdId,
                 mgrParams != nil,
                 (unsigned long)requestSign.length,
                 requestSendId ?: @"");

    BOOL (^shouldReceiveRedEnvelop)() = ^BOOL() {
        // 手动抢红包
        if (!mgrParams) { return NO; }

        WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
        if (!config.autoReceiveEnable) { return NO; }

        BOOL isGroupSession = ([mgrParams.sessionUserName rangeOfString:@"@chatroom"].location != NSNotFound);
        if (isGroupSession) {
            if (!config.groupRedEnvelopEnable) { return NO; }
            if (mgrParams.isGroupSender && !config.receiveSelfRedEnvelop) { return NO; }
            if (config.groupRedEnvelopScope == 1) {
                if (!wcpl_userNameInList(mgrParams.sessionUserName, config.allowedGroupList)) { return NO; }
            } else if (config.groupRedEnvelopScope == 2) {
                if (wcpl_userNameInList(mgrParams.sessionUserName, config.blockedGroupList)) { return NO; }
            }
        } else {
            if (!config.privateRedEnvelopEnable) { return NO; }
        }

        // 自己已经抢过
        if ([responseDict[@"receiveStatus"] integerValue] == 2) { return NO; }

        // 红包被抢完
        if ([responseDict[@"hbStatus"] integerValue] == 4) { return NO; }

        // 没有这个字段会被判定为使用外挂
        NSString *timingIdentifier = wcpl_stringForKeyInDictionary(responseDict, @"timingIdentifier")
            ?: wcpl_stringForKeyInDictionary(responseDict, @"timing_identifier");
        if (timingIdentifier.length == 0) { return NO; }

        if (mgrParams.isGroupSender) {
            // 自己发红包的时候没有 sign 字段
            return YES;
        } else {
            if (requestSign.length > 0 && ![requestSign isEqualToString:mgrParams.sign]) { return NO; }
            return YES;
        }
    };

    BOOL allowOpen = shouldReceiveRedEnvelop();
    if (mgrParams) {
        WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
        BOOL isGroupSession = ([mgrParams.sessionUserName rangeOfString:@"@chatroom"].location != NSNotFound);
        WCPLLogDebug(@"红包回包判定: session=%@ isGroup=%d scope=%ld wl=%lu deny=%lu allow=%d",
                     mgrParams.sessionUserName ?: @"",
                     isGroupSession,
                     (long)config.groupRedEnvelopScope,
                     (unsigned long)config.allowedGroupList.count,
                     (unsigned long)config.blockedGroupList.count,
                     allowOpen);
    }

    if (allowOpen) {
        mgrParams.timingIdentifier = wcpl_stringForKeyInDictionary(responseDict, @"timingIdentifier")
            ?: wcpl_stringForKeyInDictionary(responseDict, @"timing_identifier");

        unsigned int delaySeconds = [self wcpl_calculateDelaySeconds];
        WCPLReceiveRedEnvelopOperation *operation = [[WCPLReceiveRedEnvelopOperation alloc] initWithRedEnvelopParam:mgrParams delay:delaySeconds];

        if ([WCPLRedEnvelopConfig sharedConfig].serialReceive) {
            [[WCPLRedEnvelopTaskManager sharedManager] addSerialTask:operation];
        } else {
            [[WCPLRedEnvelopTaskManager sharedManager] addNormalTask:operation];
        }
    }
}

%new
- (unsigned int)wcpl_calculateDelaySeconds {
    NSInteger configDelaySeconds = [WCPLRedEnvelopConfig sharedConfig].delaySeconds;

    if ([WCPLRedEnvelopConfig sharedConfig].serialReceive) {
        unsigned int serialDelaySeconds;
        if ([WCPLRedEnvelopTaskManager sharedManager].serialQueueIsEmpty) {
            serialDelaySeconds = configDelaySeconds;
        } else {
            serialDelaySeconds = 5;
        }

        return serialDelaySeconds;
    } else {
        return (unsigned int)configDelaySeconds;
    }
}

%new
- (void)wcpl_handleRedEnvelopOpenResponse:(HongBaoRes *)res request:(HongBaoReq *)req {
    if (!res || !req) {
        return;
    }

    unsigned int cmdId = wcpl_hongbaoCmdId(res, req);
    if (cmdId != 4) {
        return;
    }

    NSDictionary *responseDict = wcpl_dictionaryFromHongbaoBuffer(res.retText);
    if (![responseDict isKindOfClass:[NSDictionary class]]) {
        responseDict = @{};
    }

    NSDictionary *requestDict = wcpl_dictionaryFromHongbaoBuffer(req.reqText);
    if (![requestDict isKindOfClass:[NSDictionary class]]) {
        requestDict = @{};
    }

    NSDictionary *requestNativeUrlDict = wcpl_nativeUrlDictionaryFromRequestDictionary(requestDict);

    NSString *sendId = wcpl_stringForKeysInDictionary(requestDict, @[@"sendId", @"sendid", @"send_id"])
        ?: wcpl_stringForKeysInDictionary(responseDict, @[@"sendId", @"sendid", @"send_id"])
        ?: wcpl_stringForKeysInDictionary(requestNativeUrlDict, @[@"sendId", @"sendid", @"send_id"]);
    NSString *sign = wcpl_stringForKeysInDictionary(requestDict, @[@"sign"])
        ?: wcpl_stringForKeysInDictionary(responseDict, @[@"sign"])
        ?: wcpl_stringForKeysInDictionary(requestNativeUrlDict, @[@"sign"]);
    NSString *timingIdentifier = wcpl_stringForKeysInDictionary(requestDict, @[@"timingIdentifier", @"timing_identifier"])
        ?: wcpl_stringForKeysInDictionary(responseDict, @[@"timingIdentifier", @"timing_identifier"])
        ?: wcpl_stringForKeysInDictionary(requestNativeUrlDict, @[@"timingIdentifier", @"timing_identifier"]);

    NSInteger amount = 0;
    NSInteger totalAmount = 0;
    NSInteger receiveStatus = 0;
    NSInteger retCode = 0;

    BOOL hasHbStatus = NO;
    NSInteger hbStatus = wcpl_integerForKeysInDictionary(responseDict, @[@"hbStatus", @"hb_status"], &hasHbStatus);

    BOOL success = wcpl_hongbaoOpenLooksSuccessful(responseDict, res, &amount, &totalAmount, &receiveStatus, &retCode);

    if (!success) {
        int errorType = wcpl_intFromSelector(res, @selector(errorType));
        int platRet = wcpl_intFromSelector(res, @selector(platRet));
        WCPLLogDebug(@"红包打开回包: cmd=4 未成功 errorType=%d platRet=%d receiveStatus=%ld hasReceiveStatus=%d retCode=%ld hasRetCode=%d amount=%ld hasAmount=%d hbStatus=%ld hasHbStatus=%d sendId=%@ signLen=%lu timingLen=%lu reqKeys=%lu resKeys=%lu",
                     errorType,
                     platRet,
                     (long)receiveStatus,
                     (receiveStatus != 0),
                     (long)retCode,
                     (retCode != 0),
                     (long)amount,
                     (amount != 0),
                     (long)hbStatus,
                     hasHbStatus,
                     sendId ?: @"",
                     (unsigned long)sign.length,
                     (unsigned long)timingIdentifier.length,
                     (unsigned long)requestDict.count,
                     (unsigned long)responseDict.count);
        return;
    }

    NSString *session = wcpl_stringForKeysInDictionary(requestDict,
                                                       @[@"sessionUserName", @"sessionusername", @"session_user_name"]);
    NSString *sessionSource = @"request";
    session = wcpl_bestSessionCandidate(session, requestDict, responseDict, requestNativeUrlDict, req, &sessionSource);

    if (session.length == 0) {
        NSString *trackedSource = nil;
        session = wcpl_lookupTrackedOpenSession(sendId, sign, timingIdentifier, &trackedSource);
        if (session.length > 0) {
            sessionSource = trackedSource.length > 0 ? [NSString stringWithFormat:@"tracker:%@", trackedSource] : @"tracker";
        }
    }

    if (session.length == 0) {
        NSString *selfUserName = wcpl_currentSelfUserName();
        if (selfUserName.length > 0) {
            session = selfUserName;
            sessionSource = @"fallback:self";
            WCPLLogWarning(@"红包打开回包: 使用兜底 self 会话避免通知/回复丢失 sendId=%@ signLen=%lu timingLen=%lu",
                           sendId ?: @"",
                           (unsigned long)sign.length,
                           (unsigned long)timingIdentifier.length);
        }
    }

    if (session.length == 0) {
        WCPLLogDebug(@"红包打开回包: cmd=4 缺少 sessionUserName，跳过自动回复 sendId=%@ signLen=%lu timingLen=%lu reqKeys=%lu nativeKeys=%lu resKeys=%lu",
                     sendId ?: @"",
                     (unsigned long)sign.length,
                     (unsigned long)timingIdentifier.length,
                     (unsigned long)requestDict.count,
                     (unsigned long)requestNativeUrlDict.count,
                     (unsigned long)responseDict.count);
        return;
    }

    BOOL isGroup = ([session rangeOfString:@"@chatroom"].location != NSNotFound);
    WCPLLogDebug(@"红包打开回包: cmd=4 成功 isGroup=%d session=%@ source=%@ sendId=%@ signLen=%lu timingLen=%lu receiveStatus=%ld retCode=%ld amount=%ld",
                 isGroup,
                 session,
                 sessionSource,
                 sendId ?: @"",
                 (unsigned long)sign.length,
                 (unsigned long)timingIdentifier.length,
                 (long)receiveStatus,
                 (long)retCode,
                 (long)amount);
    [self wcpl_trySendAutoReplyForSession:session isGroup:isGroup];
    [self wcpl_trySendRedEnvelopNotifyForSession:session isGroup:isGroup amount:amount totalAmount:totalAmount];
}

%new
- (void)wcpl_trySendAutoReplyForSession:(NSString *)sessionUserName isGroup:(BOOL)isGroup {
    NSString *session = wcpl_normalizeSessionUserName(sessionUserName);
    if (session.length == 0) {
        return;
    }

    NSString *replyText = wcpl_replyTextForSession(session, isGroup);
    if (replyText.length == 0) {
        WCPLLogDebug(@"红包自动回复跳过: session=%@ isGroup=%d 原因=未配置文案或未命中名单规则", session, isGroup);
        return;
    }

    NSString *sessionCopy = [session copy];
    NSString *replyCopy = [replyText copy];
    dispatch_async(dispatch_get_main_queue(), ^{
        NSString *replyPreview = wcpl_sanitizeInlineText(replyCopy, 80) ?: @"";
        WCPLLogDebug(@"红包自动回复准备: session=%@ isGroup=%d textLen=%lu preview=%@",
                     sessionCopy,
                     isGroup,
                     (unsigned long)replyCopy.length,
                     replyPreview);

        BOOL sent = [self wcpl_sendTextMessage:replyCopy toSession:sessionCopy];
        if (!sent) {
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.35 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                BOOL retrySent = [self wcpl_sendTextMessage:replyCopy toSession:sessionCopy];
                WCPLLogDebug(@"红包自动回复重试: session=%@ isGroup=%d textLen=%lu sent=%d",
                             sessionCopy,
                             isGroup,
                             (unsigned long)replyCopy.length,
                             retrySent);
            });
        }
        WCPLLogDebug(@"红包自动回复: session=%@ isGroup=%d textLen=%lu preview=%@ sent=%d",
                     sessionCopy,
                     isGroup,
                     (unsigned long)replyCopy.length,
                     replyPreview,
                     sent);
    });
}

%new
- (void)wcpl_trySendRedEnvelopNotifyForSession:(NSString *)sessionUserName isGroup:(BOOL)isGroup amount:(NSInteger)amount totalAmount:(NSInteger)totalAmount {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSInteger target = config.redEnvelopNotifyTarget;
    if (target == WCPLRedEnvelopNotifyTargetDisabled) {
        return;
    }

    NSString *session = wcpl_normalizeSessionUserName(sessionUserName);
    if (session.length == 0) {
        return;
    }

    NSString *notifyReceiver = nil;
    if (target == WCPLRedEnvelopNotifyTargetSelf) {
        notifyReceiver = wcpl_currentSelfUserName();
    } else if (target == WCPLRedEnvelopNotifyTargetFileHelper) {
        notifyReceiver = kWCPLFileHelperUserName;
    }

    notifyReceiver = wcpl_normalizeSessionUserName(notifyReceiver);
    if (notifyReceiver.length == 0) {
        WCPLLogDebug(@"抢包通知跳过: 原因=目标用户为空 session=%@ target=%ld", session, (long)target);
        return;
    }

    NSString *message = wcpl_redEnvelopNotifyMessage(session, amount, totalAmount);
    if (isGroup) {
        message = [message stringByAppendingString:@"\n场景：群聊"];
    } else {
        message = [message stringByAppendingString:@"\n场景：私聊"];
    }

    NSString *sceneDisplay = wcpl_notifySceneDisplayText(session);
    NSString *messagePreview = wcpl_sanitizeInlineText(message, 120) ?: @"";
    WCPLLogDebug(@"抢包通知准备: sourceSession=%@ scene=%@ target=%ld receiver=%@ msgLen=%lu preview=%@",
                 session,
                 sceneDisplay ?: @"",
                 (long)target,
                 notifyReceiver,
                 (unsigned long)message.length,
                 messagePreview);

    NSString *sourceSessionCopy = [session copy];
    NSString *targetSessionCopy = [notifyReceiver copy];
    NSString *messageCopy = [message copy];
    NSString *sceneDisplayCopy = sceneDisplay.length > 0 ? [sceneDisplay copy] : @"";
    NSString *messagePreviewCopy = messagePreview.length > 0 ? [messagePreview copy] : @"";
    dispatch_async(dispatch_get_main_queue(), ^{
        BOOL sent = [self wcpl_sendTextMessage:messageCopy toSession:targetSessionCopy];
        NSString *actualTargetSession = targetSessionCopy;
        BOOL fallbackToFileHelper = NO;

        if (!sent && target == WCPLRedEnvelopNotifyTargetSelf) {
            BOOL fallbackSent = [self wcpl_sendTextMessage:messageCopy toSession:kWCPLFileHelperUserName];
            if (fallbackSent) {
                sent = YES;
                actualTargetSession = kWCPLFileHelperUserName;
                fallbackToFileHelper = YES;
            }
        }

        if (!sent) {
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.35 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                BOOL retrySent = [self wcpl_sendTextMessage:messageCopy toSession:targetSessionCopy];
                WCPLLogDebug(@"抢包通知重试: sourceSession=%@ targetSession=%@ target=%ld sent=%d",
                             sourceSessionCopy,
                             targetSessionCopy,
                             (long)target,
                             retrySent);
            });
        }

        WCPLLogDebug(@"抢包通知发送: sourceSession=%@ scene=%@ targetSession=%@ target=%ld amount=%ld total=%ld msgLen=%lu preview=%@ sent=%d fallbackFileHelper=%d",
                     sourceSessionCopy,
                     sceneDisplayCopy,
                     actualTargetSession,
                     (long)target,
                     (long)amount,
                     (long)totalAmount,
                     (unsigned long)messageCopy.length,
                     messagePreviewCopy,
                     sent,
                     fallbackToFileHelper);
    });
}

%new
- (BOOL)wcpl_sendTextMessage:(NSString *)content toSession:(NSString *)sessionUserName {
    if (![NSThread isMainThread]) {
        __block BOOL sentOnMain = NO;
        dispatch_sync(dispatch_get_main_queue(), ^{
            sentOnMain = [self wcpl_sendTextMessage:content toSession:sessionUserName];
        });
        return sentOnMain;
    }

    NSString *text = wcpl_trimString(content);
    NSString *session = wcpl_normalizeSessionUserName(sessionUserName);
    if (text.length == 0 || session.length == 0) {
        return NO;
    }

    NSString *selfUserName = wcpl_currentSelfUserName();
    if (selfUserName.length == 0) {
        WCPLLogDebug(@"红包自动回复失败: 无法获取 selfUserName session=%@", session);
        return NO;
    }

    Class msgWrapClass = objc_getClass("CMessageWrap");
    if (!msgWrapClass) {
        WCPLLogDebug(@"红包自动回复失败: CMessageWrap 类不可用");
        return NO;
    }

    id msgWrap = nil;
    if ([msgWrapClass instancesRespondToSelector:@selector(initWithMsgType:nsFromUsr:)]) {
        @try {
            msgWrap = [[msgWrapClass alloc] initWithMsgType:1 nsFromUsr:selfUserName];
        } @catch (__unused NSException *exception0) {
            msgWrap = nil;
        }
    }
    if (!msgWrap && [msgWrapClass instancesRespondToSelector:@selector(initWithMsgType:)]) {
        @try {
            msgWrap = [[msgWrapClass alloc] initWithMsgType:1];
        } @catch (__unused NSException *exception) {
            msgWrap = nil;
        }
    }
    if (!msgWrap) {
        @try {
            msgWrap = [[msgWrapClass alloc] init];
        } @catch (__unused NSException *exception2) {
            msgWrap = nil;
        }
    }
    if (!msgWrap) {
        return NO;
    }

    if ([msgWrap respondsToSelector:@selector(setM_uiMessageType:)]) {
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msgWrap, @selector(setM_uiMessageType:), 1);
    } else {
        @try {
            [msgWrap setValue:@(1) forKey:@"m_uiMessageType"];
        } @catch (__unused NSException *exception3) {
        }
    }

    if ([msgWrap respondsToSelector:@selector(setM_nsContent:)]) {
        ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, @selector(setM_nsContent:), text);
    } else {
        @try {
            [msgWrap setValue:text forKey:@"m_nsContent"];
        } @catch (__unused NSException *exception4) {
        }
    }

    if ([msgWrap respondsToSelector:@selector(setM_nsToUsr:)]) {
        ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, @selector(setM_nsToUsr:), session);
    } else {
        @try {
            [msgWrap setValue:session forKey:@"m_nsToUsr"];
        } @catch (__unused NSException *exception5) {
        }
    }

    if ([msgWrap respondsToSelector:@selector(setM_nsFromUsr:)]) {
        ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, @selector(setM_nsFromUsr:), selfUserName);
    } else {
        @try {
            [msgWrap setValue:selfUserName forKey:@"m_nsFromUsr"];
        } @catch (__unused NSException *exception6) {
        }
    }

    if ([msgWrap respondsToSelector:@selector(setM_nsPushContent:)]) {
        ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, @selector(setM_nsPushContent:), text);
    } else {
        @try {
            [msgWrap setValue:text forKey:@"m_nsPushContent"];
        } @catch (__unused NSException *exceptionPush) {
        }
    }

    unsigned int createTime = (unsigned int)[[NSDate date] timeIntervalSince1970];
    if ([msgWrap respondsToSelector:@selector(setM_uiCreateTime:)]) {
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msgWrap, @selector(setM_uiCreateTime:), createTime);
    } else {
        @try {
            [msgWrap setValue:@(createTime) forKey:@"m_uiCreateTime"];
        } @catch (__unused NSException *exceptionCreateTime) {
        }
    }

    if ([msgWrap respondsToSelector:@selector(setM_uiStatus:)]) {
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msgWrap, @selector(setM_uiStatus:), 0);
    } else {
        @try {
            [msgWrap setValue:@(0) forKey:@"m_uiStatus"];
        } @catch (__unused NSException *exceptionStatus) {
        }
    }

    if ([session rangeOfString:@"@chatroom"].location != NSNotFound) {
        if ([msgWrap respondsToSelector:@selector(setM_nsRealChatUsr:)]) {
            ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, @selector(setM_nsRealChatUsr:), selfUserName);
        } else {
            @try {
                [msgWrap setValue:selfUserName forKey:@"m_nsRealChatUsr"];
            } @catch (__unused NSException *exceptionRealChat) {
            }
        }
    }

    __block BOOL sent = NO;
    __block NSString *path = @"";

    id sendMessageMgr = WCPLGetService(objc_getClass("SendMessageMgr"));
    if (sendMessageMgr && [sendMessageMgr respondsToSelector:@selector(AddMsgToSendTable:MsgWrap:)]) {
        @try {
            ((void (*)(id, SEL, id, id))objc_msgSend)(sendMessageMgr,
                                                       @selector(AddMsgToSendTable:MsgWrap:),
                                                       session,
                                                       msgWrap);
            sent = YES;
            path = @"SendMessageMgr";
        } @catch (__unused NSException *exceptionSendMgr) {
            sent = NO;
            path = @"";
        }
    }

    CMessageMgr *msgMgr = nil;
    if (!sent) {
        msgMgr = WCPLGetService(objc_getClass("CMessageMgr"));
        if (msgMgr) {
            id bypSendMessageMgr = nil;
            if ([msgMgr respondsToSelector:@selector(m_bypSendMessageMgr)]) {
                @try {
                    bypSendMessageMgr = ((id (*)(id, SEL))objc_msgSend)(msgMgr, @selector(m_bypSendMessageMgr));
                } @catch (__unused NSException *exceptionBypGetter) {
                    bypSendMessageMgr = nil;
                }
            }
            if (!bypSendMessageMgr) {
                @try {
                    bypSendMessageMgr = [msgMgr valueForKey:@"m_bypSendMessageMgr"];
                } @catch (__unused NSException *exceptionBypKVC) {
                    bypSendMessageMgr = nil;
                }
            }

            if (bypSendMessageMgr && [bypSendMessageMgr respondsToSelector:@selector(StartSendMsg:)]) {
                @try {
                    ((void (*)(id, SEL, id))objc_msgSend)(bypSendMessageMgr, @selector(StartSendMsg:), msgWrap);
                    sent = YES;
                    path = @"BypSendMessageMgr";
                } @catch (__unused NSException *exceptionBypSend) {
                    sent = NO;
                }
            }
        }

        if (!sent && !msgMgr) {
            WCPLLogDebug(@"红包自动回复失败: CMessageMgr 不可用 session=%@", session);
            return NO;
        }
    }

    void (^sendBlock)(void) = ^{
        if ([msgMgr respondsToSelector:@selector(AddMsg:MsgWrap:)]) {
            @try {
                [msgMgr AddMsg:session MsgWrap:msgWrap];
                sent = YES;
                path = @"AddMsg";
                return;
            } @catch (__unused NSException *exception) {
            }
        }

        if ([msgMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:)]) {
            @try {
                [msgMgr AddLocalMsg:session MsgWrap:msgWrap fixTime:YES NewMsgArriveNotify:YES];
                sent = YES;
                path = @"AddLocalMsgFixTime";
                return;
            } @catch (__unused NSException *exception) {
            }
        }

        if ([msgMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:)]) {
            @try {
                [msgMgr AddLocalMsg:session MsgWrap:msgWrap];
                sent = YES;
                path = @"AddLocalMsg";
                return;
            } @catch (__unused NSException *exception) {
            }
        }
    };

    if (!sent) {
        sendBlock();
    }

    WCPLLogDebug(@"红包自动回复发送: session=%@ sent=%d path=%@ mainThread=%d",
                 session,
                 sent,
                 path,
                 [NSThread isMainThread]);
    return sent;
}

%end

%hook WCRedEnvelopesNetworkHelper

- (void)MessageReturnOnHongbao:(id)arg1 Event:(unsigned int)arg2 {
    WCPLLogDebug(@"HBNet回包: selector=%@ event=%u arg=%@",
                 NSStringFromSelector(_cmd),
                 arg2,
                 arg1 ? NSStringFromClass([arg1 class]) : @"");
    %orig;
}

- (void)MessageReturnOnOpenIMHongbao:(id)arg1 Event:(unsigned int)arg2 {
    WCPLLogDebug(@"HBNet(OpenIM)回包: selector=%@ event=%u arg=%@",
                 NSStringFromSelector(_cmd),
                 arg2,
                 arg1 ? NSStringFromClass([arg1 class]) : @"");
    %orig;
}

- (void)MessageReturnOnLiveStreamHongbao:(id)arg1 Event:(unsigned int)arg2 {
    WCPLLogDebug(@"HBNet(LiveStream)回包: selector=%@ event=%u arg=%@",
                 NSStringFromSelector(_cmd),
                 arg2,
                 arg1 ? NSStringFromClass([arg1 class]) : @"");
    %orig;
}

%end

%hook CMessageMgr

- (void)AsyncOnAddMsg:(NSString *)msg MsgWrap:(CMessageWrap *)wrap {
    if ([WCPLFuncService shouldIgnoreMessageWrap:wrap]) {
        return;
    }

    %orig;

    switch(wrap.m_uiMessageType) {
        case 49: { // AppNode
            NSString *nativeUrl = [[wrap m_oWCPayInfoItem] m_c2cNativeUrl];
            NSString *prefix = @"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?";
            if (nativeUrl.length == 0 || ![nativeUrl hasPrefix:prefix]) { break; }

            WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
            if (!config.autoReceiveEnable) { break; }

            id contactManager = WCPLGetService(objc_getClass("CContactMgr"));
            id selfContact = nil;
            if (contactManager && [contactManager respondsToSelector:@selector(getSelfContact)]) {
                selfContact = [contactManager getSelfContact];
            }
            NSString *selfUserName = wcpl_safeUserNameFromObject(selfContact) ?: @"";

            BOOL isSender = (selfUserName.length > 0 && [wrap.m_nsFromUsr isEqualToString:selfUserName]);
            BOOL isGroupReceiver = ([wrap.m_nsFromUsr rangeOfString:@"@chatroom"].location != NSNotFound);
            BOOL isGroupSender = (isSender && [wrap.m_nsToUsr rangeOfString:@"@chatroom"].location != NSNotFound);
            BOOL isGroup = (isGroupReceiver || isGroupSender);

            if (isGroup) {
                if (!config.groupRedEnvelopEnable) { break; }
                if (isGroupSender && !config.receiveSelfRedEnvelop) { break; }

                NSString *groupUserName = isGroupReceiver ? wrap.m_nsFromUsr : wrap.m_nsToUsr;
                if (groupUserName.length == 0) { break; }

                if (config.groupRedEnvelopScope == 1) { // 仅白名单
                    BOOL inWhiteList = wcpl_userNameInList(groupUserName, config.allowedGroupList);
                    WCPLLogDebug(@"群红包预检: session=%@ scope=白名单 wl=%lu allow=%d",
                                 groupUserName,
                                 (unsigned long)config.allowedGroupList.count,
                                 inWhiteList);
                    if (!inWhiteList) { break; }
                } else if (config.groupRedEnvelopScope == 2) { // 排除黑名单
                    BOOL inDenyList = wcpl_userNameInList(groupUserName, config.blockedGroupList);
                    WCPLLogDebug(@"群红包预检: session=%@ scope=黑名单 deny=%lu allow=%d",
                                 groupUserName,
                                 (unsigned long)config.blockedGroupList.count,
                                 !inDenyList);
                    if (inDenyList) { break; }
                } else {
                    WCPLLogDebug(@"群红包预检: session=%@ scope=全部", groupUserName);
                }
            } else {
                // 私聊红包：仅接收方处理
                if (!config.privateRedEnvelopEnable) { break; }
                if (isSender) { break; }
            }

            NSDictionary *nativeUrlDict = [%c(WCBizUtil) dictionaryWithDecodedComponets:[nativeUrl substringFromIndex:prefix.length] separator:@"&"];
            if (nativeUrlDict.count == 0) {
                nativeUrlDict = wcpl_dictionaryFromQueryString([nativeUrl substringFromIndex:prefix.length]);
            }
            if (nativeUrlDict.count == 0) {
                NSRange qmark = [nativeUrl rangeOfString:@"?"];
                if (qmark.location != NSNotFound && qmark.location + 1 < nativeUrl.length) {
                    nativeUrlDict = wcpl_dictionaryFromQueryString([nativeUrl substringFromIndex:qmark.location + 1]);
                }
            }
            if (nativeUrlDict.count == 0) {
                WCPLLogDebug(@"红包解析失败: nativeUrlDict 为空 url=%@", wcpl_sanitizeInlineText(nativeUrl, 160));
                break;
            }

            NSString *msgType = wcpl_stringForKeyInDictionary(nativeUrlDict, @"msgtype") ?: wcpl_stringForKeyInDictionary(nativeUrlDict, @"msgType");
            NSString *sendId = wcpl_stringForKeyInDictionary(nativeUrlDict, @"sendid") ?: wcpl_stringForKeyInDictionary(nativeUrlDict, @"sendId");
            NSString *channelId = wcpl_stringForKeyInDictionary(nativeUrlDict, @"channelid") ?: wcpl_stringForKeyInDictionary(nativeUrlDict, @"channelId");
            NSString *sign = wcpl_stringForKeyInDictionary(nativeUrlDict, @"sign");
            if (msgType.length == 0 || sendId.length == 0 || channelId.length == 0) {
                WCPLLogDebug(@"红包解析失败: msgType=%@ sendId=%@ channelId=%@ url=%@",
                             msgType ?: @"",
                             sendId ?: @"",
                             channelId ?: @"",
                             wcpl_sanitizeInlineText(nativeUrl, 160));
                break;
            }

            // 获取服务端验证参数
            NSMutableDictionary *params = [@{} mutableCopy];
            params[@"agreeDuty"] = @"0";
            params[@"channelId"] = channelId;
            params[@"inWay"] = @"0";
            params[@"msgType"] = msgType;
            params[@"nativeUrl"] = nativeUrl;
            params[@"sendId"] = sendId;

            WCRedEnvelopesLogicMgr *logicMgr = WCPLGetService(objc_getClass("WCRedEnvelopesLogicMgr"));
            BOOL canQuery = (logicMgr && [logicMgr respondsToSelector:@selector(ReceiverQueryRedEnvelopesRequest:)]);
            BOOL canOpen = (logicMgr && [logicMgr respondsToSelector:@selector(OpenRedEnvelopesRequest:)]);
            WCPLLogDebug(@"红包逻辑管理器: mgr=%p class=%@ canQuery=%d canOpen=%d",
                         logicMgr,
                         logicMgr ? NSStringFromClass([logicMgr class]) : @"",
                         canQuery,
                         canOpen);
            if (canQuery) {
                [logicMgr ReceiverQueryRedEnvelopesRequest:params];
            } else {
                WCPLLogDebug(@"红包查询跳过: WCRedEnvelopesLogicMgr 不可用");
            }
            NSString *sessionForLog = isGroupSender ? wrap.m_nsToUsr : wrap.m_nsFromUsr;
            WCPLLogDebug(@"红包查询请求: session=%@ sendId=%@ signLen=%lu", sessionForLog ?: @"", sendId, (unsigned long)sign.length);

            // 储存参数
            WeChatRedEnvelopParam *mgrParams = [[WeChatRedEnvelopParam alloc] init];
            mgrParams.msgType = msgType;
            mgrParams.sendId = sendId;
            mgrParams.channelId = channelId;
            if (selfContact) {
                if ([selfContact respondsToSelector:@selector(getContactDisplayName)]) {
                    @try {
                        id value = ((id (*)(id, SEL))objc_msgSend)(selfContact, @selector(getContactDisplayName));
                        mgrParams.nickName = wcpl_trimString(value);
                    } @catch (__unused NSException *exception) {
                    }
                }
                if ([selfContact respondsToSelector:@selector(m_nsHeadImgUrl)]) {
                    @try {
                        id value = ((id (*)(id, SEL))objc_msgSend)(selfContact, @selector(m_nsHeadImgUrl));
                        mgrParams.headImg = wcpl_trimString(value);
                    } @catch (__unused NSException *exception) {
                    }
                }
            }
            mgrParams.nativeUrl = nativeUrl;
            mgrParams.sessionUserName = isGroupSender ? wrap.m_nsToUsr : wrap.m_nsFromUsr;
            mgrParams.sign = sign;
            mgrParams.isGroupSender = isGroupSender;

            [[WCPLRedEnvelopParamQueue sharedQueue] enqueue:mgrParams];
            WCPLLogDebug(@"红包入队: session=%@ sendId=%@ signLen=%lu",
                         mgrParams.sessionUserName ?: @"",
                         sendId,
                         (unsigned long)sign.length);

            break;
        }
        default:
            break;
    }
}

%end
