static BOOL wcpl_isControllerShowingSearchUI(id viewController) {
    if (!viewController) {
        return NO;
    }

    SEL isShowSel = @selector(isShowMsgSearch);
    if ([viewController respondsToSelector:isShowSel]) {
        return ((BOOL (*)(id, SEL))objc_msgSend)(viewController, isShowSel);
    }

    @try {
        id value = [viewController valueForKey:@"isShowMsgSearch"];
        if ([value respondsToSelector:@selector(boolValue)]) {
            return [value boolValue];
        }
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }

    return NO;
}


static BOOL wcpl_objectLooksLikeSearchController(id obj) {
    if (!obj) {
        return NO;
    }

    NSString *className = NSStringFromClass([obj class]) ?: @"";
    if (wcpl_classNameContainsToken(className, @"searchcontroller")) {
        return YES;
    }

    if ([obj respondsToSelector:@selector(setActive:)] && [obj respondsToSelector:@selector(isActive)]) {
        return YES;
    }

    return NO;
}

static id wcpl_searchControllerFromHelper(id helper) {
    if (!helper) {
        return nil;
    }

    SEL getterSel = @selector(searchController);
    if ([helper respondsToSelector:getterSel]) {
        id value = ((id (*)(id, SEL))objc_msgSend)(helper, getterSel);
        if (wcpl_objectLooksLikeSearchController(value)) {
            return value;
        }
    }

    NSArray<NSString *> *keys = @[@"searchController", @"m_searchController", @"searcher", @"m_searcher"];
    for (NSString *key in keys) {
        id value = nil;
        @try {
            value = [helper valueForKey:key];
        } @catch (__unused NSException *exception) {
            value = nil;
        }
        if (wcpl_objectLooksLikeSearchController(value)) {
            return value;
        }
    }

    return nil;
}

static BOOL wcpl_viewControllerLooksSearchPresentation(UIViewController *viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    NSString *className = NSStringFromClass([viewController class]) ?: @"";
    if (wcpl_classNameContainsSearchToken(className)) {
        return YES;
    }

    UIView *view = wcpl_safeViewIfLoaded(viewController);
    if ([view isKindOfClass:[UIView class]] && wcpl_viewTreeHasSearchLikeNode(view, 0)) {
        return YES;
    }

    return NO;
}


static void wcpl_markBridgePending(id controller, BOOL enable) {
    if (!controller) {
        return;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchBridgePendingKey, @(enable), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static BOOL wcpl_isBridgePending(id controller) {
    if (!controller) {
        return NO;
    }

    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchBridgePendingKey);
    return [marker respondsToSelector:@selector(boolValue)] ? [marker boolValue] : NO;
}

static void wcpl_markBridgeAutoPop(id controller, BOOL enable) {
    if (!controller) {
        return;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchBridgeAutoPopKey, @(enable), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static __attribute__((unused)) BOOL wcpl_isBridgeAutoPop(id controller) {
    if (!controller) {
        return NO;
    }

    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchBridgeAutoPopKey);
    return [marker respondsToSelector:@selector(boolValue)] ? [marker boolValue] : NO;
}


static id wcpl_msgSearchHelperFromController(id controller) {
    if (!controller) {
        return nil;
    }

    id helper = wcpl_safeObjectIvar(controller, "m_oMsgSearchHelper");
    if (helper) {
        return helper;
    }

    @try {
        helper = [controller valueForKey:@"m_oMsgSearchHelper"];
    } @catch (__unused NSException *exception) {
        helper = nil;
    }
    if (helper) {
        return helper;
    }

    @try {
        helper = [controller valueForKey:@"m_specialMsgSearchHelper"];
    } @catch (__unused NSException *exception) {
        helper = nil;
    }

    return helper;
}

static id wcpl_specialMsgSearchHelperFromController(id controller) {
    if (!controller) {
        return nil;
    }

    id helper = wcpl_safeObjectIvar(controller, "m_specialMsgSearchHelper");
    if (helper) {
        return helper;
    }

    @try {
        helper = [controller valueForKey:@"m_specialMsgSearchHelper"];
    } @catch (__unused NSException *exception) {
        helper = nil;
    }

    return helper;
}

static BOOL wcpl_isSpecialMsgSearchHelper(id helper) {
    if (!helper) {
        return NO;
    }

    Class specialHelperClass = objc_getClass("MMSpecialMsgSearchHelper");
    if (specialHelperClass && [helper isKindOfClass:specialHelperClass]) {
        return YES;
    }

    NSString *className = NSStringFromClass([helper class]) ?: @"";
    return wcpl_classNameContainsToken(className, @"specialmsgsearchhelper");
}

static BOOL wcpl_isFullMsgSearchHelper(id helper) {
    if (!helper) {
        return NO;
    }

    NSString *className = NSStringFromClass([helper class]) ?: @"";
    if (className.length == 0) {
        return NO;
    }
    if (wcpl_classNameContainsToken(className, @"special") || wcpl_classNameContainsToken(className, @"date")) {
        return NO;
    }
    if ([className isEqualToString:@"MsgSearchHelper"]) {
        return YES;
    }
    return wcpl_classNameContainsToken(className, @"msgsearchhelper");
}

static void wcpl_forceSetSearchBusinessTypeToNormal(id controller, NSString *stage) {
    if (!controller) {
        return;
    }

    SEL setBizSel = @selector(setM_eMsgSearchBusinessType:);
    if ([controller respondsToSelector:setBizSel]) {
        ((void (*)(id, SEL, int))objc_msgSend)(controller, setBizSel, 0);
        WCPLLogInfo(@"[搜索] %@ 强制业务类型=0(setM_eMsgSearchBusinessType)", stage ?: @"activate");
        return;
    }

    SEL setBizAltSel = @selector(setMsgSearchBusinessType:);
    if ([controller respondsToSelector:setBizAltSel]) {
        ((void (*)(id, SEL, int))objc_msgSend)(controller, setBizAltSel, 0);
        WCPLLogInfo(@"[搜索] %@ 强制业务类型=0(setMsgSearchBusinessType)", stage ?: @"activate");
        return;
    }

    @try {
        [controller setValue:@0 forKey:@"m_eMsgSearchBusinessType"];
        WCPLLogInfo(@"[搜索] %@ 强制业务类型=0(KVC)", stage ?: @"activate");
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
}

static BOOL wcpl_tryFinalizeSpecialSearchHelper(id controller, NSString *stage) {
    id specialHelper = wcpl_specialMsgSearchHelperFromController(controller);
    if (!specialHelper) {
        return NO;
    }

    BOOL touched = NO;
    SEL cancelSel = @selector(cancelSearch);
    if ([specialHelper respondsToSelector:cancelSel]) {
        @try {
            ((void (*)(id, SEL))objc_msgSend)(specialHelper, cancelSel);
            touched = YES;
            WCPLLogInfo(@"[搜索] %@ special helper cancelSearch", stage ?: @"repair");
        } @catch (NSException *exception) {
            WCPLLogInfo(@"[搜索] %@ special helper cancelSearch 异常: %@",
                        stage ?: @"repair",
                        exception.reason ?: @"unknown");
        }
    }

    return touched;
}

static BOOL wcpl_resetSpecialHelperForNativeFullSearch(id controller, NSString *stage) {
    if (!controller) {
        return NO;
    }

    id helper = wcpl_msgSearchHelperFromController(controller);
    id specialHelper = wcpl_specialMsgSearchHelperFromController(controller);
    NSString *helperClass = helper ? (NSStringFromClass([helper class]) ?: @"unknown") : @"nil";
    NSString *specialClass = specialHelper ? (NSStringFromClass([specialHelper class]) ?: @"unknown") : @"nil";
    BOOL helperIncompatible = (helper != nil) && !wcpl_isFullMsgSearchHelper(helper);
    BOOL shouldReset = helperIncompatible || wcpl_isSpecialMsgSearchHelper(specialHelper);
    if (!shouldReset) {
        return NO;
    }

    wcpl_tryFinalizeSpecialSearchHelper(controller, stage ?: @"[搜索] native-preflight");

    BOOL touched = NO;
    SEL setMainHelperSel = @selector(setM_oMsgSearchHelper:);
    if ([controller respondsToSelector:setMainHelperSel]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(controller, setMainHelperSel, nil);
            touched = YES;
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    SEL setSpecialHelperSel = @selector(setM_specialMsgSearchHelper:);
    if ([controller respondsToSelector:setSpecialHelperSel]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(controller, setSpecialHelperSel, nil);
            touched = YES;
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    @try {
        [controller setValue:nil forKey:@"m_oMsgSearchHelper"];
        touched = YES;
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    @try {
        [controller setValue:nil forKey:@"m_specialMsgSearchHelper"];
        touched = YES;
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }

    WCPLLogInfo(@"[搜索] %@ clean-slate 重置 helper=%@ special=%@ touched=%@",
                stage ?: @"[搜索] native-preflight",
                helperClass,
                specialClass,
                touched ? @"YES" : @"NO");
    return touched;
}

static void wcpl_logSearchHelperSnapshot(id controller, NSString *stage) {
    if (!controller) {
        return;
    }

    id helper = wcpl_msgSearchHelperFromController(controller);
    id specialHelper = wcpl_specialMsgSearchHelperFromController(controller);
    unsigned int businessType = wcpl_msgSearchBusinessType(controller);
    NSString *helperClass = helper ? (NSStringFromClass([helper class]) ?: @"unknown") : @"nil";
    NSString *specialClass = specialHelper ? (NSStringFromClass([specialHelper class]) ?: @"unknown") : @"nil";

    UIViewController *viewController = [controller isKindOfClass:[UIViewController class]] ? (UIViewController *)controller : nil;
    UIViewController *presented = viewController.presentedViewController;
    NSString *presentedClass = presented ? (NSStringFromClass([presented class]) ?: @"unknown") : @"nil";

    id searchController = wcpl_searchControllerFromHelper(helper);
    BOOL scActive = NO;
    BOOL scViewHidden = NO;
    BOOL scViewInteractive = NO;
    CGFloat scViewAlpha = -1.0f;
    if (searchController && [searchController respondsToSelector:@selector(isActive)]) {
        scActive = ((BOOL (*)(id, SEL))objc_msgSend)(searchController, @selector(isActive));
    }
    if (searchController && [searchController respondsToSelector:@selector(view)]) {
        UIView *searchView = nil;
        @try {
            searchView = ((id (*)(id, SEL))objc_msgSend)(searchController, @selector(view));
        } @catch (__unused NSException *exception) {
            searchView = nil;
        }
        if ([searchView isKindOfClass:[UIView class]]) {
            scViewHidden = searchView.hidden;
            scViewInteractive = searchView.userInteractionEnabled;
            scViewAlpha = searchView.alpha;
        }
    }

    WCPLLogInfo(@"[搜索] %@ helper=%@ specialHelper=%@ businessType=%u presented=%@ scActive=%@ scHidden=%@ scAlpha=%.2f scUI=%@",
                stage ?: @"snapshot",
                helperClass,
                specialClass,
                businessType,
                presentedClass,
                scActive ? @"YES" : @"NO",
                scViewHidden ? @"YES" : @"NO",
                scViewAlpha,
                scViewInteractive ? @"YES" : @"NO");
}

static unsigned int wcpl_msgSearchBusinessType(id controller) {
    if (!controller) {
        return 0;
    }

    SEL businessSel = @selector(getMsgSearchBusinessType);
    if ([controller respondsToSelector:businessSel]) {
        return ((unsigned int (*)(id, SEL))objc_msgSend)(controller, businessSel);
    }

    return 0;
}


static __attribute__((unused)) BOOL wcpl_beginChatSearchTransition(id controller) {
    if (!controller) {
        return NO;
    }

    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchTransitioningKey);
    BOOL isTransitioning = [marker respondsToSelector:@selector(boolValue)] ? [marker boolValue] : NO;
    if (isTransitioning) {
        return NO;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchTransitioningKey, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return YES;
}

static __attribute__((unused)) void wcpl_endChatSearchTransition(id controller) {
    if (!controller) {
        return;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchTransitioningKey, @NO, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static __attribute__((unused)) BOOL wcpl_beginCancelTransition(id controller) {
    if (!controller) {
        return NO;
    }

    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchCancellingKey);
    BOOL isCancelling = [marker respondsToSelector:@selector(boolValue)] ? [marker boolValue] : NO;
    if (isCancelling) {
        return NO;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchCancellingKey, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return YES;
}

static __attribute__((unused)) void wcpl_endCancelTransition(id controller) {
    if (!controller) {
        return;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchCancellingKey, @NO, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static void wcpl_markForceDelayedExitRepair(id controller, BOOL enable) {
    if (!controller) {
        return;
    }
    objc_setAssociatedObject(controller, kWCPLChatSearchForceDelayedRepairKey, @(enable), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static BOOL wcpl_shouldForceDelayedExitRepair(id controller) {
    if (!controller) {
        return NO;
    }
    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchForceDelayedRepairKey);
    return [marker respondsToSelector:@selector(boolValue)] ? [marker boolValue] : NO;
}

static __attribute__((unused)) void wcpl_markInjectedChatSearchFlow(id controller, BOOL enable) {
    if (!controller) {
        return;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchInjectedFlowKey, @(enable), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static BOOL wcpl_isInjectedChatSearchFlow(id controller) {
    if (!controller) {
        return NO;
    }

    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchInjectedFlowKey);
    return [marker respondsToSelector:@selector(boolValue)] ? [marker boolValue] : NO;
}

static void wcpl_markForceFullSearchMode(id controller, BOOL enable) {
    if (!controller) {
        return;
    }
    objc_setAssociatedObject(controller, kWCPLChatSearchForceFullModeKey, @(enable), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static __attribute__((unused)) BOOL wcpl_shouldForceFullSearchMode(id controller) {
    if (!controller) {
        return NO;
    }
    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchForceFullModeKey);
    BOOL enabled = [marker respondsToSelector:@selector(boolValue)] ? [marker boolValue] : NO;
    if (!enabled) {
        return NO;
    }
    return wcpl_isTargetChatForSearchButton(controller);
}

static __attribute__((unused)) void wcpl_clearSearchEnhanceRetry(id controller) {
    if (!controller) {
        return;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchEnhanceRetryKey, @0, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static NSUInteger wcpl_searchEnhanceRetryCount(id controller) {
    if (!controller) {
        return 0;
    }

    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchEnhanceRetryKey);
    return [marker respondsToSelector:@selector(unsignedIntegerValue)] ? [marker unsignedIntegerValue] : 0;
}

static BOOL wcpl_consumeSearchEnhanceRetryBudget(id controller, NSUInteger maxRetry) {
    if (!controller) {
        return NO;
    }

    NSUInteger current = wcpl_searchEnhanceRetryCount(controller);
    if (current >= maxRetry) {
        return NO;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchEnhanceRetryKey, @(current + 1), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return YES;
}

static NSUInteger wcpl_nextExitCleanupEpoch(id controller) {
    if (!controller) {
        return 0;
    }

    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchExitCleanupEpochKey);
    NSUInteger epoch = [marker respondsToSelector:@selector(unsignedIntegerValue)] ? [marker unsignedIntegerValue] : 0;
    epoch += 1;
    objc_setAssociatedObject(controller, kWCPLChatSearchExitCleanupEpochKey, @(epoch), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return epoch;
}

static NSUInteger wcpl_currentExitCleanupEpoch(id controller) {
    if (!controller) {
        return 0;
    }
    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchExitCleanupEpochKey);
    return [marker respondsToSelector:@selector(unsignedIntegerValue)] ? [marker unsignedIntegerValue] : 0;
}

static BOOL wcpl_shouldScheduleDelayedExitRepair(id controller) {
    if (!controller) {
        return NO;
    }
    if (wcpl_shouldForceDelayedExitRepair(controller)) {
        return YES;
    }
    if (wcpl_isControllerShowingSearchUI(controller)) {
        return YES;
    }
    if (wcpl_navTitleViewLooksSearchLike(controller)) {
        return YES;
    }
    if (wcpl_navBarHasSearchResidue(controller)) {
        return YES;
    }
    if (wcpl_controllerRootHasSearchResidue(controller)) {
        return YES;
    }
    return NO;
}

static void wcpl_scheduleExitSearchSnapshots(id controller, NSString *stagePrefix) {
    if (!controller) {
        return;
    }

    NSUInteger epoch = wcpl_nextExitCleanupEpoch(controller);
    NSString *prefix = [stagePrefix isKindOfClass:[NSString class]] && stagePrefix.length > 0 ? stagePrefix : @"[搜索] exit 收口快照";
    void (^runExitSnapshotNow)(void) = ^{
        if (wcpl_currentExitCleanupEpoch(controller) != epoch) {
            WCPLLogInfo(@"[搜索] %@(%@) 跳过：epoch 已过期(current=%lu, expect=%lu)",
                        prefix, @"0ms",
                        (unsigned long)wcpl_currentExitCleanupEpoch(controller),
                        (unsigned long)epoch);
            return;
        }
        wcpl_repairExitSearchNavState(controller, [NSString stringWithFormat:@"%@(%@)", prefix, @"0ms"], NO);

        if (!wcpl_shouldScheduleDelayedExitRepair(controller)) {
            WCPLLogInfo(@"[搜索] %@(%@) 跳过：0ms 已收口完成", prefix, @"500ms");
            wcpl_markForceDelayedExitRepair(controller, NO);
            return;
        }

        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.18 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            if (wcpl_currentExitCleanupEpoch(controller) != epoch) {
                WCPLLogInfo(@"[搜索] %@(%@) 跳过：epoch 已过期(current=%lu, expect=%lu)",
                            prefix, @"500ms",
                            (unsigned long)wcpl_currentExitCleanupEpoch(controller),
                            (unsigned long)epoch);
                return;
            }
            if (wcpl_isControllerShowingSearchUI(controller)) {
                WCPLLogInfo(@"[搜索] %@(%@) 跳过：已进入新搜索会话", prefix, @"500ms");
                return;
            }
            wcpl_repairExitSearchNavState(controller, [NSString stringWithFormat:@"%@(%@)", prefix, @"500ms"], YES);

            if (!wcpl_shouldScheduleDelayedExitRepair(controller)) {
                WCPLLogInfo(@"[搜索] %@(%@) 跳过：500ms 已收口完成", prefix, @"1200ms");
                return;
            }

            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.70 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                if (wcpl_currentExitCleanupEpoch(controller) != epoch) {
                    WCPLLogInfo(@"[搜索] %@(%@) 跳过：epoch 已过期(current=%lu, expect=%lu)",
                                prefix, @"1200ms",
                                (unsigned long)wcpl_currentExitCleanupEpoch(controller),
                                (unsigned long)epoch);
                    return;
                }
                if (wcpl_isControllerShowingSearchUI(controller)) {
                    WCPLLogInfo(@"[搜索] %@(%@) 跳过：已进入新搜索会话", prefix, @"1200ms");
                    return;
                }
                wcpl_repairExitSearchNavState(controller, [NSString stringWithFormat:@"%@(%@)", prefix, @"1200ms"], YES);
                wcpl_markForceDelayedExitRepair(controller, NO);
            });
        });
    };
    if ([NSThread isMainThread]) {
        runExitSnapshotNow();
    } else {
        dispatch_async(dispatch_get_main_queue(), runExitSnapshotNow);
    }
}

static void wcpl_finalizeExitSearchUIIfNeeded(id controller, NSString *stagePrefix) {
    if (!controller) {
        return;
    }

    SEL setShowSel = @selector(setIsShowMsgSearch:);
    if ([controller respondsToSelector:setShowSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(controller, setShowSel, NO);
    }

    id helper = wcpl_msgSearchHelperFromController(controller);
    wcpl_resetSearchHelperRuntimeState(helper, stagePrefix ?: @"[搜索] 退出收口");

    // `%orig` 的取消链路已经负责搜索 helper 的生命周期收口。
    // 这里若再主动调用 doExit/removeSearchVC/cancelSearch，容易触发重复销毁导致闪退。
    // 当前只做导航状态修复与延时兜底，不再强行驱动 helper 退出。

    wcpl_scheduleExitSearchSnapshots(controller, stagePrefix);
}

static __attribute__((unused)) BOOL wcpl_shouldFinalizeSearchDismiss(id controller) {
    if (!controller) {
        return NO;
    }

    if (wcpl_isInjectedChatSearchFlow(controller)) {
        return YES;
    }

    if (wcpl_isControllerShowingSearchUI(controller)) {
        return YES;
    }

    if (wcpl_navTitleViewLooksSearchLike(controller) || wcpl_navBarHasSearchResidue(controller)) {
        return YES;
    }

    return wcpl_controllerRootHasSearchResidue(controller);
}

static __attribute__((unused)) BOOL wcpl_shouldPreferNativeReturnAnimation(id controller) {
    if (!controller) {
        return NO;
    }
    // 密友行为对齐：仅在插件注入搜索链中优先保留原生取消动画。
    return wcpl_isInjectedChatSearchFlow(controller);
}

static __attribute__((unused)) void wcpl_scheduleNativeReturnTouchFailSafe(id controller, NSString *stagePrefix, NSTimeInterval delay) {
    if (!controller) {
        return;
    }

    NSString *prefix = ([stagePrefix isKindOfClass:[NSString class]] && stagePrefix.length > 0)
        ? stagePrefix
        : @"[搜索] native-return-touch";
    __weak id weakController = controller;
    NSTimeInterval safeDelay = delay > 0 ? delay : 0.20;

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(safeDelay * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        id strongController = weakController;
        if (!strongController) {
            return;
        }

        BOOL recovered = wcpl_forceDisableSearchPresentationOverlay(strongController,
                                                                    [NSString stringWithFormat:@"%@ 触控兜底", prefix]);
        if (recovered) {
            WCPLLogInfo(@"[搜索] %@ 触控兜底恢复完成", prefix);
        }
    });
}

static __attribute__((unused)) void wcpl_scheduleNativeReturnFallbackCleanup(id controller, NSString *stagePrefix, NSTimeInterval delay) {
    if (!controller) {
        return;
    }

    NSString *prefix = ([stagePrefix isKindOfClass:[NSString class]] && stagePrefix.length > 0)
        ? stagePrefix
        : @"[搜索] native-return";
    __weak id weakController = controller;
    NSTimeInterval safeDelay = delay > 0 ? delay : 0.75;

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(safeDelay * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        id strongController = weakController;
        if (!strongController) {
            return;
        }

        // native-return 保留动画时，优先只做触控恢复，不做激进清理。
        BOOL recoveredTouch = wcpl_forceDisableSearchPresentationOverlay(strongController,
                                                                         [NSString stringWithFormat:@"%@ 触控兜底", prefix]);
        if (recoveredTouch) {
            WCPLLogInfo(@"[搜索] %@ 延迟触控兜底恢复完成", prefix);
        }

        BOOL stillSearchLike = wcpl_isControllerShowingSearchUI(strongController) ||
                               wcpl_navTitleViewLooksSearchLike(strongController) ||
                               wcpl_navBarHasSearchResidue(strongController) ||
                               wcpl_controllerRootHasSearchResidue(strongController);
        if (!stillSearchLike) {
            WCPLLogInfo(@"[搜索] %@ 保持原生回退动画完成", prefix);
            return;
        }

        WCPLLogInfo(@"[搜索] %@ 检测到残留，触发兜底收口", prefix);
        wcpl_markForceDelayedExitRepair(strongController, YES);
        wcpl_finalizeExitSearchUIIfNeeded(strongController, [NSString stringWithFormat:@"%@ 兜底收口", prefix]);
    });
}

static void wcpl_markChatSearchAutoPopOnCancel(id controller, BOOL enable) {
    if (!controller) {
        return;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchAutoPopOnCancelKey, @(enable), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static __attribute__((unused)) void wcpl_tryAutoPopAfterSearchCancel(id controller) {
    id marker = controller ? objc_getAssociatedObject(controller, kWCPLChatSearchAutoPopOnCancelKey) : nil;
    BOOL shouldPop = [marker respondsToSelector:@selector(boolValue)] ? [marker boolValue] : NO;
    if (!shouldPop) {
        return;
    }

    wcpl_markChatSearchAutoPopOnCancel(controller, NO);

    UINavigationController *navigationController = nil;
    if ([controller isKindOfClass:[UIViewController class]]) {
        navigationController = ((UIViewController *)controller).navigationController;
    }

    if (![navigationController isKindOfClass:[UINavigationController class]]) {
        return;
    }

    if (navigationController.topViewController == controller) {
        [navigationController popViewControllerAnimated:NO];
        WCPLLogInfo(@"[搜索] msgSearchBarCancel 后自动返回聊天页");
    }
}

