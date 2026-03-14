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

static void wcpl_cacheChatSearchUserName(id viewController, NSString *userName) {
    if (!viewController) {
        return;
    }

    NSString *safeUserName = [userName isKindOfClass:[NSString class]] ? userName : nil;
    if (safeUserName.length == 0) {
        return;
    }

    objc_setAssociatedObject(viewController,
                             kWCPLChatSearchCachedUserNameKey,
                             [safeUserName copy],
                             OBJC_ASSOCIATION_COPY_NONATOMIC);
}

static NSString *wcpl_chatSearchUserNameFromController(id viewController) {
    if (!viewController) {
        return nil;
    }

    id cached = objc_getAssociatedObject(viewController, kWCPLChatSearchCachedUserNameKey);
    if ([cached isKindOfClass:[NSString class]] && ((NSString *)cached).length > 0) {
        return (NSString *)cached;
    }

    if (![viewController respondsToSelector:@selector(GetContact)]) {
        return nil;
    }

    @try {
        id contact = ((id (*)(id, SEL))objc_msgSend)(viewController, @selector(GetContact));
        NSString *userName = wcpl_safeUserNameFromObject(contact);
        wcpl_cacheChatSearchUserName(viewController, userName);
        return userName;
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static BOOL wcpl_shouldSkipChatSearchButtonInjection(id viewController,
                                                     NSString **reasonOut,
                                                     NSString **userNameOut) {
    NSString *userName = wcpl_chatSearchUserNameFromController(viewController);
    if (userNameOut) {
        *userNameOut = userName;
    }
    if (reasonOut) {
        *reasonOut = nil;
    }

    if (userName.length > 0 && [userName caseInsensitiveCompare:@"filehelper"] == NSOrderedSame) {
        if (reasonOut) {
            *reasonOut = @"filehelper_skip";
        }
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
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }

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
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    if ([item respondsToSelector:@selector(landscapeImagePhone)]) {
        @try {
            UIImage *landscapeImage = ((UIImage * (*)(id, SEL))objc_msgSend)(item, @selector(landscapeImagePhone));
            if ([landscapeImage isKindOfClass:[UIImage class]]) {
                return YES;
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
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
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
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
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }

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
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
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
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    // 兜底：至少确保 barButtonItem 自身 action 指向 onSearchItem（或桥接 selector）。
    @try {
        item.target = viewController;
        item.action = [viewController respondsToSelector:searchSel] ? searchSel : @selector(wcpl_onTapChatSearchButton:);
        item.enabled = YES;
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }

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

static BOOL wcpl_skipChatSearchButtonInjectionIfNeeded(id viewController, NSString *stage) {
    if (!viewController || ![viewController isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    NSString *reason = nil;
    NSString *userName = nil;
    if (!wcpl_shouldSkipChatSearchButtonInjection(viewController, &reason, &userName)) {
        return NO;
    }

    UINavigationItem *navigationItem = ((UIViewController *)viewController).navigationItem;
    if (![navigationItem isKindOfClass:[UINavigationItem class]]) {
        return YES;
    }

    NSArray<UIBarButtonItem *> *currentItems = nil;
    if ([navigationItem.rightBarButtonItems isKindOfClass:[NSArray class]] &&
        navigationItem.rightBarButtonItems.count > 0) {
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

    if (!wcpl_barButtonItemArrayEquivalent(currentItems ?: @[], filteredItems ?: @[])) {
        wcpl_setRightBarButtonItemsWithoutAnimation(navigationItem, filteredItems);
    }

    NSString *sourceStage = [stage isKindOfClass:[NSString class]] && stage.length > 0 ? stage : @"update";
    NSString *vcClass = NSStringFromClass([viewController class]) ?: @"unknown";
    WCPLLogWarning(@"[搜索按钮] 跳过注入 vc=%@ user=%@ stage=%@ reason=%@",
                   vcClass,
                   userName ?: @"",
                   sourceStage,
                   reason ?: @"unknown");
    WCPLCrashDiagnostic(@"chat_search stage=%@ action=skip_injection vc=%@ user=%@ reason=%@ right=%lu filtered=%lu",
                        sourceStage,
                        vcClass,
                        userName ?: @"",
                        reason ?: @"unknown",
                        (unsigned long)currentItems.count,
                        (unsigned long)filteredItems.count);
    return YES;
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
                } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
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
                } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
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


static UIBarButtonItem *wcpl_controllerGetRightBarButtonSafe(id viewController) {
    (void)viewController;
    // 群聊场景里主动触发 getRightBarButton* 动态链路不稳定；
    // 原生按钮改为仅从当前 navigationItem 上的现成项里解析。
    return nil;
}

static void wcpl_applyChatSearchRightBarMiYouStyle(id viewController, UIBarButtonItem *nativeCandidate, NSString *stage) {
    if (!viewController || ![viewController isKindOfClass:[UIViewController class]]) {
        return;
    }

    NSString *vcClass = NSStringFromClass([viewController class]) ?: @"unknown";
    NSString *chatUserName = wcpl_chatSearchUserNameFromController(viewController) ?: @"";
    NSString *sourceStage = [stage isKindOfClass:[NSString class]] && stage.length > 0 ? stage : @"update";
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
                 vcClass,
                 targetChat ? @"YES" : @"NO",
                 showingSearch ? @"YES" : @"NO",
                 sourceStage,
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
        WCPLCrashDiagnostic(@"chat_search stage=%@ action=skip_showing_search vc=%@ user=%@ right=%lu filtered=%lu",
                            sourceStage,
                            vcClass,
                            chatUserName,
                            (unsigned long)currentItems.count,
                            (unsigned long)filteredItems.count);
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
                     vcClass,
                     sourceStage);
        WCPLCrashDiagnostic(@"chat_search stage=%@ action=skip_native_not_ready vc=%@ user=%@ right=%lu filtered=%lu",
                            sourceStage,
                            vcClass,
                            chatUserName,
                            (unsigned long)currentItems.count,
                            (unsigned long)filteredItems.count);
        return;
    }

    UIBarButtonItem *searchButtonItem = wcpl_chatSearchNavButtonItem(viewController);
    if (![searchButtonItem isKindOfClass:[UIBarButtonItem class]]) {
        WCPLLogInfo(@"[搜索按钮] miyou_style 生成搜索按钮失败 vc=%@ stage=%@",
                    vcClass,
                    sourceStage);
        WCPLCrashDiagnostic(@"chat_search stage=%@ action=search_button_create_failed vc=%@ user=%@",
                            sourceStage,
                            vcClass,
                            chatUserName);
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
        WCPLCrashDiagnostic(@"chat_search stage=%@ action=rightbar_apply_pre vc=%@ user=%@ current=%lu desired=%lu",
                            sourceStage,
                            vcClass,
                            chatUserName,
                            (unsigned long)currentItems.count,
                            (unsigned long)desiredItems.count);
        wcpl_setRightBarButtonItemsWithoutAnimation(navigationItem, desiredItems);
        WCPLCrashDiagnostic(@"chat_search stage=%@ action=rightbar_apply_post vc=%@ user=%@ current=%lu desired=%lu",
                            sourceStage,
                            vcClass,
                            chatUserName,
                            (unsigned long)currentItems.count,
                            (unsigned long)desiredItems.count);
        WCPLLogInfo(@"[搜索按钮] miyou_style 已更新 rightBar stage=%@: native={%@} search={%@}",
                    sourceStage,
                    wcpl_barButtonItemDebugSummary(nativeItem),
                    wcpl_barButtonItemDebugSummary(searchButtonItem));
    }
}

static void wcpl_updateChatSearchButtonForViewControllerStage(id viewController, NSString *stage) {
    if (wcpl_skipChatSearchButtonInjectionIfNeeded(viewController, stage)) {
        wcpl_nextChatSearchButtonRepairEpoch(viewController);
        return;
    }
    UIBarButtonItem *native = wcpl_controllerGetRightBarButtonSafe(viewController);
    NSString *sourceStage = [stage isKindOfClass:[NSString class]] && stage.length > 0 ? stage : @"update";
    wcpl_applyChatSearchRightBarMiYouStyle(viewController, native, sourceStage);
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
        NSString *source = [stage isKindOfClass:[NSString class]] && stage.length > 0 ? stage : @"unknown";
        if (wcpl_skipChatSearchButtonInjectionIfNeeded(controller, [NSString stringWithFormat:@"%@/schedule", source])) {
            wcpl_nextChatSearchButtonRepairEpoch(controller);
            return;
        }

        NSUInteger epoch = wcpl_nextChatSearchButtonRepairEpoch(controller);
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
                wcpl_updateChatSearchButtonForViewControllerStage(controller,
                                                                  [NSString stringWithFormat:@"%@/%@", source, timeTag]);
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

