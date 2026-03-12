// Merged from: WCPLVoiceForwardCoreA.xm + CoreB.xm

#import "WCPLPureHelpers.h"

%group WCPLVoiceForwardCoreHookGroup

static UIImage *wcpl_voiceForwardMenuIconImage(void) {
    static UIImage *icon = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSString *svg =
            @"<svg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 24 24' width='24' height='24' fill='none'>"
            "<path d='M5 10V14' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round'/>"
            "<path d='M8 7V17' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round'/>"
            "<path d='M11 9V15' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round'/>"
            "<path d='M14 12C14 9.5 16 7.5 18.5 7.5H20.5' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round'/>"
            "<path d='M18 5L21 7.5L18 10' stroke='#FFFFFF' stroke-width='1.5' stroke-linecap='round' stroke-linejoin='round'/>"
            "</svg>";
        NSData *data = [svg dataUsingEncoding:NSUTF8StringEncoding];
        id image = nil;
        Class themeProxyClass = objc_getClass("WAThemeProxy");
        SEL svgFromDataSel = @selector(svgImageFromData:);
        if (themeProxyClass && [themeProxyClass respondsToSelector:svgFromDataSel]) {
            @try {
                image = ((id (*)(id, SEL, id))objc_msgSend)(themeProxyClass, svgFromDataSel, data);
            } @catch (__unused NSException *exception) {}
        }
        if ([image isKindOfClass:[UIImage class]]) {
            icon = (UIImage *)image;
        }
        if (!icon && [UIImage respondsToSelector:@selector(systemImageNamed:)]) {
            UIImage *symbol = nil;
            if ([UIImage respondsToSelector:@selector(systemImageNamed:withConfiguration:)]) {
                UIImageSymbolConfiguration *config = [UIImageSymbolConfiguration configurationWithPointSize:16 weight:UIImageSymbolWeightRegular scale:UIImageSymbolScaleMedium];
                symbol = [UIImage systemImageNamed:@"arrowshape.turn.up.right" withConfiguration:config];
            }
            if (!symbol) symbol = [UIImage systemImageNamed:@"arrowshape.turn.up.right"];
            if (symbol) icon = symbol;
        }
        if (icon && [icon respondsToSelector:@selector(imageWithRenderingMode:)]) {
            icon = [icon imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
        }
    });
    return icon;
}

static BOOL wcpl_isVoiceForwardFeatureEnabled(void) {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    return config ? config.voiceForwardFeatureEnable : YES;
}

static BOOL wcpl_isVoiceMessage(CMessageWrap *msgWrap) {
    return (msgWrap && msgWrap.m_uiMessageType == 34);
}

static NSString *wcpl_voiceAudioPathFromWrap(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return nil;
    }
    Class msgWrapClass = objc_getClass("CMessageWrap");
    SEL selector = @selector(getPathOfAudio:);
    if (!(msgWrapClass && [msgWrapClass respondsToSelector:selector])) {
        return nil;
    }
    @try {
        id value = ((id (*)(id, SEL, id))objc_msgSend)(msgWrapClass, selector, msgWrap);
        if ([value isKindOfClass:[NSString class]]) {
            return (NSString *)value;
        }
    } @catch (__unused NSException *exceptionGetAudioPath) {
    }
    return nil;
}

static unsigned long long wcpl_fileSizeAtPath(NSString *path) {
    if (![path isKindOfClass:[NSString class]] || path.length == 0) {
        return 0;
    }
    NSDictionary *attrs = [[NSFileManager defaultManager] attributesOfItemAtPath:path error:nil];
    if (![attrs isKindOfClass:[NSDictionary class]]) {
        return 0;
    }
    NSNumber *fileSize = attrs[NSFileSize];
    return [fileSize isKindOfClass:[NSNumber class]] ? fileSize.unsignedLongLongValue : 0;
}

static void wcpl_startDownloadVoiceIfNeeded(CMessageWrap *msgWrap, NSString *sceneTag) {
    if (!wcpl_isVoiceMessage(msgWrap)) {
        return;
    }

    NSString *audioPath = wcpl_voiceAudioPathFromWrap(msgWrap);
    unsigned long long audioSize = wcpl_fileSizeAtPath(audioPath);
    if (audioSize > 0) {
        return;
    }

    id messageMgr = wcpl_serviceByClass(objc_getClass("CMessageMgr"));
    if (!(messageMgr && [messageMgr respondsToSelector:@selector(StartDownloadByRecordMsg:)])) {
        WCPLLogWarning(@"[语音转发] 语音预下载不可用: scene=%@ path=%@",
                       sceneTag ?: @"(nil)",
                       audioPath ?: @"(nil)");
        return;
    }

    @try {
        BOOL started = ((BOOL (*)(id, SEL, id))objc_msgSend)(messageMgr, @selector(StartDownloadByRecordMsg:), msgWrap);
        WCPLLogDebug(@"[语音转发] 语音预下载触发: scene=%@ started=%d path=%@ size=%llu",
                     sceneTag ?: @"(nil)",
                     started ? 1 : 0,
                     audioPath ?: @"(nil)",
                     audioSize);
    } @catch (__unused NSException *exceptionStartDownload) {
        WCPLLogWarning(@"[语音转发] 语音预下载异常: scene=%@ path=%@",
                       sceneTag ?: @"(nil)",
                       audioPath ?: @"(nil)");
    }
}

static id wcpl_serviceByClass(Class serviceClass) {
    if (!serviceClass) {
        return nil;
    }

    Class serviceCenterClass = objc_getClass("MMServiceCenter");
    if (!serviceCenterClass || ![serviceCenterClass respondsToSelector:@selector(defaultCenter)]) {
        return nil;
    }

    id serviceCenter = nil;
    @try {
        serviceCenter = ((id (*)(id, SEL))objc_msgSend)(serviceCenterClass, @selector(defaultCenter));
    } @catch (__unused NSException *exception) {
        serviceCenter = nil;
    }
    if (!serviceCenter || ![serviceCenter respondsToSelector:@selector(getService:)]) {
        return nil;
    }

    @try {
        return ((id (*)(id, SEL, Class))objc_msgSend)(serviceCenter, @selector(getService:), serviceClass);
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static id wcpl_createVoiceForwardMenuItem(Class menuItemClass, id cell, SEL action) {
    if (!menuItemClass || !cell || !action) {
        return nil;
    }

    NSString *title = @"语音转发";
    UIImage *icon = wcpl_voiceForwardMenuIconImage();
    id menuItem = nil;

    if (icon && [menuItemClass instancesRespondToSelector:@selector(initWithTitle:icon:target:action:)]) {
        @try {
            menuItem = [[menuItemClass alloc] initWithTitle:title icon:icon target:cell action:action];
        } @catch (__unused NSException *exception) {
        }
    }

    if (!menuItem && [menuItemClass instancesRespondToSelector:@selector(initWithTitle:target:action:)]) {
        @try {
            menuItem = [[menuItemClass alloc] initWithTitle:title target:cell action:action];
        } @catch (__unused NSException *exception) {
        }
    }

    if (menuItem && icon) {
        wcpl_applyMenuItemIcon(menuItem, icon);
    }
    return menuItem;
}

static NSArray *wcpl_injectVoiceForwardMenuItemIfNeeded(id cell, NSArray *items) {
    if (!wcpl_isVoiceForwardFeatureEnabled()) {
        return items;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(cell);
    if (!wcpl_isVoiceMessage(msgWrap)) {
        return items;
    }
    wcpl_startDownloadVoiceIfNeeded(msgWrap, @"menu_inject");

    Class menuItemClass = objc_getClass("MMMenuItem");
    if (!menuItemClass) {
        return items;
    }

    SEL nativeForwardAction = @selector(onForward:);
    SEL nativeDoForwardAction = @selector(doForward);
    SEL bridgeAction = @selector(wcpl_handleVoiceForwardMenuItem:);
    SEL injectedAction = [cell respondsToSelector:nativeForwardAction] ? nativeForwardAction :
                         ([cell respondsToSelector:nativeDoForwardAction] ? nativeDoForwardAction : bridgeAction);

    NSMutableArray *mutableItems = items ? [items mutableCopy] : [NSMutableArray array];

    for (id item in mutableItems) {
        if (![item isKindOfClass:menuItemClass] || ![item respondsToSelector:@selector(action)]) {
            continue;
        }
        @try {
            SEL itemAction = ((SEL (*)(id, SEL))objc_msgSend)(item, @selector(action));
            if (itemAction == bridgeAction ||
                itemAction == injectedAction ||
                itemAction == nativeForwardAction ||
                itemAction == nativeDoForwardAction) {
                return mutableItems;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    id menuItem = wcpl_createVoiceForwardMenuItem(menuItemClass, cell, injectedAction);
    if (menuItem) {
        [mutableItems addObject:menuItem];
        WCPLLogDebug(@"[语音转发] 注入长按菜单: class=%@ action=%@",
                     NSStringFromClass([cell class]) ?: @"(nil)",
                     NSStringFromSelector(injectedAction) ?: @"(nil)");
    }
    return mutableItems;
}

static BOOL wcpl_tryForwardObjObj(id target,
                                  SEL selector,
                                  id arg1,
                                  id arg2,
                                  NSString *routeTag) {
    if (!(target && selector && arg1 && arg2)) {
        return NO;
    }
    if (![target respondsToSelector:selector]) {
        return NO;
    }
    @try {
        ((void (*)(id, SEL, id, id))objc_msgSend)(target, selector, arg1, arg2);
        WCPLLogInfo(@"[语音转发] 命中链路 route=%@", routeTag ?: @"unknown");
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[语音转发] 链路异常 route=%@ reason=%@",
                       routeTag ?: @"unknown",
                       exception.reason ?: @"unknown");
        return NO;
    }
}

static BOOL wcpl_tryForwardObjObjUInt(id target,
                                      SEL selector,
                                      id arg1,
                                      id arg2,
                                      unsigned int arg3,
                                      NSString *routeTag) {
    if (!(target && selector && arg1 && arg2)) {
        return NO;
    }
    if (![target respondsToSelector:selector]) {
        return NO;
    }
    @try {
        ((void (*)(id, SEL, id, id, unsigned int))objc_msgSend)(target, selector, arg1, arg2, arg3);
        WCPLLogInfo(@"[语音转发] 命中链路 route=%@", routeTag ?: @"unknown");
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[语音转发] 链路异常 route=%@ reason=%@",
                       routeTag ?: @"unknown",
                       exception.reason ?: @"unknown");
        return NO;
    }
}

static BOOL wcpl_tryForwardObjObjUIntUInt(id target,
                                          SEL selector,
                                          id arg1,
                                          id arg2,
                                          unsigned int arg3,
                                          unsigned int arg4,
                                          NSString *routeTag) {
    if (!(target && selector && arg1 && arg2)) {
        return NO;
    }
    if (![target respondsToSelector:selector]) {
        return NO;
    }
    @try {
        ((void (*)(id, SEL, id, id, unsigned int, unsigned int))objc_msgSend)(target,
                                                                               selector,
                                                                               arg1,
                                                                               arg2,
                                                                               arg3,
                                                                               arg4);
        WCPLLogInfo(@"[语音转发] 命中链路 route=%@", routeTag ?: @"unknown");
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[语音转发] 链路异常 route=%@ reason=%@",
                       routeTag ?: @"unknown",
                       exception.reason ?: @"unknown");
        return NO;
    }
}

static BOOL wcpl_tryForwardObjObjObj(id target,
                                     SEL selector,
                                     id arg1,
                                     id arg2,
                                     id arg3,
                                     NSString *routeTag) {
    if (!(target && selector && arg1 && arg2 && arg3)) {
        return NO;
    }
    if (![target respondsToSelector:selector]) {
        return NO;
    }
    @try {
        ((void (*)(id, SEL, id, id, id))objc_msgSend)(target, selector, arg1, arg2, arg3);
        WCPLLogInfo(@"[语音转发] 命中链路 route=%@", routeTag ?: @"unknown");
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[语音转发] 链路异常 route=%@ reason=%@",
                       routeTag ?: @"unknown",
                       exception.reason ?: @"unknown");
        return NO;
    }
}

static BOOL wcpl_tryForwardObjObjObjLong(id target,
                                         SEL selector,
                                         id arg1,
                                         id arg2,
                                         id arg3,
                                         long long arg4,
                                         NSString *routeTag) {
    if (!(target && selector && arg1 && arg2 && arg3)) {
        return NO;
    }
    if (![target respondsToSelector:selector]) {
        return NO;
    }
    @try {
        ((void (*)(id, SEL, id, id, id, long long))objc_msgSend)(target, selector, arg1, arg2, arg3, arg4);
        WCPLLogInfo(@"[语音转发] 命中链路 route=%@", routeTag ?: @"unknown");
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[语音转发] 链路异常 route=%@ reason=%@",
                       routeTag ?: @"unknown",
                       exception.reason ?: @"unknown");
        return NO;
    }
}

static BOOL wcpl_tryForwardObjObjUIntObj(id target,
                                         SEL selector,
                                         id arg1,
                                         id arg2,
                                         unsigned int arg3,
                                         id arg4,
                                         NSString *routeTag) {
    if (!(target && selector && arg1 && arg2)) {
        return NO;
    }
    if (![target respondsToSelector:selector]) {
        return NO;
    }
    @try {
        ((id (*)(id, SEL, id, id, unsigned int, id))objc_msgSend)(target,
                                                                   selector,
                                                                   arg1,
                                                                   arg2,
                                                                   arg3,
                                                                   arg4);
        WCPLLogInfo(@"[语音转发] 命中链路 route=%@", routeTag ?: @"unknown");
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[语音转发] 链路异常 route=%@ reason=%@",
                       routeTag ?: @"unknown",
                       exception.reason ?: @"unknown");
        return NO;
    }
}

static NSString *wcpl_vmiyou_currentSelfUserName(void) {
    id contactMgr = wcpl_serviceByClass(objc_getClass("CContactMgr"));
    if (!(contactMgr && [contactMgr respondsToSelector:@selector(getSelfContact)])) {
        return nil;
    }

    @try {
        id selfContact = ((id (*)(id, SEL))objc_msgSend)(contactMgr, @selector(getSelfContact));
        NSString *userName = wcpl_safeUserNameFromObject(selfContact);
        if (userName.length > 0) {
            return userName;
        }
    } @catch (__unused NSException *exception) {
    }
    return nil;
}

static NSString *wcpl_vmiyou_generateClientMsgID(NSString *selfUserName) {
    NSString *sender = wcpl_trimString(selfUserName);
    if (sender.length == 0) {
        sender = wcpl_vmiyou_currentSelfUserName();
    }
    return WCPLGenerateClientMsgID(sender);
}

static void wcpl_vmiyou_applyClientMsgID(CMessageWrap *sendWrap, NSString *clientMsgID) {
    if (!(sendWrap && clientMsgID.length > 0)) {
        return;
    }

    SEL setClientMsgIDSelector = NSSelectorFromString(@"setM_nsClientMsgID:");
    if (setClientMsgIDSelector && [sendWrap respondsToSelector:setClientMsgIDSelector]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, setClientMsgIDSelector, clientMsgID);
            return;
        } @catch (__unused NSException *exceptionSetClientMsgID) {
        }
    }
    @try {
        [sendWrap setValue:clientMsgID forKey:@"m_nsClientMsgID"];
        return;
    } @catch (__unused NSException *exceptionClientMsgIDUpper) {
    }
    @try {
        [sendWrap setValue:clientMsgID forKey:@"m_nsClientMsgId"];
    } @catch (__unused NSException *exceptionClientMsgIDLower) {
    }
}

static void wcpl_vmiyou_resetIdentity(CMessageWrap *sendWrap) {
    if (!sendWrap) {
        return;
    }

    if ([sendWrap respondsToSelector:@selector(setM_uiMesLocalID:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiMesLocalID:), 0);
        } @catch (__unused NSException *exceptionSetLocalID) {
        }
    }
    @try {
        [sendWrap setValue:@(0) forKey:@"m_uiMesLocalID"];
    } @catch (__unused NSException *exceptionLocalIDKVC) {
    }

    if ([sendWrap respondsToSelector:@selector(setM_n64MesSvrID:)]) {
        @try {
            ((void (*)(id, SEL, long long))objc_msgSend)(sendWrap, @selector(setM_n64MesSvrID:), 0);
        } @catch (__unused NSException *exceptionSetSvrID) {
        }
    }
    @try {
        [sendWrap setValue:@((long long)0) forKey:@"m_n64MesSvrID"];
    } @catch (__unused NSException *exceptionSvrIDKVC) {
    }

    if ([sendWrap respondsToSelector:@selector(setM_uiStatus:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiStatus:), 0);
        } @catch (__unused NSException *exceptionSetStatus) {
        }
    }
    @try {
        [sendWrap setValue:@(0) forKey:@"m_uiStatus"];
    } @catch (__unused NSException *exceptionStatusKVC) {
    }

    unsigned int now = (unsigned int)[[NSDate date] timeIntervalSince1970];
    if ([sendWrap respondsToSelector:@selector(setM_uiCreateTime:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiCreateTime:), now);
        } @catch (__unused NSException *exceptionSetCreateTime) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiSendTime:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiSendTime:), now);
        } @catch (__unused NSException *exceptionSetSendTime) {
        }
    }
}

static void wcpl_vmiyou_prepareRoute(CMessageWrap *sendWrap,
                                     NSString *chatName,
                                     NSString *selfUserName) {
    if (!(sendWrap && chatName.length > 0)) {
        return;
    }

    if ([sendWrap respondsToSelector:@selector(setM_nsToUsr:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsToUsr:), chatName);
        } @catch (__unused NSException *exceptionSetTo) {
        }
    }
    if (selfUserName.length > 0 && [sendWrap respondsToSelector:@selector(setM_nsFromUsr:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsFromUsr:), selfUserName);
        } @catch (__unused NSException *exceptionSetFrom) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiIsSenderStatus:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiIsSenderStatus:), 1);
        } @catch (__unused NSException *exceptionSetSenderStatus) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_nsRealChatUsr:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsRealChatUsr:), nil);
        } @catch (__unused NSException *exceptionSetRealChatUsr) {
        }
    }
    wcpl_vmiyou_applyClientMsgID(sendWrap, wcpl_vmiyou_generateClientMsgID(selfUserName));
    @try {
        [sendWrap setValue:@(sendWrap.m_uiMessageType) forKey:@"m_uiMsgType"];
    } @catch (__unused NSException *exceptionSetMsgType) {
    }
}

static NSString *wcpl_vmiyou_audioPathForMessage(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return nil;
    }
    Class msgWrapClass = objc_getClass("CMessageWrap");
    SEL selector = @selector(getPathOfAudio:);
    if (!(msgWrapClass && [msgWrapClass respondsToSelector:selector])) {
        return nil;
    }
    @try {
        id value = ((id (*)(id, SEL, id))objc_msgSend)(msgWrapClass, selector, msgWrap);
        if ([value isKindOfClass:[NSString class]]) {
            return (NSString *)value;
        }
    } @catch (__unused NSException *exceptionGetAudioPath) {
    }
    return nil;
}

static NSData *wcpl_vmiyou_loadVoiceAudioData(CMessageWrap *msgWrap, NSString **outPath) {
    if (outPath) {
        *outPath = nil;
    }
    NSString *audioPath = wcpl_vmiyou_audioPathForMessage(msgWrap);
    if (outPath) {
        *outPath = audioPath;
    }
    if (audioPath.length == 0) {
        return nil;
    }
    NSError *readError = nil;
    NSData *audioData = [NSData dataWithContentsOfFile:audioPath
                                               options:NSDataReadingMappedIfSafe
                                                 error:&readError];
    if (audioData.length == 0) {
        return nil;
    }

    // 防止异常大文件导致内存暴涨甚至 OOM；语音通常很小，超过阈值直接拒绝。
    static const NSUInteger kWCPLVoiceAudioMaxBytes = 20 * 1024 * 1024; // 20MB
    if (audioData.length > kWCPLVoiceAudioMaxBytes) {
        WCPLLogWarning(@"[语音转发] 音频文件过大，已跳过: size=%lu path=%@ err=%@",
                       (unsigned long)audioData.length,
                       audioPath ?: @"",
                       readError.localizedDescription ?: @"");
        return nil;
    }

    return audioData;
}

static unsigned int wcpl_vmiyou_extractVoiceAttrUInt(NSString *xml, NSString *attrName) {
    return WCPLExtractVoiceAttrUInt(xml, attrName);
}

static unsigned int wcpl_vmiyou_voiceLengthMs(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return 0;
    }
    unsigned int lengthMs = wcpl_vmiyou_extractVoiceAttrUInt(msgWrap.m_nsContent, @"voicelength");
    if (lengthMs > 0) {
        return lengthMs;
    }
    unsigned int duration = 0;
    if ([msgWrap respondsToSelector:@selector(m_duration)]) {
        @try {
            duration = ((unsigned int (*)(id, SEL))objc_msgSend)(msgWrap, @selector(m_duration));
        } @catch (__unused NSException *exceptionDuration) {
        }
    }
    if (duration > 300) {
        return duration;
    }
    if (duration > 0) {
        return duration * 1000;
    }
    return 0;
}

static unsigned int wcpl_vmiyou_voiceTime(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return 1;
    }
    unsigned int voiceTime = 0;
    if ([msgWrap respondsToSelector:@selector(m_uiVoiceTime)]) {
        @try {
            voiceTime = ((unsigned int (*)(id, SEL))objc_msgSend)(msgWrap, @selector(m_uiVoiceTime));
        } @catch (__unused NSException *exceptionVoiceTime) {
        }
    }
    if (voiceTime > 300) {
        voiceTime = (voiceTime + 999) / 1000;
    }
    if (voiceTime <= 1) {
        unsigned int lengthMs = wcpl_vmiyou_voiceLengthMs(msgWrap);
        if (lengthMs > 0) {
            unsigned int parsedSeconds = (lengthMs + 999) / 1000;
            if (parsedSeconds > voiceTime) {
                voiceTime = parsedSeconds;
            }
        }
    }
    return voiceTime > 0 ? voiceTime : 1;
}

static unsigned int wcpl_vmiyou_voiceFormat(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return 4;
    }
    unsigned int voiceFormat = 0;
    if ([msgWrap respondsToSelector:@selector(m_uiVoiceFormat)]) {
        @try {
            voiceFormat = ((unsigned int (*)(id, SEL))objc_msgSend)(msgWrap, @selector(m_uiVoiceFormat));
        } @catch (__unused NSException *exceptionVoiceFormat) {
        }
    }
    if (voiceFormat == 0) {
        voiceFormat = wcpl_vmiyou_extractVoiceAttrUInt(msgWrap.m_nsContent, @"voiceformat");
    }
    return voiceFormat > 0 ? voiceFormat : 4;
}

static NSString *wcpl_voiceForwardTraceWrap(CMessageWrap *wrap) {
    if (!wrap) {
        return @"(nil)";
    }
    NSString *content = [wrap.m_nsContent isKindOfClass:[NSString class]] ? wrap.m_nsContent : @"";
    return [NSString stringWithFormat:@"type=%u local=%u svr=%lld voiceLen=%u contentLen=%lu",
                                      wrap.m_uiMessageType,
                                      wrap.m_uiMesLocalID,
                                      wrap.m_n64MesSvrID,
                                      wcpl_vmiyou_voiceLengthMs(wrap),
                                      (unsigned long)content.length];
}

static const void *kWCPLVoiceForwardPendingTokenKey = &kWCPLVoiceForwardPendingTokenKey;
static const void *kWCPLVoiceForwardPendingWrapKey = &kWCPLVoiceForwardPendingWrapKey;
static const void *kWCPLVoiceForwardPendingViewControllerKey = &kWCPLVoiceForwardPendingViewControllerKey;
static const void *kWCPLVoiceForwardPendingForwardTypeKey = &kWCPLVoiceForwardPendingForwardTypeKey;
static const void *kWCPLVoiceForwardTargetObservedKey = &kWCPLVoiceForwardTargetObservedKey;

static unsigned long long wcpl_voiceForwardNextToken(void) {
    static unsigned long long token = 0;
    // 避免使用全局 @synchronized([NSObject class])，用原子自增生成 token。
    return (unsigned long long)__sync_add_and_fetch(&token, 1);
}

static void wcpl_voiceForwardClearPendingContext(id manager) {
    if (!manager) {
        return;
    }
    objc_setAssociatedObject(manager, kWCPLVoiceForwardPendingTokenKey, nil, OBJC_ASSOCIATION_ASSIGN);
    objc_setAssociatedObject(manager, kWCPLVoiceForwardPendingWrapKey, nil, OBJC_ASSOCIATION_ASSIGN);
    objc_setAssociatedObject(manager, kWCPLVoiceForwardPendingViewControllerKey, nil, OBJC_ASSOCIATION_ASSIGN);
    objc_setAssociatedObject(manager, kWCPLVoiceForwardPendingForwardTypeKey, nil, OBJC_ASSOCIATION_ASSIGN);
    objc_setAssociatedObject(manager, kWCPLVoiceForwardTargetObservedKey, nil, OBJC_ASSOCIATION_ASSIGN);
}

static void wcpl_voiceForwardSetPendingContext(id manager, CMessageWrap *wrap, id viewController, long long forwardType) {
    if (!(manager && wrap && wcpl_isVoiceMessage(wrap))) {
        return;
    }
    unsigned long long token = wcpl_voiceForwardNextToken();
    objc_setAssociatedObject(manager,
                             kWCPLVoiceForwardPendingTokenKey,
                             @(token),
                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(manager,
                             kWCPLVoiceForwardPendingWrapKey,
                             wrap,
                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if ([viewController isKindOfClass:[UIViewController class]]) {
        objc_setAssociatedObject(manager,
                                 kWCPLVoiceForwardPendingViewControllerKey,
                                 viewController,
                                 OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    } else {
        objc_setAssociatedObject(manager,
                                 kWCPLVoiceForwardPendingViewControllerKey,
                                 nil,
                                 OBJC_ASSOCIATION_ASSIGN);
    }
    objc_setAssociatedObject(manager,
                             kWCPLVoiceForwardPendingForwardTypeKey,
                             @(forwardType),
                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(manager,
                             kWCPLVoiceForwardTargetObservedKey,
                             @NO,
                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static void wcpl_voiceForwardMarkTargetObserved(id manager, id target) {
    if (!(manager && target)) {
        return;
    }
    objc_setAssociatedObject(manager,
                             kWCPLVoiceForwardTargetObservedKey,
                             @YES,
                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static BOOL wcpl_voiceForwardTargetObserved(id manager) {
    NSNumber *observed = objc_getAssociatedObject(manager, kWCPLVoiceForwardTargetObservedKey);
    return observed.boolValue;
}

static void wcpl_logForwardManagerMethodCatalogIfNeeded(id manager) {
    static BOOL logged = NO;
    if (logged || !manager) {
        return;
    }
    logged = YES;

    NSMutableArray<NSString *> *entries = [NSMutableArray array];
    for (Class cls = [manager class]; cls && cls != [NSObject class]; cls = class_getSuperclass(cls)) {
        unsigned int methodCount = 0;
        Method *methods = class_copyMethodList(cls, &methodCount);
        if (!methods) {
            continue;
        }
        for (unsigned int idx = 0; idx < methodCount; idx++) {
            Method m = methods[idx];
            SEL sel = method_getName(m);
            const char *name = sel_getName(sel);
            if (!name) {
                continue;
            }
            NSString *selectorName = [NSString stringWithUTF8String:name];
            if (selectorName.length == 0) {
                continue;
            }
            NSString *lower = selectorName.lowercaseString;
            if ([lower rangeOfString:@"forward"].location == NSNotFound &&
                [lower rangeOfString:@"contact"].location == NSNotFound &&
                [lower rangeOfString:@"select"].location == NSNotFound) {
                continue;
            }
            const char *type = method_getTypeEncoding(m);
            [entries addObject:[NSString stringWithFormat:@"%@::%@::%s",
                                NSStringFromClass(cls) ?: @"(nil)",
                                selectorName,
                                type ?: ""]];
        }
        free(methods);
    }
    [entries sortUsingSelector:@selector(localizedCaseInsensitiveCompare:)];

    NSUInteger limit = MIN((NSUInteger)80, entries.count);
    for (NSUInteger i = 0; i < limit; i++) {
        WCPLLogInfo(@"[语音转发][catalog] %@", entries[i]);
    }
    WCPLLogInfo(@"[语音转发][catalog] total=%lu shown=%lu",
                (unsigned long)entries.count,
                (unsigned long)limit);
}

static NSString *wcpl_voiceForwardTraceTarget(id targetContact) {
    if (!targetContact) {
        return @"(nil)";
    }
    NSString *userName = wcpl_safeUserNameFromObject(targetContact);
    if (userName.length > 0) {
        return userName;
    }
    if ([targetContact isKindOfClass:[NSString class]]) {
        NSString *text = wcpl_trimString((NSString *)targetContact);
        if (text.length > 0) {
            return text;
        }
    }
    return NSStringFromClass([targetContact class]) ?: @"(unknown)";
}

static BOOL wcpl_voiceForwardSelectorLooksUseful(NSString *selectorName) {
    if (selectorName.length == 0) {
        return NO;
    }
    NSString *lower = selectorName.lowercaseString;
    NSArray<NSString *> *tokens = @[@"contact", @"select", @"target", @"pick", @"choose", @"forward"];
    for (NSString *token in tokens) {
        if ([lower rangeOfString:token].location != NSNotFound) {
            return YES;
        }
    }
    return NO;
}

static BOOL wcpl_voiceForwardClassLooksUseful(NSString *className) {
    if (className.length == 0) {
        return NO;
    }
    NSString *lower = className.lowercaseString;
    NSArray<NSString *> *tokens = @[@"forwardmessage", @"logiccontroller", @"contact", @"select", @"target", @"picker"];
    for (NSString *token in tokens) {
        if ([lower rangeOfString:token].location != NSNotFound) {
            return YES;
        }
    }
    return NO;
}

static void wcpl_logForwardPayloadCatalogIfNeeded(id payload) {
    if (!payload) {
        return;
    }
    NSString *className = NSStringFromClass([payload class]) ?: @"";
    if (!wcpl_voiceForwardClassLooksUseful(className)) {
        return;
    }

    static NSMutableSet<NSString *> *loggedClassNames = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        loggedClassNames = [NSMutableSet set];
    });

    @synchronized (loggedClassNames) {
        if ([loggedClassNames containsObject:className]) {
            return;
        }
        [loggedClassNames addObject:className];
    }

    NSMutableArray<NSString *> *entries = [NSMutableArray array];
    for (Class cls = [payload class]; cls && cls != [NSObject class]; cls = class_getSuperclass(cls)) {
        unsigned int methodCount = 0;
        Method *methods = class_copyMethodList(cls, &methodCount);
        if (!methods) {
            continue;
        }
        for (unsigned int idx = 0; idx < methodCount; idx++) {
            SEL sel = method_getName(methods[idx]);
            const char *name = sel_getName(sel);
            if (!name) {
                continue;
            }
            NSString *selectorName = [NSString stringWithUTF8String:name];
            if (!wcpl_voiceForwardSelectorLooksUseful(selectorName)) {
                continue;
            }
            [entries addObject:[NSString stringWithFormat:@"%@::%@",
                                NSStringFromClass(cls) ?: @"(nil)",
                                selectorName ?: @"(nil)"]];
        }
        free(methods);
    }

    [entries sortUsingSelector:@selector(localizedCaseInsensitiveCompare:)];
    NSUInteger limit = MIN((NSUInteger)50, entries.count);
    for (NSUInteger idx = 0; idx < limit; idx++) {
        WCPLLogInfo(@"[语音转发][payload-catalog] %@", entries[idx]);
    }
    WCPLLogInfo(@"[语音转发][payload-catalog] class=%@ total=%lu shown=%lu",
                className,
                (unsigned long)entries.count,
                (unsigned long)limit);
}

static void wcpl_voiceForwardCollectTargetsFromPayload(id payload,
                                                       NSMutableDictionary<NSString *, id> *targetMap,
                                                       NSMutableSet<NSValue *> *visited,
                                                       NSUInteger depth) {
    if (!(payload && targetMap && visited) || depth > 4) {
        return;
    }

    NSValue *identity = [NSValue valueWithPointer:(__bridge const void *)(payload)];
    if ([visited containsObject:identity]) {
        return;
    }
    [visited addObject:identity];

    if ([payload isKindOfClass:[NSArray class]]) {
        for (id item in (NSArray *)payload) {
            wcpl_voiceForwardCollectTargetsFromPayload(item, targetMap, visited, depth + 1);
        }
        return;
    }
    if ([payload isKindOfClass:[NSSet class]]) {
        for (id item in (NSSet *)payload) {
            wcpl_voiceForwardCollectTargetsFromPayload(item, targetMap, visited, depth + 1);
        }
        return;
    }
    if ([payload isKindOfClass:[NSDictionary class]]) {
        NSDictionary *dict = (NSDictionary *)payload;
        for (id value in dict.allValues) {
            wcpl_voiceForwardCollectTargetsFromPayload(value, targetMap, visited, depth + 1);
        }
        return;
    }

    NSString *userName = wcpl_safeUserNameFromObject(payload);
    if (userName.length == 0 && [payload isKindOfClass:[NSString class]]) {
        userName = wcpl_trimString((NSString *)payload);
    }
    if (userName.length > 0) {
        if (!targetMap[userName]) {
            targetMap[userName] = payload;
        }
        return;
    }

    NSString *className = NSStringFromClass([payload class]) ?: @"";
    if (!wcpl_voiceForwardClassLooksUseful(className)) {
        return;
    }

    wcpl_logForwardPayloadCatalogIfNeeded(payload);

    NSArray<NSString *> *keys = @[
        @"selectedContacts",
        @"selectedContact",
        @"selectedContactList",
        @"selectedContactsArray",
        @"allSelectedContacts",
        @"m_selectedContacts",
        @"m_arrSelectedContacts",
        @"m_arrSelectContacts",
        @"m_selectContacts",
        @"targets",
        @"targetContacts",
        @"targetContact",
        @"toContacts",
        @"toContact",
        @"contacts",
        @"pickedContacts",
        @"pickedUsers",
        @"selectedUsers",
        @"selectedItems",
        @"m_targets",
        @"m_targetContacts",
        @"m_toContacts",
        @"m_contacts",
        @"m_selectedUsers",
        @"m_oSelectContacts",
        @"m_oTargetContact",
        @"m_oToContact"
    ];

    for (NSString *key in keys) {
        SEL selector = NSSelectorFromString(key);
        if ([payload respondsToSelector:selector]) {
            @try {
                id value = ((id (*)(id, SEL))objc_msgSend)(payload, selector);
                wcpl_voiceForwardCollectTargetsFromPayload(value, targetMap, visited, depth + 1);
            } @catch (__unused NSException *exceptionSelector) {
            }
        }

        @try {
            id value = [payload valueForKey:key];
            wcpl_voiceForwardCollectTargetsFromPayload(value, targetMap, visited, depth + 1);
        } @catch (__unused NSException *exceptionKVC) {
        }

        const char *ivarName = key.UTF8String;
        id ivarValue = wcpl_safeObjectIvar(payload, ivarName);
        wcpl_voiceForwardCollectTargetsFromPayload(ivarValue, targetMap, visited, depth + 1);
        if (![key hasPrefix:@"_"]) {
            NSString *underscoreKey = [@"_" stringByAppendingString:key];
            id underscoredValue = wcpl_safeObjectIvar(payload, underscoreKey.UTF8String);
            wcpl_voiceForwardCollectTargetsFromPayload(underscoredValue, targetMap, visited, depth + 1);
        }
    }

    if ([payload respondsToSelector:@selector(allValues)]) {
        @try {
            id values = ((id (*)(id, SEL))objc_msgSend)(payload, @selector(allValues));
            wcpl_voiceForwardCollectTargetsFromPayload(values, targetMap, visited, depth + 1);
        } @catch (__unused NSException *exceptionAllValues) {
        }
    }
    if ([payload respondsToSelector:@selector(allObjects)]) {
        @try {
            id values = ((id (*)(id, SEL))objc_msgSend)(payload, @selector(allObjects));
            wcpl_voiceForwardCollectTargetsFromPayload(values, targetMap, visited, depth + 1);
        } @catch (__unused NSException *exceptionAllObjects) {
        }
    }
}

static NSArray<id> *wcpl_voiceForwardExtractTargetsFromPayload(id payload) {
    NSMutableDictionary<NSString *, id> *targetMap = [NSMutableDictionary dictionary];
    NSMutableSet<NSValue *> *visited = [NSMutableSet set];
    wcpl_voiceForwardCollectTargetsFromPayload(payload, targetMap, visited, 0);
    return targetMap.allValues ?: @[];
}

static NSString *wcpl_voiceForwardTargetsSummary(NSArray<id> *targets) {
    if (![targets isKindOfClass:[NSArray class]] || targets.count == 0) {
        return @"(empty)";
    }
    NSMutableArray<NSString *> *items = [NSMutableArray array];
    NSUInteger limit = MIN((NSUInteger)6, targets.count);
    for (NSUInteger idx = 0; idx < limit; idx++) {
        [items addObject:wcpl_voiceForwardTraceTarget(targets[idx]) ?: @"(unknown)"];
    }
    if (targets.count > limit) {
        [items addObject:[NSString stringWithFormat:@"+%lu", (unsigned long)(targets.count - limit)]];
    }
    return [items componentsJoinedByString:@","];
}

static NSString *wcpl_vmiyou_buildMinimalVoiceContent(unsigned int voiceLengthMs, unsigned int voiceFormat) {
    return WCPLBuildMinimalVoiceContent(voiceLengthMs, voiceFormat);
}

static void wcpl_vmiyou_applyVoiceExtendInfo(CMessageWrap *sendWrap,
                                             NSData *audioData,
                                             unsigned int voiceTime,
                                             unsigned int voiceFormat) {
    if (!sendWrap) {
        return;
    }
    Class extendClass = objc_getClass("CExtendInfoOfVoiceMsg");
    if (!extendClass) {
        return;
    }

    id extendInfo = nil;
    @try {
        extendInfo = [[extendClass alloc] init];
    } @catch (__unused NSException *exceptionAllocExtend) {
    }
    if (!extendInfo) {
        return;
    }

    if (audioData && [extendInfo respondsToSelector:@selector(setM_dtVoice:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(extendInfo, @selector(setM_dtVoice:), audioData);
        } @catch (__unused NSException *exceptionSetExtendVoice) {
        }
    }
    if ([extendInfo respondsToSelector:@selector(setM_uiVoiceTime:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(extendInfo, @selector(setM_uiVoiceTime:), voiceTime);
        } @catch (__unused NSException *exceptionSetExtendVoiceTime) {
        }
    }
    if ([extendInfo respondsToSelector:@selector(setM_uiVoiceFormat:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(extendInfo, @selector(setM_uiVoiceFormat:), voiceFormat);
        } @catch (__unused NSException *exceptionSetExtendVoiceFormat) {
        }
    }
    if ([extendInfo respondsToSelector:@selector(setM_uiVoiceForwardFlag:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(extendInfo, @selector(setM_uiVoiceForwardFlag:), 0);
        } @catch (__unused NSException *exceptionSetExtendForwardFlag) {
        }
    }
    if ([extendInfo respondsToSelector:@selector(setM_uiVoiceCancelFlag:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(extendInfo, @selector(setM_uiVoiceCancelFlag:), 0);
        } @catch (__unused NSException *exceptionSetExtendCancelFlag) {
        }
    }
    if ([extendInfo respondsToSelector:@selector(setM_uiVoiceEndFlag:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(extendInfo, @selector(setM_uiVoiceEndFlag:), 1);
        } @catch (__unused NSException *exceptionSetExtendEndFlag) {
        }
    }
    if ([extendInfo respondsToSelector:@selector(setM_refMessageWrap:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(extendInfo, @selector(setM_refMessageWrap:), sendWrap);
        } @catch (__unused NSException *exceptionSetExtendRefWrap) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_extendInfoWithMsgType:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_extendInfoWithMsgType:), extendInfo);
        } @catch (__unused NSException *exceptionSetWrapExtendInfo) {
        }
    }
}


// ===== merged boundary: CoreB =====

static void wcpl_vmiyou_applyVoiceFields(CMessageWrap *sendWrap,
                                         CMessageWrap *sourceWrap,
                                         NSData *audioData,
                                         unsigned int voiceTime,
                                         unsigned int voiceFormat) {
    if (!sendWrap) {
        return;
    }

    if ([sendWrap respondsToSelector:@selector(setM_uiMessageType:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiMessageType:), 34);
        } @catch (__unused NSException *exceptionSetType) {
        }
    }
    if (audioData && [sendWrap respondsToSelector:@selector(setM_dtVoice:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_dtVoice:), audioData);
        } @catch (__unused NSException *exceptionSetVoiceData) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiVoiceEndFlag:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiVoiceEndFlag:), 1);
        } @catch (__unused NSException *exceptionSetVoiceEndFlag) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiVoiceCancelFlag:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiVoiceCancelFlag:), 0);
        } @catch (__unused NSException *exceptionSetVoiceCancelFlag) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiVoiceForwardFlag:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiVoiceForwardFlag:), 0);
        } @catch (__unused NSException *exceptionSetVoiceForwardFlag) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiVoiceTime:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiVoiceTime:), voiceTime);
        } @catch (__unused NSException *exceptionSetVoiceTime) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiVoiceFormat:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiVoiceFormat:), voiceFormat);
        } @catch (__unused NSException *exceptionSetVoiceFormat) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiIsSenderStatus:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiIsSenderStatus:), 1);
        } @catch (__unused NSException *exceptionSetSenderStatus) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiStatus:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiStatus:), 1);
        } @catch (__unused NSException *exceptionSetStatus) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiDownloadStatus:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiDownloadStatus:), 9);
        } @catch (__unused NSException *exceptionSetDownloadStatus) {
        }
    }

    unsigned int voiceLengthMs = wcpl_vmiyou_voiceLengthMs(sourceWrap);
    if (voiceLengthMs == 0) {
        voiceLengthMs = voiceTime * 1000;
    }
    NSString *voiceContent = wcpl_vmiyou_buildMinimalVoiceContent(voiceLengthMs, voiceFormat);
    if ([sendWrap respondsToSelector:@selector(setM_nsContent:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsContent:), voiceContent);
        } @catch (__unused NSException *exceptionSetContent) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_nsPushContent:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsPushContent:), @"");
        } @catch (__unused NSException *exceptionSetPushContent) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_nsPushTitle:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsPushTitle:), @"");
        } @catch (__unused NSException *exceptionSetPushTitle) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiMesLocalID:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiMesLocalID:), 0);
        } @catch (__unused NSException *exceptionSetLocalID) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_n64MesSvrID:)]) {
        @try {
            ((void (*)(id, SEL, long long))objc_msgSend)(sendWrap, @selector(setM_n64MesSvrID:), 0);
        } @catch (__unused NSException *exceptionSetSvrID) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_nsMsgSource:)]) {
        NSString *msgSource = sourceWrap.m_nsMsgSource ?: @"";
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsMsgSource:), msgSource);
        } @catch (__unused NSException *exceptionSetMsgSource) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setVoiceUrl:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setVoiceUrl:), @"");
        } @catch (__unused NSException *exceptionSetVoiceURL) {
        }
    }

    wcpl_vmiyou_applyVoiceExtendInfo(sendWrap, audioData, voiceTime, voiceFormat);
}

static CMessageWrap *wcpl_vmiyou_buildFreshVoiceWrap(void) {
    Class wrapClass = objc_getClass("CMessageWrap");
    if (!wrapClass) {
        return nil;
    }
    CMessageWrap *sendWrap = nil;
    if ([wrapClass instancesRespondToSelector:@selector(initWithMsgType:)]) {
        @try {
            id created = ((id (*)(id, SEL, long long))objc_msgSend)([wrapClass alloc], @selector(initWithMsgType:), (long long)34);
            if ([created isKindOfClass:%c(CMessageWrap)]) {
                sendWrap = (CMessageWrap *)created;
            }
        } @catch (__unused NSException *exceptionInitWithMsgType) {
        }
    }
    if (!sendWrap) {
        @try {
            sendWrap = [[wrapClass alloc] init];
        } @catch (__unused NSException *exceptionInit) {
        }
    }
    return sendWrap;
}

static CMessageWrap *wcpl_vmiyou_buildVoiceSendWrap(CMessageWrap *sourceWrap,
                                                    NSString *chatName,
                                                    NSString *selfUserName,
                                                    NSData *audioData,
                                                    unsigned int voiceTime,
                                                    unsigned int voiceFormat) {
    if (!(sourceWrap && chatName.length > 0 && audioData.length > 0)) {
        return nil;
    }
    CMessageWrap *sendWrap = wcpl_vmiyou_buildFreshVoiceWrap();
    if (!sendWrap) {
        return nil;
    }
    wcpl_vmiyou_resetIdentity(sendWrap);
    wcpl_vmiyou_prepareRoute(sendWrap, chatName, selfUserName);
    wcpl_vmiyou_applyVoiceFields(sendWrap, sourceWrap, audioData, voiceTime, voiceFormat);
    return sendWrap;
}

static CMessageWrap *wcpl_extractForwardMessageWrap(id generated) {
    if (!generated) {
        return nil;
    }
    if ([generated isKindOfClass:%c(CMessageWrap)]) {
        return (CMessageWrap *)generated;
    }

    if ([generated isKindOfClass:[NSDictionary class]]) {
        NSDictionary *dict = (NSDictionary *)generated;
        NSArray<NSString *> *keys = @[@"msgWrap", @"messageWrap", @"wrap", @"forwardMsgWrap", @"sendWrap"];
        for (NSString *key in keys) {
            id value = dict[key];
            if ([value isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)value;
            }
        }
    }

    SEL selectors[] = {
        NSSelectorFromString(@"messageWrap"),
        NSSelectorFromString(@"msgWrap"),
        NSSelectorFromString(@"forwardMessageWrap"),
        NSSelectorFromString(@"sendWrap")
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        SEL selector = selectors[idx];
        if (![generated respondsToSelector:selector]) {
            continue;
        }
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(generated, selector);
            if ([value isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)value;
            }
        } @catch (__unused NSException *exception) {
        }
    }
    return nil;
}

static CMessageWrap *wcpl_generatedForwardVoiceWrap(CMessageWrap *msgWrap,
                                                    id targetContact,
                                                    NSString *targetIdentifier) {
    if (!wcpl_isVoiceMessage(msgWrap) || !targetContact) {
        return nil;
    }

    Class forwardUtilClass = objc_getClass("ForwardMsgUtil");
    SEL selector = @selector(GenForwardMsgFromMsgWrap:ToContact:);
    if (!(forwardUtilClass && [forwardUtilClass respondsToSelector:selector])) {
        return nil;
    }

    @try {
        id generated = ((id (*)(id, SEL, id, id))objc_msgSend)(forwardUtilClass, selector, msgWrap, targetContact);
        CMessageWrap *sendWrap = wcpl_extractForwardMessageWrap(generated);
        if (!sendWrap && generated) {
            WCPLLogWarning(@"[语音转发] 生成转发语音包失败: target=%@ generatedClass=%@",
                           targetIdentifier ?: @"(unknown)",
                           NSStringFromClass([generated class]) ?: @"(nil)");
        }
        return sendWrap;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[语音转发] 生成转发语音包异常: target=%@ reason=%@",
                       targetIdentifier ?: @"(unknown)",
                       exception.reason ?: @"unknown");
        return nil;
    }
}

static void wcpl_patchGeneratedNativeForwardVoiceWrap(CMessageWrap *sourceWrap,
                                                      id targetContact,
                                                      id generated,
                                                      NSString *sceneTag) {
    if (!wcpl_isVoiceMessage(sourceWrap)) {
        return;
    }

    CMessageWrap *sendWrap = wcpl_extractForwardMessageWrap(generated);
    if (!(sendWrap && sendWrap != sourceWrap)) {
        return;
    }

    NSString *targetUserName = wcpl_safeUserNameFromObject(targetContact);
    if (targetUserName.length == 0 && [targetContact isKindOfClass:[NSString class]]) {
        targetUserName = wcpl_trimString((NSString *)targetContact);
    }

    NSString *audioPath = nil;
    NSData *audioData = wcpl_vmiyou_loadVoiceAudioData(sourceWrap, &audioPath);
    if (audioData.length == 0) {
        wcpl_startDownloadVoiceIfNeeded(sourceWrap, sceneTag ?: @"native_gen_forward");
        WCPLLogWarning(@"[语音转发] 原生构包补丁跳过: 音频未就绪 scene=%@ path=%@",
                       sceneTag ?: @"native_gen_forward",
                       audioPath ?: @"(nil)");
        return;
    }

    unsigned int voiceTime = wcpl_vmiyou_voiceTime(sourceWrap);
    unsigned int voiceFormat = wcpl_vmiyou_voiceFormat(sourceWrap);
    NSString *selfUserName = wcpl_vmiyou_currentSelfUserName();

    wcpl_vmiyou_resetIdentity(sendWrap);
    if (targetUserName.length > 0) {
        wcpl_vmiyou_prepareRoute(sendWrap, targetUserName, selfUserName);
    }
    wcpl_vmiyou_applyVoiceFields(sendWrap, sourceWrap, audioData, voiceTime, voiceFormat);

    WCPLLogDebug(@"[语音转发] 原生构包补齐: scene=%@ target=%@ audioLen=%lu voiceTime=%u voiceFormat=%u",
                 sceneTag ?: @"native_gen_forward",
                 targetUserName.length > 0 ? targetUserName : @"(unknown)",
                 (unsigned long)audioData.length,
                 voiceTime,
                 voiceFormat);
}

static NSArray<NSString *> *wcpl_sanitizedForwardIdentifiers(NSArray<NSString *> *identifiers) {
    return WCPLSanitizeIdentifierArray(identifiers);
}

static CContact *wcpl_forwardContactForIdentifier(NSString *identifier, UIViewController *viewController) {
    NSString *userName = wcpl_trimString(identifier);
    if (userName.length == 0) {
        return nil;
    }

    CContactMgr *contactMgr = wcpl_serviceByClass(objc_getClass("CContactMgr"));
    ContactsDataLogic *dataLogic = nil;
    NSArray<NSString *> *logicKeys = @[@"m_contactsDataLogic", @"contactsDataLogic", @"m_contactDataLogic"];
    for (NSString *key in logicKeys) {
        @try {
            id value = [viewController valueForKey:key];
            if ([value isKindOfClass:objc_getClass("ContactsDataLogic")]) {
                dataLogic = (ContactsDataLogic *)value;
                break;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    return WCPLFindContactByUserName(userName, contactMgr, dataLogic);
}

static BOOL wcpl_forwardQueueVoiceBySendMessageMgr(NSString *chatName,
                                                   CMessageWrap *sendWrap,
                                                   NSString *targetTag) {
    if (!(chatName.length > 0 && sendWrap)) {
        return NO;
    }
    id sendMessageMgr = wcpl_serviceByClass(objc_getClass("SendMessageMgr"));
    if (!(sendMessageMgr && [sendMessageMgr respondsToSelector:@selector(AddMsgToSendTable:MsgWrap:)])) {
        return NO;
    }
    @try {
        ((void (*)(id, SEL, id, id))objc_msgSend)(sendMessageMgr,
                                                   @selector(AddMsgToSendTable:MsgWrap:),
                                                   chatName,
                                                   sendWrap);
        unsigned int sendStatus = sendWrap.m_uiStatus;
        unsigned int localID = sendWrap.m_uiMesLocalID;
        if (sendStatus == 5 || localID == 0) {
            WCPLLogWarning(@"[语音转发] SendMessageMgr.queue 未入队: target=%@ status=%u localID=%u",
                           targetTag ?: @"(unknown)",
                           sendStatus,
                           localID);
            return NO;
        }
        WCPLLogInfo(@"[语音转发] 命中链路 route=%@",
                    [NSString stringWithFormat:@"SendMessageMgr.queue/%@ localID=%u status=%u",
                                               targetTag ?: @"(unknown)",
                                               localID,
                                               sendStatus]);
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[语音转发] SendMessageMgr.queue 异常: target=%@ reason=%@",
                       targetTag ?: @"(unknown)",
                       exception.reason ?: @"unknown");
        return NO;
    }
}

static BOOL wcpl_forwardAddLocalVoiceMsg(id messageMgr,
                                         NSString *chatName,
                                         CMessageWrap *sendWrap,
                                         NSString *targetTag) {
    if (!(messageMgr && chatName.length > 0 && sendWrap)) {
        return NO;
    }
    @try {
        if ([messageMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:Unique:)]) {
            ((void (*)(id, SEL, id, id, BOOL, BOOL, BOOL))objc_msgSend)(messageMgr,
                                                                          @selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:Unique:),
                                                                          chatName,
                                                                          sendWrap,
                                                                          YES,
                                                                          NO,
                                                                          YES);
            WCPLLogDebug(@"[语音转发] AddLocalMsg(unq) target=%@ localID=%u",
                         targetTag ?: @"(unknown)",
                         sendWrap.m_uiMesLocalID);
            return YES;
        }
        if ([messageMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:)]) {
            ((void (*)(id, SEL, id, id, BOOL, BOOL))objc_msgSend)(messageMgr,
                                                                   @selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:),
                                                                   chatName,
                                                                   sendWrap,
                                                                   YES,
                                                                   NO);
            WCPLLogDebug(@"[语音转发] AddLocalMsg target=%@ localID=%u",
                         targetTag ?: @"(unknown)",
                         sendWrap.m_uiMesLocalID);
            return YES;
        }
        if ([messageMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:)]) {
            ((void (*)(id, SEL, id, id))objc_msgSend)(messageMgr,
                                                       @selector(AddLocalMsg:MsgWrap:),
                                                       chatName,
                                                       sendWrap);
            WCPLLogDebug(@"[语音转发] AddLocalMsg(simple) target=%@ localID=%u",
                         targetTag ?: @"(unknown)",
                         sendWrap.m_uiMesLocalID);
            return YES;
        }
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[语音转发] AddLocalMsg 异常: target=%@ reason=%@",
                       targetTag ?: @"(unknown)",
                       exception.reason ?: @"unknown");
    }
    return NO;
}

static BOOL wcpl_forwardInvokeResendVoiceTarget(id target,
                                                id routeArg,
                                                CMessageWrap *sendWrap,
                                                NSString *targetTag,
                                                NSString *senderTag) {
    SEL resendVoiceSel = NSSelectorFromString(@"ResendVoiceMsg:MsgWrap:");
    if (!(target && routeArg && sendWrap && [target respondsToSelector:resendVoiceSel])) {
        return NO;
    }
    @try {
        ((void (*)(id, SEL, id, id))objc_msgSend)(target, resendVoiceSel, routeArg, sendWrap);
        WCPLLogInfo(@"[语音转发] 命中链路 route=%@",
                    [NSString stringWithFormat:@"ResendVoice.%@/%@",
                                               senderTag ?: @"(unknown)",
                                               targetTag ?: @"(unknown)"]);
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[语音转发] ResendVoice 异常: sender=%@ target=%@ reason=%@",
                       senderTag ?: @"(unknown)",
                       targetTag ?: @"(unknown)",
                       exception.reason ?: @"unknown");
        return NO;
    }
}

static BOOL wcpl_forwardVoiceByResendRoute(NSString *chatName,
                                           CMessageWrap *sendWrap,
                                           NSString *targetTag) {
    if (!(chatName.length > 0 && sendWrap)) {
        return NO;
    }
    id messageMgr = wcpl_serviceByClass(objc_getClass("CMessageMgr"));
    if (!messageMgr) {
        return NO;
    }
    if (!wcpl_forwardAddLocalVoiceMsg(messageMgr, chatName, sendWrap, targetTag)) {
        return NO;
    }

    id audioSender = wcpl_serviceByClass(objc_getClass("AudioSender"));
    if (wcpl_forwardInvokeResendVoiceTarget(audioSender, chatName, sendWrap, targetTag, @"AudioSender")) {
        return YES;
    }

    id uploadVoiceMgr = wcpl_serviceByClass(objc_getClass("MMNewUploadVoiceMgr"));
    if (wcpl_forwardInvokeResendVoiceTarget(uploadVoiceMgr, chatName, sendWrap, targetTag, @"MMNewUploadVoiceMgr")) {
        return YES;
    }

    id uploadVoiceCDNMgr = wcpl_serviceByClass(objc_getClass("UploadVoiceCDNMgr"));
    if (wcpl_forwardInvokeResendVoiceTarget(uploadVoiceCDNMgr, chatName, sendWrap, targetTag, @"UploadVoiceCDNMgr")) {
        return YES;
    }

    if ([messageMgr respondsToSelector:@selector(DelMsg:MsgWrap:)]) {
        @try {
            ((void (*)(id, SEL, id, id))objc_msgSend)(messageMgr,
                                                       @selector(DelMsg:MsgWrap:),
                                                       chatName,
                                                       sendWrap);
            WCPLLogWarning(@"[语音转发] ResendVoice 全失败，已清理本地占位: target=%@ localID=%u",
                           targetTag ?: @"(unknown)",
                           sendWrap.m_uiMesLocalID);
        } @catch (NSException *exception) {
            WCPLLogWarning(@"[语音转发] ResendVoice 清理占位异常: target=%@ reason=%@",
                           targetTag ?: @"(unknown)",
                           exception.reason ?: @"unknown");
        }
    }
    return NO;
}

static BOOL wcpl_forwardVoiceToTargetStrict(CMessageWrap *msgWrap,
                                            UIViewController *viewController,
                                            id targetContact,
                                            NSString *targetIdentifier) {
    (void)viewController;
    if (!(wcpl_isVoiceMessage(msgWrap) && targetContact)) {
        return NO;
    }
    NSString *target = targetIdentifier.length > 0 ? targetIdentifier : @"(unknown)";
    NSString *chatName = wcpl_safeUserNameFromObject(targetContact);
    if (chatName.length == 0) {
        chatName = wcpl_trimString(targetIdentifier);
    }
    if (chatName.length == 0) {
        WCPLLogWarning(@"[语音转发][strict] 目标会话为空: target=%@", target);
        return NO;
    }

    NSString *audioPath = nil;
    NSData *audioData = wcpl_vmiyou_loadVoiceAudioData(msgWrap, &audioPath);
    if (audioData.length == 0) {
        id messageMgr = wcpl_serviceByClass(objc_getClass("CMessageMgr"));
        if (messageMgr && [messageMgr respondsToSelector:@selector(StartDownloadByRecordMsg:)]) {
            @try {
                ((BOOL (*)(id, SEL, id))objc_msgSend)(messageMgr, @selector(StartDownloadByRecordMsg:), msgWrap);
            } @catch (__unused NSException *exceptionDownloadVoice) {
            }
        }
        WCPLLogWarning(@"[语音转发][strict] 音频未就绪: target=%@ path=%@",
                       target,
                       audioPath ?: @"(nil)");
        return NO;
    }

    unsigned int voiceTime = wcpl_vmiyou_voiceTime(msgWrap);
    unsigned int voiceFormat = wcpl_vmiyou_voiceFormat(msgWrap);
    NSString *selfUserName = wcpl_vmiyou_currentSelfUserName();

    CMessageWrap *queueWrap = wcpl_vmiyou_buildVoiceSendWrap(msgWrap,
                                                             chatName,
                                                             selfUserName,
                                                             audioData,
                                                             voiceTime,
                                                             voiceFormat);
    if (queueWrap && wcpl_forwardQueueVoiceBySendMessageMgr(chatName, queueWrap, target)) {
        return YES;
    }

    CMessageWrap *resendWrap = wcpl_vmiyou_buildVoiceSendWrap(msgWrap,
                                                              chatName,
                                                              selfUserName,
                                                              audioData,
                                                              voiceTime,
                                                              voiceFormat);
    if (resendWrap && wcpl_forwardVoiceByResendRoute(chatName, resendWrap, target)) {
        return YES;
    }

    WCPLLogWarning(@"[语音转发][strict] 可靠发送链路失败: target=%@", target);
    return NO;
}

static __unused BOOL wcpl_forwardVoiceToTarget(CMessageWrap *msgWrap,
                                               UIViewController *viewController,
                                               id targetContact,
                                               NSString *targetIdentifier) {
    if (!(wcpl_isVoiceMessage(msgWrap) &&
          [viewController isKindOfClass:[UIViewController class]] &&
          targetContact)) {
        return NO;
    }

    NSString *target = targetIdentifier.length > 0 ? targetIdentifier : @"(unknown)";
    NSString *chatName = wcpl_safeUserNameFromObject(targetContact);
    if (chatName.length == 0) {
        chatName = wcpl_trimString(targetIdentifier);
    }
    NSString *selfUserName = wcpl_vmiyou_currentSelfUserName();

    NSString *audioPath = nil;
    NSData *audioData = wcpl_vmiyou_loadVoiceAudioData(msgWrap, &audioPath);
    if (!audioData) {
        id downloadMgr = wcpl_serviceByClass(objc_getClass("CMessageMgr"));
        if (downloadMgr && [downloadMgr respondsToSelector:@selector(StartDownloadByRecordMsg:)]) {
            @try {
                ((BOOL (*)(id, SEL, id))objc_msgSend)(downloadMgr, @selector(StartDownloadByRecordMsg:), msgWrap);
            } @catch (__unused NSException *exceptionDownloadVoice) {
            }
        }
        WCPLLogWarning(@"[语音转发] 密友链路语音文件未就绪: target=%@ path=%@",
                       target,
                       audioPath ?: @"(nil)");
    }

    unsigned int voiceTime = wcpl_vmiyou_voiceTime(msgWrap);
    unsigned int voiceFormat = wcpl_vmiyou_voiceFormat(msgWrap);
    CMessageWrap *miyouWrap = nil;
    if (audioData.length > 0 && chatName.length > 0) {
        miyouWrap = wcpl_vmiyou_buildVoiceSendWrap(msgWrap,
                                                   chatName,
                                                   selfUserName,
                                                   audioData,
                                                   voiceTime,
                                                   voiceFormat);
    }

    CMessageWrap *generatedWrap = wcpl_generatedForwardVoiceWrap(msgWrap, targetContact, target);
    if (generatedWrap && chatName.length > 0) {
        wcpl_vmiyou_resetIdentity(generatedWrap);
        wcpl_vmiyou_prepareRoute(generatedWrap, chatName, selfUserName);
        if (audioData.length > 0) {
            wcpl_vmiyou_applyVoiceFields(generatedWrap, msgWrap, audioData, voiceTime, voiceFormat);
        }
    }

    CMessageWrap *effectiveWrap = miyouWrap ?: generatedWrap ?: msgWrap;
    if (miyouWrap) {
        WCPLLogInfo(@"[语音转发] 密友构包成功: target=%@ audioLen=%lu voiceTime=%u voiceFormat=%u",
                    target,
                    (unsigned long)audioData.length,
                    voiceTime,
                    voiceFormat);
    }

    id forwardMgr = wcpl_serviceByClass(objc_getClass("ForwardMessageMgr"));
    id currentForwardLogic = nil;
    if (forwardMgr && [forwardMgr respondsToSelector:@selector(currentLogicController)]) {
        @try {
            currentForwardLogic = ((id (*)(id, SEL))objc_msgSend)(forwardMgr, @selector(currentLogicController));
        } @catch (__unused NSException *exceptionCurrentLogic) {
            currentForwardLogic = nil;
        }
    }

    NSMutableArray<id> *forwardTargets = [NSMutableArray array];
    if (currentForwardLogic) {
        [forwardTargets addObject:currentForwardLogic];
    }
    if (forwardMgr) {
        [forwardTargets addObject:forwardMgr];
    }
    id messageMgr = wcpl_serviceByClass(objc_getClass("CMessageMgr"));
    if (messageMgr) {
        [forwardTargets addObject:messageMgr];
    }
    Class forwardUtilClass = objc_getClass("ForwardMsgUtil");
    if (forwardUtilClass) {
        id forwardUtilObj = nil;
        if ([forwardUtilClass instancesRespondToSelector:@selector(init)]) {
            @try {
                forwardUtilObj = [[forwardUtilClass alloc] init];
            } @catch (__unused NSException *exceptionForwardUtilAlloc) {
                forwardUtilObj = nil;
            }
        }
        if (forwardUtilObj) {
            [forwardTargets addObject:forwardUtilObj];
        }
        [forwardTargets addObject:(id)forwardUtilClass];
    }

    SEL forwardVoiceSelector = NSSelectorFromString(@"ForwardVoiceMsg:ToContact:");
    for (id forwardTarget in forwardTargets) {
        NSString *targetTag = nil;
        Class targetClass = object_getClass(forwardTarget);
        if (targetClass && class_isMetaClass(targetClass)) {
            targetTag = NSStringFromClass((Class)forwardTarget);
        } else {
            targetTag = NSStringFromClass([forwardTarget class]);
        }
        if (wcpl_tryForwardObjObj(forwardTarget,
                                  forwardVoiceSelector,
                                  effectiveWrap,
                                  targetContact,
                                  [NSString stringWithFormat:@"ForwardVoice.%@/%@", targetTag ?: @"(unknown)", target])) {
            return YES;
        }
    }

    if (wcpl_tryForwardObjObjObjLong(forwardMgr,
                                     NSSelectorFromString(@"forwardMessage:fromViewController:toContact:forwardType:"),
                                     effectiveWrap,
                                     viewController,
                                     targetContact,
                                     (long long)0,
                                     [NSString stringWithFormat:@"ForwardMessageMgr.toContactType/%@", target])) {
        return YES;
    }
    if (wcpl_tryForwardObjObjObj(forwardMgr,
                                 NSSelectorFromString(@"forwardMessage:fromViewController:toContact:"),
                                 effectiveWrap,
                                 viewController,
                                 targetContact,
                                 [NSString stringWithFormat:@"ForwardMessageMgr.toContact/%@", target])) {
        return YES;
    }

    if (wcpl_tryForwardObjObjUIntObj((id)forwardUtilClass,
                                     @selector(SendMsgWithOriMsg:Contact:ForwardType:EditImageAttr:),
                                     effectiveWrap,
                                     targetContact,
                                     (unsigned int)0,
                                     nil,
                                     [NSString stringWithFormat:@"ForwardMsgUtil.sendmsg/%@", target])) {
        return YES;
    }

    SEL forward6Selector = @selector(ForwardMsg:ToContact:Scene:forwardType:uiIDKeyScene:editImageAttr:);
    if (forwardUtilClass && [forwardUtilClass respondsToSelector:forward6Selector]) {
        @try {
            ((void (*)(id, SEL, id, id, unsigned int, unsigned int, unsigned int, id))objc_msgSend)(forwardUtilClass,
                                                                                                      forward6Selector,
                                                                                                      effectiveWrap,
                                                                                                      targetContact,
                                                                                                      (unsigned int)0,
                                                                                                      (unsigned int)0,
                                                                                                      (unsigned int)0,
                                                                                                      nil);
            WCPLLogInfo(@"[语音转发] 命中链路 route=%@", [NSString stringWithFormat:@"ForwardMsgUtil.api6.scene0/%@", target]);
            return YES;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"[语音转发] 链路异常 route=%@ reason=%@",
                           [NSString stringWithFormat:@"ForwardMsgUtil.api6.scene0/%@", target],
                           exception.reason ?: @"unknown");
        }
    }

    SEL forward7Selector = @selector(ForwardMsg:ToContact:Scene:forwardType:uiIDKeyScene:editImageAttr:roomTodoFlag:);
    if (forwardUtilClass && [forwardUtilClass respondsToSelector:forward7Selector]) {
        @try {
            ((void (*)(id, SEL, id, id, unsigned int, unsigned int, unsigned int, id, BOOL))objc_msgSend)(forwardUtilClass,
                                                                                                            forward7Selector,
                                                                                                            effectiveWrap,
                                                                                                            targetContact,
                                                                                                            (unsigned int)0,
                                                                                                            (unsigned int)0,
                                                                                                            (unsigned int)0,
                                                                                                            nil,
                                                                                                            NO);
            WCPLLogInfo(@"[语音转发] 命中链路 route=%@", [NSString stringWithFormat:@"ForwardMsgUtil.api7.scene0/%@", target]);
            return YES;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"[语音转发] 链路异常 route=%@ reason=%@",
                           [NSString stringWithFormat:@"ForwardMsgUtil.api7.scene0/%@", target],
                           exception.reason ?: @"unknown");
        }
    }

    if (wcpl_tryForwardObjObjUIntUInt((id)forwardUtilClass,
                                      @selector(ForwardMsg:ToContact:Scene:forwardType:),
                                      effectiveWrap,
                                      targetContact,
                                      (unsigned int)0,
                                      (unsigned int)0,
                                      [NSString stringWithFormat:@"ForwardMsgUtil.api4.scene0/%@", target])) {
        return YES;
    }
    if (wcpl_tryForwardObjObjUInt((id)forwardUtilClass,
                                  @selector(ForwardMsg:ToContact:Scene:),
                                  effectiveWrap,
                                  targetContact,
                                  (unsigned int)0,
                                  [NSString stringWithFormat:@"ForwardMsgUtil.api3.scene0/%@", target])) {
        return YES;
    }

    if (wcpl_tryForwardObjObjUIntUInt((id)forwardUtilClass,
                                      @selector(ForwardMsg:ToContact:Scene:forwardType:),
                                      effectiveWrap,
                                      targetContact,
                                      (unsigned int)3,
                                      (unsigned int)0,
                                      [NSString stringWithFormat:@"ForwardMsgUtil.api4.scene3/%@", target])) {
        return YES;
    }
    if (wcpl_tryForwardObjObjUInt((id)forwardUtilClass,
                                  @selector(ForwardMsg:ToContact:Scene:),
                                  effectiveWrap,
                                  targetContact,
                                  (unsigned int)3,
                                  [NSString stringWithFormat:@"ForwardMsgUtil.api3.scene3/%@", target])) {
        return YES;
    }

    Class lmUtilsClass = objc_getClass("LMUtils");
    if (wcpl_tryForwardObjObj((id)lmUtilsClass,
                              NSSelectorFromString(@"ForwardMsg:ToContact:"),
                              effectiveWrap,
                              targetContact,
                              [NSString stringWithFormat:@"LMUtils.fallback/%@", target])) {
        return YES;
    }

    if (wcpl_tryForwardObjObjUIntObj((id)forwardUtilClass,
                                     @selector(SendMsgWithOriMsg:Contact:ForwardType:EditImageAttr:),
                                     msgWrap,
                                     targetContact,
                                     (unsigned int)0,
                                     nil,
                                     [NSString stringWithFormat:@"ForwardMsgUtil.sendmsg.origin/%@", target])) {
        return YES;
    }
    return NO;
}

static NSUInteger wcpl_forwardVoiceToIdentifiers(CMessageWrap *msgWrap,
                                                 UIViewController *viewController,
                                                 NSArray<NSString *> *identifiers) {
    NSArray<NSString *> *targets = wcpl_sanitizedForwardIdentifiers(identifiers);
    NSUInteger successCount = 0;
    for (NSString *identifier in targets) {
        CContact *contact = wcpl_forwardContactForIdentifier(identifier, viewController);
        BOOL success = NO;
        if (contact) {
            success = wcpl_forwardVoiceToTargetStrict(msgWrap, viewController, contact, identifier);
        }
        if (!success) {
            success = wcpl_forwardVoiceToTargetStrict(msgWrap, viewController, identifier, identifier);
        }
        successCount += success ? 1 : 0;
    }
    WCPLLogInfo(@"[语音转发] 发送结果 selected=%lu success=%lu",
                (unsigned long)targets.count,
                (unsigned long)successCount);
    return successCount;
}

static __unused BOOL wcpl_presentVoiceForwardPicker(CMessageWrap *msgWrap, UIViewController *viewController) {
    if (!(wcpl_isVoiceMessage(msgWrap) && [viewController isKindOfClass:[UIViewController class]])) {
        return NO;
    }

    Class pickerDataProviderClass = objc_getClass("WCPLPickerDataProvider");
    SEL allItemsSelector = @selector(allPickerItems);
    if (!(pickerDataProviderClass && [pickerDataProviderClass respondsToSelector:allItemsSelector])) {
        WCPLLogWarning(@"[语音转发] WCPLPickerDataProvider 不可用");
        return NO;
    }

    NSArray *allItems = nil;
    @try {
        allItems = ((id (*)(id, SEL))objc_msgSend)(pickerDataProviderClass, allItemsSelector);
    } @catch (__unused NSException *exception) {
        allItems = nil;
    }
    if (![allItems isKindOfClass:[NSArray class]] || allItems.count == 0) {
        WCPLLogWarning(@"[语音转发] 联系人数据为空，无法弹出选择器");
        return NO;
    }

    Class pickerClass = objc_getClass("WCPLContactGroupPickerViewController");
    SEL initSelector = NSSelectorFromString(@"initWithItems:pickerMode:preselectedIdentifiers:");
    if (!(pickerClass && [pickerClass instancesRespondToSelector:initSelector])) {
        WCPLLogWarning(@"[语音转发] WCPLContactGroupPickerViewController 不可用");
        return NO;
    }

    id picker = nil;
    @try {
        picker = ((id (*)(id, SEL, id, NSUInteger, id))objc_msgSend)([pickerClass alloc],
                                                                      initSelector,
                                                                      allItems,
                                                                      (NSUInteger)1,
                                                                      nil);
    } @catch (__unused NSException *exception) {
        picker = nil;
    }
    if (!picker) {
        return NO;
    }

    if ([picker respondsToSelector:@selector(setTitleText:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(picker, @selector(setTitleText:), @"语音转发");
        } @catch (__unused NSException *exception) {
        }
    }
    if ([picker respondsToSelector:@selector(setEnableTypeSegment:)]) {
        @try {
            ((void (*)(id, SEL, BOOL))objc_msgSend)(picker, @selector(setEnableTypeSegment:), YES);
        } @catch (__unused NSException *exception) {
        }
    }
    if ([picker respondsToSelector:@selector(setEnableSectionByType:)]) {
        @try {
            ((void (*)(id, SEL, BOOL))objc_msgSend)(picker, @selector(setEnableSectionByType:), NO);
        } @catch (__unused NSException *exception) {
        }
    }

    __weak UIViewController *weakViewController = viewController;
    CMessageWrap *forwardWrap = msgWrap;
    void (^onFinishBlock)(NSArray *, NSArray *) = ^(NSArray *selectedItems, NSArray *selectedIdentifiers) {
        (void)selectedItems;
        UIViewController *strongViewController = weakViewController;
        if (!strongViewController) {
            return;
        }
        wcpl_forwardVoiceToIdentifiers(forwardWrap, strongViewController, (NSArray<NSString *> *)selectedIdentifiers);
    };
    if ([picker respondsToSelector:@selector(setOnFinish:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(picker, @selector(setOnFinish:), onFinishBlock);
        } @catch (__unused NSException *exception) {
        }
    }

    UINavigationController *navigationController = [[UINavigationController alloc] initWithRootViewController:picker];
    navigationController.modalPresentationStyle = UIModalPresentationFullScreen;

    UIViewController *presenter = viewController;
    while ([presenter.presentedViewController isKindOfClass:[UIViewController class]] &&
           !presenter.presentedViewController.isBeingDismissed) {
        presenter = presenter.presentedViewController;
    }
    if (![presenter respondsToSelector:@selector(presentViewController:animated:completion:)]) {
        return NO;
    }

    [presenter presentViewController:navigationController animated:YES completion:nil];
    WCPLLogInfo(@"[语音转发] 已弹出选择器 items=%lu", (unsigned long)allItems.count);
    return YES;
}

%hook VoiceMessageCellView

- (id)operationMenuItems {
    NSArray *items = %orig;
    items = wcpl_injectVoiceForwardMenuItemIfNeeded(self, items);
    return wcpl_injectRepeatMenuItemIfNeeded(self, items);
}

- (void)onForward:(id)sender {
    if (!wcpl_isVoiceForwardFeatureEnabled()) {
        %orig;
        return;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
    NSString *audioPath = wcpl_voiceAudioPathFromWrap(msgWrap);
    unsigned long long audioSize = wcpl_fileSizeAtPath(audioPath);
    WCPLLogInfo(@"[语音转发][trace] onForward sender=%@ wrap={%@} audioSize=%llu",
                sender ? (NSStringFromClass([sender class]) ?: @"(unknown)") : @"(nil)",
                wcpl_voiceForwardTraceWrap(msgWrap),
                audioSize);

    if (audioSize == 0) {
        wcpl_startDownloadVoiceIfNeeded(msgWrap, @"onForward");
    }

    %orig;
}

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 {
    if (arg1 == @selector(wcpl_handleRepeatMenuItem:)) {
        return wcpl_isRepeatSupportedForCell(self);
    }
    if (arg1 == @selector(wcpl_handleVoiceForwardMenuItem:)) {
        if (!wcpl_isVoiceForwardFeatureEnabled()) {
            return NO;
        }
        CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
        return wcpl_isVoiceMessage(msgWrap);
    }
    if (arg1 == @selector(onForward:) ||
        arg1 == @selector(doForward)) {
        if (!wcpl_isVoiceForwardFeatureEnabled()) {
            return %orig;
        }
        CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
        return wcpl_isVoiceMessage(msgWrap);
    }
    return %orig;
}

%new
- (void)wcpl_handleVoiceForwardMenuItem:(id)sender {
    if (!wcpl_isVoiceForwardFeatureEnabled()) {
        return;
    }

    (void)sender;
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{
            ((void (*)(id, SEL, id))objc_msgSend)(self, @selector(wcpl_handleVoiceForwardMenuItem:), nil);
        });
        return;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
    if (!wcpl_isVoiceMessage(msgWrap)) {
        return;
    }

    UIViewController *viewController = wcpl_viewControllerFromCell(self);
    if (viewController && wcpl_presentVoiceForwardPicker(msgWrap, viewController)) {
        WCPLLogInfo(@"[语音转发] 已进入密友同款转发选择器");
        return;
    }

    if ([self respondsToSelector:@selector(onForward:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(self, @selector(onForward:), self);
            WCPLLogWarning(@"[语音转发] 密友链路不可用，回退原生 onForward:");
            return;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"[语音转发] 回退 onForward 异常: %@", exception.reason ?: @"unknown");
        }
    }
    if ([self respondsToSelector:@selector(doForward)]) {
        @try {
            ((void (*)(id, SEL))objc_msgSend)(self, @selector(doForward));
            WCPLLogWarning(@"[语音转发] 密友链路不可用，回退原生 doForward");
            return;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"[语音转发] 回退 doForward 异常: %@", exception.reason ?: @"unknown");
        }
    }

    WCPLLogWarning(@"[语音转发] 所有链路不可用: class=%@",
                   NSStringFromClass([self class]) ?: @"(nil)");
}

%new
- (void)wcpl_handleRepeatMenuItem:(id)sender {
    (void)sender;
    wcpl_handleRepeatMenuActionForCell(self);
}

%end


%end

%ctor {
    if (WCPL_ENABLE_VOICE_FORWARD_HOOK) {
        %init(WCPLVoiceForwardCoreHookGroup);
    }
}
