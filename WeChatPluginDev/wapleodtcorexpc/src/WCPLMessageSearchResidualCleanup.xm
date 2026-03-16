#import "WCPLNavigationAdapter.h"

static BOOL wcpl_classNameContainsSearchToken(NSString *className) {
    if (![className isKindOfClass:[NSString class]] || className.length == 0) {
        return NO;
    }

    return [className rangeOfString:@"search" options:NSCaseInsensitiveSearch].location != NSNotFound;
}

static BOOL wcpl_classNameContainsToken(NSString *className, NSString *token) {
    if (![className isKindOfClass:[NSString class]] || className.length == 0) {
        return NO;
    }
    if (![token isKindOfClass:[NSString class]] || token.length == 0) {
        return NO;
    }
    return [className rangeOfString:token options:NSCaseInsensitiveSearch].location != NSNotFound;
}

static BOOL wcpl_viewIsEffectivelyVisible(UIView *view) {
    if (![view isKindOfClass:[UIView class]]) {
        return NO;
    }

    UIView *current = view;
    while ([current isKindOfClass:[UIView class]]) {
        if (current.hidden || current.alpha <= 0.01f) {
            return NO;
        }
        current = current.superview;
    }

    return YES;
}

static BOOL wcpl_viewLooksSearchLike(UIView *view) {
    if (![view isKindOfClass:[UIView class]]) {
        return NO;
    }

    if ([view isKindOfClass:[UITextField class]] || [view isKindOfClass:[UISearchBar class]]) {
        return YES;
    }

    NSString *className = NSStringFromClass([view class]);
    return wcpl_classNameContainsSearchToken(className);
}

static BOOL wcpl_viewLooksRootSearchResidualCandidate(UIView *view) {
    if (![view isKindOfClass:[UIView class]]) {
        return NO;
    }

    if (!wcpl_viewIsEffectivelyVisible(view)) {
        return NO;
    }

    if ([view isKindOfClass:[UISearchBar class]]) {
        return YES;
    }

    NSString *className = NSStringFromClass([view class]) ?: @"";
    if (!wcpl_classNameContainsSearchToken(className)) {
        return NO;
    }

    if (wcpl_classNameContainsToken(className, @"msgsearch") ||
        wcpl_classNameContainsToken(className, @"wcsearch") ||
        wcpl_classNameContainsToken(className, @"mmsearch") ||
        wcpl_classNameContainsToken(className, @"searchcontroller") ||
        wcpl_classNameContainsToken(className, @"searchbar") ||
        wcpl_classNameContainsToken(className, @"searchfield") ||
        wcpl_classNameContainsToken(className, @"searchinput") ||
        wcpl_classNameContainsToken(className, @"searchresult")) {
        return YES;
    }

    Class searchTextFieldClass = objc_getClass("UISearchTextField");
    if (searchTextFieldClass && [view isKindOfClass:searchTextFieldClass]) {
        return YES;
    }

    return NO;
}

static BOOL wcpl_viewHasSearchInputNode(UIView *view, NSUInteger depth) {
    if (![view isKindOfClass:[UIView class]]) {
        return NO;
    }
    if (depth >= kWCPLSearchTreeMaxDepth) {
        return NO;
    }

    if ([view isKindOfClass:[UITextField class]] || [view isKindOfClass:[UISearchBar class]]) {
        return YES;
    }
    Class searchTextFieldClass = objc_getClass("UISearchTextField");
    if (searchTextFieldClass && [view isKindOfClass:searchTextFieldClass]) {
        return YES;
    }

    NSArray *subviews = view.subviews;
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return NO;
    }
    for (id subview in subviews) {
        if (![subview isKindOfClass:[UIView class]]) {
            continue;
        }
        if (wcpl_viewHasSearchInputNode((UIView *)subview, depth + 1)) {
            return YES;
        }
    }
    return NO;
}

static BOOL wcpl_viewLooksSafeRootSearchClearTarget(UIView *view, UIView *parentView) {
    if (![view isKindOfClass:[UIView class]]) {
        return NO;
    }
    if (!wcpl_viewLooksRootSearchResidualCandidate(view)) {
        return NO;
    }

    NSString *className = NSStringFromClass([view class]) ?: @"";
    BOOL strongClass = wcpl_classNameContainsToken(className, @"msgsearch") ||
                       wcpl_classNameContainsToken(className, @"wcsearch") ||
                       wcpl_classNameContainsToken(className, @"mmsearch") ||
                       wcpl_classNameContainsToken(className, @"searchcontroller") ||
                       wcpl_classNameContainsToken(className, @"searchbar") ||
                       wcpl_classNameContainsToken(className, @"searchfield") ||
                       wcpl_classNameContainsToken(className, @"searchinput");
    BOOL hasInputNode = wcpl_viewHasSearchInputNode(view, 0);

    if (!strongClass && !hasInputNode) {
        return NO;
    }

    if ([parentView isKindOfClass:[UIView class]]) {
        CGRect frame = view.frame;
        CGRect bounds = parentView.bounds;
        BOOL parentReady = bounds.size.width > 0.0f && bounds.size.height > 0.0f;
        BOOL nearFullScreen = parentReady &&
                              frame.size.width >= bounds.size.width * 0.95f &&
                              frame.size.height >= bounds.size.height * 0.95f;
        if (nearFullScreen && view.subviews.count > 6 && !strongClass) {
            return NO;
        }
    }

    return YES;
}

static BOOL wcpl_viewIsDescendantOrSelfOfView(UIView *view, UIView *ancestor) {
    if (![view isKindOfClass:[UIView class]] || ![ancestor isKindOfClass:[UIView class]]) {
        return NO;
    }

    UIView *current = view;
    while ([current isKindOfClass:[UIView class]]) {
        if (current == ancestor) {
            return YES;
        }
        current = current.superview;
    }
    return NO;
}

static BOOL wcpl_viewTreeHasSearchLikeNode(UIView *view, NSUInteger depth) {
    if (![view isKindOfClass:[UIView class]]) {
        return NO;
    }

    if (wcpl_viewLooksSearchLike(view)) {
        return YES;
    }

    if (depth >= kWCPLSearchTreeMaxDepth) {
        return NO;
    }

    NSArray *subviews = view.subviews;
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return NO;
    }

    for (id subview in subviews) {
        if ([subview isKindOfClass:[UIView class]] && wcpl_viewTreeHasSearchLikeNode((UIView *)subview, depth + 1)) {
            return YES;
        }
    }

    return NO;
}

static NSUInteger wcpl_rootSearchResidualNodeCountInTree(UIView *view, UIView *excludedRoot, NSUInteger depth) {
    if (![view isKindOfClass:[UIView class]]) {
        return 0;
    }

    if (depth >= kWCPLSearchTreeMaxDepth) {
        return 0;
    }

    if ([excludedRoot isKindOfClass:[UIView class]] && wcpl_viewIsDescendantOrSelfOfView(view, excludedRoot)) {
        return 0;
    }

    NSUInteger count = wcpl_viewLooksRootSearchResidualCandidate(view) ? 1 : 0;
    NSArray *subviews = view.subviews;
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return count;
    }

    for (id subview in subviews) {
        if (![subview isKindOfClass:[UIView class]]) {
            continue;
        }
        count += wcpl_rootSearchResidualNodeCountInTree((UIView *)subview, excludedRoot, depth + 1);
    }

    return count;
}

static void wcpl_collectRootSearchResidualNodesInTree(UIView *view, UIView *excludedRoot, NSUInteger depth, NSMutableArray<UIView *> *outNodes, NSUInteger maxNodes) {
    if (![view isKindOfClass:[UIView class]] || ![outNodes isKindOfClass:[NSMutableArray class]]) {
        return;
    }
    if (depth >= kWCPLSearchTreeMaxDepth || outNodes.count >= maxNodes) {
        return;
    }
    if ([excludedRoot isKindOfClass:[UIView class]] && wcpl_viewIsDescendantOrSelfOfView(view, excludedRoot)) {
        return;
    }

    if (wcpl_viewLooksRootSearchResidualCandidate(view)) {
        [outNodes addObject:view];
        if (outNodes.count >= maxNodes) {
            return;
        }
    }

    NSArray *subviews = view.subviews;
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return;
    }
    for (id subview in subviews) {
        if (![subview isKindOfClass:[UIView class]]) {
            continue;
        }
        wcpl_collectRootSearchResidualNodesInTree((UIView *)subview, excludedRoot, depth + 1, outNodes, maxNodes);
        if (outNodes.count >= maxNodes) {
            return;
        }
    }
}

static NSString *wcpl_navTitleViewClassName(id viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return @"nil";
    }

    UINavigationItem *navigationItem = ((UIViewController *)viewController).navigationItem;
    if (![navigationItem isKindOfClass:[UINavigationItem class]]) {
        return @"nil";
    }

    UIView *titleView = navigationItem.titleView;
    if (![titleView isKindOfClass:[UIView class]]) {
        return @"nil";
    }

    return NSStringFromClass([titleView class]) ?: @"nil";
}

static BOOL wcpl_navTitleViewHasSearchResidue(id viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    UINavigationItem *navigationItem = ((UIViewController *)viewController).navigationItem;
    if (![navigationItem isKindOfClass:[UINavigationItem class]]) {
        return NO;
    }

    UIView *titleView = navigationItem.titleView;
    if (![titleView isKindOfClass:[UIView class]]) {
        return NO;
    }

    return wcpl_viewTreeHasSearchLikeNode(titleView, 0);
}

static BOOL wcpl_navTitleViewHasInputResidual(id viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    UINavigationItem *navigationItem = ((UIViewController *)viewController).navigationItem;
    if (![navigationItem isKindOfClass:[UINavigationItem class]]) {
        return NO;
    }

    UIView *titleView = navigationItem.titleView;
    if (![titleView isKindOfClass:[UIView class]]) {
        return NO;
    }

    return wcpl_viewHasSearchInputNode(titleView, 0);
}

static BOOL wcpl_navTitleViewLooksSearchLike(id viewController) {
    NSString *titleViewClass = wcpl_navTitleViewClassName(viewController);
    if (wcpl_classNameContainsSearchToken(titleViewClass)) {
        return YES;
    }

    if (wcpl_navTitleViewHasSearchResidue(viewController)) {
        return YES;
    }

    return wcpl_navTitleViewHasInputResidual(viewController);
}

static UINavigationBar *wcpl_navigationBarFromController(id viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return nil;
    }

    UINavigationController *navigationController = ((UIViewController *)viewController).navigationController;
    if (![navigationController isKindOfClass:[UINavigationController class]]) {
        return nil;
    }

    UINavigationBar *navigationBar = navigationController.navigationBar;
    return [navigationBar isKindOfClass:[UINavigationBar class]] ? navigationBar : nil;
}

static NSUInteger wcpl_navBarSearchResidualNodeCount(id viewController) {
    UINavigationBar *navigationBar = wcpl_navigationBarFromController(viewController);
    if (![navigationBar isKindOfClass:[UINavigationBar class]]) {
        return 0;
    }

    NSArray *subviews = navigationBar.subviews;
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return 0;
    }

    NSUInteger count = 0;
    for (id subview in subviews) {
        if (![subview isKindOfClass:[UIView class]]) {
            continue;
        }

        UIView *view = (UIView *)subview;
        if (wcpl_viewLooksSearchLike(view) || wcpl_viewTreeHasSearchLikeNode(view, 0)) {
            count++;
        }
    }

    return count;
}

static BOOL wcpl_navBarHasSearchResidue(id viewController) {
    return wcpl_navBarSearchResidualNodeCount(viewController) > 0;
}

static BOOL wcpl_removeSearchLikeNodesFromViewTree(UIView *view, NSUInteger depth) {
    if (![view isKindOfClass:[UIView class]] || depth >= kWCPLSearchTreeMaxDepth) {
        return NO;
    }

    NSArray *subviews = [view.subviews copy];
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return NO;
    }

    BOOL removed = NO;
    for (id subview in subviews) {
        if (![subview isKindOfClass:[UIView class]]) {
            continue;
        }

        UIView *child = (UIView *)subview;
        if (wcpl_viewLooksSearchLike(child)) {
            [child removeFromSuperview];
            removed = YES;
            continue;
        }

        if (wcpl_removeSearchLikeNodesFromViewTree(child, depth + 1)) {
            removed = YES;
        }
    }

    return removed;
}

static NSUInteger wcpl_navRightItemsCount(id viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return 0;
    }

    UINavigationItem *navigationItem = ((UIViewController *)viewController).navigationItem;
    if (![navigationItem isKindOfClass:[UINavigationItem class]]) {
        return 0;
    }

    if ([navigationItem.rightBarButtonItems isKindOfClass:[NSArray class]]) {
        return navigationItem.rightBarButtonItems.count;
    }

    return [navigationItem.rightBarButtonItem isKindOfClass:[UIBarButtonItem class]] ? 1 : 0;
}

static NSUInteger wcpl_controllerRootSearchResidualNodeCount(id viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return 0;
    }

    UIViewController *controller = (UIViewController *)viewController;
    NSUInteger count = 0;
    UINavigationBar *navBar = wcpl_navigationBarFromController(viewController);

    UIView *controllerView = WCPLNavigationAdapterLoadedView(controller);
    if (controllerView) {
        count += wcpl_rootSearchResidualNodeCountInTree(controllerView, navBar, 0);
    }

    UINavigationController *navigationController = controller.navigationController;
    if ([navigationController isKindOfClass:[UINavigationController class]]) {
        UIView *navRootView = WCPLNavigationAdapterLoadedView(navigationController);
        if (navRootView) {
            count += wcpl_rootSearchResidualNodeCountInTree(navRootView, navBar, 0);
        }
    }

    return count;
}

static NSString *wcpl_searchResidualNodeChain(UIView *view, NSUInteger depthLimit) {
    if (![view isKindOfClass:[UIView class]]) {
        return @"unknown";
    }

    NSMutableArray<NSString *> *parts = [NSMutableArray array];
    UIView *current = view;
    NSUInteger depth = 0;
    while ([current isKindOfClass:[UIView class]] && depth < depthLimit) {
        NSString *name = NSStringFromClass([current class]) ?: @"UIView";
        [parts addObject:name];
        current = current.superview;
        depth++;
    }
    return parts.count > 0 ? [parts componentsJoinedByString:@"<-"] : @"unknown";
}

static void wcpl_logRootResidualNodeDetails(id viewController, NSString *stage, NSUInteger maxNodes) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return;
    }

    UIViewController *controller = (UIViewController *)viewController;
    UINavigationBar *navBar = wcpl_navigationBarFromController(viewController);
    NSMutableArray<UIView *> *nodes = [NSMutableArray arrayWithCapacity:maxNodes];

    UIView *controllerView = WCPLNavigationAdapterLoadedView(controller);
    if (controllerView) {
        wcpl_collectRootSearchResidualNodesInTree(controllerView, navBar, 0, nodes, maxNodes);
    }

    UINavigationController *navigationController = controller.navigationController;
    if ([navigationController isKindOfClass:[UINavigationController class]] && nodes.count < maxNodes) {
        UIView *navRootView = WCPLNavigationAdapterLoadedView(navigationController);
        if (navRootView) {
            wcpl_collectRootSearchResidualNodesInTree(navRootView, navBar, 0, nodes, maxNodes);
        }
    }

    for (NSUInteger i = 0; i < nodes.count; i++) {
        UIView *node = nodes[i];
        CGRect frame = node.frame;
        NSString *className = NSStringFromClass([node class]) ?: @"UIView";
        NSString *chain = wcpl_searchResidualNodeChain(node, 8);
        WCPLLogInfo(@"[搜索] %@ rootNode[%lu] class=%@ hidden=%@ alpha=%.2f frame=(%.1f,%.1f,%.1f,%.1f) chain=%@",
                    stage ?: @"snapshot",
                    (unsigned long)i,
                    className,
                    node.hidden ? @"YES" : @"NO",
                    node.alpha,
                    frame.origin.x, frame.origin.y, frame.size.width, frame.size.height,
                    chain);
    }
}

static BOOL wcpl_shouldLogRootResidualDetails(NSString *stage) {
    if (![stage isKindOfClass:[NSString class]] || stage.length == 0) {
        return NO;
    }
    if ([stage rangeOfString:@"0ms"].location != NSNotFound) {
        return YES;
    }
    if ([stage rangeOfString:@"2000ms"].location != NSNotFound) {
        return YES;
    }
    return [stage rangeOfString:@"viewDidAppear"].location != NSNotFound;
}

static BOOL wcpl_shouldLogSearchTouchProbe(NSString *stage) {
    if (![stage isKindOfClass:[NSString class]] || stage.length == 0) {
        return NO;
    }
    if ([stage rangeOfString:@"0ms"].location != NSNotFound) {
        return YES;
    }
    if ([stage rangeOfString:@"500ms"].location != NSNotFound) {
        return YES;
    }
    return [stage rangeOfString:@"viewDidAppear"].location != NSNotFound;
}

static UIWindow *wcpl_bestWindowForController(id viewController) {
    if ([viewController isKindOfClass:[UIViewController class]]) {
        UIViewController *controller = (UIViewController *)viewController;
        UIView *controllerView = WCPLNavigationAdapterLoadedView(controller);
        if ([controllerView isKindOfClass:[UIView class]] && [controllerView.window isKindOfClass:[UIWindow class]]) {
            return controllerView.window;
        }

        UINavigationController *navigationController = controller.navigationController;
        if ([navigationController isKindOfClass:[UINavigationController class]]) {
            UIView *navView = WCPLNavigationAdapterLoadedView(navigationController);
            if ([navView isKindOfClass:[UIView class]] && [navView.window isKindOfClass:[UIWindow class]]) {
                return navView.window;
            }
        }
    }

    UIApplication *application = [UIApplication sharedApplication];
    if ([application respondsToSelector:@selector(connectedScenes)]) {
        NSSet *connectedScenes = application.connectedScenes;
        for (id scene in connectedScenes) {
            if (![scene isKindOfClass:[UIWindowScene class]]) {
                continue;
            }
            UIWindowScene *windowScene = (UIWindowScene *)scene;
            if (windowScene.activationState != UISceneActivationStateForegroundActive &&
                windowScene.activationState != UISceneActivationStateForegroundInactive) {
                continue;
            }
            for (UIWindow *window in windowScene.windows) {
                if ([window isKindOfClass:[UIWindow class]] && window.isKeyWindow) {
                    return window;
                }
            }
        }
        for (id scene in connectedScenes) {
            if (![scene isKindOfClass:[UIWindowScene class]]) {
                continue;
            }
            UIWindowScene *windowScene = (UIWindowScene *)scene;
            for (UIWindow *window in windowScene.windows) {
                if ([window isKindOfClass:[UIWindow class]]) {
                    return window;
                }
            }
        }
    }

    return nil;
}

static void wcpl_logWindowTopSubviews(UIWindow *window, NSString *stage) {
    if (![window isKindOfClass:[UIWindow class]]) {
        return;
    }

    NSArray *subviews = window.subviews;
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        WCPLLogInfo(@"[搜索] %@ windowSubViews=0", stage ?: @"snapshot");
        return;
    }

    NSUInteger total = subviews.count;
    NSUInteger start = total > 8 ? total - 8 : 0;
    for (NSUInteger idx = start; idx < total; idx++) {
        id obj = subviews[idx];
        if (![obj isKindOfClass:[UIView class]]) {
            continue;
        }
        UIView *view = (UIView *)obj;
        CGRect frame = view.frame;
        NSString *className = NSStringFromClass([view class]) ?: @"UIView";
        WCPLLogInfo(@"[搜索] %@ windowSub[%lu/%lu]=%@ hidden=%@ alpha=%.2f userInteraction=%@ frame=(%.1f,%.1f,%.1f,%.1f)",
                    stage ?: @"snapshot",
                    (unsigned long)idx,
                    (unsigned long)(total - 1),
                    className,
                    view.hidden ? @"YES" : @"NO",
                    view.alpha,
                    view.userInteractionEnabled ? @"YES" : @"NO",
                    frame.origin.x, frame.origin.y, frame.size.width, frame.size.height);
    }
}

static void wcpl_logSearchTouchProbe(id viewController, NSString *stage) {
    UIWindow *window = wcpl_bestWindowForController(viewController);
    if (![window isKindOfClass:[UIWindow class]]) {
        WCPLLogInfo(@"[搜索] %@ touchProbe window=nil", stage ?: @"snapshot");
        return;
    }

    if ([stage isKindOfClass:[NSString class]] &&
        ([stage rangeOfString:@"preflight"].location != NSNotFound ||
         [stage rangeOfString:@"post-active"].location != NSNotFound ||
         [stage rangeOfString:@"500ms"].location != NSNotFound ||
         [stage rangeOfString:@"卡住"].location != NSNotFound)) {
        wcpl_logWindowTopSubviews(window, stage ?: @"snapshot");
    }

    CGRect bounds = window.bounds;
    CGPoint point = CGPointMake(CGRectGetMidX(bounds), CGRectGetMidY(bounds));
    UIView *hitView = [window hitTest:point withEvent:nil];
    NSString *hitClass = hitView ? (NSStringFromClass([hitView class]) ?: @"UIView") : @"nil";
    NSString *hitChain = [hitView isKindOfClass:[UIView class]] ? wcpl_searchResidualNodeChain(hitView, 8) : @"nil";
    WCPLLogInfo(@"[搜索] %@ touchProbe windowLevel=%.2f hit=%@ hidden=%@ alpha=%.2f userInteraction=%@ point=(%.1f,%.1f) chain=%@",
                stage ?: @"snapshot",
                window.windowLevel,
                hitClass,
                hitView.hidden ? @"YES" : @"NO",
                hitView.alpha,
                hitView.userInteractionEnabled ? @"YES" : @"NO",
                point.x, point.y,
                hitChain);

    NSArray<UIGestureRecognizer *> *windowGestures = window.gestureRecognizers;
    if ([windowGestures isKindOfClass:[NSArray class]]) {
        for (UIGestureRecognizer *gesture in windowGestures) {
            if (![gesture isKindOfClass:[UIGestureRecognizer class]]) {
                continue;
            }
            UIGestureRecognizerState state = gesture.state;
            if (state == UIGestureRecognizerStateBegan || state == UIGestureRecognizerStateChanged) {
                WCPLLogInfo(@"[搜索] %@ touchProbe activeWindowGesture=%@ state=%ld cancels=%@ delaysBegan=%@ delaysEnded=%@",
                            stage ?: @"snapshot",
                            NSStringFromClass([gesture class]) ?: @"UIGestureRecognizer",
                            (long)state,
                            gesture.cancelsTouchesInView ? @"YES" : @"NO",
                            gesture.delaysTouchesBegan ? @"YES" : @"NO",
                            gesture.delaysTouchesEnded ? @"YES" : @"NO");
            }
        }
    }
}

static BOOL wcpl_controllerRootHasSearchResidue(id viewController) {
    return wcpl_controllerRootSearchResidualNodeCount(viewController) > 0;
}

static void wcpl_logSearchNavSnapshot(id viewController, NSString *stage) {
    NSString *titleViewClass = wcpl_navTitleViewClassName(viewController);
    NSUInteger rightCount = wcpl_navRightItemsCount(viewController);
    BOOL showingSearch = wcpl_isControllerShowingSearchUI(viewController);
    BOOL titleResidue = wcpl_navTitleViewHasSearchResidue(viewController);
    BOOL navResidue = wcpl_navBarHasSearchResidue(viewController);
    NSUInteger navResidualNodes = wcpl_navBarSearchResidualNodeCount(viewController);
    NSUInteger rootResidualNodes = wcpl_controllerRootSearchResidualNodeCount(viewController);
    BOOL rootResidue = rootResidualNodes > 0;
    WCPLLogInfo(@"[搜索] %@ isShow=%@ titleView=%@ titleResidue=%@ rightItems=%lu navResidue=%@ navNodes=%lu",
                stage ?: @"snapshot",
                showingSearch ? @"YES" : @"NO",
                titleViewClass,
                titleResidue ? @"YES" : @"NO",
                (unsigned long)rightCount,
                navResidue ? @"YES" : @"NO",
                (unsigned long)navResidualNodes);
    if (rootResidue) {
        WCPLLogInfo(@"[搜索] %@ rootResidue=YES rootNodes=%lu", stage ?: @"snapshot", (unsigned long)rootResidualNodes);
        if (wcpl_shouldLogRootResidualDetails(stage ?: @"snapshot")) {
            wcpl_logRootResidualNodeDetails(viewController, stage ?: @"snapshot", 6);
        }
        if (wcpl_shouldLogSearchTouchProbe(stage ?: @"snapshot")) {
            wcpl_logSearchTouchProbe(viewController, stage ?: @"snapshot");
        }
    }
}

static BOOL wcpl_forceClearTitleViewIfSearchResidual(id controller, NSString *stage) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    UIViewController *viewController = (UIViewController *)controller;
    UINavigationItem *navigationItem = viewController.navigationItem;
    if (![navigationItem isKindOfClass:[UINavigationItem class]]) {
        return NO;
    }

    if (!wcpl_navTitleViewLooksSearchLike(controller)) {
        return NO;
    }

    @try {
        navigationItem.titleView = nil;
        WCPLLogInfo(@"[搜索] %@ 强制清空 titleView", stage ?: @"repair");
        return YES;
    } @catch (NSException *exception) {
        WCPLLogInfo(@"[搜索] %@ 强制清空 titleView 异常: %@", stage ?: @"repair", exception.reason ?: @"unknown");
        return NO;
    }
}

static BOOL wcpl_forceClearNavBarSearchResidual(id controller, NSString *stage) {
    UINavigationBar *navigationBar = wcpl_navigationBarFromController(controller);
    if (![navigationBar isKindOfClass:[UINavigationBar class]]) {
        return NO;
    }

    if (!wcpl_navBarHasSearchResidue(controller)) {
        return NO;
    }

    BOOL removed = NO;
    @try {
        removed = wcpl_removeSearchLikeNodesFromViewTree(navigationBar, 0);
    } @catch (NSException *exception) {
        WCPLLogInfo(@"[搜索] %@ 清理 navBar 搜索节点异常: %@", stage ?: @"repair", exception.reason ?: @"unknown");
        return NO;
    }

    [navigationBar setNeedsLayout];
    [navigationBar layoutIfNeeded];

    BOOL stillResidue = wcpl_navBarHasSearchResidue(controller);
    if (removed || !stillResidue) {
        WCPLLogInfo(@"[搜索] %@ 清理 navBar 搜索节点 removed=%@ stillResidue=%@",
                    stage ?: @"repair",
                    removed ? @"YES" : @"NO",
                    stillResidue ? @"YES" : @"NO");
    }

    return removed || !stillResidue;
}

static NSUInteger wcpl_collapseEmptySearchTransitionAncestors(UIView *searchRoot) {
    (void)searchRoot;
    // 触控稳定性优先：禁止沿祖先链路改写 Transition 容器，避免误伤主页面触控层。
    return 0;
}

static BOOL wcpl_recoverTransitionContainerInteractionInTree(UIView *view, NSUInteger depth, NSUInteger *recoveredCount) {
    if (![view isKindOfClass:[UIView class]] || depth >= kWCPLSearchTreeMaxDepth) {
        return NO;
    }

    BOOL changed = NO;
    NSString *className = NSStringFromClass([view class]) ?: @"";
    BOOL transitionLike = wcpl_classNameContainsToken(className, @"transitionview") ||
                          wcpl_classNameContainsToken(className, @"wrapperview") ||
                          wcpl_classNameContainsToken(className, @"navigationtransitionview");
    BOOL likelyMainLayer = transitionLike &&
                           !view.hidden &&
                           view.alpha > 0.01f &&
                           !wcpl_classNameContainsSearchToken(className);
    if (likelyMainLayer && !view.userInteractionEnabled) {
        view.userInteractionEnabled = YES;
        changed = YES;
        if (recoveredCount) {
            (*recoveredCount)++;
        }
    }

    NSArray *subviews = [view.subviews copy];
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return changed;
    }

    for (id subview in subviews) {
        if (![subview isKindOfClass:[UIView class]]) {
            continue;
        }
        if (wcpl_recoverTransitionContainerInteractionInTree((UIView *)subview, depth + 1, recoveredCount)) {
            changed = YES;
        }
    }
    return changed;
}


// ===== merged boundary: CoreB =====

static BOOL wcpl_softHideRootSearchResidualNodesFromTree(UIView *view, UIView *excludedRoot, NSUInteger depth, NSUInteger *hiddenCount) {
    if (![view isKindOfClass:[UIView class]] || depth >= kWCPLSearchTreeMaxDepth) {
        return NO;
    }

    if ([excludedRoot isKindOfClass:[UIView class]] && wcpl_viewIsDescendantOrSelfOfView(view, excludedRoot)) {
        return NO;
    }

    NSArray *subviews = [view.subviews copy];
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return NO;
    }

    BOOL changed = NO;
    for (id subview in subviews) {
        if (![subview isKindOfClass:[UIView class]]) {
            continue;
        }

        UIView *child = (UIView *)subview;
        if ([excludedRoot isKindOfClass:[UIView class]] && wcpl_viewIsDescendantOrSelfOfView(child, excludedRoot)) {
            continue;
        }

        if (wcpl_viewLooksSafeRootSearchClearTarget(child, view)) {
            BOOL nodeChanged = NO;
            NSString *childClass = NSStringFromClass([child class]) ?: @"";
            BOOL searchControllerRoot = wcpl_classNameContainsToken(childClass, @"searchcontroller");
            if (!child.hidden) {
                child.hidden = YES;
                nodeChanged = YES;
            }
            if (child.alpha > 0.01f) {
                child.alpha = 0.0f;
                nodeChanged = YES;
            }
            if (child.userInteractionEnabled) {
                child.userInteractionEnabled = NO;
                nodeChanged = YES;
            }
            if (searchControllerRoot) {
                (void)wcpl_collapseEmptySearchTransitionAncestors(child);
            }
            if (nodeChanged && hiddenCount) {
                (*hiddenCount)++;
            }
            changed = changed || nodeChanged;
            continue;
        }

        if (wcpl_softHideRootSearchResidualNodesFromTree(child, excludedRoot, depth + 1, hiddenCount)) {
            changed = YES;
        }
    }

    return changed;
}

static BOOL wcpl_forceClearRootSearchResidual(id controller, NSString *stage) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    NSUInteger beforeCount = wcpl_controllerRootSearchResidualNodeCount(controller);
    if (beforeCount == 0) {
        return NO;
    }

    UIViewController *viewController = (UIViewController *)controller;
    UINavigationBar *navBar = wcpl_navigationBarFromController(controller);
    NSUInteger hiddenCount = 0;
    BOOL changed = NO;

    UIView *controllerView = WCPLNavigationAdapterLoadedView(viewController);
    if (controllerView) {
        changed |= wcpl_softHideRootSearchResidualNodesFromTree(controllerView, navBar, 0, &hiddenCount);
        [controllerView setNeedsLayout];
        [controllerView layoutIfNeeded];
    }

    UINavigationController *navigationController = viewController.navigationController;
    if ([navigationController isKindOfClass:[UINavigationController class]]) {
        UIView *navRootView = WCPLNavigationAdapterLoadedView(navigationController);
        if (navRootView) {
            changed |= wcpl_softHideRootSearchResidualNodesFromTree(navRootView, navBar, 0, &hiddenCount);
            [navRootView setNeedsLayout];
            [navRootView layoutIfNeeded];
        }
    }

    NSUInteger afterCount = wcpl_controllerRootSearchResidualNodeCount(controller);
    if (changed || afterCount < beforeCount) {
        WCPLLogInfo(@"[搜索] %@ 软清理 root 搜索节点 hiddenCount=%lu before=%lu after=%lu",
                    stage ?: @"repair",
                    (unsigned long)hiddenCount,
                    (unsigned long)beforeCount,
                    (unsigned long)afterCount);
    }

    return changed || afterCount < beforeCount || afterCount == 0;
}


static BOOL wcpl_preHideSearchPresentationOnCancel(id controller, NSString *stage) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    BOOL changed = NO;
    UIViewController *viewController = (UIViewController *)controller;

    id helper = wcpl_msgSearchHelperFromController(controller);
    id searchController = wcpl_searchControllerFromHelper(helper);
    if (wcpl_objectLooksLikeSearchController(searchController) && [searchController respondsToSelector:@selector(view)]) {
        UIView *searchView = nil;
        @try {
            searchView = ((id (*)(id, SEL))objc_msgSend)(searchController, @selector(view));
        } @catch (__unused NSException *exception) {
            searchView = nil;
        }
        if ([searchView isKindOfClass:[UIView class]]) {
            if (!searchView.hidden) {
                searchView.hidden = YES;
                changed = YES;
            }
            if (searchView.alpha > 0.01f) {
                searchView.alpha = 0.0f;
                changed = YES;
            }
            if (searchView.userInteractionEnabled) {
                searchView.userInteractionEnabled = NO;
                changed = YES;
            }
        }
    }

    UIViewController *presentedBySelf = viewController.presentedViewController;
    if ([presentedBySelf isKindOfClass:[UIViewController class]] &&
        wcpl_viewControllerLooksSearchPresentation(presentedBySelf)) {
        UIView *presentedView = WCPLNavigationAdapterLoadedView(presentedBySelf);
        if ([presentedView isKindOfClass:[UIView class]]) {
            if (!presentedView.hidden) {
                presentedView.hidden = YES;
                changed = YES;
            }
            if (presentedView.alpha > 0.01f) {
                presentedView.alpha = 0.0f;
                changed = YES;
            }
            if (presentedView.userInteractionEnabled) {
                presentedView.userInteractionEnabled = NO;
                changed = YES;
            }
        }
    }

    UINavigationController *navigationController = viewController.navigationController;
    UIViewController *presentedByNav = [navigationController isKindOfClass:[UINavigationController class]] ? navigationController.presentedViewController : nil;
    if ([presentedByNav isKindOfClass:[UIViewController class]] &&
        wcpl_viewControllerLooksSearchPresentation(presentedByNav)) {
        UIView *presentedView = WCPLNavigationAdapterLoadedView(presentedByNav);
        if ([presentedView isKindOfClass:[UIView class]]) {
            if (!presentedView.hidden) {
                presentedView.hidden = YES;
                changed = YES;
            }
            if (presentedView.alpha > 0.01f) {
                presentedView.alpha = 0.0f;
                changed = YES;
            }
            if (presentedView.userInteractionEnabled) {
                presentedView.userInteractionEnabled = NO;
                changed = YES;
            }
        }
    }

    UINavigationBar *navigationBar = wcpl_navigationBarFromController(controller);
    NSUInteger disabledCount = 0;
    UIView *controllerView = WCPLNavigationAdapterLoadedView(viewController);
    if ([controllerView isKindOfClass:[UIView class]]) {
        if (wcpl_softDisableSearchOverlayInTree(controllerView, navigationBar, controllerView, stage, 0, &disabledCount)) {
            changed = YES;
        }
    }
    UIView *navView = [navigationController isKindOfClass:[UINavigationController class]]
        ? WCPLNavigationAdapterLoadedView(navigationController)
        : nil;
    if ([navView isKindOfClass:[UIView class]] && navView != controllerView) {
        if (wcpl_softDisableSearchOverlayInTree(navView, navigationBar, navView, stage, 0, &disabledCount)) {
            changed = YES;
        }
    }
    UIWindow *window = [controllerView isKindOfClass:[UIView class]] ? controllerView.window : nil;
    if (![window isKindOfClass:[UIWindow class]] && [navView isKindOfClass:[UIView class]]) {
        window = navView.window;
    }
    if ([window isKindOfClass:[UIWindow class]] && window != controllerView && window != navView) {
        if (wcpl_softDisableSearchOverlayInTree(window, navigationBar, window, stage, 0, &disabledCount)) {
            changed = YES;
        }
    }

    if (changed) {
        WCPLLogInfo(@"[搜索] %@ 取消前硬隐藏搜索层 disabled=%lu", stage ?: @"cancel-pre-hide", (unsigned long)disabledCount);
    }

    return changed;
}

static BOOL wcpl_restoreSearchLikeNodesInTree(UIView *view, NSUInteger depth, NSUInteger *restoredCount) {
    if (![view isKindOfClass:[UIView class]] || depth >= kWCPLSearchTreeMaxDepth) {
        return NO;
    }

    NSString *className = NSStringFromClass([view class]) ?: @"";
    BOOL searchLike = wcpl_classNameContainsSearchToken(className) ||
                      wcpl_classNameContainsToken(className, @"searchbarcontainerview") ||
                      wcpl_classNameContainsToken(className, @"mmuisearchbar") ||
                      wcpl_classNameContainsToken(className, @"dimming") ||
                      wcpl_classNameContainsToken(className, @"searcherbackground") ||
                      wcpl_classNameContainsToken(className, @"searchbackground");
    BOOL changed = NO;

    if (searchLike) {
        BOOL nodeChanged = NO;
        if (view.hidden) {
            view.hidden = NO;
            nodeChanged = YES;
        }
        if (view.alpha < 0.99f) {
            view.alpha = 1.0f;
            nodeChanged = YES;
        }
        if (!view.userInteractionEnabled) {
            view.userInteractionEnabled = YES;
            nodeChanged = YES;
        }
        if (nodeChanged && restoredCount) {
            (*restoredCount)++;
        }
        changed = changed || nodeChanged;
    }

    NSArray *subviews = [view.subviews copy];
    if ([subviews isKindOfClass:[NSArray class]] && subviews.count > 0) {
        for (id subview in subviews) {
            if (![subview isKindOfClass:[UIView class]]) {
                continue;
            }
            if (wcpl_restoreSearchLikeNodesInTree((UIView *)subview, depth + 1, restoredCount)) {
                changed = YES;
            }
        }
    }

    return changed;
}

static BOOL wcpl_restoreSearchPresentationOnActivation(id controller, NSString *stage) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    BOOL changed = NO;
    NSUInteger restoredCount = 0;
    UIViewController *viewController = (UIViewController *)controller;
    UINavigationController *navigationController = viewController.navigationController;

    id helper = wcpl_msgSearchHelperFromController(controller);
    id searchController = wcpl_searchControllerFromHelper(helper);
    if (wcpl_objectLooksLikeSearchController(searchController) && [searchController respondsToSelector:@selector(view)]) {
        UIView *searchView = nil;
        @try {
            searchView = ((id (*)(id, SEL))objc_msgSend)(searchController, @selector(view));
        } @catch (__unused NSException *exception) {
            searchView = nil;
        }
        if ([searchView isKindOfClass:[UIView class]]) {
            BOOL nodeChanged = NO;
            if (searchView.hidden) {
                searchView.hidden = NO;
                nodeChanged = YES;
            }
            if (searchView.alpha < 0.99f) {
                searchView.alpha = 1.0f;
                nodeChanged = YES;
            }
            if (!searchView.userInteractionEnabled) {
                searchView.userInteractionEnabled = YES;
                nodeChanged = YES;
            }
            if (wcpl_restoreSearchLikeNodesInTree(searchView, 0, &restoredCount)) {
                nodeChanged = YES;
            }
            if (nodeChanged) {
                restoredCount++;
                changed = YES;
            }
        }
    }

    UIViewController *presentedBySelf = viewController.presentedViewController;
    if ([presentedBySelf isKindOfClass:[UIViewController class]] &&
        wcpl_viewControllerLooksSearchPresentation(presentedBySelf)) {
        UIView *presentedView = WCPLNavigationAdapterLoadedView(presentedBySelf);
        if ([presentedView isKindOfClass:[UIView class]]) {
            BOOL nodeChanged = NO;
            if (presentedView.hidden) {
                presentedView.hidden = NO;
                nodeChanged = YES;
            }
            if (presentedView.alpha < 0.99f) {
                presentedView.alpha = 1.0f;
                nodeChanged = YES;
            }
            if (!presentedView.userInteractionEnabled) {
                presentedView.userInteractionEnabled = YES;
                nodeChanged = YES;
            }
            if (wcpl_restoreSearchLikeNodesInTree(presentedView, 0, &restoredCount)) {
                nodeChanged = YES;
            }
            if (nodeChanged) {
                restoredCount++;
                changed = YES;
            }
        }
    }

    UIViewController *presentedByNav = [navigationController isKindOfClass:[UINavigationController class]] ? navigationController.presentedViewController : nil;
    if ([presentedByNav isKindOfClass:[UIViewController class]] &&
        wcpl_viewControllerLooksSearchPresentation(presentedByNav)) {
        UIView *presentedView = WCPLNavigationAdapterLoadedView(presentedByNav);
        if ([presentedView isKindOfClass:[UIView class]]) {
            BOOL nodeChanged = NO;
            if (presentedView.hidden) {
                presentedView.hidden = NO;
                nodeChanged = YES;
            }
            if (presentedView.alpha < 0.99f) {
                presentedView.alpha = 1.0f;
                nodeChanged = YES;
            }
            if (!presentedView.userInteractionEnabled) {
                presentedView.userInteractionEnabled = YES;
                nodeChanged = YES;
            }
            if (wcpl_restoreSearchLikeNodesInTree(presentedView, 0, &restoredCount)) {
                nodeChanged = YES;
            }
            if (nodeChanged) {
                restoredCount++;
                changed = YES;
            }
        }
    }

    if (changed) {
        WCPLLogInfo(@"[搜索] %@ 激活恢复搜索层 visibleCount=%lu", stage ?: @"activate-restore", (unsigned long)restoredCount);
    }

    return changed;
}

static BOOL wcpl_forceDismissSearchPresentationController(id controller, NSString *stage) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    UIViewController *viewController = (UIViewController *)controller;
    BOOL changed = NO;

    id helper = wcpl_msgSearchHelperFromController(controller);
    id searchController = wcpl_searchControllerFromHelper(helper);
    if (wcpl_objectLooksLikeSearchController(searchController) && [searchController respondsToSelector:@selector(setActive:)]) {
        BOOL shouldDeactivate = YES;
        if ([searchController respondsToSelector:@selector(isActive)]) {
            shouldDeactivate = ((BOOL (*)(id, SEL))objc_msgSend)(searchController, @selector(isActive));
        }
        if (shouldDeactivate) {
            @try {
                ((void (*)(id, SEL, BOOL))objc_msgSend)(searchController, @selector(setActive:), NO);
                changed = YES;
                WCPLLogInfo(@"[搜索] %@ 强制 setActive:NO class=%@",
                            stage ?: @"repair",
                            NSStringFromClass([searchController class]) ?: @"unknown");
            } @catch (NSException *exception) {
                WCPLLogInfo(@"[搜索] %@ setActive:NO 异常: %@", stage ?: @"repair", exception.reason ?: @"unknown");
            }
        }
    }

    UIViewController *presentedBySelf = viewController.presentedViewController;
    if ([presentedBySelf isKindOfClass:[UIViewController class]] &&
        wcpl_viewControllerLooksSearchPresentation(presentedBySelf)) {
        [viewController dismissViewControllerAnimated:NO completion:nil];
        changed = YES;
        WCPLLogInfo(@"[搜索] %@ dismiss self.presentedViewController=%@",
                    stage ?: @"repair",
                    NSStringFromClass([presentedBySelf class]) ?: @"UIViewController");
    }

    UINavigationController *navigationController = viewController.navigationController;
    UIViewController *presentedByNav = [navigationController isKindOfClass:[UINavigationController class]] ? navigationController.presentedViewController : nil;
    if ([presentedByNav isKindOfClass:[UIViewController class]] &&
        wcpl_viewControllerLooksSearchPresentation(presentedByNav)) {
        [navigationController dismissViewControllerAnimated:NO completion:nil];
        changed = YES;
        WCPLLogInfo(@"[搜索] %@ dismiss nav.presentedViewController=%@",
                    stage ?: @"repair",
                    NSStringFromClass([presentedByNav class]) ?: @"UIViewController");
    }

    return changed;
}

static __attribute__((unused)) BOOL wcpl_immediateHardCleanupAfterCancel(id controller, NSString *stage) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    NSString *prefix = ([stage isKindOfClass:[NSString class]] && stage.length > 0) ? stage : @"[搜索] cancel 即时硬清理";
    BOOL preHidden = wcpl_preHideSearchPresentationOnCancel(controller, [NSString stringWithFormat:@"%@/preHide", prefix]);
    BOOL dismissed = wcpl_forceDismissSearchPresentationController(controller, [NSString stringWithFormat:@"%@/dismiss", prefix]);
    BOOL clearedTitle = wcpl_forceClearTitleViewIfSearchResidual(controller, [NSString stringWithFormat:@"%@/title", prefix]);
    BOOL clearedNav = wcpl_forceClearNavBarSearchResidual(controller, [NSString stringWithFormat:@"%@/navBar", prefix]);
    BOOL clearedRoot = wcpl_forceClearRootSearchResidual(controller, [NSString stringWithFormat:@"%@/root", prefix]);
    BOOL changed = preHidden || dismissed || clearedTitle || clearedNav || clearedRoot;

    if (changed) {
        UIView *controllerView = WCPLNavigationAdapterLoadedView((UIViewController *)controller);
        if ([controllerView isKindOfClass:[UIView class]]) {
            [controllerView setNeedsLayout];
            [controllerView layoutIfNeeded];
        }
        UINavigationController *navigationController = ((UIViewController *)controller).navigationController;
        UIView *navView = [navigationController isKindOfClass:[UINavigationController class]]
            ? WCPLNavigationAdapterLoadedView(navigationController)
            : nil;
        if ([navView isKindOfClass:[UIView class]]) {
            [navView setNeedsLayout];
            [navView layoutIfNeeded];
        }
        WCPLLogInfo(@"[搜索] %@ 命中 changed(preHide=%@ dismiss=%@ title=%@ nav=%@ root=%@)",
                    prefix,
                    preHidden ? @"YES" : @"NO",
                    dismissed ? @"YES" : @"NO",
                    clearedTitle ? @"YES" : @"NO",
                    clearedNav ? @"YES" : @"NO",
                    clearedRoot ? @"YES" : @"NO");
    }

    return changed;
}

static BOOL wcpl_viewIsNearFullscreenInRoot(UIView *view, UIView *rootView) {
    if (![view isKindOfClass:[UIView class]] || ![rootView isKindOfClass:[UIView class]]) {
        return NO;
    }
    CGRect rootBounds = rootView.bounds;
    if (rootBounds.size.width < 1.0f || rootBounds.size.height < 1.0f) {
        return NO;
    }
    CGRect frameInRoot = [view convertRect:view.bounds toView:rootView];
    return frameInRoot.size.width >= rootBounds.size.width * 0.90f &&
           frameInRoot.size.height >= rootBounds.size.height * 0.80f;
}

static __attribute__((unused)) BOOL wcpl_softDisableSearchOverlayInTree(UIView *view,
                                                UIView *excludedRoot,
                                                UIView *scanRoot,
                                                NSString *stage,
                                                NSUInteger depth,
                                                NSUInteger *disabledCount) {
    if (![view isKindOfClass:[UIView class]] || depth >= kWCPLSearchTreeMaxDepth) {
        return NO;
    }
    if ([excludedRoot isKindOfClass:[UIView class]] && wcpl_viewIsDescendantOrSelfOfView(view, excludedRoot)) {
        return NO;
    }

    NSString *className = NSStringFromClass([view class]) ?: @"";
    BOOL isSearchControllerRoot = wcpl_classNameContainsToken(className, @"searchcontrollerview");
    BOOL isDetachedSearchBar = wcpl_classNameContainsToken(className, @"mmuisearchbar") ||
                               wcpl_classNameContainsToken(className, @"searchbarcontainerview");
    BOOL isDimmingOverlay = wcpl_classNameContainsToken(className, @"dimming") ||
                            wcpl_classNameContainsToken(className, @"searcherbackground") ||
                            wcpl_classNameContainsToken(className, @"searchbackground");
    BOOL nearFullscreen = wcpl_viewIsNearFullscreenInRoot(view, scanRoot ?: view);
    BOOL shouldDisable = depth > 0 &&
                         (isSearchControllerRoot ||
                          isDetachedSearchBar ||
                          (isDimmingOverlay && nearFullscreen));
    BOOL changed = NO;

    if (shouldDisable) {
        if (!view.hidden) {
            if (isSearchControllerRoot || isDetachedSearchBar || isDimmingOverlay) {
                view.hidden = YES;
                changed = YES;
            }
        }
        if (view.alpha > 0.01f) {
            if (isSearchControllerRoot || isDetachedSearchBar || isDimmingOverlay) {
                view.alpha = 0.0f;
                changed = YES;
            }
        }
        if (view.userInteractionEnabled) {
            view.userInteractionEnabled = NO;
            changed = YES;
        }

        if (changed) {
            NSString *chain = wcpl_searchResidualNodeChain(view, 8);
            WCPLLogInfo(@"[搜索] %@ 预清理拦截层 class=%@ nearFullscreen=%@ alpha=%.2f hidden=%@ chain=%@",
                        stage ?: @"repair",
                        className,
                        nearFullscreen ? @"YES" : @"NO",
                        view.alpha,
                        view.hidden ? @"YES" : @"NO",
                        chain);
        }

        if (changed && disabledCount) {
            (*disabledCount)++;
        }

        if (isSearchControllerRoot) {
            (void)wcpl_collapseEmptySearchTransitionAncestors(view);
        }
    }

    NSArray *subviews = [view.subviews copy];
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return changed;
    }

    for (id subview in subviews) {
        if (![subview isKindOfClass:[UIView class]]) {
            continue;
        }
        if (wcpl_softDisableSearchOverlayInTree((UIView *)subview, excludedRoot, scanRoot, stage, depth + 1, disabledCount)) {
            changed = YES;
        }
    }

    return changed;
}

static BOOL wcpl_forceDisableSearchPresentationOverlay(id controller, NSString *stage) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    // 触控稳定性优先的 fail-safe：
    // 不再主动禁用任何 overlay 交互，只做可见容器交互恢复，避免“二次点击后页面失去触控”。
    UIViewController *viewController = (UIViewController *)controller;
    UIView *controllerView = WCPLNavigationAdapterLoadedView(viewController);
    UINavigationController *navigationController = viewController.navigationController;
    UIView *navView = [navigationController isKindOfClass:[UINavigationController class]]
        ? WCPLNavigationAdapterLoadedView(navigationController)
        : nil;
    UIWindow *window = [controllerView isKindOfClass:[UIView class]] ? controllerView.window : nil;
    if (![window isKindOfClass:[UIWindow class]] && [navView isKindOfClass:[UIView class]]) {
        window = navView.window;
    }

    BOOL changed = NO;
    NSUInteger recoveredCount = 0;

    if ([controllerView isKindOfClass:[UIView class]]) {
        if (!controllerView.userInteractionEnabled) {
            controllerView.userInteractionEnabled = YES;
            changed = YES;
            recoveredCount++;
        }
        changed |= wcpl_recoverTransitionContainerInteractionInTree(controllerView, 0, &recoveredCount);
    }
    if ([navView isKindOfClass:[UIView class]] && navView != controllerView) {
        if (!navView.userInteractionEnabled) {
            navView.userInteractionEnabled = YES;
            changed = YES;
            recoveredCount++;
        }
        changed |= wcpl_recoverTransitionContainerInteractionInTree(navView, 0, &recoveredCount);
    }
    if ([window isKindOfClass:[UIWindow class]] && window != controllerView && window != navView) {
        if (!window.userInteractionEnabled) {
            window.userInteractionEnabled = YES;
            changed = YES;
            recoveredCount++;
        }
        changed |= wcpl_recoverTransitionContainerInteractionInTree(window, 0, &recoveredCount);
    }

    if (changed) {
        WCPLLogInfo(@"[搜索] %@ 触控恢复 fail-safe recoveredCount=%lu",
                    stage ?: @"repair",
                    (unsigned long)recoveredCount);
        if ([controllerView isKindOfClass:[UIView class]]) {
            [controllerView setNeedsLayout];
            [controllerView layoutIfNeeded];
        }
        if ([navView isKindOfClass:[UIView class]]) {
            [navView setNeedsLayout];
            [navView layoutIfNeeded];
        }
    }

    return changed;
}

static __attribute__((unused)) void wcpl_preflightRepairBeforeSearchActivation(id controller) {
    if (!controller) {
        return;
    }

    NSUInteger epoch = wcpl_nextExitCleanupEpoch(controller);
    WCPLLogInfo(@"[搜索] [搜索] preflight 开始，切换 cleanupEpoch=%lu", (unsigned long)epoch);
    wcpl_logSearchTouchProbe(controller, @"[搜索] preflight(before)");
    wcpl_forceDismissSearchPresentationController(controller, @"[搜索] preflight");
    wcpl_tryFinalizeSpecialSearchHelper(controller, @"[搜索] preflight");
    wcpl_forceDisableSearchPresentationOverlay(controller, @"[搜索] preflight");
    wcpl_logSearchTouchProbe(controller, @"[搜索] preflight(after)");
}

static BOOL wcpl_shouldRunRootCleanupForStage(NSString *stage, BOOL allowReloadWholePage) {
    if (!allowReloadWholePage) {
        return NO;
    }
    if (![stage isKindOfClass:[NSString class]] || stage.length == 0) {
        return NO;
    }

    // 只在退出搜索后的延时收口阶段启用 root 清理，避免影响搜索激活中的触控链。
    if ([stage rangeOfString:@"500ms"].location != NSNotFound ||
        [stage rangeOfString:@"1200ms"].location != NSNotFound ||
        [stage rangeOfString:@"/retry"].location != NSNotFound ||
        [stage rangeOfString:@"延迟收口"].location != NSNotFound ||
        [stage rangeOfString:@"残留兜底"].location != NSNotFound) {
        return YES;
    }

    return NO;
}

static BOOL wcpl_shouldRunHeavySearchStateSyncForStage(NSString *stage) {
    if (![stage isKindOfClass:[NSString class]] || stage.length == 0) {
        return YES;
    }
    if ([stage rangeOfString:@"500ms"].location != NSNotFound) {
        return NO;
    }
    if ([stage rangeOfString:@"1200ms"].location != NSNotFound) {
        return NO;
    }
    if ([stage rangeOfString:@"/retry"].location != NSNotFound) {
        return NO;
    }
    return YES;
}

static void wcpl_repairExitSearchNavState(id controller, NSString *stage, BOOL allowReloadWholePage) {
    if (!controller) {
        return;
    }

    wcpl_tryFinalizeSpecialSearchHelper(controller, stage ?: @"repair");
    BOOL shouldRunHeavySync = wcpl_shouldRunHeavySearchStateSyncForStage(stage ?: @"");
    SEL setShowSel = @selector(setIsShowMsgSearch:);
    if (shouldRunHeavySync && [controller respondsToSelector:setShowSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(controller, setShowSel, NO);
    }

    SEL initShowSel = @selector(initIsShowMsgSearch);
    if (shouldRunHeavySync && [controller respondsToSelector:initShowSel]) {
        ((void (*)(id, SEL))objc_msgSend)(controller, initShowSel);
    }

    SEL resetRightSel = @selector(resetRihgButton);
    if (shouldRunHeavySync && [controller respondsToSelector:resetRightSel]) {
        ((void (*)(id, SEL))objc_msgSend)(controller, resetRightSel);
    }

    SEL rightBarSel = @selector(handleMsgUpdateRightBar);
    if (shouldRunHeavySync && [controller respondsToSelector:rightBarSel]) {
        ((void (*)(id, SEL))objc_msgSend)(controller, rightBarSel);
    }

    BOOL dismissedSearchPresentation = wcpl_forceDismissSearchPresentationController(controller, stage);
    BOOL disabledSearchOverlay = wcpl_forceDisableSearchPresentationOverlay(controller, stage);
    BOOL clearedTitleView = wcpl_forceClearTitleViewIfSearchResidual(controller, stage);
    BOOL clearedNavBarSearch = wcpl_forceClearNavBarSearchResidual(controller, stage);
    BOOL shouldClearRootSearch = wcpl_shouldRunRootCleanupForStage(stage ?: @"", allowReloadWholePage);
    BOOL clearedRootSearch = shouldClearRootSearch ? wcpl_forceClearRootSearchResidual(controller, stage) : NO;
    if (!shouldClearRootSearch && wcpl_controllerRootHasSearchResidue(controller)) {
        WCPLLogInfo(@"[搜索] %@ root cleanup disabled for diagnosis", stage ?: @"repair");
    }
    if ((dismissedSearchPresentation || disabledSearchOverlay || clearedTitleView || clearedNavBarSearch || clearedRootSearch) &&
        [controller respondsToSelector:rightBarSel]) {
        ((void (*)(id, SEL))objc_msgSend)(controller, rightBarSel);
    }

    BOOL titleStillSearchLike = wcpl_navTitleViewLooksSearchLike(controller);
    BOOL navStillSearchLike = wcpl_navBarHasSearchResidue(controller);
    BOOL rootStillSearchLike = wcpl_controllerRootHasSearchResidue(controller);
    if (allowReloadWholePage && (titleStillSearchLike || navStillSearchLike || rootStillSearchLike)) {
        wcpl_forceDismissSearchPresentationController(controller, [NSString stringWithFormat:@"%@/retry", stage ?: @"repair"]);
        wcpl_forceDisableSearchPresentationOverlay(controller, [NSString stringWithFormat:@"%@/retry", stage ?: @"repair"]);
        wcpl_forceClearTitleViewIfSearchResidual(controller, [NSString stringWithFormat:@"%@/retry", stage ?: @"repair"]);
        wcpl_forceClearNavBarSearchResidual(controller, [NSString stringWithFormat:@"%@/retry", stage ?: @"repair"]);
        if (wcpl_shouldRunRootCleanupForStage([NSString stringWithFormat:@"%@/retry", stage ?: @"repair"], YES)) {
            wcpl_forceClearRootSearchResidual(controller, [NSString stringWithFormat:@"%@/retry", stage ?: @"repair"]);
        }
        if (shouldRunHeavySync && [controller respondsToSelector:resetRightSel]) {
            ((void (*)(id, SEL))objc_msgSend)(controller, resetRightSel);
        }
        if (shouldRunHeavySync && [controller respondsToSelector:rightBarSel]) {
            ((void (*)(id, SEL))objc_msgSend)(controller, rightBarSel);
        }
    }

    wcpl_logSearchNavSnapshot(controller, stage ?: @"repair");
    wcpl_scheduleChatSearchButtonRepair(controller, [NSString stringWithFormat:@"%@/afterRepair", stage ?: @"repair"]);
}
