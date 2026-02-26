
%hook CommonMessageCellView

+ (void)load {
    %orig;
    wcpl_setupRepeatLifecycleObserver();
}

%property(nonatomic, strong) UIPanGestureRecognizer *wchook_swipeGesture;
%property(nonatomic, strong) UITapGestureRecognizer *wchook_doubleTapGesture;
%property(nonatomic, strong) UILabel *wchook_messageTimeLabel;
%property(nonatomic, strong) UIImpactFeedbackGenerator *wchook_feedbackGenerator;
%property(nonatomic, assign) BOOL wchook_feedbackTriggered;
%property(nonatomic, assign) NSInteger wchook_swipeTriggerStage;

%new
- (BOOL)wchook_isMessageSupportedForRepeat:(CMessageWrap *)msgWrap {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    return wcpl_isRepeatTypeEnabledByConfig(config, msgWrap);
}

%new
- (UIImpactFeedbackGenerator *)wchook_repeatTapFeedbackGenerator {
    UIImpactFeedbackGenerator *generator = objc_getAssociatedObject(self, kWCPLRepeatButtonTapFeedbackKey);
    if (![generator isKindOfClass:[UIImpactFeedbackGenerator class]]) {
        generator = [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleLight];
        objc_setAssociatedObject(self, kWCPLRepeatButtonTapFeedbackKey, generator, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return generator;
}

%new
- (UIView *)wchook_repeatDisplayAnchorViewByNFQPrinciple {
    SEL selectors[] = {
        NSSelectorFromString(@"getContentView"),
        NSSelectorFromString(@"contentView"),
        NSSelectorFromString(@"getBgImageView"),
        NSSelectorFromString(@"bgImageView")
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        SEL selector = selectors[idx];
        if (![self respondsToSelector:selector]) {
            continue;
        }
        @try {
            id candidate = ((id (*)(id, SEL))objc_msgSend)(self, selector);
            if ([candidate isKindOfClass:[UIView class]]) {
                UIView *view = (UIView *)candidate;
                if (!view.hidden && CGRectGetWidth(view.frame) > 16.0f && CGRectGetHeight(view.frame) > 12.0f) {
                    return view;
                }
            }
        } @catch (__unused NSException *exception) {
        }
    }

    NSArray<NSString *> *kvcKeys = @[@"m_contentView", @"_contentView", @"contentView", @"m_bgImageView", @"_bgImageView", @"bgImageView"];
    for (NSString *key in kvcKeys) {
        @try {
            id candidate = [self valueForKey:key];
            if ([candidate isKindOfClass:[UIView class]]) {
                UIView *view = (UIView *)candidate;
                if (!view.hidden && CGRectGetWidth(view.frame) > 16.0f && CGRectGetHeight(view.frame) > 12.0f) {
                    return view;
                }
            }
        } @catch (__unused NSException *exception) {
        }
    }

    return [self wchook_bubbleAnchorView];
}

%new
- (UIView *)wchook_bubbleAnchorView {
    NSArray<NSString *> *priorityIvars = @[@"m_bgImageView", @"_bgImageView", @"m_maskImageView"];
    for (NSString *ivarName in priorityIvars) {
        @try {
            id candidate = [self valueForKey:ivarName];
            if ([candidate isKindOfClass:[UIView class]]) {
                UIView *view = (UIView *)candidate;
                if (!view.hidden && CGRectGetWidth(view.frame) > 20.0f) {
                    return view;
                }
            }
        } @catch (__unused NSException *exception) {
        }
    }

    UIView *bestView = nil;
    CGFloat bestScore = 0.0f;
    CGFloat cellWidth = CGRectGetWidth(self.bounds);
    for (UIView *subview in self.subviews) {
        if (subview.hidden || subview.tag == kWCPLRepeatButtonTag) {
            continue;
        }
        NSString *name = NSStringFromClass([subview class]);
        if ([name containsString:@"Head"] || [name containsString:@"Avatar"] || [name containsString:@"Label"] || [name containsString:@"Button"]) {
            continue;
        }
        CGRect frame = subview.frame;
        if (CGRectGetWidth(frame) < 24.0f || CGRectGetHeight(frame) < 16.0f) {
            continue;
        }
        if (cellWidth > 20.0f && CGRectGetWidth(frame) >= (cellWidth - 12.0f)) {
            // 过滤整行容器，避免按钮锚到 cell 而非气泡。
            continue;
        }
        CGFloat score = CGRectGetWidth(frame) * CGRectGetHeight(frame);
        if (score > bestScore) {
            bestScore = score;
            bestView = subview;
        }
    }

    return bestView;
}

%new
- (void)wchook_layoutRepeatButton:(UIButton *)button withBubbleView:(UIView *)bubbleView isSelf:(BOOL)isSelf {
    if (!button || !bubbleView) {
        return;
    }

    CGFloat buttonSize = wcpl_repeatButtonSizeFromConfig();
    id buttonWrapObj = objc_getAssociatedObject(button, kWCPLRepeatButtonWrapKey);
    CMessageWrap *buttonWrap = [buttonWrapObj isKindOfClass:%c(CMessageWrap)] ? (CMessageWrap *)buttonWrapObj : nil;
    BOOL mediaMessage = wcpl_isMediaBubbleRepeatMessage(buttonWrap);
    NSValue *cachedFrameValue = objc_getAssociatedObject(button, kWCPLRepeatButtonLastFrameKey);
    CGRect cachedFrame = cachedFrameValue ? cachedFrameValue.CGRectValue : CGRectZero;
    BOOL cachedFrameValid = !CGRectIsEmpty(cachedFrame) &&
                            !CGRectIsNull(cachedFrame) &&
                            !CGRectIsInfinite(cachedFrame) &&
                            CGRectGetWidth(cachedFrame) > 8.0f &&
                            CGRectGetHeight(cachedFrame) > 8.0f &&
                            CGRectIntersectsRect(cachedFrame, self.bounds);

    CGRect bubbleFrame = [self convertRect:bubbleView.bounds fromView:bubbleView];
    CGRect bubbleFrameFromSuperview = CGRectZero;
    BOOL bubbleFrameFromSuperviewValid = NO;
    if ([bubbleView.superview isKindOfClass:[UIView class]]) {
        bubbleFrameFromSuperview = [self convertRect:bubbleView.frame fromView:bubbleView.superview];
        bubbleFrameFromSuperviewValid = !CGRectIsEmpty(bubbleFrameFromSuperview) &&
                                        !CGRectIsNull(bubbleFrameFromSuperview) &&
                                        !CGRectIsInfinite(bubbleFrameFromSuperview) &&
                                        CGRectGetWidth(bubbleFrameFromSuperview) > 8.0f &&
                                        CGRectGetHeight(bubbleFrameFromSuperview) > 8.0f;
    }

    if (CGRectIsEmpty(bubbleFrame) || CGRectGetWidth(bubbleFrame) <= 0.0f || CGRectGetHeight(bubbleFrame) <= 0.0f) {
        bubbleFrame = bubbleFrameFromSuperviewValid ? bubbleFrameFromSuperview : [self convertRect:bubbleView.frame fromView:bubbleView.superview ?: self];
    }

    CGRect menuRect = CGRectZero;
    BOOL menuRectValid = NO;
    if ([self respondsToSelector:@selector(showRectForMenuController)]) {
        @try {
            menuRect = ((CGRect (*)(id, SEL))objc_msgSend)(self, @selector(showRectForMenuController));
        } @catch (__unused NSException *exception) {
            menuRect = CGRectZero;
        }
        menuRectValid = !CGRectIsEmpty(menuRect) &&
                        !CGRectIsNull(menuRect) &&
                        !CGRectIsInfinite(menuRect) &&
                        CGRectGetWidth(menuRect) > 8.0f &&
                        CGRectGetHeight(menuRect) > 8.0f &&
                        CGRectIntersectsRect(menuRect, self.bounds);
    }

    BOOL bubbleRectValid = !CGRectIsEmpty(bubbleFrame) &&
                           !CGRectIsNull(bubbleFrame) &&
                           !CGRectIsInfinite(bubbleFrame) &&
                           CGRectGetWidth(bubbleFrame) > 8.0f &&
                           CGRectGetHeight(bubbleFrame) > 8.0f &&
                           CGRectIntersectsRect(bubbleFrame, self.bounds);
    if (!bubbleRectValid && bubbleFrameFromSuperviewValid) {
        bubbleFrame = bubbleFrameFromSuperview;
        bubbleRectValid = CGRectIntersectsRect(bubbleFrame, self.bounds);
    }
    if (!bubbleRectValid && mediaMessage && menuRectValid) {
        bubbleFrame = menuRect;
        bubbleRectValid = YES;
    }
    if (!bubbleRectValid) {
        if (mediaMessage && cachedFrameValid) {
            button.hidden = NO;
            button.alpha = 0.96f;
            button.userInteractionEnabled = YES;
            button.frame = cachedFrame;
            [self bringSubviewToFront:button];
        } else {
            button.hidden = YES;
            if (!mediaMessage) {
                objc_setAssociatedObject(button, kWCPLRepeatButtonLastFrameKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
        }
        return;
    }

    CGFloat cellWidth = CGRectGetWidth(self.bounds);
    CGFloat bubbleWidth = CGRectGetWidth(bubbleFrame);
    CGFloat bubbleMinX = CGRectGetMinX(bubbleFrame);
    CGFloat bubbleMaxX = CGRectGetMaxX(bubbleFrame);
    BOOL bubbleCoversWholeRow = (cellWidth > 20.0f) && (bubbleWidth >= (cellWidth - 12.0f));
    BOOL bubbleTouchesBothSides = (bubbleMinX <= (kWCPLRepeatButtonEdgeInset + 2.0f)) &&
                                  ((cellWidth - bubbleMaxX) <= (kWCPLRepeatButtonEdgeInset + 2.0f));
    BOOL bubbleAnchorSuspicious = bubbleCoversWholeRow || bubbleTouchesBothSides;
    if (!mediaMessage && bubbleView == self) {
        bubbleAnchorSuspicious = YES;
    }
    if (bubbleAnchorSuspicious && mediaMessage && menuRectValid) {
        bubbleFrame = menuRect;
        cellWidth = CGRectGetWidth(self.bounds);
        bubbleWidth = CGRectGetWidth(bubbleFrame);
        bubbleMinX = CGRectGetMinX(bubbleFrame);
        bubbleMaxX = CGRectGetMaxX(bubbleFrame);
        bubbleCoversWholeRow = (cellWidth > 20.0f) && (bubbleWidth >= (cellWidth - 12.0f));
        bubbleTouchesBothSides = (bubbleMinX <= (kWCPLRepeatButtonEdgeInset + 2.0f)) &&
                                 ((cellWidth - bubbleMaxX) <= (kWCPLRepeatButtonEdgeInset + 2.0f));
        bubbleAnchorSuspicious = bubbleCoversWholeRow || bubbleTouchesBothSides;
    }
    if (bubbleAnchorSuspicious) {
        if (mediaMessage && cachedFrameValid) {
            button.hidden = NO;
            button.alpha = 0.96f;
            button.userInteractionEnabled = YES;
            button.frame = cachedFrame;
            [self bringSubviewToFront:button];
        } else {
            button.hidden = YES;
            if (!mediaMessage) {
                objc_setAssociatedObject(button, kWCPLRepeatButtonLastFrameKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
        }
        return;
    }

    button.hidden = NO;

    BOOL effectiveIsSelf = isSelf;
    CGFloat anchorMaxY = CGRectGetMaxY(bubbleFrame);
    CGFloat centerY = anchorMaxY - kWCPLRepeatButtonTailInsetY - buttonSize * 0.5f;
    CGRect xAnchorRect = bubbleFrame;

    CGFloat centerX = effectiveIsSelf
        ? (CGRectGetMinX(xAnchorRect) - kWCPLRepeatButtonEdgeInset - kWCPLRepeatButtonTailInsetX - buttonSize * 0.5f)
        : (CGRectGetMaxX(xAnchorRect) + kWCPLRepeatButtonEdgeInset + kWCPLRepeatButtonTailInsetX + buttonSize * 0.5f);

    centerX = wcpl_repeatAlignToPixel(centerX);
    centerY = wcpl_repeatAlignToPixel(centerY);

    CGFloat halfSize = buttonSize * 0.5f;
    CGFloat minX = halfSize + kWCPLRepeatButtonEdgeInset;
    CGFloat maxX = CGRectGetWidth(self.bounds) - halfSize - kWCPLRepeatButtonEdgeInset;
    CGFloat minY = halfSize + kWCPLRepeatButtonEdgeInset;
    CGFloat maxY = CGRectGetHeight(self.bounds) - halfSize - kWCPLRepeatButtonEdgeInset;
    BOOL didClamp = NO;
    if (centerX < minX) {
        centerX = minX;
        didClamp = YES;
    } else if (centerX > maxX) {
        centerX = maxX;
        didClamp = YES;
    }
    if (centerY < minY) {
        centerY = minY;
        didClamp = YES;
    } else if (centerY > maxY) {
        centerY = maxY;
        didClamp = YES;
    }

    CGRect targetFrame = CGRectMake(centerX - halfSize,
                                    centerY - halfSize,
                                    buttonSize,
                                    buttonSize);

    NSValue *lastFrameValue = objc_getAssociatedObject(button, kWCPLRepeatButtonLastFrameKey);
    CGRect lastFrame = lastFrameValue ? lastFrameValue.CGRectValue : CGRectZero;
    if (wcpl_repeatRectAlmostEqual(lastFrame, targetFrame)) {
        [self bringSubviewToFront:button];
        return;
    }

    button.bounds = CGRectMake(0.0f, 0.0f, buttonSize, buttonSize);
    button.center = CGPointMake(centerX, centerY);
    [self bringSubviewToFront:button];

    objc_setAssociatedObject(button, kWCPLRepeatButtonLastFrameKey, [NSValue valueWithCGRect:button.frame], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if (didClamp) {
        WCPLLogDebug(@"Repeat button clamped to cell end: class=%@ bubble=%@ button=%@",
                     NSStringFromClass([self class]),
                     NSStringFromCGRect(bubbleFrame),
                     NSStringFromCGRect(button.frame));
    }
}

%new
- (NSInteger)wchook_repeatButtonStyleStampForCurrentTrait {
    if (@available(iOS 13.0, *)) {
        UIUserInterfaceStyle style = self.traitCollection.userInterfaceStyle;
        return (style == UIUserInterfaceStyleDark) ? 2 : 1;
    }
    return 1;
}

%new
- (void)wchook_applyThemeStyleForRepeatButton:(UIButton *)button force:(BOOL)force {
    if (![button isKindOfClass:[UIButton class]]) {
        return;
    }

    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!config) {
        return;
    }
    WCPLRepeatButtonAssetManager *assetManager = [WCPLRepeatButtonAssetManager sharedManager];
    if (config.repeatButtonCustomImageSchemaVersion != kWCPLRepeatButtonAssetSchemaVersionCurrent) {
        [assetManager migrateIfNeededForConfig:config];
    }

    NSInteger styleStamp = [self wchook_repeatButtonStyleStampForCurrentTrait];
    BOOL isDarkMode = NO;
    if (@available(iOS 13.0, *)) {
        isDarkMode = (self.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    }

    CGFloat buttonSize = wcpl_repeatButtonSizeFromConfig();
    CGFloat screenScale = [UIScreen mainScreen].scale;
    BOOL useCustomImage = config.repeatButtonCustomImageEnable && config.repeatButtonCustomImageRelativePath.length > 0;
    NSInteger imageRevision = MAX((NSInteger)0, config.repeatButtonCustomImageRevision);

    NSString *appearanceToken = [NSString stringWithFormat:@"style:%ld|custom:%d|rev:%ld|size:%.0f|scale:%.0f",
                                 (long)styleStamp,
                                 useCustomImage ? 1 : 0,
                                 (long)imageRevision,
                                 buttonSize,
                                 screenScale];
    NSString *cachedToken = objc_getAssociatedObject(button, kWCPLRepeatButtonAppearanceTokenKey);
    if (!force &&
        [cachedToken isKindOfClass:[NSString class]] &&
        [cachedToken isEqualToString:appearanceToken]) {
        return;
    }

    UIColor *backgroundColor = isDarkMode
        ? [UIColor colorWithWhite:0.16f alpha:0.94f]
        : [UIColor colorWithWhite:1.0f alpha:0.96f];
    UIColor *titleColor = isDarkMode
        ? [UIColor colorWithRed:0.37f green:0.88f blue:0.55f alpha:1.0f]
        : [UIColor colorWithRed:0.03f green:0.68f blue:0.36f alpha:1.0f];
    UIColor *borderColor = isDarkMode
        ? [UIColor colorWithWhite:1.0f alpha:0.20f]
        : [UIColor colorWithWhite:0.0f alpha:0.12f];
    UIColor *shadowColor = isDarkMode
        ? [UIColor colorWithWhite:0.0f alpha:1.0f]
        : [UIColor blackColor];

    @try {
        button.layer.shadowColor = shadowColor.CGColor;
        button.layer.shouldRasterize = YES;
        button.layer.rasterizationScale = screenScale;
        button.layer.masksToBounds = NO;

        UIImage *customImage = nil;
        if (useCustomImage) {
            customImage = [assetManager displayImageForConfig:config
                                                   buttonSize:buttonSize
                                                        scale:screenScale];
        }

        if ([customImage isKindOfClass:[UIImage class]]) {
            button.backgroundColor = [UIColor clearColor];
            button.layer.borderWidth = 0.5f;
            button.layer.borderColor = borderColor.CGColor;
            button.layer.shadowOpacity = 0.0f;
            button.layer.shadowOffset = CGSizeZero;
            button.layer.shadowRadius = 0.0f;
            [button setImage:nil forState:UIControlStateNormal];
            [button setTitle:nil forState:UIControlStateNormal];
            [button setTitle:nil forState:UIControlStateHighlighted];
            [button setBackgroundImage:customImage forState:UIControlStateNormal];
            [button setBackgroundImage:customImage forState:UIControlStateHighlighted];
        } else {
            button.layer.borderWidth = 0.5f;
            button.layer.borderColor = borderColor.CGColor;
            button.layer.shadowOpacity = isDarkMode ? 0.28f : 0.10f;
            button.layer.shadowOffset = CGSizeMake(0.0f, 1.0f);
            button.layer.shadowRadius = 2.5f;
            [button setBackgroundImage:nil forState:UIControlStateNormal];
            [button setBackgroundImage:nil forState:UIControlStateHighlighted];
            button.backgroundColor = backgroundColor;
            [button setImage:nil forState:UIControlStateNormal];
            [button setTitle:@"+1" forState:UIControlStateNormal];
            [button setTitleColor:titleColor forState:UIControlStateNormal];
            CGFloat titleSize = MIN(14.0f, MAX(10.0f, buttonSize * 0.55f));
            button.titleLabel.font = [UIFont systemFontOfSize:titleSize weight:UIFontWeightSemibold];
        }

        wcpl_updateRepeatButtonVisualShape(button);

        objc_setAssociatedObject(button,
                                 kWCPLRepeatButtonStyleStampKey,
                                 @(styleStamp),
                                 OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        if ([customImage isKindOfClass:[UIImage class]] || !useCustomImage) {
            objc_setAssociatedObject(button,
                                     kWCPLRepeatButtonAppearanceTokenKey,
                                     appearanceToken,
                                     OBJC_ASSOCIATION_COPY_NONATOMIC);
        } else {
            // 自定义图开启但资源未命中时，不缓存 token，允许后续重试加载。
            objc_setAssociatedObject(button, kWCPLRepeatButtonAppearanceTokenKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
    } @catch (NSException *exception) {
        WCPLLogWarning(@"Repeat button custom style failed: %@ - %@", exception.name ?: @"<nil>", exception.reason ?: @"<nil>");
        button.layer.borderWidth = 0.5f;
        button.layer.borderColor = borderColor.CGColor;
        button.layer.shadowOpacity = isDarkMode ? 0.28f : 0.10f;
        button.layer.shadowOffset = CGSizeMake(0.0f, 1.0f);
        button.layer.shadowRadius = 2.5f;
        [button setBackgroundImage:nil forState:UIControlStateNormal];
        [button setBackgroundImage:nil forState:UIControlStateHighlighted];
        button.backgroundColor = backgroundColor;
        [button setTitle:@"+1" forState:UIControlStateNormal];
        [button setTitleColor:titleColor forState:UIControlStateNormal];
        CGFloat titleSize = MIN(14.0f, MAX(10.0f, buttonSize * 0.55f));
        button.titleLabel.font = [UIFont systemFontOfSize:titleSize weight:UIFontWeightSemibold];
        wcpl_updateRepeatButtonVisualShape(button);
        objc_setAssociatedObject(button, kWCPLRepeatButtonAppearanceTokenKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
}

%new
- (UIButton *)wchook_buildRepeatButton {
    CGFloat buttonSize = wcpl_repeatButtonSizeFromConfig();

    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.tag = kWCPLRepeatButtonTag;
    button.exclusiveTouch = YES;
    button.adjustsImageWhenHighlighted = NO;
    button.clipsToBounds = NO;
    button.layer.cornerRadius = buttonSize * 0.5f;
    button.layer.borderWidth = 0.5f;
    button.layer.shadowOffset = CGSizeMake(0.0f, 1.0f);
    button.layer.shadowRadius = 2.5f;
    button.layer.shouldRasterize = YES;
    button.layer.rasterizationScale = [UIScreen mainScreen].scale;
    [button setTitle:@"+1" forState:UIControlStateNormal];
    CGFloat titleSize = MIN(14.0f, MAX(10.0f, buttonSize * 0.55f));
    button.titleLabel.font = [UIFont systemFontOfSize:titleSize weight:UIFontWeightSemibold];
    [self wchook_applyThemeStyleForRepeatButton:button force:YES];
    [button addTarget:self action:@selector(wchook_onRepeatButtonTapped:) forControlEvents:UIControlEventTouchUpInside];
    [button addTarget:self action:@selector(wchook_onRepeatButtonTouchDown:) forControlEvents:UIControlEventTouchDown];
    [button addTarget:self action:@selector(wchook_onRepeatButtonTouchUp:) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    return button;
}

%new
- (NSDictionary *)wchook_repeatAnchorContextForV2 {
    NSString *messageKey = objc_getAssociatedObject(self, kWCPLRepeatAnchorMessageKey);
    id wrap = objc_getAssociatedObject(self, kWCPLRepeatAnchorWrapKey);
    NSNumber *isSelfObj = objc_getAssociatedObject(self, kWCPLRepeatAnchorIsSelfKey);

    if (![messageKey isKindOfClass:[NSString class]] || messageKey.length == 0 || !wrap) {
        return nil;
    }

    BOOL isSelf = [isSelfObj isKindOfClass:[NSNumber class]] ? isSelfObj.boolValue : NO;
    return @{
        @"messageKey": messageKey,
        @"wrap": wrap,
        @"isSelf": @(isSelf),
    };
}

%new
- (UIButton *)wchook_repeatButtonForV2EnsureCreate:(BOOL)createIfNeeded {
    UIButton *cachedButton = objc_getAssociatedObject(self, kWCPLRepeatButtonViewKey);
    UIButton *keptButton = nil;
    if ([cachedButton isKindOfClass:[UIButton class]] &&
        cachedButton.tag == kWCPLRepeatButtonTag &&
        cachedButton.superview == self) {
        keptButton = cachedButton;
    }

    NSMutableArray<UIButton *> *directButtons = [NSMutableArray array];
    for (UIView *subview in self.subviews) {
        if ([subview isKindOfClass:[UIButton class]] && subview.tag == kWCPLRepeatButtonTag) {
            UIButton *button = (UIButton *)subview;
            [directButtons addObject:button];
            if (!keptButton) {
                keptButton = button;
            }
        }
    }

    if (!keptButton && createIfNeeded) {
        keptButton = [self wchook_buildRepeatButton];
        if ([keptButton isKindOfClass:[UIButton class]]) {
            [self addSubview:keptButton];
        }
    }

    for (UIButton *button in directButtons) {
        if (button == keptButton) {
            continue;
        }
        [button removeFromSuperview];
    }

    if ([keptButton isKindOfClass:[UIButton class]] && keptButton.superview != self) {
        [keptButton removeFromSuperview];
        [self addSubview:keptButton];
    }

    objc_setAssociatedObject(self, kWCPLRepeatButtonViewKey, keptButton, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if (![keptButton isKindOfClass:[UIButton class]]) {
        objc_setAssociatedObject(self, kWCPLRepeatButtonMessageKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    } else if (directButtons.count > 1) {
        WCPLLogDebug(@"Repeat button dedupe(v2): class=%@ removed=%lu",
                     NSStringFromClass([self class]),
                     (unsigned long)(directButtons.count - 1));
    }

    return keptButton;
}

%new
- (void)wchook_bindRepeatButtonForV2:(UIButton *)button wrap:(id)wrap messageKey:(NSString *)messageKey {
    if (![button isKindOfClass:[UIButton class]] ||
        ![messageKey isKindOfClass:[NSString class]] ||
        messageKey.length == 0) {
        return;
    }

    NSString *previousMessageKey = objc_getAssociatedObject(button, kWCPLRepeatButtonMessageKey);
    if ([previousMessageKey isKindOfClass:[NSString class]] &&
        previousMessageKey.length > 0 &&
        ![previousMessageKey isEqualToString:messageKey]) {
        objc_setAssociatedObject(button, kWCPLRepeatButtonLastFrameKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(button, kWCPLRepeatButtonTextAnchorLogOnceKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }

    wcpl_bindRepeatButtonTargetsToOwner(button, self);
    objc_setAssociatedObject(button, kWCPLRepeatButtonWrapKey, wrap, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(button, kWCPLRepeatButtonMessageKey, messageKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatButtonViewKey, button, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatButtonMessageKey, messageKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

%new
- (void)wchook_hideRepeatButtonByNFQPrinciple {
    CMessageWrap *cellWrap = wcpl_messageWrapForCellView(self);
    UIButton *cachedButton = objc_getAssociatedObject(self, kWCPLRepeatButtonViewKey);
    id cachedButtonWrapObj = [cachedButton isKindOfClass:[UIButton class]]
        ? objc_getAssociatedObject(cachedButton, kWCPLRepeatButtonWrapKey)
        : nil;
    CMessageWrap *cachedButtonWrap = [cachedButtonWrapObj isKindOfClass:%c(CMessageWrap)] ? (CMessageWrap *)cachedButtonWrapObj : nil;

    NSMutableArray<UIButton *> *buttons = [NSMutableArray array];
    if ([cachedButton isKindOfClass:[UIButton class]]) {
        [buttons addObject:cachedButton];
    }

    for (UIView *subview in self.subviews) {
        if (![subview isKindOfClass:[UIButton class]] || subview.tag != kWCPLRepeatButtonTag) {
            continue;
        }
        UIButton *button = (UIButton *)subview;
        if (![buttons containsObject:button]) {
            [buttons addObject:button];
        }
    }

    BOOL mediaContext = wcpl_isMediaBubbleRepeatMessage(cellWrap) || wcpl_isMediaBubbleRepeatMessage(cachedButtonWrap);
    if (!mediaContext) {
        for (UIButton *button in buttons) {
            id buttonWrapObj = objc_getAssociatedObject(button, kWCPLRepeatButtonWrapKey);
            CMessageWrap *buttonWrap = [buttonWrapObj isKindOfClass:%c(CMessageWrap)] ? (CMessageWrap *)buttonWrapObj : nil;
            if (wcpl_isMediaBubbleRepeatMessage(buttonWrap)) {
                mediaContext = YES;
                break;
            }
        }
    }

    if (mediaContext) {
        for (UIButton *button in buttons) {
            button.hidden = YES;
            button.alpha = 0.0f;
            button.userInteractionEnabled = NO;
        }
        return;
    }

    for (UIButton *button in buttons) {
        objc_setAssociatedObject(button, kWCPLRepeatButtonWrapKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(button, kWCPLRepeatButtonMessageKey, nil, OBJC_ASSOCIATION_COPY_NONATOMIC);
        objc_setAssociatedObject(button, kWCPLRepeatButtonLastFrameKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(button, kWCPLRepeatButtonTextAnchorLogOnceKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(button, kWCPLRepeatButtonLastTapTimeKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [button removeFromSuperview];
    }

    objc_setAssociatedObject(self, kWCPLRepeatButtonViewKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatButtonMessageKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

%new
- (void)wchook_updateRepeatButtonByNFQPrinciple {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!config.repeatButtonEnable) {
        [self wchook_hideRepeatButtonByNFQPrinciple];
        return;
    }

    if (!wcpl_isCellViewEligibleForRepeatButton(self)) {
        [self wchook_hideRepeatButtonByNFQPrinciple];
        return;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
    if (![self wchook_isMessageSupportedForRepeat:msgWrap] || !wcpl_isMessageSettledForRepeat(msgWrap)) {
        [self wchook_hideRepeatButtonByNFQPrinciple];
        return;
    }

    NSString *repeatText = wcpl_repeatTextForMessageWrap(msgWrap);
    if (repeatText.length == 0) {
        [self wchook_hideRepeatButtonByNFQPrinciple];
        return;
    }

    NSString *messageKey = wcpl_repeatMessageKey(msgWrap);
    if (![messageKey isKindOfClass:[NSString class]] || messageKey.length == 0) {
        [self wchook_hideRepeatButtonByNFQPrinciple];
        return;
    }

    if (msgWrap.m_uiMessageType == 1 &&
        !wcpl_isBottomMostRepeatOwnerForMessageKey(self, messageKey)) {
        [self wchook_hideRepeatButtonByNFQPrinciple];
        return;
    }

    UIButton *button = [self wchook_repeatButtonForV2EnsureCreate:YES];
    if (![button isKindOfClass:[UIButton class]]) {
        [self wchook_hideRepeatButtonByNFQPrinciple];
        return;
    }
    [self wchook_applyThemeStyleForRepeatButton:button force:NO];

    [self wchook_bindRepeatButtonForV2:button wrap:msgWrap messageKey:messageKey];
    button.hidden = NO;
    button.alpha = 0.96f;
    button.userInteractionEnabled = YES;

    BOOL isSelf = wcpl_resolveIsSelfForRepeatCell(self, msgWrap, NULL);
    BOOL mediaMessage = wcpl_isMediaBubbleRepeatMessage(msgWrap);

    UIView *bubbleView = [self wchook_repeatDisplayAnchorViewByNFQPrinciple];
    if (![bubbleView isKindOfClass:[UIView class]]) {
        bubbleView = [self wchook_bubbleAnchorView];
    }
    if (![bubbleView isKindOfClass:[UIView class]] && mediaMessage) {
        bubbleView = self;
    }
    if (![bubbleView isKindOfClass:[UIView class]]) {
        [self wchook_hideRepeatButtonByNFQPrinciple];
        return;
    }

    [self wchook_layoutRepeatButton:button withBubbleView:bubbleView isSelf:isSelf];
    wcpl_updateRepeatButtonVisualShape(button);
    CGFloat titleSize = MIN(14.0f, MAX(10.0f, CGRectGetHeight(button.bounds) * 0.55f));
    button.titleLabel.font = [UIFont systemFontOfSize:titleSize weight:UIFontWeightSemibold];

    if (button.superview != self) {
        [button removeFromSuperview];
        [self addSubview:button];
    }
    [self bringSubviewToFront:button];
}

%new
- (void)wchook_clearRepeatAnchorAndButtonLocalOnly {
    wcpl_clearRepeatAnchorForCell(self);

    UIButton *cachedButton = objc_getAssociatedObject(self, kWCPLRepeatButtonViewKey);
    NSMutableArray<UIButton *> *localButtons = [NSMutableArray array];
    if ([cachedButton isKindOfClass:[UIButton class]] && cachedButton.superview == self) {
        [localButtons addObject:cachedButton];
    }

    for (UIView *subview in self.subviews) {
        if (![subview isKindOfClass:[UIButton class]] || subview.tag != kWCPLRepeatButtonTag) {
            continue;
        }
        UIButton *button = (UIButton *)subview;
        if (![localButtons containsObject:button]) {
            [localButtons addObject:button];
        }
    }

    for (UIButton *button in localButtons) {
        objc_setAssociatedObject(button, kWCPLRepeatButtonWrapKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(button, kWCPLRepeatButtonMessageKey, nil, OBJC_ASSOCIATION_COPY_NONATOMIC);
        objc_setAssociatedObject(button, kWCPLRepeatButtonLastFrameKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(button, kWCPLRepeatButtonTextAnchorLogOnceKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(button, kWCPLRepeatButtonLastTapTimeKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [button removeFromSuperview];
    }

    objc_setAssociatedObject(self, kWCPLRepeatButtonViewKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatButtonMessageKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

%new
- (void)wchook_clearRepeatAnchorAndButtonForCurrentEngine {
    [self wchook_clearRepeatAnchorAndButtonLocalOnly];
}

%new
- (BOOL)wchook_reportRepeatAnchorIfNeeded {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!config.repeatButtonEnable) {
        NSString *lastSignature = objc_getAssociatedObject(self, kWCPLRepeatAnchorSignatureKey);
        [self wchook_clearRepeatAnchorAndButtonForCurrentEngine];
        return [lastSignature isKindOfClass:[NSString class]] && lastSignature.length > 0;
    }

    if (!wcpl_isCellViewEligibleForRepeatButton(self)) {
        NSString *lastSignature = objc_getAssociatedObject(self, kWCPLRepeatAnchorSignatureKey);
        [self wchook_clearRepeatAnchorAndButtonForCurrentEngine];
        return [lastSignature isKindOfClass:[NSString class]] && lastSignature.length > 0;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
    if (![self wchook_isMessageSupportedForRepeat:msgWrap] || !wcpl_isMessageSettledForRepeat(msgWrap)) {
        NSString *lastSignature = objc_getAssociatedObject(self, kWCPLRepeatAnchorSignatureKey);
        [self wchook_clearRepeatAnchorAndButtonForCurrentEngine];
        return [lastSignature isKindOfClass:[NSString class]] && lastSignature.length > 0;
    }

    CMessageWrap *anchorWrapForButton = msgWrap;
    BOOL anchorFromQuoteProxy = NO;
    long long anchorQuoteReferSvrID = 0;
    if (msgWrap.m_uiMessageType == 49) {
        // 49 引用消息在 layout 高频阶段不再做 quoteTarget 解析，避免主线程抖动影响气泡首帧渲染。
        anchorWrapForButton = msgWrap;
        anchorFromQuoteProxy = NO;
        anchorQuoteReferSvrID = 0;
    }

    NSString *repeatText = wcpl_repeatTextForMessageWrap(anchorWrapForButton);
    if (repeatText.length == 0) {
        NSString *lastSignature = objc_getAssociatedObject(self, kWCPLRepeatAnchorSignatureKey);
        [self wchook_clearRepeatAnchorAndButtonForCurrentEngine];
        return [lastSignature isKindOfClass:[NSString class]] && lastSignature.length > 0;
    }

    NSString *messageKey = nil;
    if (anchorFromQuoteProxy && anchorQuoteReferSvrID > 0) {
        messageKey = [NSString stringWithFormat:@"m_%lld", anchorQuoteReferSvrID];
    }
    if (msgWrap.m_uiMessageType == 49 && !anchorFromQuoteProxy) {
        messageKey = wcpl_repeatMessageKey(msgWrap);
    }
    if (![messageKey isKindOfClass:[NSString class]] || messageKey.length == 0) {
        messageKey = wcpl_repeatMessageKey(anchorWrapForButton);
    }
    if (![messageKey isKindOfClass:[NSString class]] || messageKey.length == 0) {
        NSString *lastSignature = objc_getAssociatedObject(self, kWCPLRepeatAnchorSignatureKey);
        [self wchook_clearRepeatAnchorAndButtonForCurrentEngine];
        return [lastSignature isKindOfClass:[NSString class]] && lastSignature.length > 0;
    }

    if (anchorWrapForButton.m_uiMessageType == 1 &&
        !wcpl_isBottomMostRepeatOwnerForMessageKey(self, messageKey)) {
        NSString *lastSignature = objc_getAssociatedObject(self, kWCPLRepeatAnchorSignatureKey);
        [self wchook_clearRepeatAnchorAndButtonForCurrentEngine];
        return [lastSignature isKindOfClass:[NSString class]] && lastSignature.length > 0;
    }

    BOOL isSelf = wcpl_resolveIsSelfForRepeatCell(self, anchorWrapForButton, NULL);
    UIView *bubbleView = [self wchook_bubbleAnchorView];
    if (![bubbleView isKindOfClass:[UIView class]]) {
        NSString *lastSignature = objc_getAssociatedObject(self, kWCPLRepeatAnchorSignatureKey);
        [self wchook_clearRepeatAnchorAndButtonForCurrentEngine];
        return [lastSignature isKindOfClass:[NSString class]] && lastSignature.length > 0;
    }

    // 这里曾尝试根据气泡/菜单 rect 计算“方向有效性”以微调定位，
    // 但后续实现不再依赖该逻辑，保留会触发 CI 的 -Werror=unused-but-set-variable。
    // 为避免死代码长期积累，这里直接移除（不影响现有布局与锚点签名逻辑）。

    NSString *anchorSignature = wcpl_repeatAnchorSignatureForCell(self, messageKey, isSelf, bubbleView);
    if (![anchorSignature isKindOfClass:[NSString class]] || anchorSignature.length == 0) {
        anchorSignature = [NSString stringWithFormat:@"%@|%@|fallback", messageKey, isSelf ? @"self" : @"other"];
    }

    NSString *previousSignature = objc_getAssociatedObject(self, kWCPLRepeatAnchorSignatureKey);
    BOOL didChange = !([previousSignature isKindOfClass:[NSString class]] && [previousSignature isEqualToString:anchorSignature]);
    BOOL hasPreviousSignature = [previousSignature isKindOfClass:[NSString class]] && previousSignature.length > 0;

    if (didChange && hasPreviousSignature && anchorWrapForButton.m_uiMessageType == 1) {
        CGFloat cellHeight = wcpl_repeatAlignToPixel(CGRectGetHeight(self.bounds));
        WCPLLogInfo(@"Repeat anchor signature changed: type=%u cellH=%.2f old=%@ new=%@",
                    anchorWrapForButton.m_uiMessageType,
                    cellHeight,
                    previousSignature,
                    anchorSignature);
    }

    objc_setAssociatedObject(self, kWCPLRepeatAnchorMessageKey, messageKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatAnchorWrapKey, anchorWrapForButton, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatAnchorReportTimeKey, @(CACurrentMediaTime()), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatAnchorIsSelfKey, @(isSelf), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatAnchorSignatureKey, anchorSignature, OBJC_ASSOCIATION_COPY_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatAnchorQuoteProxyKey, @(anchorFromQuoteProxy), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatAnchorQuoteReferSvrIDKey, (anchorQuoteReferSvrID > 0 ? @(anchorQuoteReferSvrID) : nil), OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    return didChange;
}

%new
- (void)wchook_updateRepeatButtonIfNeeded {
    [self wchook_updateRepeatButtonByNFQPrinciple];
}



%end
