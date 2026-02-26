#import "WCHookMessageNavigator.h"
#import "WCPLCrashReporter.h"
#import "WCPLDispatchUtils.h"
#import "WCPLLogger.h"
#import "WCPLServiceCenter.h"

#import <UIKit/UIKit.h>
#import <limits.h>
#import <objc/message.h>
#import <objc/runtime.h>

@interface CommonMessageCellView : UIView
@end

@interface WCHookRevokeReturnBridge : NSObject
+ (instancetype)sharedBridge;
- (void)onTapReturnButton:(UIButton *)sender;
@end

static Class WCHookReferViewClass(void);
static BOOL WCHookObjectIsReferView(id object);
static id WCHookInvokeObject(id target, SEL selector);
static BOOL WCHookRevokeDebugToastEnabled(void);
static void WCHookShowDebugToast(NSString *text);
static UIWindow *WCHookActiveWindow(void);
static UIResponder *WCHookLocateResponderForView(UIView *view);
static UIView *WCHookLocateCarrierViewFromObject(id object);
static CommonMessageCellView *WCHookResolveMessageCellForObject(id object);
static id WCHookMessageWrapFromObject(id object);
static id WCHookMessageWrapForCell(CommonMessageCellView *cell);
static id WCHookReferMessageFromWrap(id messageWrap);
static id WCHookLocateTargetFromObject(id object);
static BOOL WCHookLooksLikeRevokeTipContent(NSString *content);
static BOOL WCHookLooksLikeQuitMonitorTipContent(NSString *content);
static NSString *WCHookStringFieldFromWrap(id messageWrap, SEL selector, NSString *kvcKey);
static NSNumber *WCHookNumberFieldFromWrap(id messageWrap, SEL selector, NSString *kvcKey);
static long long WCHookLongLongFieldFromWrap(id messageWrap, SEL selector, NSString *kvcKey);
static NSString *WCHookMessageContentFromWrap(id messageWrap);
static NSString *WCHookMsgSourceFromWrap(id messageWrap);
static NSString *WCHookTrimString(NSString *text);
static NSString *WCHookInlineText(NSString *text);
static NSString *WCHookExtractTagValue(NSString *text, NSString *tag);
static NSString *WCHookExtractFirstCSVItem(NSString *text);
static long long WCHookParseLongLong(NSString *text);
static unsigned int WCHookParseUInt(NSString *text);
static unsigned int WCHookUIntFieldFromWrap(id messageWrap, SEL selector, NSString *kvcKey);
static NSArray<NSString *> *WCHookMetaSourceCandidatesFromWrap(id messageWrap);
static NSString *WCHookExtractRevokeExcerptFromTipContent(NSString *content);
static NSString *WCHookDigestForMessageWrap(id messageWrap);
static NSString *WCHookExtractQuitMonitorUserNameFromMsgSource(NSString *msgSource);
static NSString *WCHookExtractQuitMonitorUserNameFromContent(NSString *content);
static NSString *WCHookStripHTMLTags(NSString *text);
static NSString *WCHookExtractQuitMonitorDisplayNameFromContent(NSString *content);
static id WCHookContactForUserName(NSString *userName);
static id WCHookMessageMgr(void);
static id WCHookFindMsgByLocalID(id messageMgr, NSString *chatName, unsigned int localID);
static id WCHookFindRevokeTargetByExcerpt(id messageMgr, id tipMessageWrap, NSString *chatName, NSString *excerpt);
static id WCHookResolveRevokeTipTargetMessage(id messageWrap,
                                              id messageMgr,
                                              NSString **sessionOut,
                                              long long *svrIDOut,
                                              unsigned int *localIDOut,
                                              NSString **excerptOut);
static void WCHookBindReferRelationForRevokeTip(id tipMessageWrap, id targetMessageWrap);
static void WCHookClearReferRelationForRevokeTip(id tipMessageWrap);
static id WCHookResolveMsgContentTargetFromObject(id object);
static BOOL WCHookLocateAndEmphasizeRevokeTarget(id locateTarget,
                                                 id tipMessageWrap,
                                                 id targetMessage,
                                                 BOOL prepareOfficialReturnAnchor);
static NSInteger WCHookMsgTargetScore(id object);
static UIScrollView *WCHookFindPreferredScrollViewInView(UIView *rootView);
static UIScrollView *WCHookResolveScrollViewFromTarget(id object);
static void WCHookShowRevokeReturnButton(id locateTarget, id tipMessageWrap);
static void WCHookHideRevokeReturnButton(void);
static void WCHookHandleRevokeReturnButtonTap(UIButton *button);
static void WCHookInstallOfficialEdgeTipsInterceptor(void);
static void WCHookInstallEdgeTipsTouchTracker(void);
static void WCHookInstallEdgeTipsClickTracker(void);
static BOOL WCHookShowOfficialRevokeReturnEdgeTip(id officialTarget);
static void WCHookOnClickEdgeTipsViewIntercept(id self, SEL _cmd, id sender);
static void WCHookEdgeTipsOnClickBtnIntercept(id self, SEL _cmd);
static void WCHookEdgeTipsTouchesEndedIntercept(id self, SEL _cmd, id touches, id event);
static id WCHookFallbackLocateTarget(void);
static BOOL WCHookTryJumpFromRevokeTipMessageWrap(id messageWrap, id locateTarget);
static BOOL WCHookTryJumpFromRevokeTipCell(CommonMessageCellView *cell);
static BOOL WCHookShouldAutoHideRevokeReturnEntry(UIScrollView *trackedScrollView, CGFloat baselineOffsetY);
static void WCHookScheduleAutoHideRevokeReturnEntry(id tipMessageWrap,
                                                    id preferredTarget,
                                                    UIScrollView *trackedScrollView,
                                                    CGFloat baselineOffsetY);
static id WCHookResolveProfileOpenTargetFromCell(CommonMessageCellView *cell);
static BOOL WCHookOpenProfileWithTarget(id target, NSString *userName, NSString *displayName);
static BOOL WCHookExecuteOpenQuitMemberProfileFromCell(CommonMessageCellView *cell);
static BOOL WCHookExecuteJumpToMessageFromCell(CommonMessageCellView *cell, id targetMessage);
static BOOL WCHookExecuteJumpToMessageWithTarget(id locateTarget, id targetMessage);
static BOOL WCHookExecuteJumpFromCell(CommonMessageCellView *cell);
static BOOL WCHookExecuteJumpFromInput(id toolView);
static BOOL WCHookPerformSyncOnMainThread(BOOL (^action)(void));

static NSString *const kWCHookRevokeDebugToastEnabledKey = @"kWCPLRevokeDebugToastEnabled";
static NSInteger const kWCHookRevokeReturnButtonTag = 0x57435254;
static const void *kWCHookRevokeReturnLocateTargetKey = &kWCHookRevokeReturnLocateTargetKey;
static const void *kWCHookRevokeReturnTipWrapKey = &kWCHookRevokeReturnTipWrapKey;
static const void *kWCHookRevokeReturnHideTokenKey = &kWCHookRevokeReturnHideTokenKey;
static const void *kWCHookOfficialReturnTipWrapKey = &kWCHookOfficialReturnTipWrapKey;
static const void *kWCHookOfficialReturnExpireKey = &kWCHookOfficialReturnExpireKey;
static const void *kWCHookOfficialReturnEnableAtKey = &kWCHookOfficialReturnEnableAtKey;
static const void *kWCHookOfficialReturnTapAtKey = &kWCHookOfficialReturnTapAtKey;
static const void *kWCHookOfficialReturnOwnerKey = &kWCHookOfficialReturnOwnerKey;
static NSTimeInterval gWCHookRevokeTipTapThrottleUntil = 0;

typedef void (*WCHookOnClickEdgeTipsViewIMP)(id, SEL, id);
static WCHookOnClickEdgeTipsViewIMP gWCHookOriginalOnClickEdgeTipsView = NULL;
typedef void (*WCHookEdgeTipsTouchesEndedIMP)(id, SEL, id, id);
static WCHookEdgeTipsTouchesEndedIMP gWCHookOriginalEdgeTipsTouchesEnded = NULL;
typedef void (*WCHookEdgeTipsOnClickBtnIMP)(id, SEL);
static WCHookEdgeTipsOnClickBtnIMP gWCHookOriginalEdgeTipsOnClickBtn = NULL;

@implementation WCHookRevokeReturnBridge

+ (instancetype)sharedBridge {
    static WCHookRevokeReturnBridge *bridge = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        bridge = [[WCHookRevokeReturnBridge alloc] init];
    });
    return bridge;
}

- (void)onTapReturnButton:(UIButton *)sender {
    WCHookHandleRevokeReturnButtonTap(sender);
}

@end

@implementation WCHookMessageNavigator

+ (BOOL)senderLooksLikeReferView:(id)sender {
    if (!sender) {
        return YES;
    }
    if ([sender isKindOfClass:[UITapGestureRecognizer class]]) {
        return WCHookObjectIsReferView(((UITapGestureRecognizer *)sender).view);
    }
    return WCHookObjectIsReferView(sender);
}

+ (BOOL)tryJumpFromCell:(CommonMessageCellView *)cell {
    if (!cell) {
        return NO;
    }
    WCPLCrashBreadcrumb(@"引用跳转(消息气泡): cell=%@", NSStringFromClass([cell class]));
    return WCHookPerformSyncOnMainThread(^BOOL{
        return WCHookExecuteJumpFromCell(cell);
    });
}

+ (BOOL)tryJumpFromInputTool:(id)toolView {
    if (!toolView) {
        return NO;
    }
    WCPLCrashBreadcrumb(@"引用跳转(输入框): toolView=%@", NSStringFromClass([toolView class]));
    return WCHookPerformSyncOnMainThread(^BOOL{
        return WCHookExecuteJumpFromInput(toolView);
    });
}

+ (BOOL)tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)cell {
    if (!cell) {
        return NO;
    }
    return WCHookPerformSyncOnMainThread(^BOOL{
        return WCHookExecuteOpenQuitMemberProfileFromCell(cell);
    });
}

+ (BOOL)tryJumpFromRevokeTipCell:(CommonMessageCellView *)cell {
    if (!cell) {
        return NO;
    }
    WCPLCrashBreadcrumb(@"防撤回提示跳转(消息气泡): cell=%@", NSStringFromClass([cell class]));
    return WCHookPerformSyncOnMainThread(^BOOL{
        return WCHookTryJumpFromRevokeTipCell(cell);
    });
}

+ (BOOL)tryJumpFromRevokeTipMessageWrap:(id)messageWrap locateTarget:(id)locateTarget {
    return WCHookPerformSyncOnMainThread(^BOOL{
        return WCHookTryJumpFromRevokeTipMessageWrap(messageWrap, locateTarget);
    });
}

@end

static Class WCHookReferViewClass(void) {
    static Class referViewClass = Nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        referViewClass = NSClassFromString(@"MMInputMsgReferView");
    });
    return referViewClass;
}

static BOOL WCHookObjectIsReferView(id object) {
    Class referClass = WCHookReferViewClass();
    return referClass && [object isKindOfClass:referClass];
}

static UIWindow *WCHookActiveWindow(void) {
    UIApplication *application = [UIApplication sharedApplication];
    if (![application isKindOfClass:[UIApplication class]]) {
        return nil;
    }
    if ([application respondsToSelector:@selector(windows)]) {
        for (UIWindow *candidate in [application.windows reverseObjectEnumerator]) {
            if (![candidate isKindOfClass:[UIWindow class]] || candidate.hidden || candidate.alpha < 0.01) {
                continue;
            }
            return candidate;
        }
    }
    return nil;
}

static BOOL WCHookRevokeDebugToastEnabled(void) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if (![defaults isKindOfClass:[NSUserDefaults class]]) {
        return NO;
    }
    id value = [defaults objectForKey:kWCHookRevokeDebugToastEnabledKey];
    if ([value respondsToSelector:@selector(boolValue)]) {
        return ((BOOL (*)(id, SEL))objc_msgSend)(value, @selector(boolValue));
    }
    return NO;
}

static void WCHookShowDebugToast(NSString *text) {
    if (!WCHookRevokeDebugToastEnabled()) {
        return;
    }

    NSString *message = WCHookTrimString(text);
    if (message.length == 0) {
        return;
    }

    UIWindow *window = WCHookActiveWindow();
    if (!window) {
        return;
    }

    static NSInteger const kToastTag = 0x5743504c;
    UIView *existing = [window viewWithTag:kToastTag];
    if (existing) {
        [existing removeFromSuperview];
    }

    UILabel *toast = [[UILabel alloc] initWithFrame:CGRectZero];
    toast.tag = kToastTag;
    toast.text = message;
    toast.textColor = UIColor.whiteColor;
    toast.font = [UIFont boldSystemFontOfSize:13.0];
    toast.textAlignment = NSTextAlignmentCenter;
    toast.numberOfLines = 2;
    toast.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.78];
    toast.layer.cornerRadius = 9.0;
    toast.layer.masksToBounds = YES;
    toast.alpha = 0.0;

    CGSize maxSize = CGSizeMake(MIN(CGRectGetWidth(window.bounds) - 40.0, 280.0), CGFLOAT_MAX);
    CGSize textSize = [toast sizeThatFits:maxSize];
    CGFloat width = MIN(MAX(textSize.width + 24.0, 150.0), maxSize.width + 20.0);
    CGFloat height = MIN(MAX(textSize.height + 14.0, 34.0), 72.0);
    toast.frame = CGRectMake((CGRectGetWidth(window.bounds) - width) * 0.5,
                             CGRectGetHeight(window.bounds) * 0.2,
                             width,
                             height);
    [window addSubview:toast];

    [UIView animateWithDuration:0.16 animations:^{
        toast.alpha = 1.0;
    } completion:^(__unused BOOL finishedIn) {
        [UIView animateWithDuration:0.28
                              delay:1.1
                            options:UIViewAnimationOptionCurveEaseInOut
                         animations:^{
            toast.alpha = 0.0;
        } completion:^(__unused BOOL finishedOut) {
            [toast removeFromSuperview];
        }];
    }];
}

static void WCHookOnClickEdgeTipsViewIntercept(id self, SEL _cmd, id sender) {
    id tipWrap = objc_getAssociatedObject(self, kWCHookOfficialReturnTipWrapKey);
    NSNumber *expireObj = objc_getAssociatedObject(self, kWCHookOfficialReturnExpireKey);
    NSNumber *enableAtObj = objc_getAssociatedObject(self, kWCHookOfficialReturnEnableAtKey);
    NSNumber *tapAtObj = objc_getAssociatedObject(self, kWCHookOfficialReturnTapAtKey);
    if (!tipWrap) {
        if (gWCHookOriginalOnClickEdgeTipsView) {
            gWCHookOriginalOnClickEdgeTipsView(self, _cmd, sender);
        }
        return;
    }

    NSTimeInterval now = NSDate.date.timeIntervalSince1970;
    BOOL activeWindowPassed = YES;
    BOOL notExpired = YES;
    BOOL tapWindowPassed = NO;
    if ([enableAtObj isKindOfClass:[NSNumber class]]) {
        activeWindowPassed = (now >= enableAtObj.doubleValue);
    }
    if ([expireObj isKindOfClass:[NSNumber class]]) {
        notExpired = (now <= expireObj.doubleValue);
    }
    if ([tapAtObj isKindOfClass:[NSNumber class]]) {
        NSTimeInterval delta = now - tapAtObj.doubleValue;
        tapWindowPassed = (delta >= -0.05 && delta <= 1.2);
    }

    if (!notExpired) {
        WCPLLogInfo(@"Revoke tip official back expired, fallback original");
        objc_setAssociatedObject(self, kWCHookOfficialReturnTipWrapKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(self, kWCHookOfficialReturnExpireKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(self, kWCHookOfficialReturnEnableAtKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(self, kWCHookOfficialReturnTapAtKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        if (gWCHookOriginalOnClickEdgeTipsView) {
            gWCHookOriginalOnClickEdgeTipsView(self, _cmd, sender);
        }
        return;
    }

    if (!(activeWindowPassed && tapWindowPassed)) {
        WCPLLogInfo(@"Revoke tip official back blocked(auto): sender=%@ tap=%d active=%d",
                    sender ? NSStringFromClass([sender class]) : @"nil",
                    tapWindowPassed ? 1 : 0,
                    activeWindowPassed ? 1 : 0);
        return;
    }

    WCPLLogInfo(@"Revoke tip official back handled(custom)");
    objc_setAssociatedObject(self, kWCHookOfficialReturnTipWrapKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCHookOfficialReturnExpireKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCHookOfficialReturnEnableAtKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCHookOfficialReturnTapAtKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    // 原生 edge tips 点击统一走“返回撤回提示”逻辑，保持与插件返回按钮一致。
    WCHookClearReferRelationForRevokeTip(tipWrap);
    id effectiveTarget = WCHookResolveMsgContentTargetFromObject(self);
    if (!effectiveTarget) {
        effectiveTarget = WCHookFallbackLocateTarget();
    }
    if (WCHookLocateAndEmphasizeRevokeTarget(effectiveTarget, nil, tipWrap, NO)) {
        if ([self respondsToSelector:@selector(removeTipView)]) {
            @try {
                ((void (*)(id, SEL))objc_msgSend)(self, @selector(removeTipView));
            } @catch (__unused NSException *exceptionHideTip) {
            }
        }
        WCHookShowDebugToast(@"撤回提示: 已返回提示位置");
        return;
    }

    WCHookShowDebugToast(@"撤回提示: 返回失败");
    if (gWCHookOriginalOnClickEdgeTipsView) {
        gWCHookOriginalOnClickEdgeTipsView(self, _cmd, sender);
    }
}

static void WCHookTrackOfficialEdgeTipTap(id senderObject, id fallbackTarget) {
    Class msgContentVCClass = NSClassFromString(@"BaseMsgContentViewController");
    id matchedController = nil;
    if (senderObject) {
        matchedController = objc_getAssociatedObject(senderObject, kWCHookOfficialReturnOwnerKey);
    }
    if (!matchedController && senderObject && [senderObject respondsToSelector:@selector(delegate)]) {
        @try {
            id delegate = ((id (*)(id, SEL))objc_msgSend)(senderObject, @selector(delegate));
            if ((msgContentVCClass && [delegate isKindOfClass:msgContentVCClass]) ||
                [delegate respondsToSelector:@selector(onClickEdgeTipsView:)]) {
                matchedController = delegate;
            }
        } @catch (__unused NSException *exceptionDelegate) {
        }
    }
    if (!matchedController && fallbackTarget &&
        ((msgContentVCClass && [fallbackTarget isKindOfClass:msgContentVCClass]) ||
         [fallbackTarget respondsToSelector:@selector(onClickEdgeTipsView:)])) {
        matchedController = fallbackTarget;
    }
    if (!matchedController && [senderObject isKindOfClass:[UIView class]]) {
        UIResponder *responder = (UIResponder *)senderObject;
        while (responder) {
            if ((msgContentVCClass && [responder isKindOfClass:msgContentVCClass]) ||
                [responder respondsToSelector:@selector(onClickEdgeTipsView:)]) {
                matchedController = responder;
                break;
            }
            responder = [responder nextResponder];
        }
    }
    if (!matchedController) {
        return;
    }

    objc_setAssociatedObject(matchedController,
                             kWCHookOfficialReturnTapAtKey,
                             @(NSDate.date.timeIntervalSince1970),
                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    WCPLLogInfo(@"Revoke tip official edge tap tracked: sender=%@ target=%@",
                senderObject ? NSStringFromClass([senderObject class]) : @"nil",
                NSStringFromClass([matchedController class]));
}

static void WCHookEdgeTipsOnClickBtnIntercept(id self, SEL _cmd) {
    WCHookTrackOfficialEdgeTipTap(self, nil);
    if (gWCHookOriginalEdgeTipsOnClickBtn) {
        gWCHookOriginalEdgeTipsOnClickBtn(self, _cmd);
    }
}

static void WCHookEdgeTipsTouchesEndedIntercept(id self, SEL _cmd, id touches, id event) {
    WCHookTrackOfficialEdgeTipTap(self, nil);

    if (gWCHookOriginalEdgeTipsTouchesEnded) {
        gWCHookOriginalEdgeTipsTouchesEnded(self, _cmd, touches, event);
    }
}

static void WCHookInstallEdgeTipsTouchTracker(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        Class edgeTipsClass = NSClassFromString(@"MMEdgeTipsView");
        SEL selector = @selector(touchesEnded:withEvent:);
        if (!edgeTipsClass) {
            WCPLLogWarning(@"Revoke tip edge-tips touch tracker skipped: class missing");
            return;
        }

        Method method = class_getInstanceMethod(edgeTipsClass, selector);
        if (!method) {
            WCPLLogWarning(@"Revoke tip edge-tips touch tracker skipped: method missing");
            return;
        }

        IMP oldImp = class_getMethodImplementation(edgeTipsClass, selector);
        const char *typeEncoding = method_getTypeEncoding(method);
        class_replaceMethod(edgeTipsClass, selector, (IMP)WCHookEdgeTipsTouchesEndedIntercept, typeEncoding);
        gWCHookOriginalEdgeTipsTouchesEnded = (WCHookEdgeTipsTouchesEndedIMP)oldImp;
        WCPLLogInfo(@"Revoke tip edge-tips touch tracker installed");
    });
}

static void WCHookInstallEdgeTipsClickTracker(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        Class edgeTipsClass = NSClassFromString(@"MMEdgeTipsView");
        SEL selector = @selector(onClickBtn);
        if (!edgeTipsClass) {
            WCPLLogWarning(@"Revoke tip edge-tips click tracker skipped: class missing");
            return;
        }

        Method method = class_getInstanceMethod(edgeTipsClass, selector);
        if (!method) {
            WCPLLogWarning(@"Revoke tip edge-tips click tracker skipped: method missing");
            return;
        }

        IMP oldImp = class_getMethodImplementation(edgeTipsClass, selector);
        const char *typeEncoding = method_getTypeEncoding(method);
        class_replaceMethod(edgeTipsClass, selector, (IMP)WCHookEdgeTipsOnClickBtnIntercept, typeEncoding);
        gWCHookOriginalEdgeTipsOnClickBtn = (WCHookEdgeTipsOnClickBtnIMP)oldImp;
        WCPLLogInfo(@"Revoke tip edge-tips click tracker installed");
    });
}

static void WCHookInstallOfficialEdgeTipsInterceptor(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        WCHookInstallEdgeTipsTouchTracker();
        WCHookInstallEdgeTipsClickTracker();
        Class contentClass = NSClassFromString(@"BaseMsgContentViewController");
        SEL selector = @selector(onClickEdgeTipsView:);
        if (!contentClass || !class_respondsToSelector(contentClass, selector)) {
            WCPLLogWarning(@"Revoke tip edge-tips interceptor skipped: class/selector missing");
            return;
        }

        Method method = class_getInstanceMethod(contentClass, selector);
        if (!method) {
            WCPLLogWarning(@"Revoke tip edge-tips interceptor skipped: method missing");
            return;
        }

        IMP oldImp = method_getImplementation(method);
        gWCHookOriginalOnClickEdgeTipsView = (WCHookOnClickEdgeTipsViewIMP)oldImp;
        method_setImplementation(method, (IMP)WCHookOnClickEdgeTipsViewIntercept);
        WCPLLogInfo(@"Revoke tip edge-tips interceptor installed");
    });
}

static BOOL WCHookShowOfficialRevokeReturnEdgeTip(id officialTarget) {
    if (!officialTarget) {
        return NO;
    }

    Class edgeTipsClass = NSClassFromString(@"MMEdgeTipsView");
    if (!edgeTipsClass) {
        return NO;
    }

    id parentView = WCHookInvokeObject(officialTarget, @selector(view));
    if (!parentView) {
        parentView = WCHookLocateCarrierViewFromObject(officialTarget);
    }
    if (!parentView) {
        return NO;
    }

    if ([officialTarget respondsToSelector:@selector(removeTipView)]) {
        @try {
            ((void (*)(id, SEL))objc_msgSend)(officialTarget, @selector(removeTipView));
        } @catch (__unused NSException *exceptionRemoveTip) {
        }
    }

    SEL initSelector = @selector(initWithTitle:image:);
    if (![edgeTipsClass instancesRespondToSelector:initSelector]) {
        return NO;
    }

    id tipsView = nil;
    @try {
        tipsView = ((id (*)(id, SEL, id, id))objc_msgSend)([edgeTipsClass alloc],
                                                            initSelector,
                                                            @"返回撤回提示",
                                                            nil);
    } @catch (__unused NSException *exceptionCreateTip) {
        tipsView = nil;
    }
    if (!tipsView) {
        return NO;
    }

    objc_setAssociatedObject(tipsView,
                             kWCHookOfficialReturnOwnerKey,
                             officialTarget,
                             OBJC_ASSOCIATION_ASSIGN);

    if ([tipsView respondsToSelector:@selector(setDelegate:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(tipsView, @selector(setDelegate:), officialTarget);
        } @catch (__unused NSException *exceptionSetDelegate) {
        }
    }
    if ([officialTarget respondsToSelector:@selector(setReferTipsView:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(officialTarget, @selector(setReferTipsView:), tipsView);
        } @catch (__unused NSException *exceptionSetReferTip) {
        }
    }

    SEL showSelector = @selector(showAnimate:parentView:finishBlock:);
    if (![tipsView respondsToSelector:showSelector]) {
        return NO;
    }

    @try {
        ((void (*)(id, SEL, BOOL, id, id))objc_msgSend)(tipsView,
                                                         showSelector,
                                                         YES,
                                                         parentView,
                                                         nil);
        return YES;
    } @catch (__unused NSException *exceptionShowTip) {
    }
    return NO;
}

static id WCHookInvokeObject(id target, SEL selector) {
    if (!target || !selector) {
        return nil;
    }
    if (![target respondsToSelector:selector]) {
        return nil;
    }
    return ((id (*)(id, SEL))objc_msgSend)(target, selector);
}

static UIResponder *WCHookLocateResponderForView(UIView *view) {
    SEL selector = @selector(locateToMsg:);
    UIResponder *responder = view;
    while (responder) {
        if ([responder respondsToSelector:selector]) {
            return responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

static UIView *WCHookLocateCarrierViewFromObject(id object) {
    if (!object) {
        return nil;
    }
    if ([object isKindOfClass:[UIView class]]) {
        return (UIView *)object;
    }

    SEL selectors[] = {
        @selector(getRichTextView),
        @selector(getContentView),
        @selector(contentView),
        @selector(view)
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        id candidate = WCHookInvokeObject(object, selectors[idx]);
        if ([candidate isKindOfClass:[UIView class]]) {
            return (UIView *)candidate;
        }
    }
    return nil;
}

static CommonMessageCellView *WCHookResolveMessageCellForObject(id object) {
    if (!object) {
        return nil;
    }

    Class commonCellClass = NSClassFromString(@"CommonMessageCellView");
    if (commonCellClass && [object isKindOfClass:commonCellClass] &&
        [object respondsToSelector:@selector(onReturnToOriginalMsg)]) {
        return (CommonMessageCellView *)object;
    }

    UIView *carrier = WCHookLocateCarrierViewFromObject(object);
    UIView *view = carrier;
    while (view) {
        BOOL classLooksCell = [NSStringFromClass([view class]) hasSuffix:@"MessageCellView"];
        if ((commonCellClass && [view isKindOfClass:commonCellClass]) || classLooksCell) {
            if ([view respondsToSelector:@selector(onReturnToOriginalMsg)] &&
                [view respondsToSelector:@selector(getCurrentMessageWrap)]) {
                return (CommonMessageCellView *)view;
            }
        }
        view = view.superview;
    }
    return nil;
}

static id WCHookMessageWrapFromObject(id object) {
    if (!object) {
        return nil;
    }
    SEL selectors[] = {
        @selector(messageWrap),
        @selector(getMessageWrap),
        @selector(getCurrentMessageWrap),
        @selector(msgWrap)
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        SEL selector = selectors[idx];
        id result = WCHookInvokeObject(object, selector);
        if (result) {
            return result;
        }
    }
    return nil;
}

static id WCHookMessageWrapForCell(CommonMessageCellView *cell) {
    id messageWrap = WCHookMessageWrapFromObject(cell);
    if (messageWrap) {
        return messageWrap;
    }
    id viewModel = WCHookInvokeObject(cell, @selector(viewModel));
    messageWrap = WCHookMessageWrapFromObject(viewModel);
    if (!messageWrap && viewModel) {
        messageWrap = WCHookInvokeObject(viewModel, @selector(getCurrentMessageWrap));
    }
    if (!messageWrap) {
        messageWrap = WCHookInvokeObject(cell, @selector(getCurrentMessageWrap));
    }
    return messageWrap;
}

static id WCHookReferMessageFromWrap(id messageWrap) {
    if (!messageWrap) {
        return nil;
    }
    SEL selectors[] = {
        @selector(referHostMsg),
        @selector(referingMessageWrap),
        @selector(replyingMessageWrap)
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        SEL selector = selectors[idx];
        id result = WCHookInvokeObject(messageWrap, selector);
        if (result) {
            return result;
        }
    }
    return nil;
}

static BOOL WCHookLooksLikeRevokeTipContent(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return NO;
    }
    return ([content rangeOfString:@"撤回了一条消息"].location != NSNotFound ||
            [content rangeOfString:@"已拦截撤回"].location != NSNotFound);
}

static BOOL WCHookLooksLikeQuitMonitorTipContent(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return NO;
    }
    return ([content rangeOfString:@"[退群监控]"].location != NSNotFound &&
            ([content rangeOfString:@"已退出群聊"].location != NSNotFound ||
             [content rangeOfString:@"退出群聊"].location != NSNotFound));
}

static NSString *WCHookStringFieldFromWrap(id messageWrap, SEL selector, NSString *kvcKey) {
    if (!messageWrap) {
        return nil;
    }

    id fieldObj = WCHookInvokeObject(messageWrap, selector);
    if ([fieldObj isKindOfClass:[NSString class]]) {
        return (NSString *)fieldObj;
    }

    if (![kvcKey isKindOfClass:[NSString class]] || kvcKey.length == 0) {
        return nil;
    }

    @try {
        id kvcValue = [messageWrap valueForKey:kvcKey];
        if ([kvcValue isKindOfClass:[NSString class]]) {
            return (NSString *)kvcValue;
        }
    } @catch (__unused NSException *exceptionKVC) {
    }
    return nil;
}

static NSNumber *WCHookNumberFieldFromWrap(id messageWrap, SEL selector, NSString *kvcKey) {
    if (!messageWrap) {
        return nil;
    }

    id fieldObj = WCHookInvokeObject(messageWrap, selector);
    if ([fieldObj isKindOfClass:[NSNumber class]]) {
        return (NSNumber *)fieldObj;
    }

    if (![kvcKey isKindOfClass:[NSString class]] || kvcKey.length == 0) {
        return nil;
    }

    @try {
        id kvcValue = [messageWrap valueForKey:kvcKey];
        if ([kvcValue isKindOfClass:[NSNumber class]]) {
            return (NSNumber *)kvcValue;
        }
    } @catch (__unused NSException *exceptionKVC) {
    }
    return nil;
}

static long long WCHookLongLongFieldFromWrap(id messageWrap, SEL selector, NSString *kvcKey) {
    NSNumber *number = WCHookNumberFieldFromWrap(messageWrap, selector, kvcKey);
    if (![number isKindOfClass:[NSNumber class]]) {
        return 0;
    }
    return number.longLongValue;
}

static NSString *WCHookMessageContentFromWrap(id messageWrap) {
    return WCHookStringFieldFromWrap(messageWrap, @selector(m_nsContent), @"m_nsContent");
}

static NSString *WCHookMsgSourceFromWrap(id messageWrap) {
    return WCHookStringFieldFromWrap(messageWrap, @selector(m_nsMsgSource), @"m_nsMsgSource");
}

static NSString *WCHookTrimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) {
        return nil;
    }
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *WCHookInlineText(NSString *text) {
    NSString *trimmed = WCHookTrimString(text);
    if (trimmed.length == 0) {
        return nil;
    }
    NSString *inlined = [[trimmed stringByReplacingOccurrencesOfString:@"\r" withString:@" "]
                         stringByReplacingOccurrencesOfString:@"\n" withString:@" "];
    return WCHookTrimString(inlined);
}

static NSString *WCHookExtractFirstCSVItem(NSString *text) {
    NSString *trimmed = WCHookTrimString(text);
    if (trimmed.length == 0) {
        return nil;
    }
    NSCharacterSet *separators = [NSCharacterSet characterSetWithCharactersInString:@",; \n\t\r"];
    NSArray<NSString *> *parts = [trimmed componentsSeparatedByCharactersInSet:separators];
    for (NSString *part in parts) {
        NSString *value = WCHookTrimString(part);
        if (value.length > 0) {
            return value;
        }
    }
    return nil;
}

static long long WCHookParseLongLong(NSString *text) {
    NSString *value = WCHookTrimString(text);
    if (value.length == 0) {
        return 0;
    }

    NSScanner *scanner = [NSScanner scannerWithString:value];
    long long parsed = 0;
    if (![scanner scanLongLong:&parsed]) {
        return 0;
    }
    return parsed;
}

static unsigned int WCHookParseUInt(NSString *text) {
    long long value = WCHookParseLongLong(text);
    if (value <= 0) {
        return 0;
    }
    if (value > UINT_MAX) {
        return UINT_MAX;
    }
    return (unsigned int)value;
}

static unsigned int WCHookUIntFieldFromWrap(id messageWrap, SEL selector, NSString *kvcKey) {
    NSNumber *number = WCHookNumberFieldFromWrap(messageWrap, selector, kvcKey);
    if (![number isKindOfClass:[NSNumber class]]) {
        return 0;
    }
    long long value = number.longLongValue;
    if (value <= 0) {
        return 0;
    }
    if (value > UINT_MAX) {
        return UINT_MAX;
    }
    return (unsigned int)value;
}

static NSArray<NSString *> *WCHookMetaSourceCandidatesFromWrap(id messageWrap) {
    if (!messageWrap) {
        return @[];
    }
    NSMutableArray<NSString *> *results = [NSMutableArray array];
    void (^appendIfNeeded)(NSString *) = ^(NSString *value) {
        NSString *trimmed = WCHookTrimString(value);
        if (trimmed.length == 0) {
            return;
        }
        for (NSString *existing in results) {
            if ([existing isEqualToString:trimmed]) {
                return;
            }
        }
        [results addObject:trimmed];
    };
    appendIfNeeded(WCHookStringFieldFromWrap(messageWrap, @selector(m_nsMsgSource), @"m_nsMsgSource"));
    appendIfNeeded(WCHookStringFieldFromWrap(messageWrap, @selector(m_nsBizClientMsgID), @"m_nsBizClientMsgID"));
    appendIfNeeded(WCHookStringFieldFromWrap(messageWrap, @selector(m_nsSignature), @"m_nsSignature"));
    return results;
}

static NSString *WCHookExtractRevokeExcerptFromTipContent(NSString *content) {
    NSString *text = WCHookTrimString(content);
    if (text.length == 0 || !WCHookLooksLikeRevokeTipContent(text)) {
        return nil;
    }

    NSArray<NSString *> *tokens = @[@"原消息：", @"原消息:"];
    for (NSString *token in tokens) {
        NSRange tokenRange = [text rangeOfString:token];
        if (tokenRange.location == NSNotFound || NSMaxRange(tokenRange) >= text.length) {
            continue;
        }
        NSString *suffix = [text substringFromIndex:NSMaxRange(tokenRange)];
        NSString *inlineSuffix = WCHookInlineText(suffix);
        if (inlineSuffix.length > 0) {
            return inlineSuffix;
        }
    }

    NSArray<NSString *> *lines = [text componentsSeparatedByString:@"\n"];
    for (NSInteger idx = (NSInteger)lines.count - 1; idx >= 0; idx--) {
        NSString *line = WCHookInlineText(lines[(NSUInteger)idx]);
        if (line.length == 0) {
            continue;
        }
        if ([line rangeOfString:@"撤回了一条消息"].location != NSNotFound ||
            [line rangeOfString:@"已拦截撤回"].location != NSNotFound) {
            continue;
        }
        return line;
    }
    return nil;
}

static NSString *WCHookDigestForMessageWrap(id messageWrap) {
    if (!messageWrap) {
        return nil;
    }

    unsigned int msgType = WCHookUIntFieldFromWrap(messageWrap, @selector(m_uiMessageType), @"m_uiMessageType");
    switch (msgType) {
        case 1:
            return WCHookInlineText(WCHookMessageContentFromWrap(messageWrap));
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
            return [NSString stringWithFormat:@"[类型:%u]", msgType];
    }
}

static NSString *WCHookExtractTagValue(NSString *text, NSString *tag) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0 ||
        ![tag isKindOfClass:[NSString class]] || tag.length == 0) {
        return nil;
    }

    NSString *openTag = [NSString stringWithFormat:@"<%@>", tag];
    NSString *closeTag = [NSString stringWithFormat:@"</%@>", tag];
    NSRange openRange = [text rangeOfString:openTag options:NSCaseInsensitiveSearch];
    if (openRange.location == NSNotFound) {
        return nil;
    }
    NSRange closeSearchRange = NSMakeRange(NSMaxRange(openRange), text.length - NSMaxRange(openRange));
    NSRange closeRange = [text rangeOfString:closeTag options:NSCaseInsensitiveSearch range:closeSearchRange];
    if (closeRange.location == NSNotFound || closeRange.location <= NSMaxRange(openRange)) {
        return nil;
    }

    NSRange valueRange = NSMakeRange(NSMaxRange(openRange), closeRange.location - NSMaxRange(openRange));
    if (NSMaxRange(valueRange) > text.length) {
        return nil;
    }
    NSString *value = [text substringWithRange:valueRange];
    if ([value hasPrefix:@"<![CDATA["] && [value hasSuffix:@"]]>"] && value.length >= 12) {
        value = [value substringWithRange:NSMakeRange(9, value.length - 12)];
    }
    return WCHookTrimString(value);
}

static NSString *WCHookExtractQuitMonitorUserNameFromMsgSource(NSString *msgSource) {
    NSString *userName = WCHookExtractTagValue(msgSource, @"memberusername");
    if (userName.length == 0) {
        userName = WCHookExtractTagValue(msgSource, @"username");
    }
    if (userName.length == 0) {
        userName = WCHookExtractTagValue(msgSource, @"fromusr");
    }
    if (userName.length == 0) {
        NSString *atUserList = WCHookExtractTagValue(msgSource, @"atuserlist");
        userName = WCHookExtractFirstCSVItem(atUserList);
    }
    return WCHookTrimString(userName);
}

static NSString *WCHookExtractQuitMonitorUserNameFromContent(NSString *content) {
    NSString *text = WCHookTrimString(content);
    if (text.length == 0) {
        return nil;
    }

    NSRange profileRange = [text rangeOfString:@"weixin://contacts/profile/" options:NSCaseInsensitiveSearch];
    if (profileRange.location != NSNotFound) {
        NSUInteger start = NSMaxRange(profileRange);
        if (start < text.length) {
            NSCharacterSet *endSet = [NSCharacterSet characterSetWithCharactersInString:@"\"'<> )】\n\r\t"];
            NSRange searchRange = NSMakeRange(start, text.length - start);
            NSRange endRange = [text rangeOfCharacterFromSet:endSet options:0 range:searchRange];
            NSUInteger end = (endRange.location == NSNotFound) ? text.length : endRange.location;
            if (end > start && end <= text.length) {
                NSString *encoded = [text substringWithRange:NSMakeRange(start, end - start)];
                NSString *decoded = [encoded stringByRemovingPercentEncoding] ?: encoded;
                NSString *trimmed = WCHookTrimString(decoded);
                if (trimmed.length > 0) {
                    return trimmed;
                }
            }
        }
    }

    NSString *userName = WCHookExtractTagValue(text, @"memberusername");
    if (userName.length == 0) {
        userName = WCHookExtractTagValue(text, @"username");
    }
    if (userName.length == 0) {
        userName = WCHookExtractTagValue(text, @"fromusr");
    }
    return WCHookTrimString(userName);
}

static NSString *WCHookStripHTMLTags(NSString *text) {
    NSString *input = WCHookTrimString(text);
    if (input.length == 0) {
        return nil;
    }
    NSError *error = nil;
    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"<[^>]+>"
                                                                           options:0
                                                                             error:&error];
    if (error || !regex) {
        return input;
    }
    NSString *stripped = [regex stringByReplacingMatchesInString:input
                                                         options:0
                                                           range:NSMakeRange(0, input.length)
                                                    withTemplate:@""];
    return WCHookTrimString(stripped);
}

static NSString *WCHookExtractQuitMonitorDisplayNameFromContent(NSString *content) {
    NSString *text = WCHookTrimString(content);
    if (text.length == 0) {
        return nil;
    }

    NSString *nickName = WCHookExtractTagValue(text, @"nickname");
    if (nickName.length == 0) {
        nickName = WCHookExtractTagValue(text, @"displayname");
    }
    if (nickName.length > 0) {
        return WCHookTrimString(nickName);
    }

    NSRange prefixRange = [text rangeOfString:@"[退群监控]"];
    if (prefixRange.location != NSNotFound) {
        text = [text substringFromIndex:NSMaxRange(prefixRange)];
    }

    NSRange suffixRange = [text rangeOfString:@"已退出群聊"];
    if (suffixRange.location != NSNotFound) {
        text = [text substringToIndex:suffixRange.location];
    } else {
        suffixRange = [text rangeOfString:@"退出群聊"];
        if (suffixRange.location != NSNotFound) {
            text = [text substringToIndex:suffixRange.location];
        }
    }

    text = WCHookStripHTMLTags(text);
    if (text.length == 0) {
        return nil;
    }

    text = [text stringByReplacingOccurrencesOfString:@"（" withString:@" "];
    text = [text stringByReplacingOccurrencesOfString:@"）" withString:@" "];
    text = [text stringByReplacingOccurrencesOfString:@"(" withString:@" "];
    text = [text stringByReplacingOccurrencesOfString:@")" withString:@" "];
    text = [text stringByReplacingOccurrencesOfString:@"、" withString:@" "];
    text = [text stringByReplacingOccurrencesOfString:@"@" withString:@""];
    text = WCHookExtractFirstCSVItem(text);
    return WCHookTrimString(text);
}

static id WCHookContactForUserName(NSString *userName) {
    NSString *target = WCHookTrimString(userName);
    if (target.length == 0) {
        return nil;
    }

    Class serviceCenterClass = NSClassFromString(@"MMServiceCenter");
    Class contactMgrClass = NSClassFromString(@"CContactMgr");
    if (!serviceCenterClass || !contactMgrClass ||
        ![serviceCenterClass respondsToSelector:@selector(defaultCenter)]) {
        return nil;
    }
    id serviceCenter = ((id (*)(id, SEL))objc_msgSend)(serviceCenterClass, @selector(defaultCenter));
    if (!serviceCenter || ![serviceCenter respondsToSelector:@selector(getService:)]) {
        return nil;
    }
    id contactMgr = ((id (*)(id, SEL, id))objc_msgSend)(serviceCenter, @selector(getService:), contactMgrClass);
    if (!contactMgr) {
        return nil;
    }

    SEL selectors[] = {
        NSSelectorFromString(@"getContactByName:"),
        NSSelectorFromString(@"getContactByNameFromDB:"),
        NSSelectorFromString(@"getContactByNameFromCache:")
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        SEL selector = selectors[idx];
        if (![contactMgr respondsToSelector:selector]) {
            continue;
        }
        @try {
            id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, selector, target);
            if (contact) {
                return contact;
            }
        } @catch (__unused NSException *exceptionLookup) {
        }
    }
    return nil;
}

static id WCHookMessageMgr(void) {
    Class messageMgrClass = NSClassFromString(@"CMessageMgr");
    if (!messageMgrClass) {
        return nil;
    }

    id service = WCPLGetService(messageMgrClass);
    if (service) {
        return service;
    }

    Class serviceCenterClass = NSClassFromString(@"MMServiceCenter");
    if (!serviceCenterClass || ![serviceCenterClass respondsToSelector:@selector(defaultCenter)]) {
        return nil;
    }

    id serviceCenter = ((id (*)(id, SEL))objc_msgSend)(serviceCenterClass, @selector(defaultCenter));
    if (!serviceCenter || ![serviceCenter respondsToSelector:@selector(getService:)]) {
        return nil;
    }

    return ((id (*)(id, SEL, id))objc_msgSend)(serviceCenter, @selector(getService:), messageMgrClass);
}

static id WCHookFindMsgByLocalID(id messageMgr, NSString *chatName, unsigned int localID) {
    if (!messageMgr || ![chatName isKindOfClass:[NSString class]] || chatName.length == 0 || localID == 0) {
        return nil;
    }

    if ([messageMgr respondsToSelector:@selector(GetMsg:LocalID:)]) {
        @try {
            id message = ((id (*)(id, SEL, id, unsigned int))objc_msgSend)(messageMgr,
                                                                            @selector(GetMsg:LocalID:),
                                                                            chatName,
                                                                            localID);
            if (message) {
                return message;
            }
        } @catch (__unused NSException *exceptionGetMsgLocalID) {
        }
    }

    if ([messageMgr respondsToSelector:@selector(GetMsg:LocalID:hasError:needOriginContent:)]) {
        @try {
            BOOL hasError = NO;
            id message = ((id (*)(id, SEL, id, unsigned int, BOOL *, BOOL))objc_msgSend)(messageMgr,
                                                                                           @selector(GetMsg:LocalID:hasError:needOriginContent:),
                                                                                           chatName,
                                                                                           localID,
                                                                                           &hasError,
                                                                                           NO);
            if (message) {
                return message;
            }
        } @catch (__unused NSException *exceptionGetMsgLocalIDEx) {
        }
    }

    if ([messageMgr respondsToSelector:@selector(GetMsgForUsr:fromLocalIdList:)]) {
        @try {
            NSArray<NSNumber *> *localIDs = @[@(localID)];
            id result = ((id (*)(id, SEL, id, id))objc_msgSend)(messageMgr,
                                                                 @selector(GetMsgForUsr:fromLocalIdList:),
                                                                 chatName,
                                                                 localIDs);
            if ([result isKindOfClass:[NSArray class]] && [result count] > 0) {
                return [result firstObject];
            }
        } @catch (__unused NSException *exceptionGetMsgForUsr) {
        }
    }

    return nil;
}

static id WCHookFindRevokeTargetByExcerpt(id messageMgr, id tipMessageWrap, NSString *chatName, NSString *excerpt) {
    NSString *trimmedChat = WCHookTrimString(chatName);
    NSString *trimmedExcerpt = WCHookInlineText(excerpt);
    if (!messageMgr || trimmedChat.length == 0 || trimmedExcerpt.length == 0) {
        return nil;
    }

    unsigned int tipLocalID = WCHookUIntFieldFromWrap(tipMessageWrap, @selector(m_uiMesLocalID), @"m_uiMesLocalID");
    unsigned int startLocalID = tipLocalID;
    if (startLocalID == 0 && [messageMgr respondsToSelector:@selector(GetLastMsgLocalID:)]) {
        @try {
            startLocalID = ((unsigned int (*)(id, SEL, id))objc_msgSend)(messageMgr,
                                                                          @selector(GetLastMsgLocalID:),
                                                                          trimmedChat);
        } @catch (__unused NSException *exceptionLastLocalID) {
            startLocalID = 0;
        }
    }
    if (startLocalID == 0) {
        return nil;
    }

    id messageList = nil;
    if ([messageMgr respondsToSelector:@selector(GetMsg:FromID:Limit:LeftCount:)]) {
        @try {
            unsigned int leftCount = 0;
            messageList = ((id (*)(id, SEL, id, unsigned int, int, unsigned int *))objc_msgSend)(messageMgr,
                                                                                                   @selector(GetMsg:FromID:Limit:LeftCount:),
                                                                                                   trimmedChat,
                                                                                                   startLocalID,
                                                                                                   220,
                                                                                                   &leftCount);
        } @catch (__unused NSException *exceptionGetMsgList) {
            messageList = nil;
        }
    }

    if (![messageList isKindOfClass:[NSArray class]] || [messageList count] == 0) {
        return nil;
    }

    id fuzzyCandidate = nil;
    for (id candidate in (NSArray *)messageList) {
        if (!candidate) {
            continue;
        }
        unsigned int candidateLocalID = WCHookUIntFieldFromWrap(candidate, @selector(m_uiMesLocalID), @"m_uiMesLocalID");
        if (tipLocalID > 0 && candidateLocalID == tipLocalID) {
            continue;
        }

        NSString *candidateContent = WCHookMessageContentFromWrap(candidate);
        if (WCHookLooksLikeRevokeTipContent(candidateContent)) {
            continue;
        }

        NSString *candidateDigest = WCHookDigestForMessageWrap(candidate);
        if (candidateDigest.length == 0) {
            continue;
        }

        if ([candidateDigest isEqualToString:trimmedExcerpt]) {
            return candidate;
        }
        if ([candidateDigest rangeOfString:trimmedExcerpt].location != NSNotFound ||
            [trimmedExcerpt rangeOfString:candidateDigest].location != NSNotFound) {
            if (!fuzzyCandidate) {
                fuzzyCandidate = candidate;
            }
        }
    }

    if (fuzzyCandidate) {
        return fuzzyCandidate;
    }

    // 兜底：按 LocalID 向前扫描，兼容旧提示/历史消息结构差异。
    unsigned int backwardStart = tipLocalID > 0 ? tipLocalID : startLocalID;
    if (backwardStart > 1) {
        unsigned int maxSteps = 320;
        for (unsigned int step = 1; step <= maxSteps; step++) {
            if (backwardStart <= step) {
                break;
            }
            unsigned int candidateLocalID = backwardStart - step;
            id candidate = WCHookFindMsgByLocalID(messageMgr, trimmedChat, candidateLocalID);
            if (!candidate) {
                continue;
            }

            NSString *candidateContent = WCHookMessageContentFromWrap(candidate);
            if (WCHookLooksLikeRevokeTipContent(candidateContent)) {
                continue;
            }

            NSString *candidateDigest = WCHookDigestForMessageWrap(candidate);
            if (candidateDigest.length == 0) {
                continue;
            }

            if ([candidateDigest isEqualToString:trimmedExcerpt] ||
                [candidateDigest rangeOfString:trimmedExcerpt].location != NSNotFound ||
                [trimmedExcerpt rangeOfString:candidateDigest].location != NSNotFound) {
                return candidate;
            }
        }
    }

    return nil;
}

static id WCHookResolveRevokeTipTargetMessage(id messageWrap,
                                              id messageMgr,
                                              NSString **sessionOut,
                                              long long *svrIDOut,
                                              unsigned int *localIDOut,
                                              NSString **excerptOut) {
    if (sessionOut) {
        *sessionOut = nil;
    }
    if (svrIDOut) {
        *svrIDOut = 0;
    }
    if (localIDOut) {
        *localIDOut = 0;
    }
    if (excerptOut) {
        *excerptOut = nil;
    }
    if (!messageWrap) {
        return nil;
    }

    NSMutableArray<NSString *> *sessionCandidates = [NSMutableArray array];
    void (^appendSessionIfNeeded)(NSString *) = ^(NSString *value) {
        NSString *trimmed = WCHookTrimString(value);
        if (trimmed.length == 0) {
            return;
        }
        for (NSString *existing in sessionCandidates) {
            if ([existing isEqualToString:trimmed]) {
                return;
            }
        }
        [sessionCandidates addObject:trimmed];
    };
    appendSessionIfNeeded(WCHookStringFieldFromWrap(messageWrap, @selector(m_nsToUsr), @"m_nsToUsr"));
    appendSessionIfNeeded(WCHookStringFieldFromWrap(messageWrap, @selector(m_nsFromUsr), @"m_nsFromUsr"));
    appendSessionIfNeeded(WCHookStringFieldFromWrap(messageWrap, @selector(m_nsSpecifiedChatName), @"m_nsSpecifiedChatName"));

    long long svrID = WCHookLongLongFieldFromWrap(messageWrap, @selector(m_revokedReferSvrid), @"m_revokedReferSvrid");
    unsigned int localID = 0;
    for (NSString *metaSource in WCHookMetaSourceCandidatesFromWrap(messageWrap)) {
        if ([metaSource rangeOfString:@"wcpl_revoke_jump" options:NSCaseInsensitiveSearch].location == NSNotFound) {
            continue;
        }
        appendSessionIfNeeded(WCHookExtractTagValue(metaSource, @"wcpl_revoke_session"));
        if (svrID <= 0) {
            long long parsedSvrID = WCHookParseLongLong(WCHookExtractTagValue(metaSource, @"wcpl_revoke_svrid"));
            if (parsedSvrID > 0) {
                svrID = parsedSvrID;
            }
        }
        if (localID == 0) {
            unsigned int parsedLocalID = WCHookParseUInt(WCHookExtractTagValue(metaSource, @"wcpl_revoke_localid"));
            if (parsedLocalID > 0) {
                localID = parsedLocalID;
            }
        }
    }
    if (svrID <= 0) {
        unsigned int originSvrID = WCHookUIntFieldFromWrap(messageWrap, @selector(m_uiOriginMsgSvrId), @"m_uiOriginMsgSvrId");
        if (originSvrID > 0) {
            svrID = (long long)originSvrID;
        }
    }

    NSString *excerpt = WCHookExtractRevokeExcerptFromTipContent(WCHookMessageContentFromWrap(messageWrap));
    if (excerptOut) {
        *excerptOut = excerpt;
    }

    NSString *usedSession = nil;
    id targetMessage = nil;

    if (!targetMessage && messageMgr && sessionCandidates.count > 0 && (svrID > 0 || localID > 0)) {
        for (NSString *session in sessionCandidates) {
            if (!targetMessage && svrID > 0 && [messageMgr respondsToSelector:@selector(GetMsg:n64SvrID:)]) {
                @try {
                    targetMessage = ((id (*)(id, SEL, id, long long))objc_msgSend)(messageMgr,
                                                                                    @selector(GetMsg:n64SvrID:),
                                                                                    session,
                                                                                    svrID);
                } @catch (__unused NSException *exceptionGetMsgBySvrID) {
                    targetMessage = nil;
                }
            }
            if (!targetMessage && localID > 0) {
                targetMessage = WCHookFindMsgByLocalID(messageMgr, session, localID);
            }
            if (targetMessage) {
                usedSession = session;
                break;
            }
        }
    }

    if (!targetMessage && messageMgr && excerpt.length > 0 && sessionCandidates.count > 0) {
        for (NSString *session in sessionCandidates) {
            targetMessage = WCHookFindRevokeTargetByExcerpt(messageMgr, messageWrap, session, excerpt);
            if (targetMessage) {
                usedSession = session;
                WCPLLogInfo(@"Revoke tip fallback match by excerpt: session=%@ excerpt=%@",
                            session,
                            excerpt);
                break;
            }
        }
    }

    if (!usedSession && sessionCandidates.count > 0) {
        usedSession = sessionCandidates.firstObject;
    }
    if (sessionOut) {
        *sessionOut = usedSession;
    }
    if (svrIDOut) {
        *svrIDOut = svrID;
    }
    if (localIDOut) {
        *localIDOut = localID;
    }
    return targetMessage;
}

static void WCHookBindReferRelationForRevokeTip(id tipMessageWrap, id targetMessageWrap) {
    if (!tipMessageWrap || !targetMessageWrap || tipMessageWrap == targetMessageWrap) {
        return;
    }

    Class messageWrapClass = NSClassFromString(@"CMessageWrap");
    if (messageWrapClass) {
        if (![tipMessageWrap isKindOfClass:messageWrapClass] ||
            ![targetMessageWrap isKindOfClass:messageWrapClass]) {
            return;
        }
    }

    // 先清掉历史 refer，避免沿用旧状态导致官方返回链路错乱。
    WCHookClearReferRelationForRevokeTip(tipMessageWrap);

    SEL wrapSetters[] = {
        @selector(setReferHostMsg:),
        @selector(setReferingMessageWrap:),
        @selector(setReplyingMessageWrap:),
        @selector(setM_refMessageWrap:)
    };
    for (size_t idx = 0; idx < sizeof(wrapSetters) / sizeof(wrapSetters[0]); ++idx) {
        SEL setter = wrapSetters[idx];
        if (![tipMessageWrap respondsToSelector:setter]) {
            continue;
        }
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(tipMessageWrap, setter, targetMessageWrap);
        } @catch (__unused NSException *exceptionBindWrap) {
        }
    }

    // 补齐撤回 refer 的 svr id，降低 returnToOriginalMsg: 命中错误目标的概率。
    long long targetSvrID = 0;
    if ([targetMessageWrap respondsToSelector:@selector(m_n64MesSvrID)]) {
        @try {
            targetSvrID = ((long long (*)(id, SEL))objc_msgSend)(targetMessageWrap, @selector(m_n64MesSvrID));
        } @catch (__unused NSException *exceptionTargetSvrID) {
            targetSvrID = 0;
        }
    }
    if (targetSvrID <= 0 && [targetMessageWrap respondsToSelector:@selector(m_uiOriginMsgSvrId)]) {
        @try {
            unsigned int originSvrID = ((unsigned int (*)(id, SEL))objc_msgSend)(targetMessageWrap, @selector(m_uiOriginMsgSvrId));
            if (originSvrID > 0) {
                targetSvrID = (long long)originSvrID;
            }
        } @catch (__unused NSException *exceptionTargetOriginSvrID) {
            targetSvrID = 0;
        }
    }
    if (targetSvrID > 0 && [tipMessageWrap respondsToSelector:@selector(setM_revokedReferSvrid:)]) {
        @try {
            ((void (*)(id, SEL, unsigned long long))objc_msgSend)(tipMessageWrap,
                                                                   @selector(setM_revokedReferSvrid:),
                                                                   (unsigned long long)targetSvrID);
        } @catch (__unused NSException *exceptionBindSvrID) {
        }
    }

    WCPLLogInfo(@"Revoke tip refer bound: targetSvrID=%lld", targetSvrID);
}

static void WCHookClearReferRelationForRevokeTip(id tipMessageWrap) {
    if (!tipMessageWrap) {
        return;
    }

    SEL wrapSetters[] = {
        @selector(setReferHostMsg:),
        @selector(setReferingMessageWrap:),
        @selector(setReplyingMessageWrap:),
        @selector(setM_refMessageWrap:)
    };
    for (size_t idx = 0; idx < sizeof(wrapSetters) / sizeof(wrapSetters[0]); ++idx) {
        SEL setter = wrapSetters[idx];
        if (![tipMessageWrap respondsToSelector:setter]) {
            continue;
        }
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(tipMessageWrap, setter, nil);
        } @catch (__unused NSException *exceptionClearWrap) {
        }
    }

    if ([tipMessageWrap respondsToSelector:@selector(setM_revokedReferSvrid:)]) {
        @try {
            ((void (*)(id, SEL, unsigned long long))objc_msgSend)(tipMessageWrap,
                                                                   @selector(setM_revokedReferSvrid:),
                                                                   0);
        } @catch (__unused NSException *exceptionClearSvr) {
        }
    }
    if ([tipMessageWrap respondsToSelector:@selector(setM_referFromScene:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(tipMessageWrap,
                                                             @selector(setM_referFromScene:),
                                                             0);
        } @catch (__unused NSException *exceptionClearScene) {
        }
    }
}

static NSInteger WCHookMsgTargetScore(id object) {
    if (!object) {
        return 0;
    }
    NSInteger score = 0;
    if ([object respondsToSelector:@selector(scrollToMessage:highlight:marginTop:animated:)]) {
        score += 100;
    } else if ([object respondsToSelector:@selector(scrollToMessage:highlight:marginTop:)]) {
        score += 90;
    }
    if ([object respondsToSelector:@selector(highlightMsg:)]) {
        score += 50;
    }
    if ([object respondsToSelector:@selector(returnToOriginalMsg:)]) {
        score += 30;
    }
    if ([object respondsToSelector:@selector(locateToMsg:)]) {
        score += 20;
    }
    if ([object respondsToSelector:@selector(getViewController)]) {
        score += 5;
    }
    return score;
}

static id WCHookResolveMsgContentTargetFromObject(id object) {
    if (!object) {
        return nil;
    }

    __block id bestTarget = nil;
    __block NSInteger bestScore = 0;
    void (^consider)(id) = ^(id candidate) {
        if (!candidate) {
            return;
        }
        NSInteger score = WCHookMsgTargetScore(candidate);
        if (score > bestScore) {
            bestScore = score;
            bestTarget = candidate;
        }
    };

    consider(object);

    id viewController = WCHookInvokeObject(object, @selector(getViewController));
    if (viewController && viewController != object) {
        consider(viewController);
    }

    NSArray<NSString *> *kvcKeys = @[@"viewController", @"m_viewController", @"controller", @"delegate"];
    for (NSString *key in kvcKeys) {
        id candidate = nil;
        @try {
            candidate = [object valueForKey:key];
        } @catch (__unused NSException *exceptionKVC) {
            candidate = nil;
        }
        consider(candidate);
    }

    UIView *carrier = WCHookLocateCarrierViewFromObject(object);
    UIResponder *responder = carrier;
    while (responder) {
        consider(responder);
        responder = [responder nextResponder];
    }

    return bestTarget;
}

static UIScrollView *WCHookFindPreferredScrollViewInView(UIView *rootView) {
    if (![rootView isKindOfClass:[UIView class]]) {
        return nil;
    }

    UIScrollView *bestScrollView = nil;
    CGFloat bestArea = 0.0;
    NSMutableArray<UIView *> *stack = [NSMutableArray arrayWithObject:rootView];
    while (stack.count > 0) {
        UIView *candidate = stack.lastObject;
        [stack removeLastObject];
        if (![candidate isKindOfClass:[UIView class]]) {
            continue;
        }

        if ([candidate isKindOfClass:[UIScrollView class]]) {
            CGFloat area = CGRectGetWidth(candidate.bounds) * CGRectGetHeight(candidate.bounds);
            if (!bestScrollView || area > bestArea) {
                bestScrollView = (UIScrollView *)candidate;
                bestArea = area;
            }
        }

        NSArray<UIView *> *subviews = candidate.subviews;
        for (UIView *subview in subviews) {
            if ([subview isKindOfClass:[UIView class]]) {
                [stack addObject:subview];
            }
        }
    }

    return bestScrollView;
}

static UIScrollView *WCHookResolveScrollViewFromTarget(id object) {
    if (!object) {
        return nil;
    }

    if ([object isKindOfClass:[UIScrollView class]]) {
        return (UIScrollView *)object;
    }

    SEL selectors[] = {
        @selector(tableView),
        @selector(collectionView),
        @selector(scrollView),
        NSSelectorFromString(@"m_tableView")
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        id candidate = WCHookInvokeObject(object, selectors[idx]);
        if ([candidate isKindOfClass:[UIScrollView class]]) {
            return (UIScrollView *)candidate;
        }
    }

    UIView *carrier = WCHookLocateCarrierViewFromObject(object);
    UIScrollView *fromCarrier = WCHookFindPreferredScrollViewInView(carrier);
    if (fromCarrier) {
        return fromCarrier;
    }

    id viewObject = WCHookInvokeObject(object, @selector(view));
    if ([viewObject isKindOfClass:[UIView class]]) {
        return WCHookFindPreferredScrollViewInView((UIView *)viewObject);
    }

    return nil;
}

static BOOL WCHookLocateAndEmphasizeRevokeTarget(id locateTarget,
                                                 id tipMessageWrap,
                                                 id targetMessage,
                                                 BOOL prepareOfficialReturnAnchor) {
    if (!targetMessage) {
        return NO;
    }

    Class msgContentVCClass = NSClassFromString(@"BaseMsgContentViewController");
    id target = locateTarget;
    BOOL locateTargetLooksUsable = NO;
    if (target) {
        locateTargetLooksUsable = ((msgContentVCClass && [target isKindOfClass:msgContentVCClass]) ||
                                   [target respondsToSelector:@selector(locateToMsg:)] ||
                                   [target respondsToSelector:@selector(scrollToMessage:highlight:marginTop:animated:)] ||
                                   [target respondsToSelector:@selector(scrollToMessage:highlight:marginTop:)]);
    }
    if (!locateTargetLooksUsable) {
        target = WCHookResolveMsgContentTargetFromObject(locateTarget) ?: locateTarget;
    }
    if (!target) {
        return NO;
    }

    __block id officialTarget = nil;
    __block SEL returnSelector = @selector(returnToOriginalMsg:);
    BOOL (^prepareOfficialReturn)(void) = ^BOOL{
        if (!tipMessageWrap) {
            return NO;
        }
        if (!officialTarget) {
            __block id preferredOfficialTarget = nil;
            __block id fallbackOfficialTarget = nil;
            void (^considerOfficialTarget)(id) = ^(id candidate) {
                if (!candidate) {
                    return;
                }
                if (![candidate respondsToSelector:returnSelector]) {
                    return;
                }
                if (msgContentVCClass && [candidate isKindOfClass:msgContentVCClass]) {
                    preferredOfficialTarget = candidate;
                    return;
                }
                if (!fallbackOfficialTarget) {
                    fallbackOfficialTarget = candidate;
                }
            };

            considerOfficialTarget(target);
            if (!preferredOfficialTarget && !fallbackOfficialTarget) {
                considerOfficialTarget(WCHookInvokeObject(target, @selector(getViewController)));
            }
            if (!preferredOfficialTarget && !fallbackOfficialTarget && locateTarget != target) {
                considerOfficialTarget(locateTarget);
            }
            if (!preferredOfficialTarget && !fallbackOfficialTarget && locateTarget != target) {
                considerOfficialTarget(WCHookInvokeObject(locateTarget, @selector(getViewController)));
            }
            officialTarget = preferredOfficialTarget ?: fallbackOfficialTarget;
        }

        if (officialTarget) {
            @try {
                WCHookInstallOfficialEdgeTipsInterceptor();
                NSTimeInterval now = NSDate.date.timeIntervalSince1970;
                objc_setAssociatedObject(officialTarget,
                                         kWCHookOfficialReturnTipWrapKey,
                                         tipMessageWrap,
                                         OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                objc_setAssociatedObject(officialTarget,
                                         kWCHookOfficialReturnExpireKey,
                                         @(now + 180.0),
                                         OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                objc_setAssociatedObject(officialTarget,
                                         kWCHookOfficialReturnEnableAtKey,
                                         @(now + 0.25),
                                         OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                objc_setAssociatedObject(officialTarget,
                                         kWCHookOfficialReturnTapAtKey,
                                         nil,
                                         OBJC_ASSOCIATION_RETAIN_NONATOMIC);

                if (WCHookShowOfficialRevokeReturnEdgeTip(officialTarget)) {
                    WCPLLogInfo(@"Revoke tip official return prepared(native-edge): target=%@",
                                NSStringFromClass([officialTarget class]));
                    return YES;
                }
                WCPLLogWarning(@"Revoke tip official return tip show failed: target=%@",
                               NSStringFromClass([officialTarget class]));
            } @catch (__unused NSException *exceptionOfficialReturnPrepare) {
            }
        } else {
            WCPLLogWarning(@"Revoke tip official return prepare skipped: no target");
        }
        return NO;
    };

    UIScrollView *trackedScrollView = WCHookResolveScrollViewFromTarget(target);
    if (!trackedScrollView && locateTarget != target) {
        trackedScrollView = WCHookResolveScrollViewFromTarget(locateTarget);
    }
    CGFloat baselineOffsetY = CGFLOAT_MAX;
    if ([trackedScrollView isKindOfClass:[UIScrollView class]]) {
        baselineOffsetY = trackedScrollView.contentOffset.y;
    }

    BOOL jumped = NO;
    SEL scrollSelector = @selector(scrollToMessage:highlight:marginTop:animated:);
    // 优先走带动画滚动，贴近微信原生“平移到目标消息”的观感。
    if (!jumped && [target respondsToSelector:scrollSelector]) {
        @try {
            ((void (*)(id, SEL, id, BOOL, double, BOOL))objc_msgSend)(target,
                                                                       scrollSelector,
                                                                       targetMessage,
                                                                       YES,
                                                                       120.0,
                                                                       YES);
            jumped = YES;
        } @catch (__unused NSException *exceptionScrollEx) {
        }
    }

    if (!jumped && locateTarget != target && [locateTarget respondsToSelector:scrollSelector]) {
        @try {
            ((void (*)(id, SEL, id, BOOL, double, BOOL))objc_msgSend)(locateTarget,
                                                                       scrollSelector,
                                                                       targetMessage,
                                                                       YES,
                                                                       120.0,
                                                                       YES);
            jumped = YES;
        } @catch (__unused NSException *exceptionScrollExRaw) {
        }
    }

    if (!jumped && [target respondsToSelector:@selector(scrollToMessage:highlight:marginTop:)]) {
        @try {
            ((void (*)(id, SEL, id, BOOL, double))objc_msgSend)(target,
                                                                 @selector(scrollToMessage:highlight:marginTop:),
                                                                 targetMessage,
                                                                 YES,
                                                                 120.0);
            jumped = YES;
        } @catch (__unused NSException *exceptionScroll) {
        }
    }

    if (!jumped && locateTarget != target && [locateTarget respondsToSelector:@selector(scrollToMessage:highlight:marginTop:)]) {
        @try {
            ((void (*)(id, SEL, id, BOOL, double))objc_msgSend)(locateTarget,
                                                                 @selector(scrollToMessage:highlight:marginTop:),
                                                                 targetMessage,
                                                                 YES,
                                                                 120.0);
            jumped = YES;
        } @catch (__unused NSException *exceptionScrollRaw) {
        }
    }

    // 若当前控制器不支持滚动接口，再回退到 locateToMsg，保证兼容性。
    if (!jumped && [target respondsToSelector:@selector(locateToMsg:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(target, @selector(locateToMsg:), targetMessage);
            jumped = YES;
        } @catch (__unused NSException *exceptionLocate) {
        }
    }

    if (!jumped && locateTarget != target && [locateTarget respondsToSelector:@selector(locateToMsg:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(locateTarget, @selector(locateToMsg:), targetMessage);
            jumped = YES;
        } @catch (__unused NSException *exceptionLocateRaw) {
        }
    }

    if (!jumped) {
        return NO;
    }

    if ([target respondsToSelector:@selector(highlightMsg:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(target, @selector(highlightMsg:), targetMessage);
        } @catch (__unused NSException *exceptionHighlight) {
        }
    }

    // 优先使用原生 edge tips 返回入口；若当前环境无法展示，则降级插件按钮。
    if (tipMessageWrap && prepareOfficialReturnAnchor) {
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.08 * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{
            BOOL prepared = prepareOfficialReturn();
            if (!prepared) {
                WCHookShowRevokeReturnButton(target, tipMessageWrap);
                WCPLLogInfo(@"Revoke tip official return fallback: use plugin return button");
            }
            WCHookScheduleAutoHideRevokeReturnEntry(tipMessageWrap,
                                                    officialTarget ?: target,
                                                    trackedScrollView,
                                                    baselineOffsetY);
        });
    } else if (tipMessageWrap) {
        WCPLLogInfo(@"Revoke tip official return prepare skipped: native already requested");
    }

    return YES;
}

static void WCHookShowRevokeReturnButton(id locateTarget, id tipMessageWrap) {
    if (!locateTarget || !tipMessageWrap) {
        return;
    }
    UIWindow *window = WCHookActiveWindow();
    if (!window) {
        return;
    }

    UIButton *existing = (UIButton *)[window viewWithTag:kWCHookRevokeReturnButtonTag];
    if ([existing isKindOfClass:[UIButton class]]) {
        [existing removeFromSuperview];
    }

    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.tag = kWCHookRevokeReturnButtonTag;
    [button setTitle:@"返回撤回提示" forState:UIControlStateNormal];
    [button setTitleColor:UIColor.whiteColor forState:UIControlStateNormal];
    button.titleLabel.font = [UIFont systemFontOfSize:13.0 weight:UIFontWeightSemibold];
    button.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.78];
    button.layer.cornerRadius = 15.0;
    button.layer.masksToBounds = YES;
    button.contentEdgeInsets = UIEdgeInsetsMake(6.0, 12.0, 6.0, 12.0);
    [button sizeToFit];

    CGFloat width = MIN(MAX(CGRectGetWidth(button.bounds) + 12.0, 110.0), CGRectGetWidth(window.bounds) - 24.0);
    CGFloat height = MAX(CGRectGetHeight(button.bounds), 30.0);
    CGFloat topInset = 92.0;
    button.frame = CGRectMake((CGRectGetWidth(window.bounds) - width) * 0.5,
                              topInset,
                              width,
                              height);
    button.alpha = 0.0;
    [button addTarget:[WCHookRevokeReturnBridge sharedBridge]
               action:@selector(onTapReturnButton:)
     forControlEvents:UIControlEventTouchUpInside];

    objc_setAssociatedObject(button, kWCHookRevokeReturnLocateTargetKey, locateTarget, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(button, kWCHookRevokeReturnTipWrapKey, tipMessageWrap, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    NSUInteger hideToken = (NSUInteger)(NSDate.date.timeIntervalSince1970 * 1000.0);
    objc_setAssociatedObject(button, kWCHookRevokeReturnHideTokenKey, @(hideToken), OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    [window addSubview:button];
    [UIView animateWithDuration:0.16 animations:^{
        button.alpha = 1.0;
    }];

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(8.0 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        UIButton *current = (UIButton *)[window viewWithTag:kWCHookRevokeReturnButtonTag];
        if (![current isKindOfClass:[UIButton class]]) {
            return;
        }
        NSNumber *tokenObj = objc_getAssociatedObject(current, kWCHookRevokeReturnHideTokenKey);
        if (![tokenObj isKindOfClass:[NSNumber class]] || tokenObj.unsignedIntegerValue != hideToken) {
            return;
        }
        [UIView animateWithDuration:0.16 animations:^{
            current.alpha = 0.0;
        } completion:^(__unused BOOL finished) {
            [current removeFromSuperview];
        }];
    });
}

static void WCHookHideRevokeReturnButton(void) {
    UIWindow *window = WCHookActiveWindow();
    if (!window) {
        return;
    }
    UIView *existing = [window viewWithTag:kWCHookRevokeReturnButtonTag];
    if (!existing) {
        return;
    }
    [UIView animateWithDuration:0.12 animations:^{
        existing.alpha = 0.0;
    } completion:^(__unused BOOL finished) {
        [existing removeFromSuperview];
    }];
}

static void WCHookHandleRevokeReturnButtonTap(UIButton *button) {
    if (![button isKindOfClass:[UIButton class]]) {
        return;
    }
    id locateTarget = objc_getAssociatedObject(button, kWCHookRevokeReturnLocateTargetKey);
    id tipMessageWrap = objc_getAssociatedObject(button, kWCHookRevokeReturnTipWrapKey);
    if (!tipMessageWrap) {
        WCHookHideRevokeReturnButton();
        return;
    }

    // 避免返回提示后触发官方引用返回按钮循环。
    WCHookClearReferRelationForRevokeTip(tipMessageWrap);

    id effectiveTarget = WCHookResolveMsgContentTargetFromObject(locateTarget);
    if (!effectiveTarget) {
        effectiveTarget = WCHookFallbackLocateTarget();
    }

    if (WCHookLocateAndEmphasizeRevokeTarget(effectiveTarget, nil, tipMessageWrap, NO)) {
        WCHookShowDebugToast(@"撤回提示: 已返回提示位置");
    } else {
        WCHookShowDebugToast(@"撤回提示: 返回失败");
    }
}

static id WCHookFallbackLocateTarget(void) {
    UIApplication *application = [UIApplication sharedApplication];
    if (![application isKindOfClass:[UIApplication class]]) {
        return nil;
    }

    NSMutableArray<UIWindow *> *windowCandidates = [NSMutableArray array];
    if ([application respondsToSelector:@selector(windows)]) {
        for (UIWindow *window in application.windows) {
            if (![window isKindOfClass:[UIWindow class]]) {
                continue;
            }
            if ([windowCandidates containsObject:window]) {
                continue;
            }
            [windowCandidates addObject:window];
        }
    }

    for (UIWindow *window in [windowCandidates reverseObjectEnumerator]) {
        if (window.hidden) {
            continue;
        }
        id target = WCHookLocateTargetFromObject(window);
        if (target && [target respondsToSelector:@selector(locateToMsg:)]) {
            return target;
        }

        UIViewController *controller = window.rootViewController;
        while ([controller respondsToSelector:@selector(presentedViewController)] && controller.presentedViewController) {
            controller = controller.presentedViewController;
        }

        if (controller && [controller respondsToSelector:@selector(locateToMsg:)]) {
            return controller;
        }

        if (controller) {
            target = WCHookLocateTargetFromObject(controller);
            if (target && [target respondsToSelector:@selector(locateToMsg:)]) {
                return target;
            }
        }
    }

    return nil;
}

static BOOL WCHookTryJumpFromRevokeTipMessageWrap(id messageWrap, id locateTarget) {
    if (!messageWrap) {
        return NO;
    }

    NSString *content = WCHookMessageContentFromWrap(messageWrap);
    if (!WCHookLooksLikeRevokeTipContent(content)) {
        WCHookShowDebugToast(@"撤回提示: 文案不匹配");
        return NO;
    }

    id messageMgr = WCHookMessageMgr();
    NSString *usedSession = nil;
    long long svrID = 0;
    unsigned int localID = 0;
    NSString *excerpt = nil;
    id targetMessage = WCHookResolveRevokeTipTargetMessage(messageWrap,
                                                           messageMgr,
                                                           &usedSession,
                                                           &svrID,
                                                           &localID,
                                                           &excerpt);
    if (!targetMessage && !messageMgr) {
        WCHookShowDebugToast(@"撤回提示: 消息服务未就绪");
        // 说明：撤回提示消息点击后，官方链路在部分消息类型（如表情包）会触发崩溃。
        // 即使本次无法定位原消息，也要吞掉点击，避免继续走官方处理逻辑。
        return YES;
    }
    if (!targetMessage) {
        WCPLLogWarning(@"Revoke tip jump miss target: session=%@ svrID=%lld localID=%u excerpt=%@",
                       usedSession ?: @"",
                       svrID,
                       localID,
                       excerpt ?: @"");
        WCHookShowDebugToast(@"撤回提示: 未找到原消息");
        // 同上：避免落回官方点击处理导致崩溃/重启。
        return YES;
    }

    // 兜底路径也写入 refer，配合官方 returnToOriginalMsg: 出现官方“返回”入口。
    WCHookBindReferRelationForRevokeTip(messageWrap, targetMessage);

    id effectiveLocateTarget = locateTarget;
    if (!(effectiveLocateTarget && [effectiveLocateTarget respondsToSelector:@selector(locateToMsg:)])) {
        effectiveLocateTarget = WCHookFallbackLocateTarget();
    }
    if (!(effectiveLocateTarget && [effectiveLocateTarget respondsToSelector:@selector(locateToMsg:)])) {
        WCPLLogWarning(@"Revoke tip jump miss locate target: session=%@ svrID=%lld localID=%u",
                       usedSession ?: @"",
                       svrID,
                       localID);
        WCHookShowDebugToast(@"撤回提示: 无法定位会话");
        return YES;
    }

    BOOL jumped = WCHookLocateAndEmphasizeRevokeTarget(effectiveLocateTarget,
                                                       messageWrap,
                                                       targetMessage,
                                                       YES);
    if (jumped) {
        WCPLLogInfo(@"Revoke tip jump success: session=%@ svrID=%lld localID=%u",
                    usedSession ?: @"",
                    svrID,
                    localID);
        WCHookShowDebugToast(@"撤回提示: 跳转成功");
    } else {
        // 说明：即使跳转失败，也吞掉点击，避免官方链路重复处理导致异常。
        WCHookShowDebugToast(@"撤回提示: 跳转失败");
    }
    return YES;
}

static BOOL WCHookTryJumpFromRevokeTipCell(CommonMessageCellView *cell) {
    if (!cell) {
        return NO;
    }
    NSTimeInterval now = NSDate.date.timeIntervalSince1970;
    if (now < gWCHookRevokeTipTapThrottleUntil) {
        WCPLLogInfo(@"Revoke tip tap throttled: remain=%.3f",
                    gWCHookRevokeTipTapThrottleUntil - now);
        return YES;
    }

    CommonMessageCellView *resolvedCell = WCHookResolveMessageCellForObject(cell) ?: cell;
    if (resolvedCell != cell) {
        WCPLLogInfo(@"Revoke tip cell normalized: raw=%@ resolved=%@",
                    NSStringFromClass([cell class]),
                    NSStringFromClass([resolvedCell class]));
    }

    id messageWrap = WCHookMessageWrapForCell(resolvedCell);
    if (!messageWrap) {
        return NO;
    }
    if (!WCHookLooksLikeRevokeTipContent(WCHookMessageContentFromWrap(messageWrap))) {
        return NO;
    }
    WCHookShowDebugToast(@"撤回提示: 已点击");
    gWCHookRevokeTipTapThrottleUntil = now + 0.2;

    id locateTarget = WCHookLocateTargetFromObject(resolvedCell);
    return WCHookTryJumpFromRevokeTipMessageWrap(messageWrap, locateTarget);
}

static BOOL WCHookShouldAutoHideRevokeReturnEntry(UIScrollView *trackedScrollView, CGFloat baselineOffsetY) {
    if (![trackedScrollView isKindOfClass:[UIScrollView class]]) {
        return NO;
    }
    if (baselineOffsetY == CGFLOAT_MAX) {
        return NO;
    }

    CGFloat currentOffsetY = trackedScrollView.contentOffset.y;
    CGFloat delta = currentOffsetY - baselineOffsetY;
    if (delta < 0) {
        delta = -delta;
    }
    CGFloat adaptiveThreshold = CGRectGetHeight(trackedScrollView.bounds) * 0.40;
    if (adaptiveThreshold < 220.0) {
        adaptiveThreshold = 220.0;
    } else if (adaptiveThreshold > 320.0) {
        adaptiveThreshold = 320.0;
    }

    BOOL nearJump = (delta <= adaptiveThreshold);
    WCPLLogInfo(@"Revoke tip return scroll distance: baseline=%.1f current=%.1f delta=%.1f threshold=%.1f near=%d",
                baselineOffsetY,
                currentOffsetY,
                delta,
                adaptiveThreshold,
                nearJump ? 1 : 0);
    return nearJump;
}

static void WCHookScheduleAutoHideRevokeReturnEntry(id tipMessageWrap,
                                                    id preferredTarget,
                                                    UIScrollView *trackedScrollView,
                                                    CGFloat baselineOffsetY) {
    if (!tipMessageWrap) {
        return;
    }
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.42 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        if (!WCHookShouldAutoHideRevokeReturnEntry(trackedScrollView, baselineOffsetY)) {
            return;
        }

        id target = WCHookResolveMsgContentTargetFromObject(preferredTarget) ?: preferredTarget;
        if (target) {
            id anchoredTip = objc_getAssociatedObject(target, kWCHookOfficialReturnTipWrapKey);
            if (!anchoredTip || anchoredTip == tipMessageWrap) {
                objc_setAssociatedObject(target, kWCHookOfficialReturnTipWrapKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                objc_setAssociatedObject(target, kWCHookOfficialReturnExpireKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                objc_setAssociatedObject(target, kWCHookOfficialReturnEnableAtKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                objc_setAssociatedObject(target, kWCHookOfficialReturnTapAtKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                if ([target respondsToSelector:@selector(removeTipView)]) {
                    @try {
                        ((void (*)(id, SEL))objc_msgSend)(target, @selector(removeTipView));
                    } @catch (__unused NSException *exceptionHideEdgeTip) {
                    }
                }
            }
        }

        UIWindow *window = WCHookActiveWindow();
        UIButton *button = (UIButton *)[window viewWithTag:kWCHookRevokeReturnButtonTag];
        if ([button isKindOfClass:[UIButton class]]) {
            id buttonTip = objc_getAssociatedObject(button, kWCHookRevokeReturnTipWrapKey);
            if (!buttonTip || buttonTip == tipMessageWrap) {
                [UIView animateWithDuration:0.12 animations:^{
                    button.alpha = 0.0;
                } completion:^(__unused BOOL finished) {
                    [button removeFromSuperview];
                }];
            }
        }

        WCPLLogInfo(@"Revoke tip return entry auto hidden: near jump");
    });
}

static id WCHookResolveProfileOpenTargetFromCell(CommonMessageCellView *cell) {
    if (!cell) {
        return nil;
    }

    id locateTarget = WCHookLocateTargetFromObject(cell);
    if (locateTarget) {
        return locateTarget;
    }

    id viewController = WCHookInvokeObject(cell, @selector(getViewController));
    if (viewController) {
        return viewController;
    }

    UIView *carrier = WCHookLocateCarrierViewFromObject(cell);
    UIResponder *responder = carrier;
    while (responder) {
        if ([responder respondsToSelector:@selector(jumpToUserProfile:Displayname:Scence:)] ||
            [responder respondsToSelector:@selector(jumpToUserProfile:Displayname:Scence:fromBanner:)] ||
            [responder respondsToSelector:@selector(OpenContactInfo:)]) {
            return responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

static BOOL WCHookOpenProfileWithTarget(id target, NSString *userName, NSString *displayName) {
    NSString *targetUser = WCHookTrimString(userName);
    if (!target || targetUser.length == 0) {
        return NO;
    }
    NSString *targetName = WCHookTrimString(displayName) ?: targetUser;

    SEL jumpWithBanner = NSSelectorFromString(@"jumpToUserProfile:Displayname:Scence:fromBanner:");
    if ([target respondsToSelector:jumpWithBanner]) {
        @try {
            ((void (*)(id, SEL, id, id, unsigned int, BOOL))objc_msgSend)(target,
                                                                           jumpWithBanner,
                                                                           targetUser,
                                                                           targetName,
                                                                           89,
                                                                           NO);
            return YES;
        } @catch (__unused NSException *exceptionJumpBanner) {
        }
    }

    SEL jumpBasic = NSSelectorFromString(@"jumpToUserProfile:Displayname:Scence:");
    if ([target respondsToSelector:jumpBasic]) {
        @try {
            ((void (*)(id, SEL, id, id, unsigned int))objc_msgSend)(target,
                                                                     jumpBasic,
                                                                     targetUser,
                                                                     targetName,
                                                                     89);
            return YES;
        } @catch (__unused NSException *exceptionJumpBasic) {
        }
    }

    id contact = WCHookContactForUserName(targetUser);
    if (!contact) {
        return NO;
    }

    SEL openSelectors[] = {
        NSSelectorFromString(@"OpenContactInfo:"),
        NSSelectorFromString(@"openContactInfo:"),
        NSSelectorFromString(@"_openContactInfo:"),
        NSSelectorFromString(@"showContactInfoView:"),
        NSSelectorFromString(@"openUserProfileViewControllerWithContact:")
    };
    for (size_t idx = 0; idx < sizeof(openSelectors) / sizeof(openSelectors[0]); ++idx) {
        SEL selector = openSelectors[idx];
        if (![target respondsToSelector:selector]) {
            continue;
        }
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(target, selector, contact);
            return YES;
        } @catch (__unused NSException *exceptionOpen) {
        }
    }
    return NO;
}

static BOOL WCHookExecuteOpenQuitMemberProfileFromCell(CommonMessageCellView *cell) {
    id messageWrap = WCHookMessageWrapForCell(cell);
    NSString *content = WCHookMessageContentFromWrap(messageWrap);
    if (!WCHookLooksLikeQuitMonitorTipContent(content)) {
        return NO;
    }

    NSString *msgSource = WCHookMsgSourceFromWrap(messageWrap);
    NSString *userName = WCHookExtractQuitMonitorUserNameFromMsgSource(msgSource);
    if (userName.length == 0) {
        userName = WCHookExtractQuitMonitorUserNameFromContent(content);
    }
    if (userName.length == 0) {
        WCPLLogDebug(@"Quit monitor profile open skip: username missing content=%@", content ?: @"");
        return NO;
    }

    NSString *displayName = WCHookExtractQuitMonitorDisplayNameFromContent(content);
    id target = WCHookResolveProfileOpenTargetFromCell(cell);
    BOOL opened = WCHookOpenProfileWithTarget(target, userName, displayName);
    if (!opened) {
        id viewController = WCHookInvokeObject(target, @selector(getViewController));
        if (viewController && viewController != target) {
            opened = WCHookOpenProfileWithTarget(viewController, userName, displayName);
        }
    }

    if (opened) {
        WCPLLogInfo(@"Quit monitor profile open success: user=%@ name=%@ target=%@",
                    userName,
                    displayName ?: @"",
                    NSStringFromClass([target class]));
    } else {
        WCPLLogWarning(@"Quit monitor profile open failed: user=%@ name=%@ target=%@",
                       userName,
                       displayName ?: @"",
                       target ? NSStringFromClass([target class]) : @"(nil)");
    }
    return opened;
}

static id WCHookLocateTargetFromObject(id object) {
    id locateTarget = nil;
    UIView *carrierView = WCHookLocateCarrierViewFromObject(object);
    if (carrierView) {
        locateTarget = WCHookLocateResponderForView(carrierView);
    }
    if (!locateTarget) {
        locateTarget = WCHookInvokeObject(object, @selector(getViewController));
    }
    if (!locateTarget) {
        id viewModel = WCHookInvokeObject(object, @selector(viewModel));
        id dataSource = WCHookInvokeObject(viewModel, @selector(recordNodeDataSource));
        if (dataSource && [dataSource respondsToSelector:@selector(locateToMsg:)]) {
            locateTarget = dataSource;
        }
    }
    return locateTarget;
}

static BOOL WCHookExecuteJumpToMessageFromCell(CommonMessageCellView *cell, id targetMessage) {
    if (!cell || !targetMessage) {
        return NO;
    }

    id locateTarget = WCHookLocateTargetFromObject(cell);
    return WCHookExecuteJumpToMessageWithTarget(locateTarget, targetMessage);
}

static BOOL WCHookExecuteJumpToMessageWithTarget(id locateTarget, id targetMessage) {
    if (!locateTarget || !targetMessage) {
        return NO;
    }
    SEL locateSelector = @selector(locateToMsg:);
    if (![locateTarget respondsToSelector:locateSelector]) {
        return NO;
    }
    ((void (*)(id, SEL, id))objc_msgSend)(locateTarget, locateSelector, targetMessage);
    return YES;
}

static BOOL WCHookExecuteJumpFromCell(CommonMessageCellView *cell) {
    if (!cell) {
        return NO;
    }

    id messageWrap = WCHookMessageWrapForCell(cell);
    id locateTarget = WCHookLocateTargetFromObject(cell);
    if (WCHookTryJumpFromRevokeTipCell(cell)) {
        return YES;
    }

    SEL returnSelector = @selector(onReturnToOriginalMsg);
    if ([cell respondsToSelector:returnSelector]) {
        @try {
            ((void (*)(id, SEL))objc_msgSend)(cell, returnSelector);
            return YES;
        } @catch (__unused NSException *exception) {
        }
    }

    id targetMessage = WCHookReferMessageFromWrap(messageWrap);
    if (!targetMessage) {
        return NO;
    }

    if (locateTarget) {
        return WCHookExecuteJumpToMessageWithTarget(locateTarget, targetMessage);
    }
    return WCHookExecuteJumpToMessageFromCell(cell, targetMessage);
}

static BOOL WCHookExecuteJumpFromInput(id toolView) {
    if (!toolView) {
        return NO;
    }

    id replyingMessage = WCHookInvokeObject(toolView, @selector(replyingMessage));
    if (!replyingMessage) {
        return NO;
    }

    id locateTarget = WCHookLocateTargetFromObject(toolView);
    SEL locateSelector = @selector(locateToMsg:);
    if (!locateTarget || ![locateTarget respondsToSelector:locateSelector]) {
        return NO;
    }

    ((void (*)(id, SEL, id))objc_msgSend)(locateTarget, locateSelector, replyingMessage);
    return YES;
}

static BOOL WCHookPerformSyncOnMainThread(BOOL (^action)(void)) {
    if (!action) {
        return NO;
    }
    if ([NSThread isMainThread]) {
        return action();
    }
    __block BOOL result = NO;
    BOOL didFinish = WCPLDispatchMainSyncWithTimeout(2.0, ^{
        result = action();
    });
    if (!didFinish) {
        WCPLLogWarning(@"[引用跳转] 主线程同步调度超时，已放弃执行");
        return NO;
    }
    return result;
}
