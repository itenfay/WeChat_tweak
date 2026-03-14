static id wcpl_miyouSearcherFromController(id controller) {
    if (!controller) {
        return nil;
    }

    SEL searcherSel = @selector(searcher);
    if ([controller respondsToSelector:searcherSel]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(controller, searcherSel);
            if (value) {
                return value;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    NSArray<NSString *> *controllerKeys = @[@"searcher", @"m_searcher"];
    for (NSString *key in controllerKeys) {
        @try {
            id value = [controller valueForKey:key];
            if (value) {
                return value;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    id helper = wcpl_msgSearchHelperFromController(controller);
    NSArray<NSString *> *helperKeys = @[@"searcher", @"m_searcher", @"searchController", @"m_searchController"];
    for (NSString *key in helperKeys) {
        @try {
            id value = [helper valueForKey:key];
            if (value) {
                return value;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    return nil;
}

static UIView *wcpl_miyouSearchBarContainer(id searcher) {
    if (!searcher) {
        return nil;
    }

    id searchBar = nil;
    SEL searchBarSel = @selector(searchBar);
    if ([searcher respondsToSelector:searchBarSel]) {
        @try {
            searchBar = ((id (*)(id, SEL))objc_msgSend)(searcher, searchBarSel);
        } @catch (__unused NSException *exception) {
            searchBar = nil;
        }
    }
    if (![searchBar isKindOfClass:[UIView class]]) {
        return nil;
    }

    UIView *container = nil;
    @try {
        container = ((UIView *(*)(id, SEL))objc_msgSend)(searchBar, @selector(superview));
    } @catch (__unused NSException *exception) {
        container = nil;
    }

    return [container isKindOfClass:[UIView class]] ? container : nil;
}

static __attribute__((unused)) CGFloat wcpl_miyouStatusBarHeight(void) {
    CGFloat statusBarHeight = 0.0f;

    Class mmUtilityClass = objc_getClass("MMUICommonUtility");
    SEL normalStatusBarHeightSel = @selector(normalStatusBarHeight);
    if (mmUtilityClass && [mmUtilityClass respondsToSelector:normalStatusBarHeightSel]) {
        @try {
            statusBarHeight = ((CGFloat (*)(id, SEL))objc_msgSend)(mmUtilityClass, normalStatusBarHeightSel);
        } @catch (__unused NSException *exception) {
            statusBarHeight = 0.0f;
        }
    }

    if (statusBarHeight <= 0.0f) {
        UIWindow *window = nil;
        if (@available(iOS 13.0, *)) {
            NSSet<UIScene *> *scenes = UIApplication.sharedApplication.connectedScenes;
            for (UIScene *scene in scenes) {
                if (![scene isKindOfClass:[UIWindowScene class]]) {
                    continue;
                }
                UIWindowScene *windowScene = (UIWindowScene *)scene;
                for (UIWindow *candidate in windowScene.windows) {
                    if (candidate.isKeyWindow) {
                        window = candidate;
                        break;
                    }
                }
                if (window) {
                    break;
                }
            }
        } else {
            NSArray<UIWindow *> *windows = UIApplication.sharedApplication.windows;
            for (UIWindow *candidate in windows) {
                if (candidate.isKeyWindow) {
                    window = candidate;
                    break;
                }
            }
            if (!window && windows.count > 0) {
                window = windows.firstObject;
            }
        }

        if ([window isKindOfClass:[UIWindow class]]) {
            if (@available(iOS 11.0, *)) {
                statusBarHeight = window.safeAreaInsets.top;
            }
        }
    }

    if (statusBarHeight <= 0.0f) {
        statusBarHeight = 20.0f;
    }
    return statusBarHeight;
}

static __attribute__((unused)) UIView *wcpl_miyouHideSearchBarContainer(id controller, NSString *stage) {
    id searcher = wcpl_miyouSearcherFromController(controller);
    UIView *container = wcpl_miyouSearchBarContainer(searcher);
    if (![container isKindOfClass:[UIView class]]) {
        return nil;
    }

    container.hidden = YES;
    WCPLLogInfo(@"[搜索] %@ hideSearchBarContainer class=%@ y=%.2f",
                stage ?: @"miyou",
                NSStringFromClass([container class]) ?: @"unknown",
                wcpl_viewOriginY(container));
    return container;
}

static __attribute__((unused)) void wcpl_miyouPrepareSearchBarContainerForSearchEntry(id controller, NSString *stage) {
    UIView *container = wcpl_miyouHideSearchBarContainer(controller, stage);
    if (![container isKindOfClass:[UIView class]]) {
        return;
    }

    CGFloat statusBarHeight = wcpl_miyouStatusBarHeight();
    wcpl_setViewOriginY(container, statusBarHeight);
    WCPLLogInfo(@"[搜索] %@ setSearchBarContainerY=%.2f",
                stage ?: @"miyou",
                statusBarHeight);
}

static __attribute__((unused)) void wcpl_miyouRestoreSearchBarContainer(id controller, NSString *stage) {
    id searcher = wcpl_miyouSearcherFromController(controller);
    UIView *container = wcpl_miyouSearchBarContainer(searcher);
    if (![container isKindOfClass:[UIView class]]) {
        return;
    }

    CGFloat targetY = 0.0f;
    id marker = objc_getAssociatedObject(container, kWCPLSearchBarContainerOriginalYKey);
    if ([marker respondsToSelector:@selector(doubleValue)]) {
        targetY = (CGFloat)[marker doubleValue];
    } else {
        targetY = 0.0f;
    }

    container.hidden = NO;
    if (container.alpha < 0.99f) {
        container.alpha = 1.0f;
    }
    if (!container.userInteractionEnabled) {
        container.userInteractionEnabled = YES;
    }

    UIView *superview = container.superview;
    if ([superview isKindOfClass:[UIView class]]) {
        [superview setNeedsLayout];
        [superview layoutIfNeeded];
    }

    CGFloat currentY = wcpl_viewOriginY(container);
    objc_setAssociatedObject(container, kWCPLSearchBarContainerOriginalYKey, nil, OBJC_ASSOCIATION_ASSIGN);

    WCPLLogInfo(@"[搜索] %@ restoreSearchBarContainer class=%@ recordY=%.2f currentY=%.2f",
                stage ?: @"miyou",
                NSStringFromClass([container class]) ?: @"unknown",
                targetY,
                currentY);
}

static __attribute__((unused)) UIView *wcpl_currentSearchButtonView(id controller) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        return nil;
    }

    UIBarButtonItem *item = objc_getAssociatedObject(controller, kWCPLChatSearchNavButtonKey);
    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        UINavigationItem *navItem = ((UIViewController *)controller).navigationItem;
        NSArray<UIBarButtonItem *> *items = [navItem.rightBarButtonItems isKindOfClass:[NSArray class]] ? navItem.rightBarButtonItems : @[];
        for (UIBarButtonItem *candidate in items) {
            if (wcpl_isInjectedChatSearchButtonItem(candidate)) {
                item = candidate;
                break;
            }
        }
    }
    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        return nil;
    }

    UIView *customView = nil;
    @try {
        customView = item.customView;
    } @catch (__unused NSException *exception) {
        customView = nil;
    }
    if ([customView isKindOfClass:[UIView class]]) {
        return customView;
    }

    if ([item respondsToSelector:@selector(m_btn)]) {
        @try {
            id mBtn = ((id (*)(id, SEL))objc_msgSend)(item, @selector(m_btn));
            if ([mBtn isKindOfClass:[UIView class]]) {
                return (UIView *)mBtn;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    return nil;
}

static __attribute__((unused)) BOOL wcpl_alignSearchBarContainerToSearchButton(id controller, NSString *stage) {
    UIView *buttonView = wcpl_currentSearchButtonView(controller);
    if (![buttonView isKindOfClass:[UIView class]]) {
        return NO;
    }

    id searcher = wcpl_miyouSearcherFromController(controller);
    UIView *container = wcpl_miyouSearchBarContainer(searcher);
    if (![container isKindOfClass:[UIView class]]) {
        return NO;
    }

    UIWindow *window = buttonView.window ?: container.window;
    if (![window isKindOfClass:[UIWindow class]]) {
        return NO;
    }

    CGRect buttonRect = [buttonView convertRect:buttonView.bounds toView:window];
    CGRect containerRect = [container convertRect:container.bounds toView:window];
    CGFloat delta = CGRectGetMidY(buttonRect) - CGRectGetMidY(containerRect);
    if (delta > -0.5f && delta < 0.5f) {
        return NO;
    }

    CGFloat newY = wcpl_viewOriginY(container) + delta;
    wcpl_setViewOriginY(container, newY);
    WCPLLogInfo(@"[搜索] %@ alignSearchBarContainer delta=%.2f newY=%.2f container=%@",
                stage ?: @"align",
                delta,
                newY,
                NSStringFromClass([container class]) ?: @"unknown");
    return YES;
}

static __attribute__((unused)) void wcpl_scheduleSearchBarAlignment(id controller, NSString *stage) {
    if (!controller) {
        return;
    }
    id weakController = controller;
    NSString *prefix = [stage isKindOfClass:[NSString class]] && stage.length > 0 ? stage : @"align";
    const NSTimeInterval delays[] = {0.02, 0.08, 0.18};
    for (NSUInteger i = 0; i < sizeof(delays) / sizeof(delays[0]); i++) {
        NSTimeInterval delay = delays[i];
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            if (!weakController) {
                return;
            }
            wcpl_alignSearchBarContainerToSearchButton(weakController,
                                                       [NSString stringWithFormat:@"%@ %.0fms", prefix, delay * 1000.0]);
        });
    }
}

static __attribute__((unused)) void wcpl_miyouFinishSearch(id controller, NSString *stage) {
    BOOL finished = NO;

    id searcher = wcpl_miyouSearcherFromController(controller);
    if (searcher && [searcher respondsToSelector:@selector(finishSearch)]) {
        @try {
            ((void (*)(id, SEL))objc_msgSend)(searcher, @selector(finishSearch));
            finished = YES;
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    if (!finished) {
        id helper = wcpl_msgSearchHelperFromController(controller);
        if (helper && [helper respondsToSelector:@selector(finishSearch)]) {
            @try {
                ((void (*)(id, SEL))objc_msgSend)(helper, @selector(finishSearch));
                finished = YES;
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        }
    }

    if (finished) {
        WCPLLogInfo(@"[搜索] %@ finishSearch 已执行", stage ?: @"miyou");
    }
}

static __attribute__((unused)) void wcpl_miyouRecoverTouchAfterCancel(id controller, NSString *stage) {
    if (!controller) {
        return;
    }

    wcpl_forceDisableSearchPresentationOverlay(controller,
                                               [NSString stringWithFormat:@"%@/touch-now", stage ?: @"[搜索] cancel"]);

    __weak id weakController = controller;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.10 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        id strongController = weakController;
        if (!strongController) {
            return;
        }
        wcpl_forceDisableSearchPresentationOverlay(strongController,
                                                   [NSString stringWithFormat:@"%@/touch-100ms", stage ?: @"[搜索] cancel"]);
    });
}

static __attribute__((unused)) BOOL wcpl_miyouPushSearchController(id controller) {
    id searcher = wcpl_miyouSearcherFromController(controller);
    SEL pushSel = @selector(pushSearchControllerWithCompletion:);
    if (!searcher || ![searcher respondsToSelector:pushSel]) {
        WCPLLogInfo(@"[搜索] pushSearchControllerWithCompletion 不可用 searcher=%@",
                    searcher ? (NSStringFromClass([searcher class]) ?: @"unknown") : @"nil");
        return NO;
    }

    @try {
        ((void (*)(id, SEL, id))objc_msgSend)(searcher, pushSel, nil);
        WCPLLogInfo(@"[搜索] pushSearchControllerWithCompletion 已触发 searcher=%@",
                    NSStringFromClass([searcher class]) ?: @"unknown");
        return YES;
    } @catch (__unused NSException *exception) {
        WCPLLogInfo(@"[搜索] pushSearchControllerWithCompletion 异常");
        return NO;
    }
}

static __attribute__((unused)) BOOL wcpl_pushSearchSceneFallback(id contact, UINavigationController *navigationController) {
    if (!contact || ![navigationController isKindOfClass:[UINavigationController class]]) {
        return NO;
    }

    Class serviceCenterClass = objc_getClass("MMServiceCenter");
    Class msgLogicManagerClass = objc_getClass("MMMsgLogicManager");
    if (!serviceCenterClass || !msgLogicManagerClass) {
        WCPLLogInfo(@"[搜索] 回退失败：MMServiceCenter 或 MMMsgLogicManager 缺失");
        return NO;
    }

    id serviceCenter = ((id (*)(id, SEL))objc_msgSend)(serviceCenterClass, @selector(defaultCenter));
    id msgLogicManager = serviceCenter ? ((id (*)(id, SEL, Class))objc_msgSend)(serviceCenter, @selector(getService:), msgLogicManagerClass) : nil;
    if (!msgLogicManager) {
        WCPLLogInfo(@"[搜索] 回退失败：MMMsgLogicManager 获取失败");
        return NO;
    }

    SEL pushSearchToolBarSel = @selector(PushSearchLogicControllerWithToolBarByContact:navigationController:ForMessageWrap:ForKeywordList:animated:);
    if ([msgLogicManager respondsToSelector:pushSearchToolBarSel]) {
        ((void (*)(id, SEL, id, id, id, id, BOOL))objc_msgSend)(
            msgLogicManager, pushSearchToolBarSel, contact, navigationController, nil, nil, YES);
        WCPLLogInfo(@"[搜索] 回退成功：PushSearchLogicControllerWithToolBar");
        return YES;
    }

    SEL pushSearchSel = @selector(PushSearchLogicControllerByContact:navigationController:ForMessageWrap:animated:fromeScene:);
    if ([msgLogicManager respondsToSelector:pushSearchSel]) {
        ((void (*)(id, SEL, id, id, id, BOOL, unsigned long long))objc_msgSend)(
            msgLogicManager, pushSearchSel, contact, navigationController, nil, YES, (unsigned long long)2);
        WCPLLogInfo(@"[搜索] 回退成功：PushSearchLogicController fromeScene=2");
        return YES;
    }

    SEL pushOtherSel = @selector(PushOtherBaseMsgControllerByContact:navigationController:animated:searchScene:);
    if ([msgLogicManager respondsToSelector:pushOtherSel]) {
        ((void (*)(id, SEL, id, id, BOOL, unsigned long long))objc_msgSend)(
            msgLogicManager, pushOtherSel, contact, navigationController, NO, (unsigned long long)2);
        WCPLLogInfo(@"[搜索] 回退成功：PushOtherBaseMsgController searchScene=2");
        return YES;
    }

    WCPLLogInfo(@"[搜索] 回退失败：Search/Other 入口均不可用");
    return NO;
}


static __attribute__((unused)) BOOL wcpl_tryTriggerChatInfoBridgeSearch(id sourceController, id contact, UINavigationController *nav) {
    if (!sourceController || !contact || ![nav isKindOfClass:[UINavigationController class]]) {
        return NO;
    }

    if (wcpl_isBridgePending(sourceController)) {
        return YES;
    }

    SEL openChatInfoSel = @selector(openChatInfo:);
    if (![sourceController respondsToSelector:openChatInfoSel]) {
        WCPLLogInfo(@"[搜索] bridge失败：openChatInfo: 不可用");
        return NO;
    }

    wcpl_markBridgePending(sourceController, YES);

    ((void (*)(id, SEL, id))objc_msgSend)(sourceController, openChatInfoSel, nil);
    WCPLLogInfo(@"[搜索] bridge: 已触发 openChatInfo:nil");

    __weak id weakSource = sourceController;
    __weak UINavigationController *weakNav = nav;

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.08 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        id strongSource = weakSource;
        UINavigationController *strongNav = weakNav;
        if (!strongSource || ![strongNav isKindOfClass:[UINavigationController class]]) {
            return;
        }

        UIViewController *top = strongNav.topViewController;
        if (!top) {
            wcpl_markBridgePending(strongSource, NO);
            return;
        }

        if (![NSStringFromClass([top class]) isEqualToString:@"ChatRoomInfoViewController"]) {
            wcpl_markBridgePending(strongSource, NO);
            WCPLLogInfo(@"[搜索] bridge失败：top=%@ 非 ChatRoomInfoViewController", NSStringFromClass([top class]));
            return;
        }

        SEL editSearchSel = @selector(onEditAndSearch);
        if ([top respondsToSelector:editSearchSel]) {
            objc_setAssociatedObject(top, kWCPLChatSearchBridgeSourceControllerKey, strongSource, OBJC_ASSOCIATION_ASSIGN);
            wcpl_markBridgeAutoPop(top, YES);
            ((void (*)(id, SEL))objc_msgSend)(top, editSearchSel);
            WCPLLogInfo(@"[搜索] bridge成功：ChatRoomInfoViewController onEditAndSearch");
        } else {
            wcpl_markBridgeAutoPop(top, NO);
            WCPLLogInfo(@"[搜索] bridge失败：onEditAndSearch 不可用");
        }

        wcpl_markBridgePending(strongSource, NO);
    });

    return YES;
}



static void wcpl_enableFullSearchButtonsForHelper(id helper) {
    if (!helper) {
        return;
    }

    SEL setShowNameSel = @selector(setM_bShowSearchByName:);
    if ([helper respondsToSelector:setShowNameSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(helper, setShowNameSel, YES);
    } else {
        @try {
            [helper setValue:@YES forKey:@"m_bShowSearchByName"];
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    SEL setShowTimeSel = @selector(setM_bShowSearchByTime:);
    if ([helper respondsToSelector:setShowTimeSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(helper, setShowTimeSel, YES);
    } else {
        @try {
            [helper setValue:@YES forKey:@"m_bShowSearchByTime"];
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }
}

static BOOL wcpl_startSearchHelperSafely(id helper) {
    if (!helper) {
        return NO;
    }

    SEL startSearchSel = @selector(startSearch);
    if ([helper respondsToSelector:startSearchSel]) {
        ((void (*)(id, SEL))objc_msgSend)(helper, startSearchSel);
        return YES;
    }

    SEL startSearchArgSel = @selector(startSearch:);
    if ([helper respondsToSelector:startSearchArgSel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(helper, startSearchArgSel, nil);
        return YES;
    }

    id searcher = nil;
    @try {
        searcher = [helper valueForKey:@"searcher"];
    } @catch (__unused NSException *exception) {
        searcher = nil;
    }

    BOOL started = NO;
    SEL willPresentSel = @selector(wcsWillPresentSearch:);
    if ([helper respondsToSelector:willPresentSel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(helper, willPresentSel, searcher ?: helper);
        started = YES;
    }

    SEL didPresentSel = @selector(wcsDidPresentSearch:);
    if ([helper respondsToSelector:didPresentSel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(helper, didPresentSel, searcher ?: helper);
        started = YES;
    }

    return started;
}

static BOOL wcpl_searchControllerIsActive(id searchController) {
    if (!searchController || ![searchController respondsToSelector:@selector(isActive)]) {
        return NO;
    }
    return ((BOOL (*)(id, SEL))objc_msgSend)(searchController, @selector(isActive));
}

static BOOL wcpl_setSearchControllerActiveState(id searchController, BOOL active, NSString *stage) {
    if (!searchController || ![searchController respondsToSelector:@selector(setActive:)]) {
        return NO;
    }

    @try {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(searchController, @selector(setActive:), active);
        WCPLLogInfo(@"[搜索] %@ 强制 setActive=%@ class=%@",
                    stage ?: @"repair",
                    active ? @"YES" : @"NO",
                    NSStringFromClass([searchController class]) ?: @"unknown");
        return YES;
    } @catch (NSException *exception) {
        WCPLLogInfo(@"[搜索] %@ setActive=%@ 异常: %@",
                    stage ?: @"repair",
                    active ? @"YES" : @"NO",
                    exception.reason ?: @"unknown");
    }
    return NO;
}

static UIViewController *wcpl_presentedControllerCandidateFromController(id controller) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        return nil;
    }

    UIViewController *viewController = (UIViewController *)controller;
    UIViewController *candidate = viewController.presentedViewController;
    if ([candidate isKindOfClass:[UIViewController class]]) {
        return candidate;
    }

    UINavigationController *navigationController = viewController.navigationController;
    if ([navigationController isKindOfClass:[UINavigationController class]]) {
        candidate = navigationController.presentedViewController;
        if ([candidate isKindOfClass:[UIViewController class]]) {
            return candidate;
        }

        UIViewController *topViewController = navigationController.topViewController;
        if ([topViewController isKindOfClass:[UIViewController class]]) {
            candidate = topViewController.presentedViewController;
            if ([candidate isKindOfClass:[UIViewController class]]) {
                return candidate;
            }
        }
    }

    return nil;
}

static id wcpl_resolvePresentedSearchControllerFromController(id controller) {
    UIViewController *candidate = wcpl_presentedControllerCandidateFromController(controller);
    if (![candidate isKindOfClass:[UIViewController class]]) {
        return nil;
    }

    UIViewController *cursor = candidate;
    for (NSUInteger depth = 0; depth < 4 && [cursor isKindOfClass:[UIViewController class]]; depth++) {
        NSString *className = NSStringFromClass([cursor class]) ?: @"";
        BOOL searchLike = wcpl_classNameContainsToken(className, @"searchcontroller") ||
                          wcpl_viewControllerLooksSearchPresentation(cursor) ||
                          [cursor respondsToSelector:@selector(setActive:)] ||
                          [cursor respondsToSelector:@selector(searchBar)];
        if (searchLike) {
            return cursor;
        }
        cursor = cursor.presentedViewController;
    }

    return candidate;
}

static BOOL wcpl_focusSearchBarFromController(id searchController, NSString *stage) {
    if (!searchController || ![searchController respondsToSelector:@selector(searchBar)]) {
        return NO;
    }

    id searchBar = nil;
    @try {
        searchBar = ((id (*)(id, SEL))objc_msgSend)(searchController, @selector(searchBar));
    } @catch (__unused NSException *exception) {
        searchBar = nil;
    }
    if (!searchBar || ![searchBar respondsToSelector:@selector(becomeFirstResponder)]) {
        return NO;
    }

    BOOL isFirstResponder = [searchBar respondsToSelector:@selector(isFirstResponder)] ?
        ((BOOL (*)(id, SEL))objc_msgSend)(searchBar, @selector(isFirstResponder)) : NO;
    if (isFirstResponder) {
        return NO;
    }

    @try {
        BOOL focused = ((BOOL (*)(id, SEL))objc_msgSend)(searchBar, @selector(becomeFirstResponder));
        WCPLLogInfo(@"[搜索] %@ 尝试聚焦 searchBar result=%@ class=%@",
                    stage ?: @"repair",
                    focused ? @"YES" : @"NO",
                    NSStringFromClass([searchBar class]) ?: @"unknown");
        return focused;
    } @catch (NSException *exception) {
        WCPLLogInfo(@"[搜索] %@ 聚焦 searchBar 异常: %@",
                    stage ?: @"repair",
                    exception.reason ?: @"unknown");
    }
    return NO;
}

static __attribute__((unused)) void wcpl_forceActivateSearchControllerIfNeeded(id controller, id helper, NSString *stage) {
    if (!controller) {
        return;
    }

    id fallbackSearchController = wcpl_searchControllerFromHelper(helper);
    id weakController = controller;
    const NSTimeInterval delays[] = {0.00, 0.05, 0.12, 0.24, 0.40};
    const size_t count = sizeof(delays) / sizeof(delays[0]);

    for (size_t idx = 0; idx < count; idx++) {
        NSTimeInterval delay = delays[idx];
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            if (!weakController) {
                return;
            }

            id targetSearchController = wcpl_resolvePresentedSearchControllerFromController(weakController);
            if (!wcpl_objectLooksLikeSearchController(targetSearchController) &&
                wcpl_objectLooksLikeSearchController(fallbackSearchController)) {
                targetSearchController = fallbackSearchController;
            }

            NSString *targetClass = targetSearchController ? (NSStringFromClass([targetSearchController class]) ?: @"unknown") : @"nil";
            BOOL activeBefore = wcpl_searchControllerIsActive(targetSearchController);
            BOOL canSetActive = [targetSearchController respondsToSelector:@selector(setActive:)];
            NSString *attemptStage = [NSString stringWithFormat:@"%@ %.0fms",
                                      stage ?: @"[搜索] [Fix] 激活补偿",
                                      delay * 1000.0];

            WCPLLogInfo(@"[搜索] [Fix] %@ target=%@ canSetActive=%@ activeBefore=%@",
                        attemptStage,
                        targetClass,
                        canSetActive ? @"YES" : @"NO",
                        activeBefore ? @"YES" : @"NO");

            if (!targetSearchController) {
                return;
            }

            if ([targetSearchController respondsToSelector:@selector(view)]) {
                UIView *targetView = nil;
                @try {
                    targetView = ((id (*)(id, SEL))objc_msgSend)(targetSearchController, @selector(view));
                } @catch (__unused NSException *exception) {
                    targetView = nil;
                }
                if ([targetView isKindOfClass:[UIView class]]) {
                    if (targetView.hidden) {
                        targetView.hidden = NO;
                    }
                    if (targetView.alpha < 0.99f) {
                        targetView.alpha = 1.0f;
                    }
                    if (!targetView.userInteractionEnabled) {
                        targetView.userInteractionEnabled = YES;
                    }
                    (void)wcpl_restoreSearchLikeNodesInTree(targetView, 0, NULL);
                }
            }

            if (canSetActive && !activeBefore) {
                wcpl_setSearchControllerActiveState(targetSearchController, YES, [NSString stringWithFormat:@"%@ setActive", attemptStage]);
            }

            BOOL activeAfter = wcpl_searchControllerIsActive(targetSearchController);
            if (!activeAfter) {
                wcpl_focusSearchBarFromController(targetSearchController, [NSString stringWithFormat:@"%@ focus", attemptStage]);
            }
        });
    }
}

static BOOL wcpl_presentedSearchControllerStateFromController(id controller,
                                                              UIViewController **outController,
                                                              BOOL *outActive) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        if (outController) {
            *outController = nil;
        }
        if (outActive) {
            *outActive = NO;
        }
        return NO;
    }

    id candidate = wcpl_resolvePresentedSearchControllerFromController(controller);
    if (![candidate isKindOfClass:[UIViewController class]]) {
        if (outController) {
            *outController = nil;
        }
        if (outActive) {
            *outActive = NO;
        }
        return NO;
    }

    NSString *className = NSStringFromClass([candidate class]) ?: @"";
    BOOL isSearchPresentation = wcpl_classNameContainsToken(className, @"searchcontroller") ||
                                wcpl_viewControllerLooksSearchPresentation((UIViewController *)candidate) ||
                                [candidate isKindOfClass:[UISearchController class]];
    if (!isSearchPresentation) {
        if (outController) {
            *outController = nil;
        }
        if (outActive) {
            *outActive = NO;
        }
        return NO;
    }

    if (outController) {
        *outController = (UIViewController *)candidate;
    }
    if (outActive) {
        *outActive = wcpl_searchControllerIsActive(candidate);
    }
    return YES;
}

static __attribute__((unused)) void wcpl_scheduleNativeFallbackIfSearchStuck(id controller) {
    if (!controller) {
        return;
    }

    id weakController = controller;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.40 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        if (!weakController || !wcpl_isControllerShowingSearchUI(weakController)) {
            return;
        }

        if (wcpl_searchEnhanceRetryCount(weakController) > 0) {
            WCPLLogInfo(@"[搜索] [FixFallback] 跳过：已执行过回退");
            return;
        }

        UIViewController *presentedSearchController = nil;
        BOOL active = NO;
        BOOL hasPresentedSearch = wcpl_presentedSearchControllerStateFromController(weakController,
                                                                                     &presentedSearchController,
                                                                                     &active);
        WCPLLogInfo(@"[搜索] [FixFallback] 400ms hasPresentedSearch=%@ active=%@ class=%@",
                    hasPresentedSearch ? @"YES" : @"NO",
                    active ? @"YES" : @"NO",
                    presentedSearchController ? (NSStringFromClass([presentedSearchController class]) ?: @"unknown") : @"nil");
        if (!hasPresentedSearch || active) {
            return;
        }

        if (!wcpl_consumeSearchEnhanceRetryBudget(weakController, 1)) {
            return;
        }

        WCPLLogInfo(@"[搜索] [FixFallback] 检测到卡死态，执行 dismiss + 完整搜索链路重启");
        UIViewController *owner = (UIViewController *)weakController;
        UINavigationController *nav = owner.navigationController;
        id helper = wcpl_msgSearchHelperFromController(weakController);
        wcpl_resetSearchHelperRuntimeState(helper, @"[搜索] [FixFallback]");

        void (^retryNative)(void) = ^{
            wcpl_markForceFullSearchMode(weakController, YES);
            wcpl_forceSetSearchBusinessTypeToNormal(weakController, @"[搜索] [FixFallback] native前");
            wcpl_resetSpecialHelperForNativeFullSearch(weakController, @"[搜索] [FixFallback] native前");

            SEL initSearchSel = @selector(initMsgSearchHelper:);
            if ([weakController respondsToSelector:initSearchSel]) {
                @try {
                    ((void (*)(id, SEL, int))objc_msgSend)(weakController, initSearchSel, 0);
                } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
            }

            BOOL relaunched = wcpl_miyouPushSearchController(weakController);
            if (!relaunched) {
                id contact = nil;
                @try {
                    if ([weakController respondsToSelector:@selector(GetContact)]) {
                        contact = ((id (*)(id, SEL))objc_msgSend)(weakController, @selector(GetContact));
                    }
                } @catch (__unused NSException *exception) {
                    contact = nil;
                }
                relaunched = wcpl_pushSearchSceneFallback(contact, nav);
            }

            WCPLLogInfo(@"[搜索] [FixFallback] 完整搜索重启结果=%@",
                        relaunched ? @"YES" : @"NO");
        };

        if (owner.presentedViewController == presentedSearchController) {
            [owner dismissViewControllerAnimated:NO completion:retryNative];
            return;
        }
        if ([nav isKindOfClass:[UINavigationController class]] && nav.presentedViewController == presentedSearchController) {
            [nav dismissViewControllerAnimated:NO completion:retryNative];
            return;
        }

        [presentedSearchController dismissViewControllerAnimated:NO completion:retryNative];
    });
}

static void wcpl_resetSearchHelperRuntimeState(id helper, NSString *stage) {
    if (!helper) {
        return;
    }

    BOOL touched = NO;
    SEL setSearchingSel = @selector(setIsSearching:);
    if ([helper respondsToSelector:setSearchingSel]) {
        @try {
            ((void (*)(id, SEL, BOOL))objc_msgSend)(helper, setSearchingSel, NO);
            touched = YES;
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    SEL setSearchingAltSel = @selector(setSearching:);
    if ([helper respondsToSelector:setSearchingAltSel]) {
        @try {
            ((void (*)(id, SEL, BOOL))objc_msgSend)(helper, setSearchingAltSel, NO);
            touched = YES;
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    SEL setMSearchingSel = @selector(setM_bSearching:);
    if ([helper respondsToSelector:setMSearchingSel]) {
        @try {
            ((void (*)(id, SEL, BOOL))objc_msgSend)(helper, setMSearchingSel, NO);
            touched = YES;
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    NSArray<NSString *> *keys = @[@"isSearching", @"m_bSearching"];
    for (NSString *key in keys) {
        @try {
            [helper setValue:@NO forKey:key];
            touched = YES;
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    if (touched) {
        WCPLLogInfo(@"[搜索] %@ helper 运行态已重置为非搜索中 class=%@",
                    stage ?: @"repair",
                    NSStringFromClass([helper class]) ?: @"unknown");
    }
}

static __attribute__((unused)) void wcpl_schedulePostActivationTouchProbes(id controller) {
    if (!controller) {
        return;
    }

    const NSTimeInterval delays[] = {0.05, 0.15, 0.30, 0.60};
    const size_t count = sizeof(delays) / sizeof(delays[0]);
    id probeController = controller;
    for (size_t idx = 0; idx < count; idx++) {
        NSTimeInterval delay = delays[idx];
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            if (!probeController) {
                return;
            }
            NSString *stage = [NSString stringWithFormat:@"[搜索] post-active(%.0fms)", delay * 1000.0];
            wcpl_logSearchTouchProbe(probeController, stage);
            wcpl_logSearchHelperSnapshot(probeController, stage);
        });
    }
}

static __attribute__((unused)) BOOL wcpl_activateInPageSearchState(id controller) {
    if (!controller) {
        return NO;
    }

    SEL defineContextSel = @selector(setDefinesPresentationContext:);
    if ([controller respondsToSelector:defineContextSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(controller, defineContextSel, YES);
    }
    SEL provideContextSel = @selector(setProvidesPresentationContextTransitionStyle:);
    if ([controller respondsToSelector:provideContextSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(controller, provideContextSel, YES);
    }

    BOOL activated = NO;
    unsigned int businessType = wcpl_msgSearchBusinessType(controller);
    wcpl_logSearchHelperSnapshot(controller, @"[搜索] 激活前");
    if (businessType != 0) {
        WCPLLogInfo(@"[搜索] 激活前 businessType=%u，改写为0以走完整搜索", businessType);
    }
    businessType = 0;
    wcpl_forceSetSearchBusinessTypeToNormal(controller, @"[搜索] 激活前");

    SEL initSearchSel = @selector(initMsgSearchHelper:);
    if ([controller respondsToSelector:initSearchSel]) {
        ((void (*)(id, SEL, int))objc_msgSend)(controller, initSearchSel, (int)businessType);
        activated = YES;
    }

    id helper = wcpl_msgSearchHelperFromController(controller);
    if (!helper) {
        WCPLLogInfo(@"[搜索] helper 为空，businessType=%u", businessType);
        return activated;
    }

    if (wcpl_isSpecialMsgSearchHelper(helper)) {
        WCPLLogInfo(@"[搜索] 检测到 special helper=%@，执行标准 helper 重建",
                    NSStringFromClass([helper class]) ?: @"unknown");
        wcpl_tryFinalizeSpecialSearchHelper(controller, @"[搜索] 激活前收口");
        wcpl_forceSetSearchBusinessTypeToNormal(controller, @"[搜索] special->normal");
        if ([controller respondsToSelector:initSearchSel]) {
            ((void (*)(id, SEL, int))objc_msgSend)(controller, initSearchSel, 0);
        }
        helper = wcpl_msgSearchHelperFromController(controller);
        if (!helper || wcpl_isSpecialMsgSearchHelper(helper)) {
            WCPLLogInfo(@"[搜索] special helper 重建失败，helper=%@",
                        helper ? (NSStringFromClass([helper class]) ?: @"unknown") : @"nil");
            wcpl_logSearchHelperSnapshot(controller, @"[搜索] 激活失败快照");
            return NO;
        }
    }

    wcpl_enableFullSearchButtonsForHelper(helper);

    SEL setShowSel = @selector(setIsShowMsgSearch:);
    if ([controller respondsToSelector:setShowSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(controller, setShowSel, YES);
        activated = YES;
    }

    SEL loadSel = @selector(handleMsgViewSearchDidLoad);
    if ([controller respondsToSelector:loadSel]) {
        ((void (*)(id, SEL))objc_msgSend)(controller, loadSel);
        activated = YES;
    }

    BOOL helperStarted = wcpl_startSearchHelperSafely(helper);
    if (helperStarted) {
        activated = YES;
    }

    if (helperStarted || wcpl_isControllerShowingSearchUI(controller)) {
        wcpl_restoreSearchPresentationOnActivation(controller, @"[搜索] 激活后恢复");
    }
    // 历史异步补偿在「快速取消 -> 再次点击」场景会重入，导致重复搜索框；此链路停用。

    WCPLLogInfo(@"[搜索] 同页激活 businessType=%u helper=%@ started=%@",
                businessType,
                NSStringFromClass([helper class]),
                helperStarted ? @"YES" : @"NO");
    wcpl_logSearchHelperSnapshot(controller, @"[搜索] 激活后");
    // 同上：停用激活后的异步补偿，避免取消后延迟任务再次改写 UI。

    return activated;
}

