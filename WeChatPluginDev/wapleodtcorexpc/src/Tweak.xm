#import "WeChatRedEnvelop.h"
#import "WeChatRedEnvelopParam.h"
#import "WCPLSettingViewController.h"
#import "WCPLReceiveRedEnvelopOperation.h"
#import "WCPLRedEnvelopTaskManager.h"
#import "WCPLRedEnvelopConfig.h"
#import "WCPLRedEnvelopParamQueue.h"
#import "WCPLNewFuncAddition.h"
#import "WCPLFuncService.h"
#import "WCPLAVManager.h"
#import "WCPLMessageReplyManager.h"
#import "WCHookSwipeUtilities.h"
#import "WCHookMessageNavigator.h"
#import "WCPLCrashReporter.h"
#import "RichTextView.h"
#import <objc/runtime.h>
#import <objc/message.h>

// 复读按钮入口节流：避免长文本 layoutSubviews 高频触发导致重复创建
static const NSTimeInterval kWCPLRepeatButtonThrottleInterval = 0.05;
static char kWCPLRepeatButtonLastCallKey;

static BOOL wcpl_shouldThrottleRepeatButton(id cellView) {
    if (!cellView) return YES;
    NSNumber *last = objc_getAssociatedObject(cellView, &kWCPLRepeatButtonLastCallKey);
    NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
    if (last && (now - last.doubleValue) < kWCPLRepeatButtonThrottleInterval) {
        return YES;
    }
    objc_setAssociatedObject(cellView, &kWCPLRepeatButtonLastCallKey, @(now), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return NO;
}

@interface TextMessageCellView (WCPLLocalReplace)
- (void)wcpl_applyLocalReplaceIfNeeded;
- (void)wcpl_handleLocalReplaceMenuItem:(id)sender;
@end

@interface MMMenuItem : NSObject
- (instancetype)initWithTitle:(id)title target:(id)target action:(SEL)action;
- (SEL)action;
@end

// ==================== 插件注册 ====================
static BOOL didRegisterWCPLPlugin = NO;

// ==================== 防撤回辅助方法 ====================

static NSString *wcpl_trimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return nil;
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *wcpl_extractBetweenTokens(NSString *text, NSString *startToken, NSString *endToken) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return nil;
    if (startToken.length == 0 || endToken.length == 0) return nil;

    NSRange startRange = [text rangeOfString:startToken];
    if (startRange.location == NSNotFound) return nil;

    NSUInteger searchStart = startRange.location + startRange.length;
    if (searchStart >= text.length) return nil;

    NSRange endRange = [text rangeOfString:endToken options:0 range:NSMakeRange(searchStart, text.length - searchStart)];
    if (endRange.location == NSNotFound) return nil;
    if (endRange.location < searchStart) return nil;

    NSRange valueRange = NSMakeRange(searchStart, endRange.location - searchStart);
    if (valueRange.location == NSNotFound || NSMaxRange(valueRange) > text.length) return nil;

    NSString *value = [text substringWithRange:valueRange];
    return wcpl_trimString(value);
}

static NSString *wcpl_extractXmlTagValue(NSString *xml, NSString *tagName) {
    if (![xml isKindOfClass:[NSString class]] || xml.length == 0) return nil;
    if (![tagName isKindOfClass:[NSString class]] || tagName.length == 0) return nil;

    NSString *startToken = [NSString stringWithFormat:@"<%@>", tagName];
    NSString *endToken = [NSString stringWithFormat:@"</%@>", tagName];
    return wcpl_extractBetweenTokens(xml, startToken, endToken);
}

static long long wcpl_extractLongLongFromXmlTag(NSString *xml, NSString *tagName) {
    NSString *value = wcpl_extractXmlTagValue(xml, tagName);
    if (value.length == 0) return 0;

    NSScanner *scanner = [NSScanner scannerWithString:value];
    long long result = 0;
    if (![scanner scanLongLong:&result]) return 0;
    return result;
}

static NSString *wcpl_stripCDATAIfNeeded(NSString *text) {
    NSString *cdataValue = wcpl_extractBetweenTokens(text, @"<![CDATA[", @"]]>");
    return cdataValue ?: wcpl_trimString(text);
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

static id wcpl_getMessageMgr(void) {
    Class serviceCenterClass = objc_getClass("MMServiceCenter");
    if (!serviceCenterClass || ![serviceCenterClass respondsToSelector:@selector(defaultCenter)]) {
        return nil;
    }
    id center = [serviceCenterClass defaultCenter];
    if (!center || ![center respondsToSelector:@selector(getService:)]) {
        return nil;
    }
    return [center getService:objc_getClass("CMessageMgr")];
}

static CMessageWrap *wcpl_revokeMsgWrapFromObject(id obj) {
    if (!obj) return nil;
    if ([obj isKindOfClass:%c(CMessageWrap)]) return (CMessageWrap *)obj;
    if ([obj respondsToSelector:@selector(msgWrap)]) {
        @try {
            id wrap = [obj performSelector:@selector(msgWrap)];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) {
        }
    }
    return nil;
}

static NSString *wcpl_revokeChatNameFromObject(id obj) {
    if (!obj) return nil;
    if ([obj respondsToSelector:@selector(nsChatName)]) {
        @try {
            id chatName = [obj performSelector:@selector(nsChatName)];
            if ([chatName isKindOfClass:[NSString class]]) {
                return wcpl_trimString(chatName);
            }
        } @catch (__unused NSException *exception) {
        }
    }
    return nil;
}

static BOOL wcpl_isSelfRevokeMessage(CMessageWrap *msgWrap) {
    if (!msgWrap) return NO;
    @try {
        return [%c(CMessageWrap) isSenderFromMsgWrap:msgWrap];
    } @catch (__unused NSException *exception) {
        return NO;
    }
}

// ==================== 本地文本替换（仅显示） ====================
static const void *kWCPLLocalReplaceMapKey = &kWCPLLocalReplaceMapKey;
static const void *kWCPLLocalReplaceOriginKey = &kWCPLLocalReplaceOriginKey;
static const void *kWCPLLocalReplaceLayoutingKey = &kWCPLLocalReplaceLayoutingKey;

static UIImage *wcpl_clownMenuIconImage(void) {
    static UIImage *icon = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSString *svg =
            @"<svg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 24 24'>"
            "<circle cx='12' cy='13' r='7' fill='#FFE0B2' stroke='#222222' stroke-width='1.2'/>"
            "<circle cx='9' cy='12' r='1' fill='#222222'/>"
            "<circle cx='15' cy='12' r='1' fill='#222222'/>"
            "<circle cx='12' cy='14' r='1.3' fill='#E53935' stroke='#222222' stroke-width='0.6'/>"
            "<path d='M8 16c1.2 1.6 2.6 2.4 4 2.4s2.8-.8 4-2.4' fill='none' stroke='#222222' stroke-width='1.2' stroke-linecap='round'/>"
            "<circle cx='5.6' cy='13' r='1.4' fill='#90CAF9' stroke='#222222' stroke-width='0.6'/>"
            "<circle cx='18.4' cy='13' r='1.4' fill='#90CAF9' stroke='#222222' stroke-width='0.6'/>"
            "</svg>";
        NSData *data = [svg dataUsingEncoding:NSUTF8StringEncoding];
        id image = nil;
        Class themeProxyClass = objc_getClass("WAThemeProxy");
        SEL svgFromDataSel = @selector(svgImageFromData:);
        if (themeProxyClass && [themeProxyClass respondsToSelector:svgFromDataSel]) {
            @try {
                image = ((id (*)(id, SEL, id))objc_msgSend)(themeProxyClass, svgFromDataSel, data);
            } @catch (__unused NSException *exception) {
                image = nil;
            }
        }
        if ([image isKindOfClass:[UIImage class]]) {
            icon = (UIImage *)image;
        }
    });
    return icon;
}

static NSMutableDictionary<NSString *, NSString *> *wcpl_localReplaceMapForController(id controller, BOOL createIfNeeded) {
    if (!controller) return nil;
    NSMutableDictionary *map = objc_getAssociatedObject(controller, kWCPLLocalReplaceMapKey);
    if (!map && createIfNeeded) {
        map = [NSMutableDictionary dictionary];
        objc_setAssociatedObject(controller, kWCPLLocalReplaceMapKey, map, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return map;
}

static NSString *wcpl_messageKey(CMessageWrap *msgWrap) {
    if (!msgWrap) return nil;
    NSString *fromUser = msgWrap.m_nsFromUsr ?: @"";
    NSString *toUser = msgWrap.m_nsToUsr ?: @"";
    unsigned int localId = msgWrap.m_uiMesLocalID;
    long long svrId = msgWrap.m_n64MesSvrID;
    if (localId == 0 && svrId == 0) {
        return [NSString stringWithFormat:@"%@|%@|%p", fromUser, toUser, msgWrap];
    }
    return [NSString stringWithFormat:@"%@|%@|%u|%lld", fromUser, toUser, localId, svrId];
}

static BOOL wcpl_isPlainTextMessage(CMessageWrap *msgWrap) {
    return (msgWrap && msgWrap.m_uiMessageType == 1);
}

static CMessageWrap *wcpl_messageWrapFromCell(id cell) {
    if (!cell) return nil;
    if ([cell respondsToSelector:@selector(getCurrentMessageWrap)]) {
        @try {
            id wrap = [cell getCurrentMessageWrap];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) {
        }
    }
    if ([cell respondsToSelector:@selector(getMediaWrap)]) {
        @try {
            id wrap = [cell getMediaWrap];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) {
        }
    }
    if ([cell respondsToSelector:@selector(viewModel)]) {
        id viewModel = [cell viewModel];
        if ([viewModel respondsToSelector:@selector(messageWrap)]) {
            @try {
                return [viewModel messageWrap];
            } @catch (__unused NSException *exception) {
            }
        }
        if ([viewModel respondsToSelector:@selector(msgWrap)]) {
            @try {
                id wrap = ((id (*)(id, SEL))objc_msgSend)(viewModel, @selector(msgWrap));
                if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                    return (CMessageWrap *)wrap;
                }
            } @catch (__unused NSException *exception) {
            }
        }
        @try {
            id wrap = [viewModel valueForKey:@"messageWrap"];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) {
        }
        @try {
            id wrap = [viewModel valueForKey:@"msgWrap"];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) {
        }
    }
    return nil;
}

static void wcpl_setLocalReplaceText(id controller, CMessageWrap *msgWrap, NSString *text) {
    if (!controller || !msgWrap) return;
    NSString *key = wcpl_messageKey(msgWrap);
    if (key.length == 0) return;
    NSMutableDictionary *map = wcpl_localReplaceMapForController(controller, YES);
    if (!map) return;
    if (text.length > 0) {
        map[key] = text;
    } else {
        [map removeObjectForKey:key];
    }
}

static NSString *wcpl_localReplaceText(id controller, CMessageWrap *msgWrap) {
    if (!controller || !msgWrap) return nil;
    NSString *key = wcpl_messageKey(msgWrap);
    if (key.length == 0) return nil;
    NSDictionary *map = wcpl_localReplaceMapForController(controller, NO);
    return map[key];
}

static NSString *wcpl_originalContentForMessageWrap(CMessageWrap *msgWrap) {
    if (!msgWrap) return nil;
    id stored = objc_getAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey);
    return [stored isKindOfClass:[NSString class]] ? (NSString *)stored : nil;
}

static BOOL wcpl_syncLocalReplaceContent(id controller, CMessageWrap *msgWrap) {
    if (!controller || !msgWrap) return NO;
    if (!wcpl_isPlainTextMessage(msgWrap)) return NO;
    NSString *replaceText = wcpl_localReplaceText(controller, msgWrap);
    NSString *originText = msgWrap.m_nsContent ?: @"";
    NSString *storedOrigin = wcpl_originalContentForMessageWrap(msgWrap);
    if (replaceText.length > 0) {
        if (!storedOrigin && ![originText isEqualToString:replaceText]) {
            objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, originText, OBJC_ASSOCIATION_COPY_NONATOMIC);
        }
        if (![originText isEqualToString:replaceText]) {
            msgWrap.m_nsContent = replaceText;
            return YES;
        }
        return NO;
    }
    if (storedOrigin) {
        if (![originText isEqualToString:storedOrigin]) {
            msgWrap.m_nsContent = storedOrigin;
        }
        objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, nil, OBJC_ASSOCIATION_ASSIGN);
        return YES;
    }
    return NO;
}

static void wcpl_clearLocalReplaceMap(id controller) {
    NSMutableDictionary *map = wcpl_localReplaceMapForController(controller, NO);
    [map removeAllObjects];
}

static NSString *wcpl_digestForMessageWrap(CMessageWrap *msgWrap);

static BOOL wcpl_handleRevokeMessage(CMessageWrap *revokeWrap, NSString *chatNameHint) {
    if (![revokeWrap isKindOfClass:%c(CMessageWrap)]) return NO;
    if (wcpl_isSelfRevokeMessage(revokeWrap)) return NO;

    NSString *xml = revokeWrap.m_nsContent;
    if (xml.length == 0) return NO;

    BOOL looksLikeRevoke = ([xml rangeOfString:@"revokemsg" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                            [xml rangeOfString:@"replacemsg" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                            [xml rangeOfString:@"撤回"].location != NSNotFound ||
                            [xml rangeOfString:@"recalled" options:NSCaseInsensitiveSearch].location != NSNotFound);
    if (!looksLikeRevoke) return NO;

    NSString *session = wcpl_extractXmlTagValue(xml, @"session");
    if (session.length == 0) {
        session = wcpl_trimString(chatNameHint);
    }
    if (session.length == 0) {
        session = wcpl_trimString(revokeWrap.m_nsFromUsr) ?: wcpl_trimString(revokeWrap.m_nsToUsr);
    }
    if (session.length == 0) return NO;

    NSString *replaceRaw = wcpl_extractXmlTagValue(xml, @"replacemsg");
    NSString *replaceText = wcpl_sanitizeInlineText(wcpl_stripCDATAIfNeeded(replaceRaw), 160);

    long long revokedMsgId = wcpl_extractLongLongFromXmlTag(xml, @"newmsgid");
    if (revokedMsgId <= 0) revokedMsgId = wcpl_extractLongLongFromXmlTag(xml, @"msgid");

    CMessageWrap *revokedMsgWrap = nil;
    id messageMgr = wcpl_getMessageMgr();
    if (revokedMsgId > 0 && messageMgr && [messageMgr respondsToSelector:@selector(GetMsg:n64SvrID:)]) {
        id msg = [messageMgr GetMsg:session n64SvrID:revokedMsgId];
        if ([msg isKindOfClass:%c(CMessageWrap)]) {
            revokedMsgWrap = (CMessageWrap *)msg;
        }
    }

    NSString *revokedDigest = wcpl_digestForMessageWrap(revokedMsgWrap);

    NSString *tipText = replaceText.length > 0 ? [NSString stringWithFormat:@"已拦截撤回：%@", replaceText]
                                               : @"已拦截一条撤回消息";
    if (revokedDigest.length > 0) {
        tipText = [NSString stringWithFormat:@"%@ 原消息：%@", tipText, revokedDigest];
    }

    CMessageWrap *msgWrap = [[%c(CMessageWrap) alloc] initWithMsgType:0x2710];
    [msgWrap setM_uiStatus:0x4];
    [msgWrap setM_nsContent:tipText];
    [msgWrap setM_uiCreateTime:[revokeWrap m_uiCreateTime]];

    if (wcpl_trimString(revokeWrap.m_nsToUsr)) {
        [msgWrap setM_nsToUsr:revokeWrap.m_nsToUsr];
    }
    if (wcpl_trimString(revokeWrap.m_nsFromUsr)) {
        [msgWrap setM_nsFromUsr:revokeWrap.m_nsFromUsr];
    }

    if (messageMgr && [messageMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:Unique:)]) {
        [messageMgr AddLocalMsg:session MsgWrap:msgWrap fixTime:0x1 NewMsgArriveNotify:0x0 Unique:0x1];
        return YES;
    }
    if (messageMgr && [messageMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:)]) {
        [messageMgr AddLocalMsg:session MsgWrap:msgWrap fixTime:0x1 NewMsgArriveNotify:0x0];
        return YES;
    }
    if (messageMgr && [messageMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:)]) {
        [messageMgr AddLocalMsg:session MsgWrap:msgWrap];
        return YES;
    }

    return NO;
}

static NSString *wcpl_digestForMessageWrap(CMessageWrap *msgWrap) {
    if (![msgWrap isKindOfClass:%c(CMessageWrap)]) return nil;

    unsigned int type = msgWrap.m_uiMessageType;
    switch (type) {
        case 1:
            return wcpl_sanitizeInlineText(msgWrap.m_nsContent, 120);
        case 3:
            return @"[图片]";
        case 34:
            return @"[语音]";
        case 43:
            return @"[视频]";
        case 47:
            return @"[表情]";
        case 49:
            return @"[应用消息]";
        default:
            return [NSString stringWithFormat:@"[类型:%u]", type];
    }
}

%hook MicroMessengerAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    BOOL result = %orig(application, launchOptions);

    // 通过 WCPluginsMgr 注册插件入口
    if (NSClassFromString(@"WCPluginsMgr") && !didRegisterWCPLPlugin) {
        [[objc_getClass("WCPluginsMgr") sharedInstance] registerControllerWithTitle:@"微信辣椒"
                                                                           version:@"1.8.16"
                                                                        controller:@"WCPLSettingViewController"];
        didRegisterWCPLPlugin = YES;
        NSLog(@"[WCPL] Plugin registered via WCPluginsMgr");
    }

    return result;
}

%end

%ctor {
    @autoreleasepool {
        [[WCPLCrashReporter sharedReporter] installIfNeeded];
    }
}

%hook WCRedEnvelopesLogicMgr

- (void)OnWCToHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2 {
    %orig;

    // 非参数查询请求
    if (arg1.cgiCmdid != 3) { return; }

    NSDictionary *(^parseRequestNativeUrlDict)() = ^NSDictionary *() {
        NSString *requestString = [[NSString alloc] initWithData:arg2.reqText.buffer encoding:NSUTF8StringEncoding];
        if (requestString.length == 0) return nil;
        NSDictionary *requestDictionary = [%c(WCBizUtil) dictionaryWithDecodedComponets:requestString separator:@"&"];
        NSString *nativeUrl = [requestDictionary stringForKey:@"nativeUrl"];
        if (nativeUrl.length == 0) return nil;
        nativeUrl = [nativeUrl stringByRemovingPercentEncoding];
        if (nativeUrl.length == 0) return nil;
        NSDictionary *nativeUrlDict = [%c(WCBizUtil) dictionaryWithDecodedComponets:nativeUrl separator:@"&"];

        return nativeUrlDict;
    };

    NSDictionary *responseDict = [[[NSString alloc] initWithData:arg1.retText.buffer encoding:NSUTF8StringEncoding] JSONDictionary];

    NSDictionary *requestNativeUrlDict = parseRequestNativeUrlDict();
    NSString *requestSign = [requestNativeUrlDict stringForKey:@"sign"];
    NSString *requestSendId = [requestNativeUrlDict stringForKey:@"sendid"];

    WeChatRedEnvelopParam *mgrParams = [[WCPLRedEnvelopParamQueue sharedQueue] dequeueMatchingSign:requestSign sendId:requestSendId];

    BOOL (^shouldReceiveRedEnvelop)() = ^BOOL() {
        // 手动抢红包
        if (!mgrParams) { return NO; }

        // 自己已经抢过
        if ([responseDict[@"receiveStatus"] integerValue] == 2) { return NO; }

        // 红包被抢完
        if ([responseDict[@"hbStatus"] integerValue] == 4) { return NO; }        

        // 没有这个字段会被判定为使用外挂
        if (!responseDict[@"timingIdentifier"]) { return NO; }        

        if (mgrParams.isGroupSender) { 
            // 自己发红包的时候没有 sign 字段
            return [WCPLRedEnvelopConfig sharedConfig].autoReceiveEnable;
        } else {
            if (requestSign.length > 0 && ![requestSign isEqualToString:mgrParams.sign]) { return NO; }
            return [WCPLRedEnvelopConfig sharedConfig].autoReceiveEnable;
        }
    };

    if (shouldReceiveRedEnvelop()) {
        mgrParams.timingIdentifier = responseDict[@"timingIdentifier"];

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

%end

%hook CMessageMgr

- (void)AsyncOnAddMsg:(NSString *)msg MsgWrap:(CMessageWrap *)wrap {
    if ([WCPLFuncService shouldIgnoreMessageWrap:wrap]) {
        return;
    }

    %orig;

    switch(wrap.m_uiMessageType) {
    case 49: { // AppNode

        /** 是否为红包消息 */
        BOOL (^isRedEnvelopMessage)() = ^BOOL() {
            return [wrap.m_nsContent rangeOfString:@"wxpay://"].location != NSNotFound;
        };
        
        if (isRedEnvelopMessage()) { // 红包
            CContactMgr *contactManager = [[%c(MMServiceCenter) defaultCenter] getService:[%c(CContactMgr) class]];
            CContact *selfContact = [contactManager getSelfContact];

            BOOL (^isSender)() = ^BOOL() {
                return [wrap.m_nsFromUsr isEqualToString:selfContact.m_nsUsrName];
            };

            /** 是否别人在群聊中发消息 */
            BOOL (^isGroupReceiver)() = ^BOOL() {
                return [wrap.m_nsFromUsr rangeOfString:@"@chatroom"].location != NSNotFound;
            };

            /** 是否自己在群聊中发消息 */
            BOOL (^isGroupSender)() = ^BOOL() {
                return isSender() && [wrap.m_nsToUsr rangeOfString:@"chatroom"].location != NSNotFound;
            };

            /** 是否抢自己发的红包 */
            BOOL (^isReceiveSelfRedEnvelop)() = ^BOOL() {
                return [WCPLRedEnvelopConfig sharedConfig].receiveSelfRedEnvelop;
            };

            /** 群聊白名单：仅对白名单内群聊抢红包 */
            BOOL (^isGroupInAllowList)() = ^BOOL() {
                NSString *groupUserName = nil;
                if (isGroupReceiver()) {
                    groupUserName = wrap.m_nsFromUsr;
                } else if (isGroupSender()) {
                    groupUserName = wrap.m_nsToUsr;
                }
                if (groupUserName.length == 0) { return NO; }
                return [[WCPLRedEnvelopConfig sharedConfig].blackList containsObject:groupUserName];
            };

            /** 是否自动抢红包 */
            BOOL (^shouldReceiveRedEnvelop)() = ^BOOL() {
                if (![WCPLRedEnvelopConfig sharedConfig].autoReceiveEnable) { return NO; }
                if (isGroupReceiver()) {
                    return isGroupInAllowList();
                }
                if (isGroupSender() && isReceiveSelfRedEnvelop()) {
                    return isGroupInAllowList();
                }
                return NO;
            };

            NSDictionary *(^parseNativeUrl)(NSString *nativeUrl) = ^NSDictionary *(NSString *nativeUrl) {
                NSString *prefix = @"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?";
                if (nativeUrl.length == 0 || ![nativeUrl hasPrefix:prefix]) return nil;
                NSString *query = [nativeUrl substringFromIndex:prefix.length];
                if (query.length == 0) return nil;
                return [%c(WCBizUtil) dictionaryWithDecodedComponets:query separator:@"&"];
            };

            /** 获取服务端验证参数 */
            void (^queryRedEnvelopesReqeust)(NSDictionary *nativeUrlDict) = ^(NSDictionary *nativeUrlDict) {
                NSMutableDictionary *params = [@{} mutableCopy];
                params[@"agreeDuty"] = @"0";
                params[@"channelId"] = [nativeUrlDict stringForKey:@"channelid"];
                params[@"inWay"] = @"0";
                params[@"msgType"] = [nativeUrlDict stringForKey:@"msgtype"];
                params[@"nativeUrl"] = [[wrap m_oWCPayInfoItem] m_c2cNativeUrl];
                params[@"sendId"] = [nativeUrlDict stringForKey:@"sendid"];

                WCRedEnvelopesLogicMgr *logicMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:[objc_getClass("WCRedEnvelopesLogicMgr") class]];
                [logicMgr ReceiverQueryRedEnvelopesRequest:params];
            };

            /** 储存参数 */
            void (^enqueueParam)(NSDictionary *nativeUrlDict) = ^(NSDictionary *nativeUrlDict) {
                WeChatRedEnvelopParam *mgrParams = [[WeChatRedEnvelopParam alloc] init];
                mgrParams.msgType = [nativeUrlDict stringForKey:@"msgtype"];
                mgrParams.sendId = [nativeUrlDict stringForKey:@"sendid"];
                mgrParams.channelId = [nativeUrlDict stringForKey:@"channelid"];
                mgrParams.nickName = [selfContact getContactDisplayName];
                mgrParams.headImg = [selfContact m_nsHeadImgUrl];
                mgrParams.nativeUrl = [[wrap m_oWCPayInfoItem] m_c2cNativeUrl];
                mgrParams.sessionUserName = isGroupSender() ? wrap.m_nsToUsr : wrap.m_nsFromUsr;
                mgrParams.sign = [nativeUrlDict stringForKey:@"sign"];

                mgrParams.isGroupSender = isGroupSender();

                [[WCPLRedEnvelopParamQueue sharedQueue] enqueue:mgrParams];
            };

            if (shouldReceiveRedEnvelop()) {
                NSString *nativeUrl = [[wrap m_oWCPayInfoItem] m_c2cNativeUrl];            
                NSDictionary *nativeUrlDict = parseNativeUrl(nativeUrl);
                if (nativeUrlDict.count == 0) { break; }

                queryRedEnvelopesReqeust(nativeUrlDict);
                enqueueParam(nativeUrlDict);
            }
        }    
        break;
    }
    default:
        break;
    }
    
}

- (void)onRevokeMsg:(CMessageWrap *)arg1 {
    if (![WCPLRedEnvelopConfig sharedConfig].revokeEnable) {
        %orig;
        return;
    }

    @try {
        if (wcpl_handleRevokeMessage(arg1, nil)) {
            return;
        }
    } @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in onRevokeMsg hook: %@", exception);
        %orig;
        return;
    }

    %orig;
}

- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 FromSequence:(unsigned int)arg6 {
    id result = %orig;

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];

    if (!config.userIgnoreEnable) {
        return result;
    }

    if ([result isKindOfClass:[NSArray class]] || [result isKindOfClass:[NSMutableArray class]]) {
        return [WCPLFuncService filtMessageFromMsgList:(NSMutableArray *)result];
    }

    return result;
}

%end

%hook MessageRevokeMgr

- (void)onRevokeMsg:(id)arg1 {
    if (![WCPLRedEnvelopConfig sharedConfig].revokeEnable) {
        %orig;
        return;
    }

    @try {
        CMessageWrap *revokeWrap = wcpl_revokeMsgWrapFromObject(arg1);
        NSString *chatName = wcpl_revokeChatNameFromObject(arg1);
        if (wcpl_handleRevokeMessage(revokeWrap, chatName)) {
            return;
        }
    } @catch (NSException *exception) {
        NSLog(@"[WCPL] Exception in MessageRevokeMgr onRevokeMsg: %@", exception);
    }

    %orig;
}

- (void)replaceRevokedMsg:(id)arg1 {
    if (![WCPLRedEnvelopConfig sharedConfig].revokeEnable) {
        %orig;
        return;
    }

    CMessageWrap *revokeWrap = wcpl_revokeMsgWrapFromObject(arg1);
    if (revokeWrap && !wcpl_isSelfRevokeMessage(revokeWrap)) {
        return;
    }

    %orig;
}

- (void)deleteLocalProcessRevokeMsgWithToast:(id)arg1 {
    if (![WCPLRedEnvelopConfig sharedConfig].revokeEnable) {
        %orig;
        return;
    }

    CMessageWrap *revokeWrap = wcpl_revokeMsgWrapFromObject(arg1);
    if (revokeWrap && !wcpl_isSelfRevokeMessage(revokeWrap)) {
        return;
    }

    %orig;
}

%end

%hook NewSettingViewController

- (void)reloadTableData {
    %orig;

    WCTableViewManager *tableViewMgr = MSHookIvar<id>(self, "m_tableViewMgr");

    WCTableViewSectionManager *sectionMgr = [%c(WCTableViewSectionManager) sectionInfoDefaut];

    WCTableViewNormalCellManager *settingCell = [%c(WCTableViewNormalCellManager) normalCellForSel:@selector(wcpl_setting) target:self title:@"微信辣椒" accessoryType:1];
    [sectionMgr addCell:settingCell];

    [tableViewMgr insertSection:sectionMgr At:0];

    MMTableView *tableView = [tableViewMgr getTableView];
    [tableView reloadData];
}

%new
- (void)wcpl_setting {
    WCPLSettingViewController *settingViewController = [[WCPLSettingViewController alloc] init];
    [self.navigationController pushViewController:settingViewController animated:YES];
}

%end

%hook SyncCmdHandler

- (_Bool)BatchAddMsg:(_Bool)arg1 ShowPush:(_Bool)arg2 {

    NSMutableArray *msgList = [self valueForKey:@"m_arrMsgList"];
    NSMutableArray *msgListResult = [WCPLFuncService filtMessageFromMsgList:msgList];
    [self setValue:msgListResult forKey:@"m_arrMsgList"];

    return %orig;
}

%end

%hook BaseMsgContentViewController

- (void)viewDidLoad {
    %orig;

    // 复读功能现在通过 Hook CommonMessageCellView 实现
    // 不再需要在这里添加按钮
}

- (void)viewDidAppear:(_Bool)arg1 {
    %orig;

    CContact *contact = [self GetContact];
    if (contact.m_nsUsrName) {
        [WCPLRedEnvelopConfig sharedConfig].curUsrName = contact.m_nsUsrName;
    }

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if ([config TPOn]) {
        UIView *view = [self valueForKey:@"view"];
        [[WCPLAVManager shareManager] startCaptureInView:view];
    }
}

- (void)viewWillDisappear:(_Bool)arg1 {
    %orig;

    UINavigationController *navCon = [self valueForKey:@"navigationController"];
    if ([navCon.viewControllers indexOfObject:(UIViewController *)self] == NSNotFound) {
        [[WCPLAVManager shareManager] stop];
    }

    if (self.isMovingFromParentViewController || self.isBeingDismissed) {
        wcpl_clearLocalReplaceMap(self);
    }
}

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 {
    %orig;

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if ([config TPOn]) {
        [[WCPLAVManager shareManager] stop];
    }
}

- (void)didRotateFromInterfaceOrientation:(long long)arg1 {
    %orig;

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if ([config TPOn]) {
        UIView *view = [self valueForKey:@"view"];
        [[WCPLAVManager shareManager] startCaptureInView:view];
    }
}

- (void)reloadMessages {
    wcpl_clearLocalReplaceMap(self);
    %orig;
}

- (void)reloadWholePage {
    wcpl_clearLocalReplaceMap(self);
    %orig;
}

%end

// ==================== 复读机功能 Hook ====================
// Hook 文本消息 Cell，在别人发送的消息气泡旁边添加 +1 按钮

%hook TextMessageCellView

- (void)layoutSubviews {
    %orig;

    // 添加复读按钮
    if (wcpl_shouldThrottleRepeatButton(self)) {
        return;
    }
    [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)setViewModel:(id)viewModel {
    %orig;

    // viewModel 设置完成后补一次，避免布局时机导致按钮消失
    if (wcpl_shouldThrottleRepeatButton(self)) {
        return;
    }
    [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)prepareForReuse {
    %orig;

    // Cell 复用时移除按钮
    [[WCPLMessageReplyManager sharedManager] removeRepeatButtonFromCellView:(CommonMessageCellView *)self];
}

%end

// Hook 应用消息 Cell（包括引用回复消息）
%hook AppMessageCellView

- (void)layoutSubviews {
    %orig;

    // 添加复读按钮（仅对引用回复消息）
    [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)prepareForReuse {
    %orig;

    // Cell 复用时移除按钮
    [[WCPLMessageReplyManager sharedManager] removeRepeatButtonFromCellView:(CommonMessageCellView *)self];
}

%end

// Hook 表情包消息 Cell (App类型)
%hook AppEmoticonMessageCellView

- (void)layoutSubviews {
    %orig;

    // 添加复读按钮
    [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)prepareForReuse {
    %orig;

    // Cell 复用时移除按钮
    [[WCPLMessageReplyManager sharedManager] removeRepeatButtonFromCellView:(CommonMessageCellView *)self];
}

- (void)didMoveToWindow {
    %orig;

    // 确保表情包消息也支持滑动手势
    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

%end

// Hook 表情包消息 Cell (普通类型)
%hook EmoticonMessageCellView

- (void)layoutSubviews {
    %orig;

    // 添加复读按钮
    [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)prepareForReuse {
    %orig;

    // Cell 复用时移除按钮
    [[WCPLMessageReplyManager sharedManager] removeRepeatButtonFromCellView:(CommonMessageCellView *)self];
}

- (void)didMoveToWindow {
    %orig;

    // 确保表情包消息也支持滑动手势
    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

%end

// Hook 语音消息 Cell
%hook VoiceMessageCellView

- (void)layoutSubviews {
    %orig;

    // 添加复读按钮
    [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)prepareForReuse {
    %orig;

    // Cell 复用时移除按钮
    [[WCPLMessageReplyManager sharedManager] removeRepeatButtonFromCellView:(CommonMessageCellView *)self];
}

%end

// Hook 图片消息 Cell（已禁用复读功能,仅保留结构以供将来扩展）
%hook ImageMessageCellView

- (void)layoutSubviews {
    %orig;

    // 图片消息不支持复读按钮
    // [[WCPLMessageReplyManager sharedManager] addRepeatButtonToCellView:(CommonMessageCellView *)self];
}

- (void)prepareForReuse {
    %orig;

    // 确保移除任何残留的按钮
    [[WCPLMessageReplyManager sharedManager] removeRepeatButtonFromCellView:(CommonMessageCellView *)self];
}

- (void)didMoveToWindow {
    %orig;

    // 图片消息支持手势（复读除外）
    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

%end

// Hook 视频消息 Cell（支持手势操作）
%hook VideoMessageCellView

- (void)didMoveToWindow {
    %orig;

    // 确保视频消息也支持滑动手势
    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

%end

// 也 Hook CommonMessageCellView 以支持更多消息类型和左滑引用功能
%hook CommonMessageCellView

%property(nonatomic, strong) UIPanGestureRecognizer *wchook_swipeGesture;
%property(nonatomic, strong) UIImpactFeedbackGenerator *wchook_feedbackGenerator;
%property(nonatomic, assign) BOOL wchook_feedbackTriggered;
%property(nonatomic, assign) NSInteger wchook_swipeTriggerStage;

- (void)layoutSubviews {
    %orig;

    // 跳过已经单独处理的 Cell 类型
    NSString *className = NSStringFromClass([self class]);
    if ([className isEqualToString:@"TextMessageCellView"] ||
        [className isEqualToString:@"AppMessageCellView"] ||
        [className isEqualToString:@"AppEmoticonMessageCellView"] ||
        [className isEqualToString:@"EmoticonMessageCellView"] ||
        [className isEqualToString:@"VoiceMessageCellView"] ||
        [className isEqualToString:@"ImageMessageCellView"] ||
        [className isEqualToString:@"VideoMessageCellView"]) {
        // 已经在各自的 hook 中处理
        return;
    }

    // 其他消息类型暂不处理复读按钮
}

- (void)didMoveToWindow {
    %orig;

    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

%new
- (void)wchook_setupSwipeGestureIfNeeded {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    // 检查总开关和是否有任何滑动功能启用
    if (!config.swipeGestureEnable || (!config.swipeQuoteEnable && !config.swipeRightEnable)) {
        if (self.wchook_swipeGesture) {
            self.wchook_swipeGesture.enabled = NO;
        }
        return;
    }

    UIPanGestureRecognizer *gesture = self.wchook_swipeGesture;
    if (!gesture) {
        gesture = [[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(wchook_handleSwipe:)];
        gesture.maximumNumberOfTouches = 1;
        gesture.minimumNumberOfTouches = 1;
        gesture.cancelsTouchesInView = YES;
        gesture.delaysTouchesBegan = NO;
        gesture.delaysTouchesEnded = NO;
        gesture.delegate = (id<UIGestureRecognizerDelegate>)self;
        [self addGestureRecognizer:gesture];
        self.wchook_swipeGesture = gesture;
    }

    gesture.enabled = YES;

    if (!self.wchook_feedbackGenerator) {
        self.wchook_feedbackGenerator = [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleMedium];
    }
}

%new
- (void)wchook_handleSwipe:(UIPanGestureRecognizer *)gesture {
    if (!gesture) {
        return;
    }

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    // 检查总开关和是否有任何滑动功能启用
    if (!config.swipeGestureEnable || (!config.swipeQuoteEnable && !config.swipeRightEnable)) {
        [self wchook_resetSwipeAnimated:YES];
        return;
    }

    NSArray<UIView *> *messageViews = [WCHookSwipeUtilities relatedMessageViewsForCommonView:self];
    CGPoint translation = [gesture translationInView:self];
    CGPoint velocity = [gesture velocityInView:self];

    // 判断滑动方向
    WCHookSwipeDirection direction = [WCHookSwipeUtilities swipeDirectionFromTranslation:translation];

    // 检查当前方向是否启用
    BOOL isDirectionEnabled = NO;
    if (direction == WCHookSwipeDirectionLeft && config.swipeQuoteEnable) {
        isDirectionEnabled = YES;
    } else if (direction == WCHookSwipeDirectionRight && config.swipeRightEnable) {
        isDirectionEnabled = YES;
    }

    // 如果当前方向未启用，忽略手势
    if (!isDirectionEnabled && gesture.state != UIGestureRecognizerStateBegan) {
        [WCHookSwipeUtilities applyTransform:CGAffineTransformIdentity toViews:messageViews];
        if (gesture.state == UIGestureRecognizerStateEnded || gesture.state == UIGestureRecognizerStateCancelled) {
            [self wchook_resetSwipeAnimated:YES];
        }
        return;
    }

    // 使用双向滑动检测
    if ([WCHookSwipeUtilities shouldIgnoreTranslationBidirectional:translation]) {
        [WCHookSwipeUtilities applyTransform:CGAffineTransformIdentity toViews:messageViews];
        if (gesture.state == UIGestureRecognizerStateEnded || gesture.state == UIGestureRecognizerStateCancelled) {
            [self wchook_resetSwipeAnimated:YES];
        }
        return;
    }

    CGFloat threshold = [WCHookSwipeUtilities thresholdForView:self] * [config swipeDistanceScale];
    CGFloat lightThreshold = threshold * [config swipeLightTriggerRatio];
    CGFloat hardVelocityTrigger = [config swipeVelocityTrigger];

    switch (gesture.state) {
    case UIGestureRecognizerStateBegan: {
        [self.wchook_feedbackGenerator prepare];
        self.wchook_feedbackTriggered = NO;
        self.wchook_swipeTriggerStage = 0;
        break;
    }
    case UIGestureRecognizerStateChanged: {
        // 双向滑动：限制在 [-threshold, threshold] 范围内
        CGFloat clamped = [WCHookSwipeUtilities clampedTranslationBidirectional:translation.x threshold:threshold];
        CGAffineTransform transform = CGAffineTransformMakeTranslation(clamped, 0.0f);
        [WCHookSwipeUtilities applyTransform:transform toViews:messageViews];

        // 分段反馈：轻触发 -> 重触发
        CGFloat absTranslation = fabs(translation.x);
        NSInteger stage = 0;
        if (absTranslation >= threshold) {
            stage = 2;
        } else if (absTranslation >= lightThreshold) {
            stage = 1;
        }

        // 只在“首次达到某一段”时触发反馈（避免反复抖动）
        if (stage > self.wchook_swipeTriggerStage) {
            CGFloat intensity = (stage == 1) ? 0.35f : 0.85f;
            if ([self.wchook_feedbackGenerator respondsToSelector:@selector(impactOccurredWithIntensity:)]) {
                [self.wchook_feedbackGenerator impactOccurredWithIntensity:intensity];
            } else {
                [self.wchook_feedbackGenerator impactOccurred];
            }
            self.wchook_swipeTriggerStage = stage;
            self.wchook_feedbackTriggered = (stage >= 2);
        }
        break;
    }
    case UIGestureRecognizerStateCancelled:
    case UIGestureRecognizerStateEnded: {
        CGFloat absTranslation = fabs(translation.x);
        CGFloat absVelocity = fabs(velocity.x);

        // 方向兜底：轻甩但 translation 不明显时用 velocity 判方向
        if (direction == WCHookSwipeDirectionNone) {
            if (velocity.x > 0.0f) {
                direction = WCHookSwipeDirectionRight;
            } else if (velocity.x < 0.0f) {
                direction = WCHookSwipeDirectionLeft;
            }
        }

        BOOL shouldHardTrigger = (absTranslation >= threshold) || (absVelocity >= hardVelocityTrigger);
        BOOL shouldLightTrigger = (!shouldHardTrigger && absTranslation >= lightThreshold);

        // 触发轻/重动作：轻滑默认引用，重滑执行用户配置动作
        if (shouldHardTrigger) {
            if (self.wchook_swipeTriggerStage < 2) {
                if ([self.wchook_feedbackGenerator respondsToSelector:@selector(impactOccurredWithIntensity:)]) {
                    [self.wchook_feedbackGenerator impactOccurredWithIntensity:0.85f];
                } else {
                    [self.wchook_feedbackGenerator impactOccurred];
                }
            }
            [self wchook_triggerActionForDirection:direction];
        } else if (shouldLightTrigger) {
            if (self.wchook_swipeTriggerStage < 1) {
                if ([self.wchook_feedbackGenerator respondsToSelector:@selector(impactOccurredWithIntensity:)]) {
                    [self.wchook_feedbackGenerator impactOccurredWithIntensity:0.35f];
                } else {
                    [self.wchook_feedbackGenerator impactOccurred];
                }
            }
            [self wchook_triggerLightActionForDirection:direction];
        }
        [self wchook_resetSwipeAnimated:YES];
        break;
    }
    default: {
        break;
    }
    }
}

%new
- (void)wchook_triggerActionForDirection:(WCHookSwipeDirection)direction {
    dispatch_async(dispatch_get_main_queue(), ^{
        [self wchook_showSwipeActionMenuForDirection:direction];
    });
}

%new
- (void)wchook_triggerLightActionForDirection:(WCHookSwipeDirection)direction {
    // 轻滑动作：默认引用（不区分方向，避免误触发危险操作）
    NSString *directionName = (direction == WCHookSwipeDirectionRight) ? @"右滑" : @"左滑";
    WCPLCrashBreadcrumb(@"轻滑触发: %@ 引用", directionName);
    dispatch_async(dispatch_get_main_queue(), ^{
        [self wchook_performQuoteReply];
    });
}

%new
- (void)wchook_resetSwipeAnimated:(BOOL)animated {
    NSArray<UIView *> *messageViews = [WCHookSwipeUtilities relatedMessageViewsForCommonView:self];
    [WCHookSwipeUtilities animateResetForViews:messageViews animated:animated];
    self.wchook_feedbackTriggered = NO;
    self.wchook_swipeTriggerStage = 0;
}

%new
- (void)wchook_triggerQuoteReply {
    dispatch_async(dispatch_get_main_queue(), ^{
        [self wchook_showSwipeActionMenuForDirection:WCHookSwipeDirectionLeft];
    });
}

%new
- (void)wchook_showSwipeActionMenuForDirection:(WCHookSwipeDirection)direction {
    // 获取消息内容
    CMessageWrap *msgWrap = nil;
    if ([self respondsToSelector:@selector(viewModel)]) {
        id viewModel = [self performSelector:@selector(viewModel)];
        // 优先使用 messageWrap 属性（BaseMessageViewModel 的标准属性）
        if ([viewModel respondsToSelector:@selector(messageWrap)]) {
            msgWrap = [viewModel performSelector:@selector(messageWrap)];
        }
        // 备用方法
        if (!msgWrap && [viewModel respondsToSelector:@selector(getCurrentMessageWrap)]) {
            msgWrap = [viewModel performSelector:@selector(getCurrentMessageWrap)];
        }
    }
    // 直接从 Cell 获取
    if (!msgWrap && [self respondsToSelector:@selector(messageWrap)]) {
        msgWrap = [self performSelector:@selector(messageWrap)];
    }
    if (!msgWrap && [self respondsToSelector:@selector(getCurrentMessageWrap)]) {
        msgWrap = [self performSelector:@selector(getCurrentMessageWrap)];
    }

    if (!msgWrap) {
        NSLog(@"[WCPL] Cannot get message wrap for swipe action");
        return;
    }

    // 判断是否是自己发送的消息
    BOOL isFromOther = [[WCPLMessageReplyManager sharedManager] isMessageFromOther:msgWrap];
    BOOL isSelf = !isFromOther;

    unsigned int msgType = msgWrap.m_uiMessageType;
    NSString *cellClassName = NSStringFromClass([self class]);
    BOOL isImageMessage = (msgType == 3) || [cellClassName isEqualToString:@"ImageMessageCellView"];
    BOOL isVideoMessage = (msgType == 43 || msgType == 62) || [cellClassName isEqualToString:@"VideoMessageCellView"];

    // 获取配置
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    NSInteger action = 0;

    // 根据滑动方向和消息发送者获取配置的操作
    if (direction == WCHookSwipeDirectionLeft) {
        action = isSelf ? config.swipeLeftSelfAction : config.swipeLeftOtherAction;
    } else {
        action = isSelf ? config.swipeRightSelfAction : config.swipeRightOtherAction;
    }

    NSString *directionName = (direction == WCHookSwipeDirectionLeft) ? @"左滑" : @"右滑";
    NSString *actionName = @"引用";
    switch (action) {
        case 1:
            actionName = @"复读";
            break;
        case 2:
            actionName = @"删除";
            break;
        case 3:
            actionName = @"撤回";
            break;
        default:
            actionName = @"引用";
            break;
    }
    WCPLCrashBreadcrumb(@"滑动动作: %@ -> %@ msgType=%u from=%@ to=%@", directionName, actionName, msgType, msgWrap.m_nsFromUsr ?: @"", msgWrap.m_nsToUsr ?: @"");

    // 复读不支持图片/视频消息
    if (action == 1 && (isImageMessage || isVideoMessage)) {
        NSLog(@"[WCPL] Swipe repeat not supported for image/video message");
        return;
    }

    // 执行对应操作
    // 0=引用, 1=复读, 2=删除, 3=撤回(仅己方消息)
    switch (action) {
        case 0: // 引用
            [self wchook_performQuoteReply];
            break;
        case 1: // 复读
            [self wchook_performRepeatMessage:msgWrap];
            break;
        case 2: // 删除
            [self wchook_performDeleteMessage:msgWrap];
            break;
        case 3: // 撤回（仅己方消息有效）
            if (isSelf) {
                [self wchook_performRevokeMessage:msgWrap];
            } else {
                // 对方消息不能撤回，改为引用
                [self wchook_performQuoteReply];
            }
            break;
        default:
            [self wchook_performQuoteReply];
            break;
    }
}

%new
- (void)wchook_performQuoteReply {
    @try {
        // 方法1: 直接调用 Cell 的引用方法
        if ([self respondsToSelector:@selector(onShowMsgReplyMenuItem:)]) {
            [self performSelector:@selector(onShowMsgReplyMenuItem:) withObject:nil];
            NSLog(@"[WCPL] Quote reply via onShowMsgReplyMenuItem:");
            return;
        }

        // 方法2: 调用 onClickAsRefer 方法（表情包和图片消息可能使用这个）
        if ([self respondsToSelector:@selector(onClickAsRefer)]) {
            [self performSelector:@selector(onClickAsRefer)];
            NSLog(@"[WCPL] Quote reply via onClickAsRefer");
            return;
        }

        // 方法3: 通过 ViewController 触发引用
        BaseMsgContentViewController *chatVC = [self wchook_findChatViewController];
        if (chatVC) {
            // 获取消息
            CMessageWrap *msgWrap = nil;
            if ([self respondsToSelector:@selector(viewModel)]) {
                id viewModel = [self performSelector:@selector(viewModel)];
                if ([viewModel respondsToSelector:@selector(messageWrap)]) {
                    msgWrap = [viewModel performSelector:@selector(messageWrap)];
                }
            }

            if (msgWrap && [chatVC respondsToSelector:@selector(startReplyWithMessageWrap:)]) {
                [chatVC performSelector:@selector(startReplyWithMessageWrap:) withObject:msgWrap];
                NSLog(@"[WCPL] Quote reply via startReplyWithMessageWrap:");
                return;
            }
        }

        NSLog(@"[WCPL] Quote reply: no suitable method found");
    } @catch (NSException *exception) {
        NSLog(@"[WCPL] Quote reply failed: %@", exception);
    }
}

%new
- (void)wchook_performDeleteMessage:(CMessageWrap *)msgWrap {
    if (!msgWrap) return;

    @try {
        // 方法1: 调用 Cell 的删除方法
        if ([self respondsToSelector:@selector(onDelete:)]) {
            [self performSelector:@selector(onDelete:) withObject:nil];
            NSLog(@"[WCPL] Message deleted via onDelete:");
            return;
        }

        // 方法2: 通过 CMessageMgr 删除
        id messageMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("CMessageMgr")];
        if (messageMgr && [messageMgr respondsToSelector:@selector(DelMsg:MsgWrap:)]) {
            NSString *chatName = msgWrap.m_nsFromUsr ?: msgWrap.m_nsToUsr;
            [messageMgr DelMsg:chatName MsgWrap:msgWrap];
            NSLog(@"[WCPL] Message deleted via CMessageMgr DelMsg:MsgWrap:");
            return;
        }

        // 方法3: 通过 ViewController 删除
        BaseMsgContentViewController *chatVC = [self wchook_findChatViewController];
        if (chatVC && [chatVC respondsToSelector:@selector(onDeleteMessage:)]) {
            [chatVC performSelector:@selector(onDeleteMessage:) withObject:msgWrap];
            NSLog(@"[WCPL] Message deleted via onDeleteMessage:");
            return;
        }

        NSLog(@"[WCPL] Delete message: no suitable method found");
    } @catch (NSException *exception) {
        NSLog(@"[WCPL] Delete message failed: %@", exception);
    }
}

%new
- (void)wchook_performRevokeMessage:(CMessageWrap *)msgWrap {
    if (!msgWrap) return;

    @try {
        // 优先调用 Cell 的撤回方法 (正确的方法名是 onRevokeMsg:)
        if ([self respondsToSelector:@selector(onRevokeMsg:)]) {
            [self performSelector:@selector(onRevokeMsg:) withObject:nil];
            NSLog(@"[WCPL] Message revoked via onRevokeMsg:");
            return;
        }

        // 备用方案：通过 CMessageMgr 撤回 (正确的方法签名是 RevokeMsg:MsgWrap:Counter:)
        id messageMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService:objc_getClass("CMessageMgr")];
        if (messageMgr && [messageMgr respondsToSelector:@selector(RevokeMsg:MsgWrap:Counter:)]) {
            NSString *chatName = msgWrap.m_nsToUsr;
            [messageMgr RevokeMsg:chatName MsgWrap:msgWrap Counter:0];
            NSLog(@"[WCPL] Message revoked via CMessageMgr RevokeMsg:MsgWrap:Counter:");
        }
    } @catch (NSException *exception) {
        NSLog(@"[WCPL] Revoke message failed: %@", exception);
    }
}

%new
- (void)wchook_performRepeatMessage:(CMessageWrap *)msgWrap {
    if (!msgWrap) return;

    // 获取当前聊天视图控制器
    BaseMsgContentViewController *chatVC = [self wchook_findChatViewController];
    if (!chatVC) {
        NSLog(@"[WCPL] Cannot find chat view controller");
        return;
    }

    unsigned int msgType = msgWrap.m_uiMessageType;

    if (msgType == 3 || msgType == 43 || msgType == 62) {
        NSLog(@"[WCPL] Repeat not supported for image/video message");
        return;
    }

    // 处理表情包消息（类型47）
    if (msgType == 47) {
        [[WCPLMessageReplyManager sharedManager] handleRepeatEmoticonMessage:msgWrap viewController:chatVC];
        return;
    }

    // 处理语音消息（类型34）
    if (msgType == 34) {
        [[WCPLMessageReplyManager sharedManager] handleRepeatVoiceMessage:msgWrap viewController:chatVC];
        return;
    }

    // 获取消息内容
    NSString *content = [[WCPLMessageReplyManager sharedManager] getMessageContent:msgWrap];
    if (!content || content.length == 0) {
        NSLog(@"[WCPL] No content to repeat from swipe");
        return;
    }

    // 调用复读功能（文本消息和其他类型）
    [[WCPLMessageReplyManager sharedManager] handleRepeatButtonTapWithContent:content
                                                               viewController:chatVC
                                                                      msgWrap:msgWrap];
}

%new
- (UIViewController *)wchook_findTopViewController {
    UIResponder *responder = self;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

%new
- (BaseMsgContentViewController *)wchook_findChatViewController {
    UIResponder *responder = self;
    while (responder) {
        if ([responder isKindOfClass:NSClassFromString(@"BaseMsgContentViewController")]) {
            return (BaseMsgContentViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

- (void)handleTapForReferMsg:(id)sender {
    if ([WCPLRedEnvelopConfig sharedConfig].tapReferJumpEnable && [WCHookMessageNavigator senderLooksLikeReferView:sender]) {
        if ([WCHookMessageNavigator tryJumpFromCell:self]) {
            return;
        }
    }
    %orig;
}

- (void)handleTapReferMessage {
    if ([WCPLRedEnvelopConfig sharedConfig].tapReferJumpEnable) {
        if ([WCHookMessageNavigator tryJumpFromCell:self]) {
            return;
        }
    }
    %orig;
}

- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer *)gestureRecognizer {
    if (gestureRecognizer == self.wchook_swipeGesture) {
        WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
        // 检查总开关和是否有任何滑动功能启用
        if (!config.swipeGestureEnable || (!config.swipeQuoteEnable && !config.swipeRightEnable)) {
            return NO;
        }
        UIPanGestureRecognizer *pan = (UIPanGestureRecognizer *)gestureRecognizer;
        CGPoint velocity = [pan velocityInView:self];
        // 使用双向速度检测
        if (![WCHookSwipeUtilities isVelocityEligibleBidirectional:velocity]) {
            return NO;
        }
        // 检查滑动方向是否启用
        if (velocity.x < 0 && !config.swipeQuoteEnable) {
            // 左滑但左滑功能未启用
            return NO;
        }
        if (velocity.x > 0 && !config.swipeRightEnable) {
            // 右滑但右滑功能未启用
            return NO;
        }
    }

    BOOL result = %orig;
    return result;
}

- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer {
    if (gestureRecognizer == self.wchook_swipeGesture) {
        return NO;
    }
    BOOL result = %orig;
    return result;
}

- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer {
    if (gestureRecognizer == self.wchook_swipeGesture && [otherGestureRecognizer isKindOfClass:[UIScreenEdgePanGestureRecognizer class]]) {
        return YES;
    }
    BOOL result = %orig;
    return result;
}

%end

// ==================== 左滑引用 Hook MMInputToolView ====================

%hook MMInputToolView

- (void)onTapMsgReplyView:(id)sender {
    if ([WCPLRedEnvelopConfig sharedConfig].tapReferJumpEnable && [WCHookMessageNavigator senderLooksLikeReferView:sender]) {
        if ([WCHookMessageNavigator tryJumpFromInputTool:self]) {
            return;
        }
    }
    %orig;
}

%end

// ==================== 复读机功能 Hook 结束 ====================

%hook ChatRoomInfoViewController

- (void)reloadTableData {
    %orig;

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if (!config.userIgnoreEnable) {
        return;
    }

    // 从当前控制器获取群聊联系人
    CContact *chatRoomContact = self.m_chatRoomContact;
    NSString *usrName = chatRoomContact.m_nsUsrName;
    if (usrName.length == 0) {
        return;
    }

    // 获取 tableViewInfo
    MMTableViewInfo *tableViewInfo = MSHookIvar<id>(self, "m_tableViewInfo");
    if (!tableViewInfo || ![tableViewInfo respondsToSelector:@selector(addSection:)] || ![tableViewInfo respondsToSelector:@selector(getTableView)]) {
        return;
    }

    // 创建新的 section 并添加屏蔽开关，插入到靠前的位置（第1个section之后）
    WCTableViewSectionManager *sectionMgr = [%c(WCTableViewSectionManager) sectionInfoHeader:@"消息屏蔽"];
    WCTableViewNormalCellManager *ignoreCell = [%c(WCTableViewNormalCellManager) switchCellForSel:@selector(wcpl_handleIgnoreChatRoom:) target:self title:@"屏蔽群消息" on:config.chatIgnoreInfo[usrName].boolValue];
    [sectionMgr addCell:ignoreCell];

    // 插入到第1个位置（在群头像section之后），使选项更显眼
    if ([tableViewInfo respondsToSelector:@selector(insertSection:At:)]) {
        [tableViewInfo insertSection:sectionMgr At:1];
    } else {
        [tableViewInfo addSection:sectionMgr];
    }

    MMTableView *tableView = [tableViewInfo getTableView];
    [tableView reloadData];
}

%new
- (void)wcpl_handleIgnoreChatRoom:(UISwitch *)sender {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if (!config.userIgnoreEnable) {
        sender.on = NO;
        return;
    }

    CContact *chatRoomContact = self.m_chatRoomContact;
    NSString *usrName = chatRoomContact.m_nsUsrName;
    if (usrName.length == 0) {
        sender.on = NO;
        return;
    }

    if (sender.on) {
        config.chatIgnoreInfo[usrName] = @(YES);
    } else {
        NSMutableDictionary *igDict = config.chatIgnoreInfo;
        [igDict removeObjectForKey:usrName];
        config.chatIgnoreInfo = igDict;
    }
    [config saveChatIgnoreNameListToLocalFile];
}

%end

%hook ContactInfoViewController

- (void)reloadTableData {
    %orig;

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if (!config.userIgnoreEnable) {
        return;
    }

    CContact *contact = self.m_contact;
    NSString *usrName = contact.m_nsUsrName;
    if (usrName.length == 0) {
        return;
    }
    if ([usrName rangeOfString:@"@chatroom"].location != NSNotFound) {
        return;
    }

    // ContactInfoViewController 使用 m_oContactInfoAssist 管理表格
    // m_oContactInfoAssist (WeixinContactInfoAssist) 中包含 m_tableViewInfo
    id tableViewInfo = nil;
    id assist = nil;

    // 方法1: 尝试使用 MSHookIvar 获取 m_oContactInfoAssist
    @try {
        assist = MSHookIvar<id>(self, "m_oContactInfoAssist");
    } @catch (__unused NSException *exception) {
        assist = nil;
    }

    // 方法2: 如果方法1失败，使用 class_getInstanceVariable
    if (!assist) {
        Ivar assistIvar = class_getInstanceVariable([self class], "m_oContactInfoAssist");
        if (assistIvar) {
            assist = object_getIvar(self, assistIvar);
        }
    }

    if (!assist) {
        NSLog(@"[WCPL] ContactInfoViewController: Failed to get m_oContactInfoAssist");
        return;
    }

    // 从 assist 获取 m_tableViewInfo
    @try {
        tableViewInfo = MSHookIvar<id>(assist, "m_tableViewInfo");
    } @catch (__unused NSException *exception) {
        tableViewInfo = nil;
    }

    // 备用方法：使用 Ivar
    if (!tableViewInfo) {
        Ivar tableViewInfoIvar = class_getInstanceVariable([assist class], "m_tableViewInfo");
        if (tableViewInfoIvar) {
            tableViewInfo = object_getIvar(assist, tableViewInfoIvar);
        }
    }

    if (!tableViewInfo || ![tableViewInfo respondsToSelector:@selector(addSection:)] || ![tableViewInfo respondsToSelector:@selector(getTableView)]) {
        NSLog(@"[WCPL] ContactInfoViewController: Failed to get m_tableViewInfo or invalid tableViewInfo");
        return;
    }

    WCTableViewSectionManager *sectionMgr = [%c(WCTableViewSectionManager) sectionInfoHeader:@"消息屏蔽"];
    WCTableViewNormalCellManager *ignoreCell = [%c(WCTableViewNormalCellManager) switchCellForSel:@selector(wcpl_handleIgnoreUser:) target:self title:@"屏蔽此人消息" on:config.userIgnoreInfo[usrName].boolValue];
    [sectionMgr addCell:ignoreCell];

    // 插入到第1个位置，使选项更显眼
    if ([tableViewInfo respondsToSelector:@selector(insertSection:At:)]) {
        [tableViewInfo insertSection:sectionMgr At:1];
    } else {
        [tableViewInfo addSection:sectionMgr];
    }

    MMTableView *tableView = [tableViewInfo getTableView];
    [tableView reloadData];
}

%new
- (void)wcpl_handleIgnoreUser:(UISwitch *)sender {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if (!config.userIgnoreEnable) {
        sender.on = NO;
        return;
    }

    CContact *contact = self.m_contact;
    NSString *usrName = contact.m_nsUsrName;
    if (usrName.length == 0) {
        sender.on = NO;
        return;
    }
    if ([usrName rangeOfString:@"@chatroom"].location != NSNotFound) {
        sender.on = NO;
        return;
    }

    if (sender.on) {
        config.userIgnoreInfo[usrName] = @(YES);
    } else {
        NSMutableDictionary *igDict = config.userIgnoreInfo;
        [igDict removeObjectForKey:usrName];
        config.userIgnoreInfo = igDict;
    }
    [config saveUserIgnoreNameListToLocalFile];
}

%end

// Hook 好友设置页面（从好友资料页点击"设置"进入的页面）
%hook ContactSettingViewController

- (void)viewWillAppear:(_Bool)arg1 {
    %orig;

    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if (!config.userIgnoreEnable) {
        return;
    }

    // 获取联系人
    CContact *contact = MSHookIvar<CContact *>(self, "m_contact");
    NSString *usrName = contact.m_nsUsrName;
    if (usrName.length == 0) {
        return;
    }
    // 排除群聊
    if ([usrName rangeOfString:@"@chatroom"].location != NSNotFound) {
        return;
    }

    // 检查是否已经添加过（避免重复添加）
    static const void *kWCPLIgnoreSectionAddedKey = &kWCPLIgnoreSectionAddedKey;
    if (objc_getAssociatedObject(self, kWCPLIgnoreSectionAddedKey)) {
        return;
    }

    // 获取 m_tableViewInfo
    MMTableViewInfo *tableViewInfo = MSHookIvar<MMTableViewInfo *>(self, "m_tableViewInfo");
    if (!tableViewInfo || ![tableViewInfo respondsToSelector:@selector(insertSection:At:)] || ![tableViewInfo respondsToSelector:@selector(getTableView)]) {
        NSLog(@"[WCPL] ContactSettingViewController: Failed to get m_tableViewInfo");
        return;
    }

    // 创建消息屏蔽 section
    WCTableViewSectionManager *sectionMgr = [%c(WCTableViewSectionManager) sectionInfoHeader:@"消息屏蔽"];
    WCTableViewNormalCellManager *ignoreCell = [%c(WCTableViewNormalCellManager) switchCellForSel:@selector(wcpl_handleIgnoreUserInSetting:) target:self title:@"屏蔽此人消息" on:config.userIgnoreInfo[usrName].boolValue];
    [sectionMgr addCell:ignoreCell];

    // 插入到第0个位置（最顶部，在编辑备注之前）
    [tableViewInfo insertSection:sectionMgr At:0];

    // 标记已添加
    objc_setAssociatedObject(self, kWCPLIgnoreSectionAddedKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    // 刷新表格
    MMTableView *tableView = [tableViewInfo getTableView];
    [tableView reloadData];
}

%new
- (void)wcpl_handleIgnoreUserInSetting:(UISwitch *)sender {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if (!config.userIgnoreEnable) {
        sender.on = NO;
        return;
    }

    CContact *contact = MSHookIvar<CContact *>(self, "m_contact");
    NSString *usrName = contact.m_nsUsrName;
    if (usrName.length == 0) {
        sender.on = NO;
        return;
    }
    if ([usrName rangeOfString:@"@chatroom"].location != NSNotFound) {
        sender.on = NO;
        return;
    }

    if (sender.on) {
        config.userIgnoreInfo[usrName] = @(YES);
    } else {
        NSMutableDictionary *igDict = config.userIgnoreInfo;
        [igDict removeObjectForKey:usrName];
        config.userIgnoreInfo = igDict;
    }
    [config saveUserIgnoreNameListToLocalFile];
}

%end

// ==================== 临时替换显示（仅本地） ====================

%hook TextMessageCellView

- (id)operationMenuItems {
    NSArray *items = %orig;
    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
    if (!wcpl_isPlainTextMessage(msgWrap)) {
        return items;
    }
    Class menuItemClass = objc_getClass("MMMenuItem");
    if (!menuItemClass) {
        return items;
    }
    SEL action = @selector(wcpl_handleLocalReplaceMenuItem:);
    NSMutableArray *mutableItems = items ? [items mutableCopy] : [NSMutableArray array];
    for (id item in mutableItems) {
        if ([item isKindOfClass:menuItemClass] && [item respondsToSelector:@selector(action)]) {
            @try {
                if ([item action] == action) {
                    return mutableItems;
                }
            } @catch (__unused NSException *exception) {
            }
        }
    }
    id menuItem = [[menuItemClass alloc] initWithTitle:@"小丑" target:self action:action];
    if (menuItem) {
        if ([menuItem respondsToSelector:@selector(setIconImage:)]) {
            UIImage *icon = wcpl_clownMenuIconImage();
            if (icon) {
                @try {
                    ((void (*)(id, SEL, id))objc_msgSend)(menuItem, @selector(setIconImage:), icon);
                } @catch (__unused NSException *exception) {
                }
            }
        }
        [mutableItems addObject:menuItem];
    }
    return mutableItems;
}

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 {
    if (arg1 == @selector(wcpl_handleLocalReplaceMenuItem:)) {
        CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
        return wcpl_isPlainTextMessage(msgWrap);
    }
    return %orig;
}

- (void)updateStatus {
    %orig;
    [self wcpl_applyLocalReplaceIfNeeded];
}

- (void)onCopy:(id)arg1 {
    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
    id viewController = nil;
    if ([self respondsToSelector:@selector(getViewController)]) {
        @try {
            viewController = [self getViewController];
        } @catch (__unused NSException *exception) {
            viewController = nil;
        }
    }
    NSString *replaceText = wcpl_localReplaceText(viewController, msgWrap);
    if (replaceText.length > 0) {
        RichTextView *richTextView = nil;
        @try {
            richTextView = MSHookIvar<RichTextView *>(self, "m_richTextView");
        } @catch (__unused NSException *exception) {
            richTextView = nil;
        }
        if (richTextView && [richTextView respondsToSelector:@selector(setContent:)]) {
            NSString *originText = wcpl_originalContentForMessageWrap(msgWrap) ?: (msgWrap.m_nsContent ?: @"");
            if (originText.length > 0) {
                [richTextView setContent:originText];
            }
            %orig;
            [self wcpl_applyLocalReplaceIfNeeded];
            return;
        }
    }
    %orig;
}

%new
- (void)wcpl_applyLocalReplaceIfNeeded {
    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
    if (!wcpl_isPlainTextMessage(msgWrap)) return;
    id viewController = nil;
    if ([self respondsToSelector:@selector(getViewController)]) {
        @try {
            viewController = [self getViewController];
        } @catch (__unused NSException *exception) {
            viewController = nil;
        }
    }
    BOOL didSync = NO;
    if (viewController) {
        didSync = wcpl_syncLocalReplaceContent(viewController, msgWrap);
    }
    NSString *replaceText = wcpl_localReplaceText(viewController, msgWrap);
    if (replaceText.length == 0 && !didSync) {
        return;
    }
    BOOL needsLayoutRefresh = didSync || replaceText.length > 0;
    RichTextView *richTextView = nil;
    @try {
        richTextView = MSHookIvar<RichTextView *>(self, "m_richTextView");
    } @catch (__unused NSException *exception) {
        richTextView = nil;
    }
    if (!richTextView || ![richTextView respondsToSelector:@selector(setContent:)]) return;
    NSString *displayText = replaceText.length > 0 ? replaceText : msgWrap.m_nsContent;
    if (displayText.length == 0) return;
    if ([richTextView respondsToSelector:@selector(displayedText)]) {
        @try {
            NSString *currentText = [richTextView displayedText];
            if ([currentText isKindOfClass:[NSString class]] && [currentText isEqualToString:displayText]) {
                if (!needsLayoutRefresh) {
                    return;
                }
            }
        } @catch (__unused NSException *exception) {
        }
    }
    [richTextView setContent:displayText];
    if ([richTextView respondsToSelector:@selector(forceDisplayInSync)]) {
        [richTextView forceDisplayInSync];
    }
    if (needsLayoutRefresh) {
        id viewModel = nil;
        if ([self respondsToSelector:@selector(viewModel)]) {
            @try {
                viewModel = [self viewModel];
            } @catch (__unused NSException *exception) {
                viewModel = nil;
            }
        }
        if (viewModel && [viewModel respondsToSelector:@selector(resetLayoutCache)]) {
            @try {
                [viewModel resetLayoutCache];
            } @catch (__unused NSException *exception) {
            }
        }
        if (!objc_getAssociatedObject(self, kWCPLLocalReplaceLayoutingKey)) {
            objc_setAssociatedObject(self, kWCPLLocalReplaceLayoutingKey, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            if ([self respondsToSelector:@selector(resetLayoutCache)]) {
                @try {
                    ((void (*)(id, SEL))objc_msgSend)(self, @selector(resetLayoutCache));
                } @catch (__unused NSException *exception) {
                }
            }
            if ([self respondsToSelector:@selector(setNeedsLayout)]) {
                ((void (*)(id, SEL))objc_msgSend)(self, @selector(setNeedsLayout));
            }
            if ([self respondsToSelector:@selector(layoutIfNeeded)]) {
                ((void (*)(id, SEL))objc_msgSend)(self, @selector(layoutIfNeeded));
            }
            if ([self respondsToSelector:@selector(updateContentOffset)]) {
                @try {
                    [self updateContentOffset];
                } @catch (__unused NSException *exception) {
                }
            }
            objc_setAssociatedObject(self, kWCPLLocalReplaceLayoutingKey, nil, OBJC_ASSOCIATION_ASSIGN);
        }
    }
}

%new
- (void)wcpl_handleLocalReplaceMenuItem:(id)sender {
    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
    if (!wcpl_isPlainTextMessage(msgWrap)) return;

    id viewController = nil;
    if ([self respondsToSelector:@selector(getViewController)]) {
        @try {
            viewController = [self getViewController];
        } @catch (__unused NSException *exception) {
            viewController = nil;
        }
    }
    if (!viewController || ![viewController respondsToSelector:@selector(presentViewController:animated:completion:)]) {
        return;
    }

    NSString *originText = msgWrap.m_nsContent ?: @"";
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"小丑"
                                                                   message:@"仅在当前聊天页面生效，离开后自动恢复"
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.text = originText;
        textField.clearButtonMode = UITextFieldViewModeWhileEditing;
    }];

    __weak typeof(self) weakSelf = self;
    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];
    UIAlertAction *confirmAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        __strong typeof(weakSelf) strongSelf = weakSelf;
        if (!strongSelf) return;
        NSString *input = alert.textFields.firstObject.text ?: @"";
        NSString *trimmed = [input stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (trimmed.length > 0 && !wcpl_originalContentForMessageWrap(msgWrap)) {
            NSString *originText = msgWrap.m_nsContent ?: @"";
            objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, originText, OBJC_ASSOCIATION_COPY_NONATOMIC);
        }
        wcpl_setLocalReplaceText(viewController, msgWrap, trimmed);
        wcpl_syncLocalReplaceContent(viewController, msgWrap);
        if ([viewController respondsToSelector:@selector(clearNodeLayoutCache)]) {
            @try {
                [(BaseMsgContentViewController *)viewController clearNodeLayoutCache];
            } @catch (__unused NSException *exception) {
            }
        }
        if ([viewController respondsToSelector:@selector(reloadNodeWithMessageWrap:)]) {
            @try {
                [viewController reloadNodeWithMessageWrap:msgWrap];
            } @catch (__unused NSException *exception) {
            }
        }
        if ([viewController respondsToSelector:@selector(reloadVisibleNodeWithCellView:)]) {
            @try {
                [(BaseMsgContentViewController *)viewController reloadVisibleNodeWithCellView:strongSelf];
            } @catch (__unused NSException *exception) {
            }
        }

        // 文本变更后强制消息列表重新计算该行布局（否则气泡宽度可能沿用旧缓存，需滚动/刷新才会自适配）
        dispatch_async(dispatch_get_main_queue(), ^{
            if (![viewController respondsToSelector:@selector(getMsgTableView)]) return;
            UITableView *tableView = nil;
            @try {
                id tv = [(BaseMsgContentViewController *)viewController getMsgTableView];
                if ([tv isKindOfClass:[UITableView class]]) {
                    tableView = (UITableView *)tv;
                }
            } @catch (__unused NSException *exception) {
                tableView = nil;
            }
            if (!tableView) return;
            [UIView performWithoutAnimation:^{
                @try {
                    [tableView beginUpdates];
                    [tableView endUpdates];
                } @catch (__unused NSException *exception) {
                }
            }];
        });
    }];

    [alert addAction:cancelAction];
    [alert addAction:confirmAction];

    [viewController presentViewController:alert animated:YES completion:nil];
}

%end

%hook MMLocationMgr

- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3 {
    WCPLRedEnvelopConfig *config = [WCPLRedEnvelopConfig sharedConfig];
    if (config.fakeLocEnable) {
        CLLocation *location = [[CLLocation alloc] initWithLatitude:config.lat longitude:config.lng];
        // 用设定的地理信息代替原来获取真正的地理信息
        %orig(arg1, location, arg3); 
    } else {
        %orig;
    }
}

%end

%hook JailBreakHelper

+ (_Bool)JailBroken {
    return NO;
}

- (_Bool)IsJailBreak {
    return NO;
}

- (_Bool)HasInstallJailbreakPlugin:(id)arg1 {
    return NO;
}

- (_Bool)HasInstallJailbreakPluginInvalidIAPPurchase {
    return NO;
}

%end
