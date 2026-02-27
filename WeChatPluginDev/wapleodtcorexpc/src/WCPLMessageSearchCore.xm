// Merged from: WCPLMessageSearchCoreA.xm + CoreB.xm + CoreC.xm

%group WCPLMessageSearchCoreGroup

static const void *kWCPLChatSearchNavButtonKey = &kWCPLChatSearchNavButtonKey;
static const void *kWCPLChatSearchNavButtonTagKey = &kWCPLChatSearchNavButtonTagKey;
static const void *kWCPLChatSearchAutoPopOnCancelKey = &kWCPLChatSearchAutoPopOnCancelKey;
static const void *kWCPLChatSearchTransitioningKey = &kWCPLChatSearchTransitioningKey;
static const void *kWCPLChatSearchInjectedFlowKey = &kWCPLChatSearchInjectedFlowKey;
static const void *kWCPLChatSearchEnhanceRetryKey = &kWCPLChatSearchEnhanceRetryKey;
static const void *kWCPLChatSearchBridgePendingKey = &kWCPLChatSearchBridgePendingKey;
static const void *kWCPLChatSearchBridgeAutoPopKey = &kWCPLChatSearchBridgeAutoPopKey;
static const void *kWCPLChatSearchBridgeSourceControllerKey = &kWCPLChatSearchBridgeSourceControllerKey;
static const void *kWCPLChatSearchCancellingKey = &kWCPLChatSearchCancellingKey;
static const void *kWCPLChatSearchExitCleanupEpochKey = &kWCPLChatSearchExitCleanupEpochKey;
static const void *kWCPLChatSearchForceFullModeKey = &kWCPLChatSearchForceFullModeKey;
static const void *kWCPLChatSearchForceDelayedRepairKey = &kWCPLChatSearchForceDelayedRepairKey;
static const void *kWCPLChatSearchButtonRepairEpochKey = &kWCPLChatSearchButtonRepairEpochKey;
static const void *kWCPLSearchBarContainerOriginalYKey = &kWCPLSearchBarContainerOriginalYKey;
static const NSUInteger kWCPLSearchTreeMaxDepth = 16;
static id wcpl_msgSearchHelperFromController(id controller);
static id wcpl_specialMsgSearchHelperFromController(id controller);
static unsigned int wcpl_msgSearchBusinessType(id controller);
static BOOL wcpl_tryFinalizeSpecialSearchHelper(id controller, NSString *stage);
static void wcpl_logSearchHelperSnapshot(id controller, NSString *stage);
static NSUInteger wcpl_nextExitCleanupEpoch(id controller);
static void wcpl_logSearchTouchProbe(id viewController, NSString *stage);
static void wcpl_resetSearchHelperRuntimeState(id helper, NSString *stage);
static NSUInteger wcpl_searchEnhanceRetryCount(id controller);
static BOOL wcpl_consumeSearchEnhanceRetryBudget(id controller, NSUInteger maxRetry);
static void wcpl_markForceFullSearchMode(id controller, BOOL enable);
static BOOL wcpl_shouldForceFullSearchMode(id controller);
static BOOL wcpl_activateInPageSearchState(id controller);
static BOOL wcpl_isInjectedChatSearchFlow(id controller);
static BOOL wcpl_classNameContainsSearchToken(NSString *className);
static BOOL wcpl_viewTreeHasSearchLikeNode(UIView *view, NSUInteger depth);
static NSString *wcpl_barButtonActionName(UIBarButtonItem *item);
static BOOL wcpl_barButtonItemLooksLikeMoreEntry(UIBarButtonItem *item);
static BOOL wcpl_controllerHasInjectedChatSearchButton(id viewController);
static void wcpl_scheduleChatSearchButtonRepair(id controller, NSString *stage);
static id wcpl_serviceByClass(Class serviceClass);
static BOOL wcpl_softDisableSearchOverlayInTree(UIView *view,
                                                UIView *excludedRoot,
                                                UIView *scanRoot,
                                                NSString *stage,
                                                NSUInteger depth,
                                                NSUInteger *disabledCount);

static CGFloat wcpl_viewOriginY(UIView *view) {
    if (![view isKindOfClass:[UIView class]]) {
        return 0.0f;
    }
    if ([view respondsToSelector:@selector(y)]) {
        @try {
            return ((CGFloat (*)(id, SEL))objc_msgSend)(view, @selector(y));
        } @catch (__unused NSException *exception) {
        }
    }
    return view.frame.origin.y;
}

static void wcpl_setViewOriginY(UIView *view, CGFloat y) {
    if (![view isKindOfClass:[UIView class]]) {
        return;
    }
    if ([view respondsToSelector:@selector(setY:)]) {
        @try {
            ((void (*)(id, SEL, CGFloat))objc_msgSend)(view, @selector(setY:), y);
            return;
        } @catch (__unused NSException *exception) {
        }
    }
    CGRect frame = view.frame;
    frame.origin.y = y;
    view.frame = frame;
}

@interface CommonMessageCellView (WCHookSwipeEntry)
- (void)wchook_setupSwipeGestureIfNeeded;
- (void)wchook_resetSwipeAnimated:(BOOL)animated;
@end

static BOOL wcpl_isTargetChatForSearchButton(id viewController) {
    if (!viewController) {
        return NO;
    }

    // 仅对聊天页控制器启用，避免误伤其它页面。
    //
    // ⚠️ 历史日志里出现过：objc_getClass("BaseMsgContentViewController") 返回 nil，
    // 导致 BaseMsgContentViewController 场景被误判为 NO（搜索按钮因此完全不注入）。
    // 所以这里必须准备“类名/selector”兜底，保证注入链路稳定。

    Class baseChatClass = objc_getClass("BaseMsgContentViewController");
    if (!baseChatClass) {
        baseChatClass = NSClassFromString(@"BaseMsgContentViewController");
    }
    if (baseChatClass && [viewController isKindOfClass:baseChatClass]) {
        return YES;
    }

    NSString *className = NSStringFromClass([viewController class]) ?: @"";
    if ([className isEqualToString:@"BaseMsgContentViewController"]) {
        return YES;
    }

    // 兜底：部分机型/版本可能存在混淆或继承链差异，做一个弱匹配。
    if ([className rangeOfString:@"MsgContentViewController"].location != NSNotFound) {
        return YES;
    }

    // 再兜底：用 selector 做弱特征，避免仅靠 class 名称在混淆/变体下失效。
    if ([viewController respondsToSelector:@selector(GetContact)] &&
        ([viewController respondsToSelector:@selector(handleMsgUpdateRightBar)] ||
         [viewController respondsToSelector:@selector(updateRightBar)])) {
        return YES;
    }

    return NO;
}

static UIImage *wcpl_chatSearchButtonIconImage(void) {
    static UIImage *icon = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        UIImage *searchIcon = nil;
        if ([UIImage respondsToSelector:@selector(systemImageNamed:withConfiguration:)]) {
            UIImageSymbolConfiguration *config = [UIImageSymbolConfiguration configurationWithPointSize:17 weight:UIImageSymbolWeightRegular scale:UIImageSymbolScaleMedium];
            searchIcon = [UIImage systemImageNamed:@"magnifyingglass" withConfiguration:config];
        }
        if (!searchIcon && [UIImage respondsToSelector:@selector(systemImageNamed:)]) {
            searchIcon = [UIImage systemImageNamed:@"magnifyingglass"];
        }
        if (searchIcon && [searchIcon respondsToSelector:@selector(imageWithRenderingMode:)]) {
            searchIcon = [searchIcon imageWithRenderingMode:UIImageRenderingModeAlwaysTemplate];
        }
        icon = searchIcon;
    });
    return icon;
}

static BOOL wcpl_barButtonItemHasRenderableContent(UIBarButtonItem *item) {
    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        return NO;
    }

    CGFloat itemWidth = 0.0f;
    @try {
        itemWidth = item.width;
    } @catch (__unused NSException *exception) {
        itemWidth = 0.0f;
    }

    UIView *customView = nil;
    @try {
        customView = item.customView;
    } @catch (__unused NSException *exception) {
        customView = nil;
    }
    if ([customView isKindOfClass:[UIView class]]) {
        CGFloat customWidth = CGRectGetWidth(customView.bounds);
        if (customWidth <= 0.1f) {
            customWidth = CGRectGetWidth(customView.frame);
        }

        // 某些版本的 MMBarItemCustomView 在未入层级前 frame/bounds 可能为 0，
        // 这里尽量触发一次自适应尺寸，避免误判“空按钮”。
        if (customWidth <= 0.1f) {
            @try {
                [customView setNeedsLayout];
                [customView layoutIfNeeded];
                if ([customView respondsToSelector:@selector(sizeToFit)]) {
                    [customView sizeToFit];
                }
            } @catch (__unused NSException *exception) {
            }

            customWidth = CGRectGetWidth(customView.bounds);
            if (customWidth <= 0.1f) {
                customWidth = CGRectGetWidth(customView.frame);
            }
        }

        if ([customView isKindOfClass:[UIButton class]]) {
            UIButton *btn = (UIButton *)customView;
            UIImage *btnImage = [btn imageForState:UIControlStateNormal];
            NSString *btnTitle = [btn titleForState:UIControlStateNormal] ?: @"";
            if ([btnImage isKindOfClass:[UIImage class]] || btnTitle.length > 0) {
                return YES;
            }
        }

        // 仅用宽度判断会在“布局尚未完成”时误判为不可见，导致按钮反复重建从而闪烁。
        // 但“只要有子视图就算可见”也过于宽松：资源缺失时会拿到空壳 view，
        // 看起来就像“按钮不见了”。所以这里要求子视图具备真实内容或有效尺寸。
        NSArray<UIView *> *subviews = customView.subviews;
        if ([subviews isKindOfClass:[NSArray class]] && subviews.count > 0) {
            for (UIView *subview in subviews) {
                if (![subview isKindOfClass:[UIView class]]) {
                    continue;
                }
                if (subview.hidden || subview.alpha <= 0.01f) {
                    continue;
                }

                CGFloat w = CGRectGetWidth(subview.bounds);
                CGFloat h = CGRectGetHeight(subview.bounds);
                if (w <= 0.1f || h <= 0.1f) {
                    CGRect frame = subview.frame;
                    if (w <= 0.1f) {
                        w = CGRectGetWidth(frame);
                    }
                    if (h <= 0.1f) {
                        h = CGRectGetHeight(frame);
                    }
                }

                if ([subview isKindOfClass:[UIImageView class]]) {
                    UIImage *image = ((UIImageView *)subview).image;
                    if ([image isKindOfClass:[UIImage class]]) {
                        return YES;
                    }
                }

                if ([subview isKindOfClass:[UIButton class]]) {
                    UIButton *btn = (UIButton *)subview;
                    UIImage *btnImage = [btn imageForState:UIControlStateNormal];
                    NSString *btnTitle = [btn titleForState:UIControlStateNormal] ?: @"";
                    if ([btnImage isKindOfClass:[UIImage class]] || btnTitle.length > 0) {
                        return YES;
                    }
                }

                if ([subview isKindOfClass:[UILabel class]]) {
                    NSString *text = ((UILabel *)subview).text ?: @"";
                    if (text.length > 0) {
                        return YES;
                    }
                }

                // 兜底：子视图已有稳定尺寸时，一般也能正常渲染。
                if (w >= 16.0f && h >= 16.0f) {
                    return YES;
                }
            }
        }

        // 密友同款按钮正常宽度约 30+，10 这类宽度通常是空占位，视为不可见。
        if (itemWidth >= 20.0f || customWidth >= 20.0f) {
            return YES;
        }
    }

    NSString *title = [item.title isKindOfClass:[NSString class]] ? item.title : @"";
    if (title.length > 0) {
        return YES;
    }

    if ([item respondsToSelector:@selector(image)]) {
        @try {
            UIImage *image = ((UIImage * (*)(id, SEL))objc_msgSend)(item, @selector(image));
            if ([image isKindOfClass:[UIImage class]]) {
                return YES;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    if ([item respondsToSelector:@selector(landscapeImagePhone)]) {
        @try {
            UIImage *landscapeImage = ((UIImage * (*)(id, SEL))objc_msgSend)(item, @selector(landscapeImagePhone));
            if ([landscapeImage isKindOfClass:[UIImage class]]) {
                return YES;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    if (itemWidth >= 20.0f) {
        return YES;
    }

    return NO;
}

static NSString *wcpl_barButtonItemDebugSummary(UIBarButtonItem *item) {
    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        return @"<nil>";
    }

    NSString *cls = NSStringFromClass([item class]) ?: @"Unknown";
    NSString *title = [item.title isKindOfClass:[NSString class]] ? item.title : @"";
    NSString *action = wcpl_barButtonActionName(item);

    NSString *imageState = @"n/a";
    if ([item respondsToSelector:@selector(image)]) {
        @try {
            imageState = ((UIImage * (*)(id, SEL))objc_msgSend)(item, @selector(image)) ? @"yes" : @"no";
        } @catch (__unused NSException *exception) {
            imageState = @"err";
        }
    }

    NSString *customViewClass = @"nil";
    CGFloat customWidth = 0.0f;
    @try {
        UIView *customView = item.customView;
        if ([customView isKindOfClass:[UIView class]]) {
            customViewClass = NSStringFromClass([customView class]) ?: @"UIView";
            customWidth = CGRectGetWidth(customView.bounds);
            if (customWidth <= 0.1f) {
                customWidth = CGRectGetWidth(customView.frame);
            }
        }
    } @catch (__unused NSException *exception) {
        customViewClass = @"err";
        customWidth = 0.0f;
    }

    CGFloat width = 0.0f;
    @try {
        width = item.width;
    } @catch (__unused NSException *exception) {
        width = 0.0f;
    }

    return [NSString stringWithFormat:@"class=%@ action=%@ title=%@ image=%@ custom=%@ customW=%.1f width=%.1f",
            cls, action.length > 0 ? action : @"<none>", title.length > 0 ? title : @"<none>", imageState, customViewClass, customWidth, width];
}

static UIControl *wcpl_findFirstControlInView(UIView *root, NSUInteger depth) {
    if (![root isKindOfClass:[UIView class]] || depth > 8) {
        return nil;
    }
    if ([root isKindOfClass:[UIControl class]]) {
        return (UIControl *)root;
    }
    NSArray<UIView *> *subviews = root.subviews;
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return nil;
    }
    for (UIView *child in subviews) {
        UIControl *control = wcpl_findFirstControlInView(child, depth + 1);
        if ([control isKindOfClass:[UIControl class]]) {
            return control;
        }
    }
    return nil;
}

static void wcpl_configureSearchButtonControl(UIControl *control) {
    if (![control isKindOfClass:[UIControl class]]) {
        return;
    }

    // 体验对齐密友：点击不出现“闪一下”的高亮/变暗效果。
    if ([control respondsToSelector:@selector(setShowsTouchWhenHighlighted:)]) {
        @try {
            ((void (*)(id, SEL, BOOL))objc_msgSend)(control, @selector(setShowsTouchWhenHighlighted:), NO);
        } @catch (__unused NSException *exception) {
        }
    }

    if ([control isKindOfClass:[UIButton class]]) {
        UIButton *button = (UIButton *)control;
        button.adjustsImageWhenHighlighted = NO;
        button.adjustsImageWhenDisabled = NO;
        if (button.alpha < 0.99f) {
            button.alpha = 1.0f;
        }
    }
}

static void wcpl_forceBindSearchButtonAction(UIBarButtonItem *item, id viewController, NSString *sourceTag) {
    if (![item isKindOfClass:[UIBarButtonItem class]] || !viewController) {
        return;
    }

    SEL searchSel = @selector(onSearchItem);
    // 对齐密友：按钮 action 直接指向 onSearchItem（尽量避免额外桥接 selector）。
    SEL tapSel = [viewController respondsToSelector:searchSel] ? searchSel : @selector(wcpl_onTapChatSearchButton:);

    @try {
        item.target = viewController;
        item.action = tapSel;
        item.enabled = YES;
    } @catch (__unused NSException *exception) {
    }

    UIView *customView = nil;
    @try {
        customView = item.customView;
    } @catch (__unused NSException *exception) {
        customView = nil;
    }
    if ([customView isKindOfClass:[UIView class]]) {
        customView.userInteractionEnabled = YES;
        if ([customView isKindOfClass:[UIControl class]]) {
            wcpl_configureSearchButtonControl((UIControl *)customView);
        }
    }

    UIControl *targetControl = nil;
    if ([customView respondsToSelector:@selector(barButton)]) {
        @try {
            id barButton = ((id (*)(id, SEL))objc_msgSend)(customView, @selector(barButton));
            if ([barButton isKindOfClass:[UIControl class]]) {
                targetControl = (UIControl *)barButton;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    if (![targetControl isKindOfClass:[UIControl class]] && [customView isKindOfClass:[UIControl class]]) {
        targetControl = (UIControl *)customView;
    }

    if (![targetControl isKindOfClass:[UIControl class]]) {
        targetControl = wcpl_findFirstControlInView(customView, 0);
    }

    if ([targetControl isKindOfClass:[UIControl class]]) {
        @try {
            [targetControl removeTarget:nil action:NULL forControlEvents:UIControlEventTouchUpInside];
            [targetControl addTarget:viewController action:tapSel forControlEvents:UIControlEventTouchUpInside];
            targetControl.userInteractionEnabled = YES;
            wcpl_configureSearchButtonControl(targetControl);
            WCPLLogInfo(@"[搜索按钮] 绑定点击链路 source=%@ control=%@ action=%@",
                        sourceTag ?: @"unknown",
                        NSStringFromClass([targetControl class]) ?: @"UIControl",
                        NSStringFromSelector(tapSel));
            return;
        } @catch (__unused NSException *exception) {
        }
    }

    // 兜底：至少确保 barButtonItem 自身 action 指向 onSearchItem（或桥接 selector）。
    @try {
        item.target = viewController;
        item.action = [viewController respondsToSelector:searchSel] ? searchSel : @selector(wcpl_onTapChatSearchButton:);
        item.enabled = YES;
    } @catch (__unused NSException *exception) {
    }

    WCPLLogInfo(@"[搜索按钮] 未找到可绑定 control，保留 barButtonItem action source=%@ item=%@",
                sourceTag ?: @"unknown",
                wcpl_barButtonItemDebugSummary(item));
}

static BOOL wcpl_isInjectedChatSearchButtonItem(UIBarButtonItem *item) {
    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        return NO;
    }
    id marker = objc_getAssociatedObject(item, kWCPLChatSearchNavButtonTagKey);
    if ([marker respondsToSelector:@selector(boolValue)] && [marker boolValue]) {
        return YES;
    }
    return NO;
}

static BOOL wcpl_barButtonItemArrayPointerEqual(NSArray<UIBarButtonItem *> *lhs, NSArray<UIBarButtonItem *> *rhs) {
    if (lhs == rhs) {
        return YES;
    }
    if (![lhs isKindOfClass:[NSArray class]] || ![rhs isKindOfClass:[NSArray class]]) {
        return NO;
    }
    if (lhs.count != rhs.count) {
        return NO;
    }
    for (NSUInteger i = 0; i < lhs.count; i++) {
        if (lhs[i] != rhs[i]) {
            return NO;
        }
    }
    return YES;
}

static BOOL wcpl_barButtonItemEquivalent(UIBarButtonItem *lhs, UIBarButtonItem *rhs) {
    if (lhs == rhs) {
        return YES;
    }
    if (![lhs isKindOfClass:[UIBarButtonItem class]] || ![rhs isKindOfClass:[UIBarButtonItem class]]) {
        return NO;
    }

    BOOL lhsInjected = wcpl_isInjectedChatSearchButtonItem(lhs);
    BOOL rhsInjected = wcpl_isInjectedChatSearchButtonItem(rhs);
    if (lhsInjected || rhsInjected) {
        return lhsInjected && rhsInjected;
    }

    NSString *lhsAction = wcpl_barButtonActionName(lhs);
    NSString *rhsAction = wcpl_barButtonActionName(rhs);
    if ((lhsAction.length > 0 || rhsAction.length > 0) && ![lhsAction isEqualToString:rhsAction]) {
        return NO;
    }

    NSString *lhsTitle = [lhs.title isKindOfClass:[NSString class]] ? lhs.title : @"";
    NSString *rhsTitle = [rhs.title isKindOfClass:[NSString class]] ? rhs.title : @"";
    if ((lhsTitle.length > 0 || rhsTitle.length > 0) && ![lhsTitle isEqualToString:rhsTitle]) {
        return NO;
    }

    NSString *lhsClass = NSStringFromClass([lhs class]) ?: @"";
    NSString *rhsClass = NSStringFromClass([rhs class]) ?: @"";
    return [lhsClass isEqualToString:rhsClass];
}

static BOOL wcpl_barButtonItemArrayEquivalent(NSArray<UIBarButtonItem *> *lhs, NSArray<UIBarButtonItem *> *rhs) {
    if (wcpl_barButtonItemArrayPointerEqual(lhs, rhs)) {
        return YES;
    }
    if (![lhs isKindOfClass:[NSArray class]] || ![rhs isKindOfClass:[NSArray class]]) {
        return NO;
    }
    if (lhs.count != rhs.count) {
        return NO;
    }
    for (NSUInteger i = 0; i < lhs.count; i++) {
        if (!wcpl_barButtonItemEquivalent(lhs[i], rhs[i])) {
            return NO;
        }
    }
    return YES;
}

static void wcpl_setRightBarButtonItemsWithoutAnimation(UINavigationItem *navigationItem,
                                                         NSArray<UIBarButtonItem *> *items) {
    if (![navigationItem isKindOfClass:[UINavigationItem class]]) {
        return;
    }
    NSArray<UIBarButtonItem *> *safeItems = [items isKindOfClass:[NSArray class]] ? items : @[];
    if ([navigationItem respondsToSelector:@selector(setRightBarButtonItems:animated:)]) {
        [UIView performWithoutAnimation:^{
            [navigationItem setRightBarButtonItems:safeItems animated:NO];
        }];
    } else {
        [UIView performWithoutAnimation:^{
            navigationItem.rightBarButtonItems = safeItems;
        }];
    }
}

static UIBarButtonItem *wcpl_controllerCurrentNativeRightItem(id viewController, NSArray<UIBarButtonItem *> *items) {
    (void)viewController;
    // 稳定性优先：不要主动触发 getRightBarButton* 动态链路。
    // 新版本群聊场景里该链路可能把 NSString 当联系人，进而触发 isChatroom 崩溃。

    for (UIBarButtonItem *item in items) {
        if (wcpl_isInjectedChatSearchButtonItem(item)) {
            continue;
        }
        if (wcpl_barButtonItemLooksLikeMoreEntry(item)) {
            return item;
        }
    }

    for (UIBarButtonItem *item in items) {
        if (!wcpl_isInjectedChatSearchButtonItem(item)) {
            return item;
        }
    }

    return nil;
}

static BOOL wcpl_stringContainsAnyToken(NSString *value, NSArray<NSString *> *tokens) {
    if (![value isKindOfClass:[NSString class]] || value.length == 0) {
        return NO;
    }
    NSString *lower = value.lowercaseString ?: @"";
    if (lower.length == 0) {
        return NO;
    }
    for (NSString *token in tokens) {
        if (![token isKindOfClass:[NSString class]] || token.length == 0) {
            continue;
        }
        if ([lower rangeOfString:token].location != NSNotFound) {
            return YES;
        }
    }
    return NO;
}

static NSString *wcpl_barButtonActionName(UIBarButtonItem *item) {
    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        return @"";
    }
    SEL action = item.action;
    if (!action) {
        return @"";
    }
    NSString *selName = NSStringFromSelector(action);
    return [selName isKindOfClass:[NSString class]] ? selName : @"";
}

static __attribute__((unused)) BOOL wcpl_barButtonItemLooksLikeSearchOrDateEntry(UIBarButtonItem *item) {
    if (![item isKindOfClass:[UIBarButtonItem class]] || wcpl_isInjectedChatSearchButtonItem(item)) {
        return NO;
    }

    static NSArray<NSString *> *enTokens = nil;
    static NSArray<NSString *> *zhTokens = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        enTokens = @[@"search", @"msgsearch", @"date", @"calendar", @"time"];
        zhTokens = @[@"搜索", @"查找", @"日期", @"时间"];
    });

    NSString *title = [item.title isKindOfClass:[NSString class]] ? item.title : @"";
    NSString *label = [item.accessibilityLabel isKindOfClass:[NSString class]] ? item.accessibilityLabel : @"";
    NSString *hint = [item.accessibilityHint isKindOfClass:[NSString class]] ? item.accessibilityHint : @"";
    NSString *actionName = wcpl_barButtonActionName(item);
    if (wcpl_stringContainsAnyToken(actionName, enTokens) ||
        wcpl_stringContainsAnyToken(title, enTokens) ||
        wcpl_stringContainsAnyToken(label, enTokens) ||
        wcpl_stringContainsAnyToken(hint, enTokens) ||
        wcpl_stringContainsAnyToken(title, zhTokens) ||
        wcpl_stringContainsAnyToken(label, zhTokens) ||
        wcpl_stringContainsAnyToken(hint, zhTokens)) {
        return YES;
    }

    UIView *customView = item.customView;
    NSString *customClass = [customView isKindOfClass:[UIView class]] ? (NSStringFromClass([customView class]) ?: @"") : @"";
    if (wcpl_stringContainsAnyToken(customClass, enTokens) || wcpl_classNameContainsSearchToken(customClass)) {
        return YES;
    }
    if ([customView isKindOfClass:[UIView class]] && wcpl_viewTreeHasSearchLikeNode(customView, 0)) {
        return YES;
    }

    return NO;
}

static BOOL wcpl_barButtonItemLooksLikeMoreEntry(UIBarButtonItem *item) {
    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        return NO;
    }

    static NSArray<NSString *> *tokens = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        tokens = @[@"more", @"menu", @"right", @"setting", @"chatroom", @"更多", @"菜单", @"设置"];
    });

    NSString *title = [item.title isKindOfClass:[NSString class]] ? item.title : @"";
    NSString *label = [item.accessibilityLabel isKindOfClass:[NSString class]] ? item.accessibilityLabel : @"";
    NSString *hint = [item.accessibilityHint isKindOfClass:[NSString class]] ? item.accessibilityHint : @"";
    NSString *actionName = wcpl_barButtonActionName(item);
    if (wcpl_stringContainsAnyToken(actionName, tokens) ||
        wcpl_stringContainsAnyToken(title, tokens) ||
        wcpl_stringContainsAnyToken(label, tokens) ||
        wcpl_stringContainsAnyToken(hint, tokens)) {
        return YES;
    }

    UIView *customView = item.customView;
    NSString *customClass = [customView isKindOfClass:[UIView class]] ? (NSStringFromClass([customView class]) ?: @"") : @"";
    if (wcpl_stringContainsAnyToken(customClass, tokens)) {
        return YES;
    }

    return NO;
}

static UIBarButtonItem *wcpl_chatSearchNavButtonItem(id viewController) {
    if (!viewController) {
        return nil;
    }

    UIBarButtonItem *item = objc_getAssociatedObject(viewController, kWCPLChatSearchNavButtonKey);
    if ([item isKindOfClass:[UIBarButtonItem class]]) {
        // 不要因为“布局尚未完成”的宽度/内容误判为不可见而反复重建。
        // 反复重建会导致右上角按钮出现肉眼可见的闪烁。
        return item;
    }

    NSArray<NSString *> *iconNames = @[
        @"icons_outlined_search",
        @"icons_filled_search",
        @"icons_filled_magnifier",
        @"barbuttonicon_search",
        @"icon_search",
        @"search",
        // 部分版本该资源名会返回“空壳按钮”（宽度 10 左右，实际不显示），放后面兜底。
        @"ui-resource_search",
        @"Q"
    ];
    NSArray<NSString *> *accessibilityNames = @[
        @"查找聊天内容",
        @"搜索",
        @"Search"
    ];

    SEL factorySel = @selector(getBarButtonWithImageName:target:action:style:accessibility:);
    Class utilClass = objc_getClass("MMUICommonUtil");
    if (utilClass && [utilClass respondsToSelector:factorySel]) {
        for (NSString *iconName in iconNames) {
            for (NSString *accessibility in accessibilityNames) {
                @try {
                    id generated = ((id (*)(id, SEL, id, id, SEL, unsigned long long, id))objc_msgSend)(
                        utilClass, factorySel, iconName, viewController, @selector(onSearchItem), (unsigned long long)2, accessibility);
                    if ([generated isKindOfClass:[UIBarButtonItem class]] &&
                        wcpl_barButtonItemHasRenderableContent((UIBarButtonItem *)generated)) {
                        wcpl_forceBindSearchButtonAction((UIBarButtonItem *)generated, viewController, @"MMUICommonUtil");
                        item = generated;
                        WCPLLogInfo(@"[搜索按钮] MMUICommonUtil 生成成功 icon=%@ accessibility=%@ -> %@",
                                    iconName, accessibility, wcpl_barButtonItemDebugSummary((UIBarButtonItem *)generated));
                        break;
                    }
                } @catch (__unused NSException *exception) {
                }
            }
            if ([item isKindOfClass:[UIBarButtonItem class]]) {
                break;
            }
        }
    }

    if (![item isKindOfClass:[UIBarButtonItem class]] && [viewController respondsToSelector:factorySel]) {
        for (NSString *iconName in iconNames) {
            for (NSString *accessibility in accessibilityNames) {
                @try {
                    id generated = ((id (*)(id, SEL, id, id, SEL, unsigned long long, id))objc_msgSend)(
                        viewController, factorySel, iconName, viewController, @selector(onSearchItem), (unsigned long long)2, accessibility);
                    if ([generated isKindOfClass:[UIBarButtonItem class]] &&
                        wcpl_barButtonItemHasRenderableContent((UIBarButtonItem *)generated)) {
                        wcpl_forceBindSearchButtonAction((UIBarButtonItem *)generated, viewController, @"controllerFactory");
                        item = generated;
                        WCPLLogInfo(@"[搜索按钮] controller 工厂生成成功 icon=%@ accessibility=%@ -> %@",
                                    iconName, accessibility, wcpl_barButtonItemDebugSummary((UIBarButtonItem *)generated));
                        break;
                    }
                } @catch (__unused NSException *exception) {
                }
            }
            if ([item isKindOfClass:[UIBarButtonItem class]]) {
                break;
            }
        }
    }

    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        UIImage *icon = wcpl_chatSearchButtonIconImage();
        UIButton *compactButton = [UIButton buttonWithType:UIButtonTypeSystem];
        compactButton.frame = CGRectMake(0, 0, 32.0, 32.0);
        compactButton.contentHorizontalAlignment = UIControlContentHorizontalAlignmentCenter;
        compactButton.contentVerticalAlignment = UIControlContentVerticalAlignmentCenter;
        compactButton.adjustsImageWhenHighlighted = NO;
        compactButton.accessibilityLabel = @"查找聊天内容";
        [compactButton addTarget:viewController action:@selector(onSearchItem) forControlEvents:UIControlEventTouchUpInside];

        if (icon && [compactButton respondsToSelector:@selector(setImage:forState:)]) {
            if ([compactButton respondsToSelector:@selector(setPreferredSymbolConfiguration:forImageInState:)]) {
                UIImageSymbolConfiguration *config = [UIImageSymbolConfiguration configurationWithPointSize:16 weight:UIImageSymbolWeightRegular];
                [compactButton setPreferredSymbolConfiguration:config forImageInState:UIControlStateNormal];
            }
            [compactButton setImage:icon forState:UIControlStateNormal];
        } else {
            [compactButton setTitle:@"搜" forState:UIControlStateNormal];
            compactButton.titleLabel.font = [UIFont systemFontOfSize:15.0 weight:UIFontWeightRegular];
        }

        item = [[UIBarButtonItem alloc] initWithCustomView:compactButton];
        wcpl_forceBindSearchButtonAction(item, viewController, @"fallbackCustomView");
        WCPLLogInfo(@"[搜索按钮] 工厂未命中，使用 customView 回退按钮");
    }

    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        WCPLLogInfo(@"[搜索按钮] 创建失败：最终未得到 UIBarButtonItem");
        return nil;
    }

    wcpl_forceBindSearchButtonAction(item, viewController, @"finalEnsure");

    item.accessibilityLabel = @"查找聊天内容";
    objc_setAssociatedObject(item, kWCPLChatSearchNavButtonTagKey, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(viewController, kWCPLChatSearchNavButtonKey, item, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return item;
}

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
    } @catch (__unused NSException *exception) {
    }

    return NO;
}

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

static UIView *wcpl_safeViewIfLoaded(UIViewController *viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return nil;
    }

    if ([viewController respondsToSelector:@selector(isViewLoaded)] &&
        !((BOOL (*)(id, SEL))objc_msgSend)(viewController, @selector(isViewLoaded))) {
        return nil;
    }

    UIView *view = viewController.view;
    return [view isKindOfClass:[UIView class]] ? view : nil;
}

static NSUInteger wcpl_controllerRootSearchResidualNodeCount(id viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return 0;
    }

    UIViewController *controller = (UIViewController *)viewController;
    NSUInteger count = 0;
    UINavigationBar *navBar = wcpl_navigationBarFromController(viewController);

    UIView *controllerView = wcpl_safeViewIfLoaded(controller);
    if (controllerView) {
        count += wcpl_rootSearchResidualNodeCountInTree(controllerView, navBar, 0);
    }

    UINavigationController *navigationController = controller.navigationController;
    if ([navigationController isKindOfClass:[UINavigationController class]]) {
        UIView *navRootView = wcpl_safeViewIfLoaded(navigationController);
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

    UIView *controllerView = wcpl_safeViewIfLoaded(controller);
    if (controllerView) {
        wcpl_collectRootSearchResidualNodesInTree(controllerView, navBar, 0, nodes, maxNodes);
    }

    UINavigationController *navigationController = controller.navigationController;
    if ([navigationController isKindOfClass:[UINavigationController class]] && nodes.count < maxNodes) {
        UIView *navRootView = wcpl_safeViewIfLoaded(navigationController);
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
        UIView *controllerView = wcpl_safeViewIfLoaded(controller);
        if ([controllerView isKindOfClass:[UIView class]] && [controllerView.window isKindOfClass:[UIWindow class]]) {
            return controllerView.window;
        }

        UINavigationController *navigationController = controller.navigationController;
        if ([navigationController isKindOfClass:[UINavigationController class]]) {
            UIView *navView = wcpl_safeViewIfLoaded(navigationController);
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

    UIView *controllerView = wcpl_safeViewIfLoaded(viewController);
    if (controllerView) {
        changed |= wcpl_softHideRootSearchResidualNodesFromTree(controllerView, navBar, 0, &hiddenCount);
        [controllerView setNeedsLayout];
        [controllerView layoutIfNeeded];
    }

    UINavigationController *navigationController = viewController.navigationController;
    if ([navigationController isKindOfClass:[UINavigationController class]]) {
        UIView *navRootView = wcpl_safeViewIfLoaded(navigationController);
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
        UIView *presentedView = wcpl_safeViewIfLoaded(presentedBySelf);
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
        UIView *presentedView = wcpl_safeViewIfLoaded(presentedByNav);
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
    UIView *controllerView = wcpl_safeViewIfLoaded(viewController);
    if ([controllerView isKindOfClass:[UIView class]]) {
        if (wcpl_softDisableSearchOverlayInTree(controllerView, navigationBar, controllerView, stage, 0, &disabledCount)) {
            changed = YES;
        }
    }
    UIView *navView = [navigationController isKindOfClass:[UINavigationController class]] ? wcpl_safeViewIfLoaded(navigationController) : nil;
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
        UIView *presentedView = wcpl_safeViewIfLoaded(presentedBySelf);
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
        UIView *presentedView = wcpl_safeViewIfLoaded(presentedByNav);
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
        UIView *controllerView = wcpl_safeViewIfLoaded((UIViewController *)controller);
        if ([controllerView isKindOfClass:[UIView class]]) {
            [controllerView setNeedsLayout];
            [controllerView layoutIfNeeded];
        }
        UINavigationController *navigationController = ((UIViewController *)controller).navigationController;
        UIView *navView = [navigationController isKindOfClass:[UINavigationController class]] ? wcpl_safeViewIfLoaded(navigationController) : nil;
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
    UIView *controllerView = wcpl_safeViewIfLoaded(viewController);
    UINavigationController *navigationController = viewController.navigationController;
    UIView *navView = [navigationController isKindOfClass:[UINavigationController class]] ? wcpl_safeViewIfLoaded(navigationController) : nil;
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

static UIBarButtonItem *wcpl_controllerGetRightBarButtonSafe(id viewController) {
    if (!viewController) {
        return nil;
    }

    // 激进模式（对齐密友）：优先从 controller 直接取 getRightBarButton。
    // 该链路可能触发微信内部动态构造按钮，为避免异常导致崩溃，全程 @try 包裹。
    SEL sel = @selector(getRightBarButton);
    if ([viewController respondsToSelector:sel]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(viewController, sel);
            if ([value isKindOfClass:[UIBarButtonItem class]]) {
                return (UIBarButtonItem *)value;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    SEL sel2 = @selector(getRightBarButton:);
    if ([viewController respondsToSelector:sel2]) {
        @try {
            id value = ((id (*)(id, SEL, BOOL))objc_msgSend)(viewController, sel2, NO);
            if ([value isKindOfClass:[UIBarButtonItem class]]) {
                return (UIBarButtonItem *)value;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    return nil;
}

static void wcpl_applyChatSearchRightBarMiYouStyle(id viewController, UIBarButtonItem *nativeCandidate, NSString *stage) {
    if (!viewController || ![viewController isKindOfClass:[UIViewController class]]) {
        return;
    }

    UINavigationItem *navigationItem = ((UIViewController *)viewController).navigationItem;
    if (![navigationItem isKindOfClass:[UINavigationItem class]]) {
        return;
    }

    NSArray<UIBarButtonItem *> *currentItems = nil;
    if ([navigationItem.rightBarButtonItems isKindOfClass:[NSArray class]] && navigationItem.rightBarButtonItems.count > 0) {
        currentItems = navigationItem.rightBarButtonItems;
    } else if ([navigationItem.rightBarButtonItem isKindOfClass:[UIBarButtonItem class]]) {
        currentItems = @[navigationItem.rightBarButtonItem];
    } else {
        currentItems = @[];
    }

    NSMutableArray<UIBarButtonItem *> *filteredItems = [NSMutableArray arrayWithCapacity:currentItems.count];
    for (UIBarButtonItem *item in currentItems) {
        if (!wcpl_isInjectedChatSearchButtonItem(item)) {
            [filteredItems addObject:item];
        }
    }

    BOOL targetChat = wcpl_isTargetChatForSearchButton(viewController);
    BOOL showingSearch = wcpl_isControllerShowingSearchUI(viewController);
    WCPLLogDebug(@"[搜索按钮] miyou_style vc=%@ target=%@ showingSearch=%@ stage=%@ right=%lu filtered=%lu",
                 NSStringFromClass([viewController class]) ?: @"unknown",
                 targetChat ? @"YES" : @"NO",
                 showingSearch ? @"YES" : @"NO",
                 stage ?: @"<none>",
                 (unsigned long)currentItems.count,
                 (unsigned long)filteredItems.count);

    // 非聊天页：只做“清掉注入按钮”的收敛。
    if (!targetChat) {
        if (!wcpl_barButtonItemArrayEquivalent(currentItems ?: @[], filteredItems ?: @[])) {
            wcpl_setRightBarButtonItemsWithoutAnimation(navigationItem, filteredItems);
        }
        return;
    }

    if (showingSearch) {
        return;
    }

    UIBarButtonItem *nativeItem = ([nativeCandidate isKindOfClass:[UIBarButtonItem class]] &&
                                   !wcpl_isInjectedChatSearchButtonItem(nativeCandidate))
        ? nativeCandidate
        : nil;

    if (![nativeItem isKindOfClass:[UIBarButtonItem class]]) {
        nativeItem = wcpl_controllerCurrentNativeRightItem(viewController, filteredItems);
    }
    if (![nativeItem isKindOfClass:[UIBarButtonItem class]]) {
        for (UIBarButtonItem *candidate in filteredItems) {
            if (![candidate isKindOfClass:[UIBarButtonItem class]] || wcpl_isInjectedChatSearchButtonItem(candidate)) {
                continue;
            }
            nativeItem = candidate;
            break;
        }
    }

    if (![nativeItem isKindOfClass:[UIBarButtonItem class]]) {
        WCPLLogDebug(@"[搜索按钮] miyou_style skip: native item not ready vc=%@ stage=%@",
                     NSStringFromClass([viewController class]) ?: @"unknown",
                     stage ?: @"<none>");
        return;
    }

    UIBarButtonItem *searchButtonItem = wcpl_chatSearchNavButtonItem(viewController);
    if (![searchButtonItem isKindOfClass:[UIBarButtonItem class]]) {
        WCPLLogInfo(@"[搜索按钮] miyou_style 生成搜索按钮失败 vc=%@ stage=%@",
                    NSStringFromClass([viewController class]) ?: @"unknown",
                    stage ?: @"<none>");
        return;
    }

    if (nativeItem.tintColor) {
        searchButtonItem.tintColor = nativeItem.tintColor;
        if ([searchButtonItem.customView isKindOfClass:[UIButton class]]) {
            ((UIButton *)searchButtonItem.customView).tintColor = nativeItem.tintColor;
        }
    }

    // 密友实现：固定两枚按钮（原生右键 + 搜索按钮），直接覆盖 rightBarButtonItems。
    NSArray<UIBarButtonItem *> *desiredItems = @[nativeItem, searchButtonItem];
    if (!wcpl_barButtonItemArrayEquivalent(currentItems ?: @[], desiredItems ?: @[])) {
        wcpl_setRightBarButtonItemsWithoutAnimation(navigationItem, desiredItems);
        WCPLLogInfo(@"[搜索按钮] miyou_style 已更新 rightBar stage=%@: native={%@} search={%@}",
                    stage ?: @"<none>",
                    wcpl_barButtonItemDebugSummary(nativeItem),
                    wcpl_barButtonItemDebugSummary(searchButtonItem));
    }
}

static void wcpl_updateChatSearchButtonForViewController(id viewController) {
    UIBarButtonItem *native = wcpl_controllerGetRightBarButtonSafe(viewController);
    wcpl_applyChatSearchRightBarMiYouStyle(viewController, native, @"update");
}

static BOOL wcpl_controllerHasInjectedChatSearchButton(id viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    UINavigationItem *navigationItem = ((UIViewController *)viewController).navigationItem;
    if (![navigationItem isKindOfClass:[UINavigationItem class]]) {
        return NO;
    }

    NSArray<UIBarButtonItem *> *rightItems = [navigationItem.rightBarButtonItems isKindOfClass:[NSArray class]]
        ? navigationItem.rightBarButtonItems
        : nil;
    if ([rightItems isKindOfClass:[NSArray class]] && rightItems.count > 0) {
        for (UIBarButtonItem *item in rightItems) {
            if (wcpl_isInjectedChatSearchButtonItem(item)) {
                return YES;
            }
        }
    }

    UIBarButtonItem *single = navigationItem.rightBarButtonItem;
    return wcpl_isInjectedChatSearchButtonItem(single);
}

static NSUInteger wcpl_nextChatSearchButtonRepairEpoch(id controller) {
    if (!controller) {
        return 0;
    }

    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchButtonRepairEpochKey);
    NSUInteger epoch = [marker respondsToSelector:@selector(unsignedIntegerValue)] ? [marker unsignedIntegerValue] : 0;
    epoch += 1;
    objc_setAssociatedObject(controller, kWCPLChatSearchButtonRepairEpochKey, @(epoch), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return epoch;
}

static NSUInteger wcpl_currentChatSearchButtonRepairEpoch(id controller) {
    if (!controller) {
        return 0;
    }

    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchButtonRepairEpochKey);
    return [marker respondsToSelector:@selector(unsignedIntegerValue)] ? [marker unsignedIntegerValue] : 0;
}

static void wcpl_scheduleChatSearchButtonRepair(id controller, NSString *stage) {
    if (!controller || ![controller isKindOfClass:[UIViewController class]]) {
        return;
    }

    void (^scheduleOnMain)(void) = ^{
        NSUInteger epoch = wcpl_nextChatSearchButtonRepairEpoch(controller);
        NSString *source = [stage isKindOfClass:[NSString class]] && stage.length > 0 ? stage : @"unknown";
        // 微信某些场景会在 1s+ 之后再次刷新右上角按钮，导致注入按钮被覆盖。
        // 这里拉长修复窗口，但依旧通过 epoch 防重入，避免无意义重复。
        NSArray<NSNumber *> *delays = @[@(0.08), @(0.35), @(0.95), @(1.8), @(3.0)];
        NSArray<NSString *> *tags = @[@"80ms", @"350ms", @"950ms", @"1800ms", @"3000ms"];
        for (NSUInteger idx = 0; idx < delays.count; idx++) {
            NSTimeInterval delay = [delays[idx] doubleValue];
            NSString *timeTag = idx < tags.count ? tags[idx] : @"retry";
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                if (wcpl_currentChatSearchButtonRepairEpoch(controller) != epoch) {
                    return;
                }
                if (!wcpl_isTargetChatForSearchButton(controller)) {
                    return;
                }
                if (wcpl_isControllerShowingSearchUI(controller)) {
                    WCPLLogDebug(@"[搜索按钮] 延迟修复跳过 source=%@(%@): 搜索界面进行中", source, timeTag);
                    return;
                }
                BOOL before = wcpl_controllerHasInjectedChatSearchButton(controller);
                wcpl_updateChatSearchButtonForViewController(controller);
                BOOL after = wcpl_controllerHasInjectedChatSearchButton(controller);
                if (!before && after) {
                    WCPLLogInfo(@"[搜索按钮] 延迟修复生效 source=%@(%@)", source, timeTag);
                }
            });
        }
    };

    if ([NSThread isMainThread]) {
        scheduleOnMain();
    } else {
        dispatch_async(dispatch_get_main_queue(), scheduleOnMain);
    }
}

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
        } @catch (__unused NSException *exception) {
        }
    }

    NSArray<NSString *> *controllerKeys = @[@"searcher", @"m_searcher"];
    for (NSString *key in controllerKeys) {
        @try {
            id value = [controller valueForKey:key];
            if (value) {
                return value;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    id helper = wcpl_msgSearchHelperFromController(controller);
    NSArray<NSString *> *helperKeys = @[@"searcher", @"m_searcher", @"searchController", @"m_searchController"];
    for (NSString *key in helperKeys) {
        @try {
            id value = [helper valueForKey:key];
            if (value) {
                return value;
            }
        } @catch (__unused NSException *exception) {
        }
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
        } @catch (__unused NSException *exception) {
        }
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
        } @catch (__unused NSException *exception) {
        }
    }

    if (!finished) {
        id helper = wcpl_msgSearchHelperFromController(controller);
        if (helper && [helper respondsToSelector:@selector(finishSearch)]) {
            @try {
                ((void (*)(id, SEL))objc_msgSend)(helper, @selector(finishSearch));
                finished = YES;
            } @catch (__unused NSException *exception) {
            }
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


// ===== merged boundary: CoreC =====

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
    } @catch (__unused NSException *exception) {
    }
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
        } @catch (__unused NSException *exception) {
        }
    }

    SEL setSpecialHelperSel = @selector(setM_specialMsgSearchHelper:);
    if ([controller respondsToSelector:setSpecialHelperSel]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(controller, setSpecialHelperSel, nil);
            touched = YES;
        } @catch (__unused NSException *exception) {
        }
    }

    @try {
        [controller setValue:nil forKey:@"m_oMsgSearchHelper"];
        touched = YES;
    } @catch (__unused NSException *exception) {
    }
    @try {
        [controller setValue:nil forKey:@"m_specialMsgSearchHelper"];
        touched = YES;
    } @catch (__unused NSException *exception) {
    }

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
        } @catch (__unused NSException *exception) {
        }
    }

    SEL setShowTimeSel = @selector(setM_bShowSearchByTime:);
    if ([helper respondsToSelector:setShowTimeSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(helper, setShowTimeSel, YES);
    } else {
        @try {
            [helper setValue:@YES forKey:@"m_bShowSearchByTime"];
        } @catch (__unused NSException *exception) {
        }
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
                } @catch (__unused NSException *exception) {
                }
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
        } @catch (__unused NSException *exception) {
        }
    }

    SEL setSearchingAltSel = @selector(setSearching:);
    if ([helper respondsToSelector:setSearchingAltSel]) {
        @try {
            ((void (*)(id, SEL, BOOL))objc_msgSend)(helper, setSearchingAltSel, NO);
            touched = YES;
        } @catch (__unused NSException *exception) {
        }
    }

    SEL setMSearchingSel = @selector(setM_bSearching:);
    if ([helper respondsToSelector:setMSearchingSel]) {
        @try {
            ((void (*)(id, SEL, BOOL))objc_msgSend)(helper, setMSearchingSel, NO);
            touched = YES;
        } @catch (__unused NSException *exception) {
        }
    }

    NSArray<NSString *> *keys = @[@"isSearching", @"m_bSearching"];
    for (NSString *key in keys) {
        @try {
            [helper setValue:@NO forKey:key];
            touched = YES;
        } @catch (__unused NSException *exception) {
        }
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

%end

%ctor {
    if (WCPL_ENABLE_MESSAGE_SEARCH_HOOK) {
        %init(WCPLMessageSearchCoreGroup);
    }
}
