// Internal include-only module.
// Stitched into src/WCPLGestureHook.xm by scripts/generate_wcpl_gesture_hook.sh.
// Do not add this file to $(TWEAK_NAME)_FILES directly.

#import "WCPLGeometryHelpers.h"

static const CGFloat kWCPLMessageTimeHeadMinSide = 16.0f;

%hook CommonMessageCellView

%new
- (UIView *)wchook_headImageViewForMessageTime {
    UIView *headView = nil;
    if ([self respondsToSelector:@selector(getHeadImageView)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(self, @selector(getHeadImageView));
            if ([value isKindOfClass:[UIView class]]) {
                headView = (UIView *)value;
            }
        } @catch (__unused NSException *exception) {
            headView = nil;
        }
    }

    if (!headView) {
        NSArray<NSString *> *selectorNames = @[@"headImageView", @"getHeadView"];
        for (NSString *selectorName in selectorNames) {
            SEL selector = NSSelectorFromString(selectorName);
            if (![self respondsToSelector:selector]) {
                continue;
            }
            @try {
                id value = ((id (*)(id, SEL))objc_msgSend)(self, selector);
                if ([value isKindOfClass:[UIView class]]) {
                    headView = (UIView *)value;
                    break;
                }
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        }
    }

    if (!headView) {
        NSArray<NSString *> *keys = @[@"m_headImageView", @"headImageView", @"_headImageView"];
        for (NSString *key in keys) {
            @try {
                id value = [self valueForKey:key];
                if ([value isKindOfClass:[UIView class]]) {
                    headView = (UIView *)value;
                    break;
                }
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        }
    }

    if (!headView) {
        static Class headImageClass = Nil;
        static dispatch_once_t onceToken;
        dispatch_once(&onceToken, ^{
            headImageClass = NSClassFromString(@"MMHeadImageView");
        });

        for (UIView *subview in self.subviews) {
            if ((headImageClass && [subview isKindOfClass:headImageClass]) ||
                [NSStringFromClass([subview class]) rangeOfString:@"HeadImage" options:NSCaseInsensitiveSearch].location != NSNotFound) {
                headView = subview;
                break;
            }
        }
    }

    return headView;
}

%new
- (UILabel *)wchook_messageTimeLabelEnsureCreate:(BOOL)createIfNeeded {
    UILabel *label = self.wchook_messageTimeLabel;
    if (![label isKindOfClass:[UILabel class]]) {
        if (!createIfNeeded) {
            return nil;
        }

        label = [[UILabel alloc] initWithFrame:CGRectZero];
        label.userInteractionEnabled = NO;
        label.textAlignment = NSTextAlignmentCenter;
        label.numberOfLines = 1;
        label.backgroundColor = [UIColor clearColor];
        label.font = [UIFont systemFontOfSize:8.0f weight:UIFontWeightMedium];
        if (@available(iOS 13.0, *)) {
            label.textColor = [UIColor colorWithDynamicProvider:^UIColor * _Nonnull(UITraitCollection * _Nonnull traitCollection) {
                if (traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark) {
                    return [UIColor colorWithWhite:0.74f alpha:0.92f];
                }
                return [UIColor colorWithWhite:0.56f alpha:0.95f];
            }];
        } else {
            label.textColor = [UIColor colorWithWhite:0.56f alpha:0.95f];
        }
        label.hidden = YES;
        [self addSubview:label];
        self.wchook_messageTimeLabel = label;
    } else if (label.superview != self) {
        [label removeFromSuperview];
        [self addSubview:label];
    }

    return label;
}

%new
- (void)wchook_hideMessageTimeLabel {
    UILabel *label = [self wchook_messageTimeLabelEnsureCreate:NO];
    if ([label isKindOfClass:[UILabel class]]) {
        label.hidden = YES;
    }
}

%new
- (void)wchook_updateMessageTimeLabel {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!config.messageTimeEnable) {
        [self wchook_hideMessageTimeLabel];
        return;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
    if (![msgWrap isKindOfClass:%c(CMessageWrap)] || msgWrap.m_uiCreateTime == 0) {
        [self wchook_hideMessageTimeLabel];
        return;
    }

    // 说明：微信在长消息/重排场景里可能会同时存在多个 CommonMessageCellView 实例指向同一条消息，
    // 导致“头像下方时间”被重复绘制（看起来像同一个头像下面出现多条时间）。
    // 这里复用复读按钮的 owner 选择逻辑：同一 messageKey 只允许最底部（最可见）的那个 view 显示时间。
    NSString *messageKey = wcpl_repeatMessageKey(msgWrap);
    if ([messageKey isKindOfClass:[NSString class]] && messageKey.length > 0) {
        objc_setAssociatedObject(self, kWCPLRepeatAnchorMessageKey, messageKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
        if (!wcpl_isBottomMostRepeatOwnerForMessageKey(self, messageKey)) {
            [self wchook_hideMessageTimeLabel];
            return;
        }
    }

    UIView *headView = [self wchook_headImageViewForMessageTime];
    if (![headView isKindOfClass:[UIView class]] || headView.hidden || headView.alpha < 0.01f) {
        [self wchook_hideMessageTimeLabel];
        return;
    }

    CGRect headRect = CGRectZero;
    if (headView == self) {
        headRect = self.bounds;
    } else {
        headRect = [self convertRect:headView.bounds fromView:headView];
    }
    if (!WCPLCGRectIsValid(headRect)) {
        UIView *container = headView.superview;
        if (container) {
            headRect = [self convertRect:headView.frame fromView:container];
        }
    }

    if (!WCPLCGRectIsValid(headRect) ||
        CGRectGetWidth(headRect) < kWCPLMessageTimeHeadMinSide ||
        CGRectGetHeight(headRect) < kWCPLMessageTimeHeadMinSide) {
        [self wchook_hideMessageTimeLabel];
        return;
    }

    NSString *timeText = wcpl_messageTimeTextForTimestamp(msgWrap.m_uiCreateTime);
    if (![timeText isKindOfClass:[NSString class]] || timeText.length == 0) {
        [self wchook_hideMessageTimeLabel];
        return;
    }

    UILabel *label = [self wchook_messageTimeLabelEnsureCreate:YES];
    if (![label isKindOfClass:[UILabel class]]) {
        return;
    }

    if (![label.text isEqualToString:timeText]) {
        label.text = timeText;
    }

    UIFont *font = label.font ?: [UIFont systemFontOfSize:8.0f weight:UIFontWeightMedium];
    CGSize textSize = [timeText sizeWithAttributes:@{NSFontAttributeName: font}];
    CGFloat width = MIN(kWCPLMessageTimeLabelMaxWidth, MAX(kWCPLMessageTimeLabelMinWidth, ceil(textSize.width) + 6.0f));
    CGFloat height = MAX(kWCPLMessageTimeLabelMinHeight, ceil(textSize.height));
    CGFloat x = floor(CGRectGetMidX(headRect) - width * 0.5f);
    CGFloat y = floor(CGRectGetMaxY(headRect) + kWCPLMessageTimeLabelTopInset);

    CGRect bounds = self.bounds;
    CGFloat boundsWidth = CGRectGetWidth(bounds);
    CGFloat boundsHeight = CGRectGetHeight(bounds);
    if (boundsWidth > width + 2.0f) {
        CGFloat minX = 1.0f;
        CGFloat maxX = boundsWidth - width - 1.0f;
        x = MIN(MAX(x, minX), maxX);
    }
    if (boundsHeight <= 0.0f || y >= boundsHeight + 8.0f) {
        [self wchook_hideMessageTimeLabel];
        return;
    }
    if (y + height > boundsHeight - 1.0f) {
        y = MAX(0.0f, boundsHeight - height - 1.0f);
    }

    label.frame = CGRectIntegral(CGRectMake(x, y, width, height));
    label.hidden = NO;
    label.alpha = 1.0f;
    [self bringSubviewToFront:label];
}

- (void)setViewModel:(id)viewModel {
    %orig;

    wcpl_markRepeatButtonEligibilityForViewModel(viewModel ?: wcpl_viewModelForCellView(self));
    [self wchook_updateMessageTimeLabel];
    [self wchook_updateRepeatButtonIfNeeded];
}

- (void)onAppear {
    %orig;

    [self wchook_updateMessageTimeLabel];
    [self wchook_updateRepeatButtonIfNeeded];
}

- (void)layoutInternal {
    %orig;

    [self wchook_updateMessageTimeLabel];
    [self wchook_updateRepeatButtonIfNeeded];
}

- (void)updateNodeStatus {
    %orig;

    [self wchook_updateMessageTimeLabel];
    [self wchook_updateRepeatButtonIfNeeded];
}

- (void)layoutSubviews {
    %orig;

    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (self.window && config.doubleTapGestureEnable) {
        [self wchook_setupDoubleTapGestureIfNeeded];
    }
    [self wchook_updateMessageTimeLabel];
    [self wchook_updateRepeatButtonIfNeeded];
}

- (void)traitCollectionDidChange:(UITraitCollection *)previousTraitCollection {
    %orig;

    if (@available(iOS 13.0, *)) {
        UIUserInterfaceStyle currentStyle = self.traitCollection.userInterfaceStyle;
        UIUserInterfaceStyle previousStyle = previousTraitCollection
            ? previousTraitCollection.userInterfaceStyle
            : UIUserInterfaceStyleUnspecified;
        if (previousTraitCollection && currentStyle == previousStyle) {
            return;
        }

        UIButton *button = [self wchook_repeatButtonForV2EnsureCreate:NO];
        if (![button isKindOfClass:[UIButton class]]) {
            return;
        }
        [self wchook_applyThemeStyleForRepeatButton:button force:YES];
        [self bringSubviewToFront:button];
    }
}

- (void)didMoveToWindow {
    %orig;

    if (!self.window) {
        [self wchook_hideMessageTimeLabel];
        [self wchook_hideRepeatButtonByNFQPrinciple];
    }

    // 说明：避免在 didMoveToWindow 同步触发消息时间/复读按钮更新。
    // 这些链路会取 msgWrap、扫描 visibleCells，并做跨视图清理；
    // 在 cell 迁移阶段同步执行容易与 UIKit 布局递归重入，导致崩溃。
    // 重计算统一延后到下一轮 layoutSubviews。

    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
        [self wchook_setupDoubleTapGestureIfNeeded];
        [self setNeedsLayout];
    } else {
        [self wchook_hideMessageTimeLabel];
        if (self.wchook_doubleTapGesture) {
            self.wchook_doubleTapGesture.enabled = NO;
        }
        [self wchook_resetSwipeAnimated:NO];
    }
}


%end
