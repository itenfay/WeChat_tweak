// Internal include-only module.
// Stitched into src/WCPLGestureHook.xm by scripts/generate_wcpl_gesture_hook.sh.
// Do not add this file to $(TWEAK_NAME)_FILES directly.

static CGFloat wcpl_repeatAlignToPixel(CGFloat value) {
    CGFloat scale = [UIScreen mainScreen].scale;
    if (scale <= 0.0f) {
        scale = 2.0f;
    }
    return round(value * scale) / scale;
}

static BOOL wcpl_repeatRectAlmostEqual(CGRect left, CGRect right) {
    const CGFloat epsilon = 0.5f;
    return fabs(left.origin.x - right.origin.x) <= epsilon &&
           fabs(left.origin.y - right.origin.y) <= epsilon &&
           fabs(left.size.width - right.size.width) <= epsilon &&
           fabs(left.size.height - right.size.height) <= epsilon;
}

static NSString *wcpl_repeatAnchorSignatureForCell(UIView *cellView, NSString *messageKey, BOOL isSelf, UIView *bubbleView) {
    if (![cellView isKindOfClass:[UIView class]] || ![messageKey isKindOfClass:[NSString class]] || messageKey.length == 0) {
        return nil;
    }

    CGRect bubbleRect = CGRectZero;
    BOOL bubbleRectValid = NO;
    if ([bubbleView isKindOfClass:[UIView class]]) {
        bubbleRect = [cellView convertRect:bubbleView.bounds fromView:bubbleView];
        if (CGRectIsEmpty(bubbleRect) || CGRectGetWidth(bubbleRect) <= 0.0f || CGRectGetHeight(bubbleRect) <= 0.0f) {
            UIView *sourceSuperview = bubbleView.superview;
            if (sourceSuperview) {
                bubbleRect = [cellView convertRect:bubbleView.frame fromView:sourceSuperview];
            } else if (bubbleView == cellView) {
                bubbleRect = cellView.bounds;
            }
        }
        bubbleRectValid = !CGRectIsNull(bubbleRect) && !CGRectIsInfinite(bubbleRect) && CGRectGetWidth(bubbleRect) > 0.5f && CGRectGetHeight(bubbleRect) > 0.5f;
    }

    CGRect bubbleRectForAnchor = bubbleRect;
    BOOL bubbleRectForAnchorValid = !CGRectIsEmpty(bubbleRectForAnchor) && !CGRectIsNull(bubbleRectForAnchor) && !CGRectIsInfinite(bubbleRectForAnchor) && CGRectGetWidth(bubbleRectForAnchor) > 8.0f && CGRectGetHeight(bubbleRectForAnchor) > 8.0f;

    if (!bubbleRectValid) {
        bubbleRect = cellView.bounds;
    }

    CGRect menuRect = WCPLRepeatCellAdapterMenuRect(cellView);

    BOOL menuRectValid = !CGRectIsEmpty(menuRect) && !CGRectIsNull(menuRect) && !CGRectIsInfinite(menuRect) && CGRectGetWidth(menuRect) > 8.0f && CGRectGetHeight(menuRect) > 8.0f && CGRectIntersectsRect(menuRect, cellView.bounds);

    CGRect baseRect = CGRectZero;
    if (bubbleRectForAnchorValid) {
        baseRect = bubbleRectForAnchor;
    } else if (menuRectValid) {
        baseRect = menuRect;
    } else {
        baseRect = cellView.bounds;
    }

    CGFloat anchorMaxY = bubbleRectForAnchorValid ? CGRectGetMaxY(bubbleRectForAnchor) : CGRectGetMaxY(baseRect);
    if (menuRectValid) {
        anchorMaxY = MAX(anchorMaxY, CGRectGetMaxY(menuRect));
    }
    if (bubbleView == cellView) {
        anchorMaxY = MAX(anchorMaxY, CGRectGetMaxY(cellView.bounds));
    }

    CGFloat rx = wcpl_repeatAlignToPixel(CGRectGetMinX(bubbleRect));
    CGFloat ry = wcpl_repeatAlignToPixel(CGRectGetMinY(bubbleRect));
    CGFloat rw = wcpl_repeatAlignToPixel(CGRectGetWidth(bubbleRect));
    CGFloat rh = wcpl_repeatAlignToPixel(CGRectGetHeight(bubbleRect));

    CGFloat mx = menuRectValid ? wcpl_repeatAlignToPixel(CGRectGetMinX(menuRect)) : 0.0f;
    CGFloat my = menuRectValid ? wcpl_repeatAlignToPixel(CGRectGetMinY(menuRect)) : 0.0f;
    CGFloat mw = menuRectValid ? wcpl_repeatAlignToPixel(CGRectGetWidth(menuRect)) : 0.0f;
    CGFloat mh = menuRectValid ? wcpl_repeatAlignToPixel(CGRectGetHeight(menuRect)) : 0.0f;
    CGFloat anchorY = wcpl_repeatAlignToPixel(anchorMaxY);
    CGFloat cellWidth = wcpl_repeatAlignToPixel(CGRectGetWidth(cellView.bounds));
    CGFloat cellHeight = wcpl_repeatAlignToPixel(CGRectGetHeight(cellView.bounds));

    return [NSString stringWithFormat:@"%@|%@|%.2f,%.2f,%.2f,%.2f|m:%d,%.2f,%.2f,%.2f,%.2f|a:%.2f|c:%.2f,%.2f",
            messageKey,
            isSelf ? @"self" : @"other",
            rx,
            ry,
            rw,
            rh,
            menuRectValid ? 1 : 0,
            mx,
            my,
            mw,
            mh,
            anchorY,
            cellWidth,
            cellHeight];
}

static CGFloat wcpl_repeatButtonSizeFromConfig(void) {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    CGFloat size = config ? config.repeatButtonSize : kWCPLRepeatButtonDefaultSize;
    if (size < kWCPLRepeatButtonMinSize) {
        size = kWCPLRepeatButtonMinSize;
    } else if (size > kWCPLRepeatButtonMaxSize) {
        size = kWCPLRepeatButtonMaxSize;
    }
    return size;
}

static void wcpl_updateRepeatButtonVisualShape(UIButton *button) {
    if (![button isKindOfClass:[UIButton class]]) {
        return;
    }

    CGRect bounds = button.bounds;
    CGFloat width = CGRectGetWidth(bounds);
    CGFloat height = CGRectGetHeight(bounds);
    if (width < 1.0f || height < 1.0f) {
        return;
    }

    CGFloat radius = height * 0.5f;
    button.layer.cornerRadius = radius;
    button.layer.shadowPath = [UIBezierPath bezierPathWithRoundedRect:bounds cornerRadius:radius].CGPath;
}

static void wcpl_setupRepeatLifecycleObserver(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSNotificationCenter *center = [NSNotificationCenter defaultCenter];
        [center addObserverForName:kWCPLRepeatButtonAssetDidChangeNotification
                            object:nil
                             queue:[NSOperationQueue mainQueue]
                        usingBlock:^(__unused NSNotification *note) {
            // 资源更新后，尽快刷新可见 cell 的按钮样式，避免必须滚动/重进聊天才生效。
            WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
            [[WCPLRepeatButtonAssetManager sharedManager] migrateIfNeededForConfig:config];

            NSArray<UIWindow *> *windows = wcpl_applicationWindows();
            if (windows.count == 0) {
                return;
            }

            SEL updateSelector = @selector(wchook_updateRepeatButtonByNFQPrinciple);
            Class cellClass = NSClassFromString(@"CommonMessageCellView");
            if (!cellClass) {
                return;
            }

            for (UIWindow *window in windows) {
                NSMutableArray<UIView *> *cells = [NSMutableArray array];
                wcpl_collectMessageCellViewsInView(window, cells);
                for (UIView *cellView in cells) {
                    if (![cellView isKindOfClass:cellClass]) {
                        continue;
                    }
                    if (![cellView respondsToSelector:updateSelector]) {
                        continue;
                    }
                    @try {
                        ((void (*)(id, SEL))objc_msgSend)(cellView, updateSelector);
                    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
                }
            }
        }];
    });
}

static void wcpl_bindRepeatButtonTargetsToOwner(UIButton *button, id owner) {
    if (![button isKindOfClass:[UIButton class]] || !owner) {
        return;
    }
    [button removeTarget:nil action:@selector(wchook_onRepeatButtonTapped:) forControlEvents:UIControlEventTouchUpInside];
    [button removeTarget:nil action:@selector(wchook_onRepeatButtonTouchDown:) forControlEvents:UIControlEventTouchDown];
    [button removeTarget:nil action:@selector(wchook_onRepeatButtonTouchUp:) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];

    [button addTarget:owner action:@selector(wchook_onRepeatButtonTapped:) forControlEvents:UIControlEventTouchUpInside];
    [button addTarget:owner action:@selector(wchook_onRepeatButtonTouchDown:) forControlEvents:UIControlEventTouchDown];
    [button addTarget:owner action:@selector(wchook_onRepeatButtonTouchUp:) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
}

static void wcpl_clearRepeatAnchorForCell(UIView *cellView) {
    if (![cellView isKindOfClass:[UIView class]]) {
        return;
    }
    objc_setAssociatedObject(cellView, kWCPLRepeatAnchorMessageKey, nil, OBJC_ASSOCIATION_COPY_NONATOMIC);
    objc_setAssociatedObject(cellView, kWCPLRepeatAnchorWrapKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(cellView, kWCPLRepeatAnchorReportTimeKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(cellView, kWCPLRepeatAnchorIsSelfKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(cellView, kWCPLRepeatAnchorSignatureKey, nil, OBJC_ASSOCIATION_COPY_NONATOMIC);
    objc_setAssociatedObject(cellView, kWCPLRepeatAnchorQuoteProxyKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(cellView, kWCPLRepeatAnchorQuoteReferSvrIDKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static NSArray<UIWindow *> *wcpl_applicationWindows(void) {
    UIApplication *application = nil;
    if ([UIApplication respondsToSelector:@selector(sharedApplication)]) {
        @try {
            application = [UIApplication sharedApplication];
        } @catch (__unused NSException *exception) {
            application = nil;
        }
    }
    if (!application) {
        return @[];
    }

    NSArray *windows = nil;
    SEL windowsSelector = NSSelectorFromString(@"windows");
    if ([application respondsToSelector:windowsSelector]) {
        @try {
            windows = ((id (*)(id, SEL))objc_msgSend)(application, windowsSelector);
        } @catch (__unused NSException *exception) {
            windows = nil;
        }
    }
    if (![windows isKindOfClass:[NSArray class]] || windows.count == 0) {
        return @[];
    }

    NSMutableArray<UIWindow *> *result = [NSMutableArray arrayWithCapacity:windows.count];
    for (id windowObj in windows) {
        if (![windowObj isKindOfClass:[UIWindow class]]) {
            continue;
        }
        UIWindow *window = (UIWindow *)windowObj;
        if (window.hidden || window.alpha < 0.01f) {
            continue;
        }
        [result addObject:window];
    }
    return [result copy];
}
