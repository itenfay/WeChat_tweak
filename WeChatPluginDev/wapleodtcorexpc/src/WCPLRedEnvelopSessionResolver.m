#import "WCPLRedEnvelopSessionResolver.h"

#import "HongBaoReq.h"
#import "WCPLContactAdapter.h"
#import "WCPLDispatchUtils.h"
#import "WCPLLogger.h"
#import "WCPLPureHelpers.h"
#import "WCPLUserNameHelpers.h"
#import <objc/message.h>
#import <objc/runtime.h>

static NSArray<NSString *> *wcpl_redEnvelopSessionDictionaryKeys(void) {
    static NSArray<NSString *> *keys = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        keys = @[
            @"sessionUserName", @"sessionusername", @"session_user_name",
            @"chatroomname", @"chatRoomName", @"chat_room_name",
            @"talker", @"fromUsername", @"fromUserName", @"from_username",
            @"toUsername", @"toUserName", @"to_username"
        ];
    });
    return keys;
}

NSString *WCPLRedEnvelopNormalizeSessionUserName(id text) {
    NSString *session = WCPLTrimText(text);
    if (session.length == 0) {
        return nil;
    }

    for (NSInteger pass = 0; pass < 2; pass++) {
        if ([session rangeOfString:@"%"].location == NSNotFound) {
            break;
        }

        NSString *decoded = [session stringByRemovingPercentEncoding];
        NSString *normalized = WCPLTrimText(decoded);
        if (normalized.length == 0 || [normalized isEqualToString:session]) {
            break;
        }
        session = normalized;
    }

    return session;
}

NSString *WCPLRedEnvelopTrackToken(NSString *sendId, NSString *sign) {
    NSString *normalizedSendId = WCPLTrimText(sendId);
    if (normalizedSendId.length > 0) {
        return [NSString stringWithFormat:@"sendId:%@", normalizedSendId];
    }

    NSString *normalizedSign = WCPLTrimText(sign);
    if (normalizedSign.length > 0) {
        return [NSString stringWithFormat:@"sign:%@", normalizedSign];
    }

    return nil;
}

static NSString *wcpl_redEnvelopStringForKeysInDictionary(NSDictionary *dict,
                                                          NSArray<NSString *> *keys) {
    if (![dict isKindOfClass:[NSDictionary class]]) {
        return nil;
    }

    for (NSString *key in keys) {
        id value = dict[key];
        NSString *text = WCPLTrimText(value);
        if (text.length > 0) {
            return text;
        }
    }

    return nil;
}

static BOOL wcpl_redEnvelopRunOnMainSync(NSTimeInterval timeout,
                                         NSString *warningText,
                                         dispatch_block_t block) {
    if (!block) {
        return NO;
    }

    if ([NSThread isMainThread]) {
        block();
        return YES;
    }

    BOOL didFinish = WCPLDispatchMainSyncWithTimeout(timeout, block);
    if (!didFinish && warningText.length > 0) {
        WCPLLogWarning(@"%@", warningText);
    }
    return didFinish;
}

static NSString *wcpl_redEnvelopGuessSessionFromRequestObject(HongBaoReq *req) {
    if (!req) {
        return nil;
    }

    for (NSString *key in wcpl_redEnvelopSessionDictionaryKeys()) {
        @try {
            id value = [req valueForKey:key];
            NSString *session = WCPLRedEnvelopNormalizeSessionUserName(value);
            if (session.length > 0) {
                return session;
            }
        } @catch (__unused NSException *exception) {
            WCPLCatchLog(exception);
        }
    }

    return nil;
}

NSString *WCPLRedEnvelopSessionFromDictionary(NSDictionary *dict) {
    if (![dict isKindOfClass:[NSDictionary class]] || dict.count == 0) {
        return nil;
    }

    NSString *session = wcpl_redEnvelopStringForKeysInDictionary(dict,
                                                                 wcpl_redEnvelopSessionDictionaryKeys());
    return WCPLRedEnvelopNormalizeSessionUserName(session);
}

NSString *WCPLBestRedEnvelopSessionCandidate(NSString *primarySession,
                                             NSDictionary *requestDict,
                                             NSDictionary *responseDict,
                                             NSDictionary *requestNativeUrlDict,
                                             HongBaoReq *req,
                                             NSString **sourceOut) {
    NSString *source = @"request";
    NSArray<NSDictionary *> *dictionaries = @[
        requestDict ?: @{},
        requestNativeUrlDict ?: @{},
        responseDict ?: @{}
    ];
    NSArray<NSString *> *sources = @[@"request.dict", @"request.nativeUrl", @"response"];

    NSString *session = WCPLRedEnvelopNormalizeSessionUserName(primarySession);
    if (session.length > 0) {
        goto done;
    }

    for (NSUInteger i = 0; i < dictionaries.count; i++) {
        session = WCPLRedEnvelopSessionFromDictionary(dictionaries[i]);
        if (session.length > 0) {
            source = sources[i];
            goto done;
        }
    }

    session = wcpl_redEnvelopGuessSessionFromRequestObject(req);
    if (session.length > 0) {
        source = @"request.kvc";
    }

done:
    if (sourceOut) {
        *sourceOut = source;
    }
    return session;
}

NSString *WCPLRedEnvelopSafeUserNameFromObject(id obj) {
    return WCPLContactAdapterSafeUserName(obj);
}

BOOL WCPLRedEnvelopUserNameInList(NSString *userName, NSArray *list) {
    NSString *target = WCPLRedEnvelopNormalizeSessionUserName(userName);
    if (target.length == 0 || ![list isKindOfClass:[NSArray class]] || list.count == 0) {
        return NO;
    }

    for (id item in list) {
        NSString *candidate = WCPLRedEnvelopNormalizeSessionUserName(item);
        if (candidate.length > 0 && [candidate isEqualToString:target]) {
            return YES;
        }
    }

    return NO;
}

static id wcpl_redEnvelopContactForUserName(NSString *userName) {
    NSString *target = WCPLRedEnvelopNormalizeSessionUserName(userName);
    if (target.length == 0) {
        return nil;
    }

    __block id contact = nil;
    NSString *warning = [NSString stringWithFormat:@"联系人解析超时: user=%@", target];
    BOOL didFinish = wcpl_redEnvelopRunOnMainSync(2.0, warning, ^{
        contact = WCPLContactAdapterFindContactByUserName(target);
    });
    return didFinish ? contact : nil;
}

static NSString *wcpl_redEnvelopNonEmptyDisplayNameValue(id value) {
    NSString *displayName = WCPLTrimText(value);
    if (displayName.length == 0) {
        return nil;
    }

    displayName = [[displayName stringByReplacingOccurrencesOfString:@"\r" withString:@" "]
                   stringByReplacingOccurrencesOfString:@"\n" withString:@" "];
    return WCPLTrimText(displayName);
}

static BOOL wcpl_redEnvelopIsRawGroupSessionName(NSString *displayName,
                                                 NSString *sessionUserName) {
    NSString *name = WCPLRedEnvelopNormalizeSessionUserName(displayName);
    NSString *session = WCPLRedEnvelopNormalizeSessionUserName(sessionUserName);
    if (name.length == 0 || session.length == 0) {
        return NO;
    }
    if ([name isEqualToString:session] || WCPLIsChatRoomName(name)) {
        return YES;
    }

    NSString *groupId = [session stringByReplacingOccurrencesOfString:@"@chatroom" withString:@""];
    return (groupId.length > 0 && [name isEqualToString:groupId]);
}

static NSString *wcpl_redEnvelopDisplayNameViaBizUtil(NSString *userName) {
    NSString *target = WCPLRedEnvelopNormalizeSessionUserName(userName);
    Class bizUtilClass = objc_getClass("WCBizUtil");
    if (!(target.length > 0 && bizUtilClass &&
          [bizUtilClass respondsToSelector:@selector(getContactDisplayName:)])) {
        return nil;
    }

    @try {
        id value = ((id (*)(id, SEL, id))objc_msgSend)(bizUtilClass,
                                                       @selector(getContactDisplayName:),
                                                       target);
        return wcpl_redEnvelopNonEmptyDisplayNameValue(value);
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static NSString *wcpl_redEnvelopGroupNameFromChatRoomDataObject(id chatRoomData) {
    if (!chatRoomData) {
        return nil;
    }

    NSArray<NSString *> *keys = @[@"roomName", @"chatroomName", @"m_nsNickName", @"m_nsChatRoomName", @"topic", @"title", @"name"];
    for (NSString *key in keys) {
        SEL selector = NSSelectorFromString(key);
        if (selector && [chatRoomData respondsToSelector:selector]) {
            @try {
                id value = ((id (*)(id, SEL))objc_msgSend)(chatRoomData, selector);
                NSString *displayName = wcpl_redEnvelopNonEmptyDisplayNameValue(value);
                if (displayName.length > 0) {
                    return displayName;
                }
            } @catch (__unused NSException *exception) {
                WCPLCatchLog(exception);
            }
        }

        @try {
            id value = [chatRoomData valueForKey:key];
            NSString *displayName = wcpl_redEnvelopNonEmptyDisplayNameValue(value);
            if (displayName.length > 0) {
                return displayName;
            }
        } @catch (__unused NSException *exception) {
            WCPLCatchLog(exception);
        }
    }

    return nil;
}

static NSString *wcpl_redEnvelopGroupDisplayNameFromContact(id contact,
                                                            NSString *sessionUserName) {
    NSString *session = WCPLRedEnvelopNormalizeSessionUserName(sessionUserName);
    if (!(contact && session.length > 0 && WCPLIsChatRoomName(session))) {
        return nil;
    }

    id chatRoomData = nil;
    if ([contact respondsToSelector:@selector(m_ChatRoomData)]) {
        @try {
            chatRoomData = ((id (*)(id, SEL))objc_msgSend)(contact, @selector(m_ChatRoomData));
        } @catch (__unused NSException *exception) {
            chatRoomData = nil;
        }
    }
    if (!chatRoomData) {
        @try {
            chatRoomData = [contact valueForKey:@"m_ChatRoomData"];
        } @catch (__unused NSException *exception) {
            chatRoomData = nil;
        }
    }

    NSString *displayName = wcpl_redEnvelopGroupNameFromChatRoomDataObject(chatRoomData);
    if (displayName.length > 0 && !wcpl_redEnvelopIsRawGroupSessionName(displayName, session)) {
        return displayName;
    }

    Class contactClass = objc_getClass("CContact");
    if (contactClass && [contactClass respondsToSelector:@selector(genChatRoomName:)]) {
        @try {
            id value = ((id (*)(id, SEL, id))objc_msgSend)(contactClass,
                                                           @selector(genChatRoomName:),
                                                           contact);
            displayName = wcpl_redEnvelopNonEmptyDisplayNameValue(value);
        } @catch (__unused NSException *exception) {
            WCPLCatchLog(exception);
        }
    }
    if (displayName.length > 0 && !wcpl_redEnvelopIsRawGroupSessionName(displayName, session)) {
        return displayName;
    }

    displayName = wcpl_redEnvelopDisplayNameViaBizUtil(session);
    return (wcpl_redEnvelopIsRawGroupSessionName(displayName, session) ? nil : displayName);
}

static NSString *wcpl_redEnvelopContactDisplayName(id contact) {
    if (!contact) {
        return nil;
    }

    NSString *rawUserName = WCPLRedEnvelopSafeUserNameFromObject(contact);
    BOOL isGroupContact = WCPLIsChatRoomName(rawUserName);
    NSString *displayName = WCPLContactAdapterDisplayNameForContact(contact, rawUserName);

    if (isGroupContact && wcpl_redEnvelopIsRawGroupSessionName(displayName, rawUserName)) {
        displayName = nil;
    }
    if (displayName.length == 0 && isGroupContact) {
        displayName = wcpl_redEnvelopGroupDisplayNameFromContact(contact, rawUserName);
    }
    return displayName;
}

static NSString *wcpl_redEnvelopDisplayNameForUserName(NSString *userName) {
    NSString *target = WCPLRedEnvelopNormalizeSessionUserName(userName);
    if (target.length == 0) {
        return nil;
    }
    if (WCPLIsFileHelperUserName(target)) {
        return @"文件传输助手";
    }

    BOOL isGroup = WCPLIsChatRoomName(target);
    id contact = wcpl_redEnvelopContactForUserName(target);
    NSString *displayName = wcpl_redEnvelopContactDisplayName(contact);
    if (isGroup && wcpl_redEnvelopIsRawGroupSessionName(displayName, target)) {
        displayName = nil;
    }
    if (displayName.length > 0) {
        return displayName;
    }

    NSString *bizDisplayName = wcpl_redEnvelopDisplayNameViaBizUtil(target);
    if (!(bizDisplayName.length > 0 && (!isGroup ||
          !wcpl_redEnvelopIsRawGroupSessionName(bizDisplayName, target)))) {
        return nil;
    }
    if (isGroup) {
        WCPLLogDebug(@"群聊名称解析兜底: session=%@ source=WCBizUtil name=%@", target, bizDisplayName);
    }
    return bizDisplayName;
}

NSString *WCPLRedEnvelopNotifySceneDisplayText(NSString *sessionUserName) {
    NSString *session = WCPLRedEnvelopNormalizeSessionUserName(sessionUserName);
    if (session.length == 0) {
        return @"当前会话";
    }

    BOOL isGroup = WCPLIsChatRoomName(session);
    NSString *displayName = wcpl_redEnvelopDisplayNameForUserName(session);
    if (isGroup) {
        if (displayName.length > 0 &&
            !wcpl_redEnvelopIsRawGroupSessionName(displayName, session)) {
            return [NSString stringWithFormat:@"群聊(%@)", displayName];
        }
        WCPLLogDebug(@"群聊名称解析失败: session=%@ display=%@", session, displayName ?: @"");
        return @"群聊(未命名群)";
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

NSString *WCPLRedEnvelopCurrentSelfUserName(void) {
    __block NSString *selfUserName = nil;
    BOOL didFinish = wcpl_redEnvelopRunOnMainSync(2.0, @"获取 selfUserName 超时，已放弃", ^{
        selfUserName = [WCPLContactAdapterCurrentSelfUserName() copy];
    });
    return didFinish ? selfUserName : nil;
}
