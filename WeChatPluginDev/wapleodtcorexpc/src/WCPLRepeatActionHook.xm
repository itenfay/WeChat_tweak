#import "WCPLPureHelpers.h"

static void wcpl_repeatHandleQuoteMessage(CMessageWrap *msgWrap,
                                          NSString *chatName,
                                          BaseMsgContentViewController *chatVC,
                                          id toolView) {
    WCPLLogInfo(@"Repeat quote strategy: native-only msg=%@",
                wcpl_repeatMessageDebugInfo(msgWrap));
    wcpl_clearToolViewReplyingMessageIfNeeded(toolView, @"quote_native_preclear");

    if (wcpl_repeatQuoteNativeResendFresh(msgWrap, chatName, chatVC, @"quote_native_fresh_primary")) {
        WCPLLogInfo(@"Repeat sent: flow=quote_native_fresh_primary msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
        return;
    }
    if (wcpl_repeatNativeResendByDetachedWrap(msgWrap, chatName, chatVC, @"quote_native_detached_fallback")) {
        WCPLLogInfo(@"Repeat sent: flow=quote_native_detached_fallback msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
        return;
    }
    if (wcpl_repeatNativeResend(msgWrap, chatName, chatVC, @"quote_native_legacy_fallback")) {
        WCPLLogInfo(@"Repeat sent: flow=quote_native_legacy_fallback msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
        return;
    }
    WCPLLogError(@"Repeat quote native-only failed: msg=%@ chat=%@",
                 wcpl_repeatMessageDebugInfo(msgWrap),
                 chatName ?: @"(nil)");
}

static BOOL wcpl_repeatTryDetachedThenSendMgr(CMessageWrap *msgWrap,
                                              NSString *chatName,
                                              BaseMsgContentViewController *chatVC,
                                              NSString *detachedScene,
                                              NSString *sendMgrScene) {
    if (detachedScene.length > 0 &&
        wcpl_repeatNativeResendByDetachedWrap(msgWrap, chatName, chatVC, detachedScene)) {
        return YES;
    }
    if (sendMgrScene.length > 0 &&
        wcpl_repeatMediaBySendMessageMgr(msgWrap, chatName, sendMgrScene)) {
        return YES;
    }
    return NO;
}

static id wcpl_repeatResolveEmoticonWrap(CMessageWrap *msgWrap, NSString *emoticonMD5) {
    return WCPLMessageActionAdapterResolveEmoticonWrap(msgWrap, emoticonMD5);
}

static BOOL wcpl_repeatSendEmoticonViaLogicOrChatVC(CMessageWrap *msgWrap,
                                                     NSString *emoticonMD5,
                                                     id emoticonWrap,
                                                     id logicController,
                                                     BaseMsgContentViewController *chatVC) {
    if (!emoticonWrap) {
        return NO;
    }

    if (WCPLMessageActionAdapterSendEmoticon(emoticonWrap, logicController, chatVC)) {
        WCPLLogInfo(@"Repeat sent: flow=adapter_emoticon msg=%@ md5=%@",
                    wcpl_repeatMessageDebugInfo(msgWrap),
                    emoticonMD5 ?: @"(nil)");
        return YES;
    }
    return NO;
}

static BOOL wcpl_repeatSendEmoticonViaMessageMgr(CMessageWrap *msgWrap,
                                                 NSString *chatName,
                                                 NSString *emoticonMD5,
                                                 BOOL isFromOtherEmoticon) {
    id messageMgr = WCPLMessageActionAdapterMessageManager();
    if (!(messageMgr && [messageMgr respondsToSelector:@selector(AddEmoticonMsg:MsgWrap:)])) {
        return NO;
    }

    @try {
        NSString *selfUserName = wcpl_currentSelfUserNameForRepeat();
        NSString *sceneTag = isFromOtherEmoticon ? @"emoticon_other_msgmgr" : @"emoticon_msgmgr";
        CMessageWrap *newWrap = wcpl_buildDetachedSendWrap(msgWrap, sceneTag);
        if (!newWrap) {
            newWrap = [[objc_getClass("CMessageWrap") alloc] init];
        }

        newWrap.m_uiMessageType = 47;
        newWrap.m_nsToUsr = chatName;

        NSString *fromUser = selfUserName.length > 0 ? selfUserName : wcpl_trimTextForRepeat(msgWrap.m_nsFromUsr);
        if (fromUser.length > 0) {
            newWrap.m_nsFromUsr = fromUser;
        }

        if (WCPLIsChatRoomName(chatName) &&
            selfUserName.length > 0 &&
            [newWrap respondsToSelector:@selector(setM_nsRealChatUsr:)]) {
            @try {
                ((void (*)(id, SEL, id))objc_msgSend)(newWrap, @selector(setM_nsRealChatUsr:), selfUserName);
            } @catch (__unused NSException *exceptionSetReal) { WCPLCatchLog(exceptionSetReal); }
        }

        newWrap.m_nsContent = msgWrap.m_nsContent ?: @"";
        if (emoticonMD5.length == 32) {
            newWrap.m_nsEmoticonMD5 = emoticonMD5;
        }

        wcpl_resetSendWrapIdentity(newWrap);
        ((void (*)(id, SEL, id, id))objc_msgSend)(messageMgr, @selector(AddEmoticonMsg:MsgWrap:), chatName, newWrap);
        WCPLLogInfo(@"Repeat sent: flow=messageMgr_emoticon msg=%@ md5=%@ chat=%@ send=%@ from=%@ to=%@ real=%@",
                    wcpl_repeatMessageDebugInfo(msgWrap),
                    emoticonMD5 ?: @"(nil)",
                    chatName ?: @"(nil)",
                    wcpl_repeatMessageDebugInfo(newWrap),
                    newWrap.m_nsFromUsr ?: @"(nil)",
                    newWrap.m_nsToUsr ?: @"(nil)",
                    newWrap.m_nsRealChatUsr ?: @"(nil)");
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"Repeat emoticon via messageMgr failed: %@", exception.reason ?: exception);
    }
    return NO;
}

static BOOL wcpl_repeatHandleEmoticonMessage(CMessageWrap *msgWrap,
                                             NSString *chatName,
                                             BaseMsgContentViewController *chatVC,
                                             id logicController) {
    BOOL isFromOtherEmoticon = wcpl_isMessageFromOther(msgWrap);
    NSString *msgDebug = nil;
    WCPLLogDebug(@"Repeat media strategy: scene=emoticon msg=%@ isFromOther=%d",
                 wcpl_repeatCachedDebugInfo(msgWrap, &msgDebug),
                 isFromOtherEmoticon ? 1 : 0);

    NSString *nativeEmoticonScene = isFromOtherEmoticon ? @"emoticon_other_native_first" : @"emoticon_native_first";
    NSString *sendMgrEmoticonScene = isFromOtherEmoticon ? @"emoticon_other_sendmsgmgr_first" : @"emoticon_sendmsgmgr_first";
    if (wcpl_repeatTryDetachedThenSendMgr(msgWrap,
                                          chatName,
                                          chatVC,
                                          nativeEmoticonScene,
                                          sendMgrEmoticonScene)) {
        return YES;
    }

    NSString *emoticonMD5 = wcpl_emoticonMD5FromMessageWrap(msgWrap);
    id emoticonWrap = wcpl_repeatResolveEmoticonWrap(msgWrap, emoticonMD5);
    if (wcpl_repeatSendEmoticonViaLogicOrChatVC(msgWrap,
                                                emoticonMD5,
                                                emoticonWrap,
                                                logicController,
                                                chatVC)) {
        return YES;
    }
    if (wcpl_repeatSendEmoticonViaMessageMgr(msgWrap,
                                             chatName,
                                             emoticonMD5,
                                             isFromOtherEmoticon)) {
        return YES;
    }

    NSString *fallbackNativeScene = isFromOtherEmoticon ? @"emoticon_other_native_fallback" : nil;
    NSString *emoticonSendScene = isFromOtherEmoticon ? @"emoticon_other_sendmsgmgr_fallback" : @"emoticon_self_fallback";
    if (wcpl_repeatTryDetachedThenSendMgr(msgWrap,
                                          chatName,
                                          chatVC,
                                          fallbackNativeScene,
                                          emoticonSendScene)) {
        return YES;
    }

    NSString *nativeLegacyScene = isFromOtherEmoticon ? @"emoticon_other_native_legacy_final" : @"emoticon_self_native_legacy_final";
    if (wcpl_repeatNativeResend(msgWrap, chatName, chatVC, nativeLegacyScene)) {
        return YES;
    }

    WCPLLogWarning(@"Repeat emoticon fallback to text: msg=%@ md5=%@",
                   wcpl_repeatCachedDebugInfo(msgWrap, &msgDebug),
                   emoticonMD5 ?: @"(nil)");
    return NO;
}

static BOOL wcpl_repeatHandleImageMessage(CMessageWrap *msgWrap,
                                          NSString *chatName,
                                          BaseMsgContentViewController *chatVC) {
    BOOL isFromOtherMedia = wcpl_isMessageFromOther(msgWrap);
    NSString *msgDebug = nil;
    WCPLLogDebug(@"Repeat media strategy: scene=image msg=%@ isFromOther=%d",
                 wcpl_repeatCachedDebugInfo(msgWrap, &msgDebug),
                 isFromOtherMedia ? 1 : 0);

    if (isFromOtherMedia) {
        if (wcpl_repeatTryDetachedThenSendMgr(msgWrap,
                                              chatName,
                                              chatVC,
                                              @"image_other_native",
                                              @"image_other_sendmsgmgr")) {
            return YES;
        }
        if (wcpl_repeatNativeResend(msgWrap, chatName, chatVC, @"image_other_legacy")) {
            return YES;
        }
        WCPLLogWarning(@"Repeat image fallback to text(other): native/sendmsg unavailable msg=%@ chat=%@",
                       wcpl_repeatCachedDebugInfo(msgWrap, &msgDebug),
                       chatName ?: @"(nil)");
        return NO;
    }

    if (wcpl_repeatNativeResend(msgWrap, chatName, chatVC, @"image")) {
        return YES;
    }

    if (wcpl_repeatMediaBySendMessageMgr(msgWrap, chatName, @"image_self_fallback")) {
        return YES;
    }

    if (wcpl_repeatNativeResendByDetachedWrap(msgWrap, chatName, chatVC, @"image_self_detached_fallback")) {
        return YES;
    }

    WCPLLogWarning(@"Repeat image fallback to text: native/sendmsg unavailable msg=%@ chat=%@",
                   wcpl_repeatCachedDebugInfo(msgWrap, &msgDebug),
                   chatName ?: @"(nil)");
    return NO;
}

static void wcpl_repeatLogVideoPipelineAbort(NSString *scene,
                                             CMessageWrap *msgWrap,
                                             BOOL hasVideoAsset,
                                             unsigned long long videoAssetSize,
                                             NSString *decision,
                                             NSString *reason) {
    WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=msg(local=%u svr=%lld hasAsset=%d size=%llu) branch_decision=%@ error/fallback_reason=%@",
                   scene,
                   msgWrap.m_uiMesLocalID,
                   msgWrap.m_n64MesSvrID,
                   hasVideoAsset ? 1 : 0,
                   videoAssetSize,
                   decision ?: @"(nil)",
                   reason ?: @"(nil)");
}

static BOOL wcpl_repeatTryVideoSelfFallback(CMessageWrap *msgWrap,
                                            NSString *chatName,
                                            BaseMsgContentViewController *chatVC,
                                            NSString *sendmgrScene,
                                            BOOL hasVideoAsset) {
    if (!hasVideoAsset) {
        return NO;
    }
    if (wcpl_repeatMediaBySendMessageMgr(msgWrap, chatName, sendmgrScene)) {
        return YES;
    }
    if (wcpl_repeatNativeResend(msgWrap, chatName, chatVC, @"video_self_native_fallback")) {
        return YES;
    }
    if (wcpl_repeatMediaBySendMessageMgr(msgWrap, chatName, @"video_self_sendmsgmgr_retry")) {
        return YES;
    }
    return NO;
}

static void wcpl_repeatHandleVideoMessage(CMessageWrap *msgWrap,
                                          NSString *chatName,
                                          BaseMsgContentViewController *chatVC) {
    BOOL isFromOtherVideo = wcpl_isMessageFromOther(msgWrap);
    NSString *videoAssetPath = nil;
    unsigned long long videoAssetSize = 0;
    BOOL hasVideoAsset = NO;
    if (!isFromOtherVideo) {
        hasVideoAsset = wcpl_probeVideoLocalAsset(msgWrap, &videoAssetPath, &videoAssetSize);
    }
    NSString *msgDebug = nil;
    WCPLLogInfo(@"issue_id=WXBUG-VIDEO-REPEAT-DELETE module=repeat.video scene=video_pipeline input=msg(local=%u svr=%lld fromOther=%d hasAsset=%d size=%llu) branch_decision=forward_first_skip_native error/fallback_reason=none",
                msgWrap.m_uiMesLocalID,
                msgWrap.m_n64MesSvrID,
                isFromOtherVideo ? 1 : 0,
                hasVideoAsset ? 1 : 0,
                videoAssetSize);
    WCPLLogDebug(@"Repeat media strategy: scene=video msg=%@ isFromOther=%d hasAsset=%d size=%llu path=%@",
                 wcpl_repeatCachedDebugInfo(msgWrap, &msgDebug),
                 isFromOtherVideo ? 1 : 0,
                 hasVideoAsset ? 1 : 0,
                 videoAssetSize,
                 videoAssetPath ?: @"(nil)");

    NSString *forwardScene = isFromOtherVideo ? @"video_other_forward" : @"video_self_forward";
    NSString *sendmgrScene = isFromOtherVideo ? @"video_other_sendmsgmgr" : @"video_self_sendmsgmgr";
    if (wcpl_repeatVideoByForwardUtil(msgWrap, chatName, forwardScene)) {
        return;
    }

    if (isFromOtherVideo) {
        wcpl_repeatLogVideoPipelineAbort(sendmgrScene,
                                         msgWrap,
                                         hasVideoAsset,
                                         videoAssetSize,
                                         @"abort_other_without_unsafe_fallback",
                                         @"forward_failed");
        return;
    }

    if (wcpl_repeatTryVideoSelfFallback(msgWrap,
                                        chatName,
                                        chatVC,
                                        sendmgrScene,
                                        hasVideoAsset)) {
        return;
    }

    wcpl_repeatLogVideoPipelineAbort(sendmgrScene,
                                     msgWrap,
                                     hasVideoAsset,
                                     videoAssetSize,
                                     @"abort_without_native_fallback",
                                     @"forward_and_sendmsg_failed");
}

static void wcpl_repeatHandleVoiceMessage(CMessageWrap *msgWrap,
                                          NSString *chatName,
                                          BaseMsgContentViewController *chatVC,
                                          id logicController) {
    if (wcpl_repeatNativeResend(msgWrap, chatName, chatVC, @"voice_native_resend")) {
        return;
    }
    if (wcpl_repeatVoiceByRecordMessage(msgWrap, chatName, chatVC, logicController)) {
        return;
    }
    if (wcpl_repeatVoiceBySendMessageMgr(msgWrap, chatName, chatVC, logicController)) {
        return;
    }
    WCPLLogError(@"Repeat voice failed: all channels exhausted msg=%@ chat=%@",
                 wcpl_repeatMessageDebugInfo(msgWrap),
                 chatName ?: @"(nil)");
}

static void wcpl_repeatHandleTextMessage(CMessageWrap *msgWrap,
                                         NSString *repeatText,
                                         NSString *chatName,
                                         id logicController,
                                         BaseMsgContentViewController *chatVC) {
    if (wcpl_repeatTextByLogicController(msgWrap,
                                         repeatText,
                                         logicController,
                                         chatVC,
                                         @"text_logiccontroller_primary")) {
        return;
    }
    if (wcpl_repeatTextBySendMessageMgrFresh(msgWrap, chatName, @"text_sendmsgmgr_fresh")) {
        return;
    }
    WCPLLogError(@"Repeat text failed: sendmsgmgr rejected msg=%@ chat=%@",
                 wcpl_repeatMessageDebugInfo(msgWrap),
                 chatName ?: @"(nil)");
}

static void wcpl_repeatHandleAllTypeFallback(CMessageWrap *msgWrap,
                                             NSString *chatName,
                                             BaseMsgContentViewController *chatVC) {
    if (wcpl_repeatNativeResendByDetachedWrap(msgWrap, chatName, chatVC, @"alltype_native_detached")) {
        WCPLLogInfo(@"Repeat sent: flow=alltype_native_detached msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
        return;
    }
    if (wcpl_repeatNativeResend(msgWrap, chatName, chatVC, @"alltype_native_legacy")) {
        WCPLLogInfo(@"Repeat sent: flow=alltype_native_legacy msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
        return;
    }
    if (wcpl_repeatMediaBySendMessageMgr(msgWrap, chatName, @"alltype_sendmsgmgr")) {
        WCPLLogInfo(@"Repeat sent: flow=alltype_sendmsgmgr msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
        return;
    }
    WCPLLogError(@"Repeat failed(native-only): type=%@ msg=%@",
                 wcpl_repeatTypeName(msgWrap.m_uiMessageType),
                 wcpl_repeatMessageDebugInfo(msgWrap));
}

%hook CommonMessageCellView

%new
- (void)wchook_repeatMessageWrap:(CMessageWrap *)msgWrap {
    if (!msgWrap) {
        return;
    }

    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!wcpl_isRepeatTypeEnabledByConfig(config, msgWrap)) {
        WCPLLogWarning(@"Repeat blocked: type=%@(%u) toggle(emoticon=%d voice=%d image=%d video=%d)",
                       wcpl_repeatTypeName(msgWrap.m_uiMessageType),
                       msgWrap.m_uiMessageType,
                       config.repeatSupportEmoticonEnable ? 1 : 0,
                       config.repeatSupportVoiceEnable ? 1 : 0,
                       config.repeatSupportImageEnable ? 1 : 0,
                       config.repeatSupportVideoEnable ? 1 : 0);
        return;
    }

    BaseMsgContentViewController *chatVC = [self wchook_findChatViewController];
    if (!chatVC) {
        WCPLLogWarning(@"Repeat failed: chat view controller not found");
        return;
    }

    id logicController = nil;
    id toolView = nil;

    unsigned int msgType = msgWrap.m_uiMessageType;
    NSString *chatName = wcpl_chatNameForMessage(msgWrap, chatVC);
    NSString *repeatText = nil;
    WCPLLogLevel logLevel = [WCPLLogger currentLevel];

    // 仅在 Debug 日志开启时计算重字段，避免热路径重复开销。
    if (logLevel <= WCPLLogLevelDebug) {
        repeatText = wcpl_repeatTextForMessageWrap(msgWrap);
        BOOL hasQuote = (msgType == 49) || (wcpl_quoteTargetFromMessageWrap(msgWrap) != nil);
        WCPLLogDebug(@"Repeat pipeline start: class=%@ cell=%p type=%@ msg=%@ hasQuote=%d textLen=%lu",
                     NSStringFromClass([self class]),
                     self,
                     wcpl_repeatTypeName(msgType),
                     wcpl_repeatMessageDebugInfo(msgWrap),
                     hasQuote ? 1 : 0,
                     (unsigned long)repeatText.length);
    }

    // 发送分发改为轻量 switch，具体流程下沉到 handler，减少热路径分支复杂度。
    switch (msgType) {
        case 49:
            if (!toolView) {
                toolView = wcpl_quoteToolViewForChatVC(chatVC);
            }
            wcpl_repeatHandleQuoteMessage(msgWrap, chatName, chatVC, toolView);
            return;
        case 47:
            if (!logicController) {
                logicController = wcpl_quoteLogicControllerForChatVC(chatVC);
            }
            wcpl_repeatHandleEmoticonMessage(msgWrap, chatName, chatVC, logicController);
            return;
        case 3:
            wcpl_repeatHandleImageMessage(msgWrap, chatName, chatVC);
            return;
        case 43:
            wcpl_repeatHandleVideoMessage(msgWrap, chatName, chatVC);
            return;
        case 34:
            if (!logicController) {
                logicController = wcpl_quoteLogicControllerForChatVC(chatVC);
            }
            wcpl_repeatHandleVoiceMessage(msgWrap, chatName, chatVC, logicController);
            return;
        default:
            break;
    }

    if (msgType == 1) {
        if (!repeatText) {
            repeatText = wcpl_repeatTextForMessageWrap(msgWrap);
        }
        if (repeatText.length == 0) {
            WCPLLogWarning(@"Repeat failed: empty repeat text type=%@ msg=%@",
                           wcpl_repeatTypeName(msgType),
                           wcpl_repeatMessageDebugInfo(msgWrap));
            return;
        }
        if (!logicController) {
            logicController = wcpl_quoteLogicControllerForChatVC(chatVC);
        }
        wcpl_repeatHandleTextMessage(msgWrap, repeatText, chatName, logicController, chatVC);
        return;
    }

    wcpl_repeatHandleAllTypeFallback(msgWrap, chatName, chatVC);
}

%new
- (void)wchook_onRepeatButtonTapped:(UIButton *)sender {
    CFTimeInterval now = CACurrentMediaTime();
    NSNumber *lastTapObj = objc_getAssociatedObject(sender, kWCPLRepeatButtonLastTapTimeKey);
    if ([lastTapObj isKindOfClass:[NSNumber class]] &&
        (now - lastTapObj.doubleValue) < kWCPLRepeatButtonTapDebounceInterval) {
        WCPLLogDebug(@"Repeat click ignored by debounce: class=%@ cell=%p delta=%.3f",
                     NSStringFromClass([self class]),
                     self,
                     now - lastTapObj.doubleValue);
        return;
    }
    objc_setAssociatedObject(sender, kWCPLRepeatButtonLastTapTimeKey, @(now), OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    CMessageWrap *cellWrap = wcpl_messageWrapForCellView(self);
    CMessageWrap *msgWrap = cellWrap ?: objc_getAssociatedObject(sender, kWCPLRepeatButtonWrapKey);

    if (!msgWrap) {
        WCPLLogWarning(@"Repeat click ignored: class=%@ cell=%p reason=noMessageWrap", NSStringFromClass([self class]), self);
        return;
    }

    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (config.repeatButtonHapticEnable) {
        UIImpactFeedbackGenerator *feedback = [self wchook_repeatTapFeedbackGenerator];
        [feedback prepare];
        if ([feedback respondsToSelector:@selector(impactOccurredWithIntensity:)]) {
            [feedback impactOccurredWithIntensity:0.55f];
        } else {
            [feedback impactOccurred];
        }
    }

    WCPLLogLevel logLevel = [WCPLLogger currentLevel];
    if (logLevel <= WCPLLogLevelInfo) {
        NSString *buttonMessageKey = objc_getAssociatedObject(sender, kWCPLRepeatButtonMessageKey);
        BOOL hasQuote = (msgWrap.m_uiMessageType == 49) || (wcpl_quoteTargetFromMessageWrap(msgWrap) != nil);
        WCPLLogInfo(@"Repeat click: class=%@ cell=%p msg=%@ hasQuote=%d key=%@",
                    NSStringFromClass([self class]),
                    self,
                    wcpl_repeatMessageDebugInfo(msgWrap),
                    hasQuote ? 1 : 0,
                    buttonMessageKey ?: @"(nil)");
    }

    wcpl_dispatchRepeatMessageWrapSafely(self, msgWrap, @"repeat_button_tap");
}

%new
- (void)wchook_onRepeatButtonTouchDown:(UIButton *)sender {
    [UIView animateWithDuration:0.12 animations:^{
        sender.transform = CGAffineTransformMakeScale(0.92f, 0.92f);
        sender.alpha = 0.86f;
    }];
    WCPLLogDebug(@"Repeat touch down: class=%@ cell=%p", NSStringFromClass([self class]), self);
}

%new
- (void)wchook_onRepeatButtonTouchUp:(UIButton *)sender {
    [UIView animateWithDuration:0.12 animations:^{
        sender.transform = CGAffineTransformIdentity;
        sender.alpha = 1.0f;
    }];
    WCPLLogDebug(@"Repeat touch end: class=%@ cell=%p", NSStringFromClass([self class]), self);
}

%new
- (void)wchook_performDeleteMessage:(CMessageWrap *)msgWrap {
    if (!msgWrap) return;

    @try {
        // 方法1: 调用 Cell 的删除方法
        if ([self respondsToSelector:@selector(onDelete:)]) {
            [self performSelector:@selector(onDelete:) withObject:nil];
            WCPLLogDebug(@"Message deleted via onDelete:");
            return;
        }

        // 方法2: 通过 CMessageMgr 删除
        NSString *chatName = wcpl_chatNameForMessage(msgWrap, nil);
        if (WCPLMessageActionAdapterDeleteMessage(chatName, msgWrap)) {
            WCPLLogDebug(@"Message deleted via CMessageMgr DelMsg:MsgWrap:");
            return;
        }

        // 方法3: 通过 ViewController 删除
        BaseMsgContentViewController *chatVC = [self wchook_findChatViewController];
        if (chatVC && [chatVC respondsToSelector:@selector(onDeleteMessage:)]) {
            [chatVC performSelector:@selector(onDeleteMessage:) withObject:msgWrap];
            WCPLLogDebug(@"Message deleted via onDeleteMessage:");
            return;
        }

        WCPLLogWarning(@"Delete message: no suitable method found");
    } @catch (NSException *exception) {
        WCPLLogError(@"Delete message failed: %@", exception);
    }
}

%new
- (void)wchook_performRevokeMessage:(CMessageWrap *)msgWrap {
    if (!msgWrap) return;

    @try {
        // 优先调用 Cell 的撤回方法 (正确的方法名是 onRevokeMsg:)
        if ([self respondsToSelector:@selector(onRevokeMsg:)]) {
            [self performSelector:@selector(onRevokeMsg:) withObject:nil];
            WCPLLogDebug(@"Message revoked via onRevokeMsg:");
            return;
        }

        // 备用方案：通过 CMessageMgr 撤回 (正确的方法签名是 RevokeMsg:MsgWrap:Counter:)
        NSString *chatName = wcpl_chatNameForMessage(msgWrap, nil);
        if (WCPLMessageActionAdapterRevokeMessage(chatName, msgWrap, 0)) {
            WCPLLogDebug(@"Message revoked via CMessageMgr RevokeMsg:MsgWrap:Counter:");
        }
    } @catch (NSException *exception) {
        WCPLLogError(@"Revoke message failed: %@", exception);
    }
}

%new
- (BOOL)wchook_tryForwardViaMiyouPrimaryRoutes:(CMessageWrap *)msgWrap
                                         chatVC:(BaseMsgContentViewController *)chatVC
                                       sceneTag:(NSString *)sceneTag {
    if (!msgWrap) {
        return NO;
    }

    NSString *routeScene = ([sceneTag isKindOfClass:[NSString class]] && sceneTag.length > 0) ? sceneTag : @"手势";
    NSString *chatName = wcpl_chatNameForMessage(msgWrap, chatVC);
    id contact = wcpl_repeatContactForChatName(chatName, msgWrap);
    UIViewController *fromVC = chatVC ?: [self wchook_findTopViewController];
    NSString *routeUsed = nil;
    BOOL forwarded = WCPLMessageActionAdapterForwardMessage(msgWrap, fromVC, contact, &routeUsed);
    if (forwarded) {
        WCPLLogInfo(@"Gesture forward route=%@ scene=%@ msg=%@",
                    routeUsed ?: @"adapter",
                    routeScene,
                    wcpl_repeatMessageDebugInfo(msgWrap));
        return YES;
    }
    return NO;
}

%new
- (BOOL)wchook_tryForwardViaMiyouOnForward:(CMessageWrap *)msgWrap
                                      chatVC:(BaseMsgContentViewController *)chatVC
                                    sceneTag:(NSString *)sceneTag {
    if (!msgWrap) {
        return NO;
    }

    NSString *routeScene = ([sceneTag isKindOfClass:[NSString class]] && sceneTag.length > 0) ? sceneTag : @"手势";
    BOOL isFileApp = wcpl_isFileAppMessage(msgWrap);

    if ([self respondsToSelector:@selector(onForward:)]) {
        @try {
            id payload = isFileApp ? (id)self : (id)msgWrap;
            ((void (*)(id, SEL, id))objc_msgSend)(self, @selector(onForward:), payload);
            WCPLLogInfo(@"Gesture forward route=%@ scene=%@ msg=%@",
                        isFileApp ? @"MiYou.onForwardSender.self" : @"MiYou.onForwardMsgWrap.self",
                        routeScene,
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Gesture forward route=%@ failed scene=%@ reason=%@",
                           isFileApp ? @"MiYou.onForwardSender.self" : @"MiYou.onForwardMsgWrap.self",
                           routeScene,
                           exception.reason ?: exception);
        }
    }

    if (chatVC && [chatVC respondsToSelector:@selector(onForward:)]) {
        @try {
            id payload = isFileApp ? (id)self : (id)msgWrap;
            ((void (*)(id, SEL, id))objc_msgSend)(chatVC, @selector(onForward:), payload);
            WCPLLogInfo(@"Gesture forward route=%@ scene=%@ msg=%@",
                        isFileApp ? @"MiYou.onForwardSender.chatVC" : @"MiYou.onForwardMsgWrap.chatVC",
                        routeScene,
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Gesture forward route=%@ failed scene=%@ reason=%@",
                           isFileApp ? @"MiYou.onForwardSender.chatVC" : @"MiYou.onForwardMsgWrap.chatVC",
                           routeScene,
                           exception.reason ?: exception);
        }
    }

    return NO;
}

%new
- (BOOL)wchook_tryForwardViaLegacyFallback:(CMessageWrap *)msgWrap
                                      chatVC:(BaseMsgContentViewController *)chatVC
                                    sceneTag:(NSString *)sceneTag {
    if (!msgWrap) {
        return NO;
    }

    NSString *routeScene = ([sceneTag isKindOfClass:[NSString class]] && sceneTag.length > 0) ? sceneTag : @"手势";
    BOOL isFileApp = wcpl_isFileAppMessage(msgWrap);

    if (isFileApp && [self respondsToSelector:@selector(doForward)]) {
        @try {
            ((void (*)(id, SEL))objc_msgSend)(self, @selector(doForward));
            WCPLLogInfo(@"Gesture forward route=file.legacy.doForward.first scene=%@ msg=%@",
                        routeScene,
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Gesture forward route=file.legacy.doForward.first failed scene=%@ reason=%@",
                           routeScene,
                           exception.reason ?: exception);
        }
    }

    if ([self respondsToSelector:@selector(onForward:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(self, @selector(onForward:), self);
            WCPLLogInfo(@"Gesture forward route=legacy.onForward scene=%@ msg=%@",
                        routeScene,
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Gesture forward route=legacy.onForward failed scene=%@ reason=%@",
                           routeScene,
                           exception.reason ?: exception);
        }
    }

    if ([self respondsToSelector:@selector(doForward)]) {
        @try {
            ((void (*)(id, SEL))objc_msgSend)(self, @selector(doForward));
            WCPLLogInfo(@"Gesture forward route=legacy.doForward scene=%@ msg=%@",
                        routeScene,
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Gesture forward route=legacy.doForward failed scene=%@ reason=%@",
                           routeScene,
                           exception.reason ?: exception);
        }
    }

    if (chatVC && [chatVC respondsToSelector:@selector(onForward:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(chatVC, @selector(onForward:), self);
            WCPLLogInfo(@"Gesture forward route=legacy.chatVC.onForward scene=%@ msg=%@",
                        routeScene,
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Gesture forward route=legacy.chatVC.onForward failed scene=%@ reason=%@",
                           routeScene,
                           exception.reason ?: exception);
        }
    }

    return NO;
}

%new
- (void)wchook_performForwardMessage:(CMessageWrap *)msgWrap sceneTag:(NSString *)sceneTag {
    if (!msgWrap) {
        return;
    }

    NSString *routeScene = ([sceneTag isKindOfClass:[NSString class]] && sceneTag.length > 0) ? sceneTag : @"手势";
    @try {
        if (msgWrap.m_uiMessageType == 34 && [self respondsToSelector:@selector(wcpl_handleVoiceForwardMenuItem:)]) {
            @try {
                ((void (*)(id, SEL, id))objc_msgSend)(self, @selector(wcpl_handleVoiceForwardMenuItem:), self);
                WCPLLogInfo(@"Gesture forward route=miyou.voiceMenu scene=%@ msg=%@",
                            routeScene,
                            wcpl_repeatMessageDebugInfo(msgWrap));
                return;
            } @catch (NSException *voiceException) {
                WCPLLogWarning(@"Gesture forward route=miyou.voiceMenu failed scene=%@ reason=%@",
                               routeScene,
                               voiceException.reason ?: voiceException);
            }
        }

        BaseMsgContentViewController *chatVC = [self wchook_findChatViewController];
        BOOL isFromOther = wcpl_isMessageFromOther(msgWrap);
        BOOL isFileApp = wcpl_isFileAppMessage(msgWrap);
        WCPLLogInfo(@"Gesture forward dispatch: scene=%@ isFromOther=%d class=%@ msg=%@",
                    routeScene,
                    isFromOther ? 1 : 0,
                    NSStringFromClass([self class]),
                    wcpl_repeatMessageDebugInfo(msgWrap));
        if (isFileApp) {
            // 文件消息优先原生菜单链路（onForward/doForward），避免 msgWrap 路由“假成功不弹窗”。
            if ([self wchook_tryForwardViaLegacyFallback:msgWrap chatVC:chatVC sceneTag:routeScene]) {
                return;
            }
            if ([self wchook_tryForwardViaMiyouOnForward:msgWrap chatVC:chatVC sceneTag:routeScene]) {
                return;
            }
            if ([self wchook_tryForwardViaMiyouPrimaryRoutes:msgWrap chatVC:chatVC sceneTag:routeScene]) {
                return;
            }
            WCPLLogWarning(@"Gesture forward file route=none scene=%@ class=%@ msg=%@",
                           routeScene,
                           NSStringFromClass([self class]),
                           wcpl_repeatMessageDebugInfo(msgWrap));
            return;
        }

        if (isFromOther) {
            // 对方消息优先走可见菜单链路（与密友体验一致），再降级到静默转发链路。
            if ([self wchook_tryForwardViaLegacyFallback:msgWrap chatVC:chatVC sceneTag:routeScene]) {
                return;
            }
            if ([self wchook_tryForwardViaMiyouOnForward:msgWrap chatVC:chatVC sceneTag:routeScene]) {
                return;
            }
            if ([self wchook_tryForwardViaMiyouPrimaryRoutes:msgWrap chatVC:chatVC sceneTag:routeScene]) {
                return;
            }
        } else {
            if ([self wchook_tryForwardViaMiyouOnForward:msgWrap chatVC:chatVC sceneTag:routeScene]) {
                return;
            }
            if ([self wchook_tryForwardViaMiyouPrimaryRoutes:msgWrap chatVC:chatVC sceneTag:routeScene]) {
                return;
            }
            if ([self wchook_tryForwardViaLegacyFallback:msgWrap chatVC:chatVC sceneTag:routeScene]) {
                return;
            }
        }

        WCPLLogWarning(@"Gesture forward route=none scene=%@ class=%@ msg=%@",
                       routeScene,
                       NSStringFromClass([self class]),
                       wcpl_repeatMessageDebugInfo(msgWrap));
    } @catch (NSException *exception) {
        WCPLLogError(@"Forward message failed: scene=%@ reason=%@", routeScene, exception.reason ?: exception);
    }
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

%end
