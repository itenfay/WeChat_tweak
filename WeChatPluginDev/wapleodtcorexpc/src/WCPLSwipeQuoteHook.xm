// 说明：滑动过程中 relatedMessageViews 可能因 cell 复用/布局抖动而变化，
// 导致部分 view 没被 reset，表现为头像/气泡残留偏移。
// 这里缓存「本次滑动实际影响的 view 列表」，reset 时优先清理同一批 view。
static const void *kWCPLSwipeQuoteAffectedViewsKey = &kWCPLSwipeQuoteAffectedViewsKey;

static NSArray<UIView *> *wcpl_swipeQuote_affectedViews(id cell) {
    if (!cell) {
        return nil;
    }
    id value = objc_getAssociatedObject(cell, kWCPLSwipeQuoteAffectedViewsKey);
    return [value isKindOfClass:[NSArray class]] ? (NSArray<UIView *> *)value : nil;
}

static void wcpl_swipeQuote_setAffectedViews(id cell, NSArray<UIView *> *views) {
    if (!cell) {
        return;
    }
    objc_setAssociatedObject(cell, kWCPLSwipeQuoteAffectedViewsKey, views, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

%hook CommonMessageCellView

%new
- (void)wchook_setupSwipeGestureIfNeeded {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    // 检查总开关和是否有任何滑动功能启用
    if (!config.swipeGestureEnable || (!config.swipeQuoteEnable && !config.swipeRightEnable)) {
        // 兜底：动态关闭功能时，确保上一次滑动残留的 transform 被清理。
        [self wchook_resetSwipeAnimated:NO];
        if (self.wchook_swipeGesture) {
            self.wchook_swipeGesture.enabled = NO;
        }
        return;
    }

    UIPanGestureRecognizer *gesture = self.wchook_swipeGesture;
    if (!gesture) {
        gesture = [[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(wchook_handleSwipe:)];
        gesture.maximumNumberOfTouches = 1;
        gesture.minimumNumberOfTouches = 1;
        gesture.cancelsTouchesInView = YES;
        gesture.delaysTouchesBegan = NO;
        gesture.delaysTouchesEnded = NO;
        gesture.delegate = (id<UIGestureRecognizerDelegate>)self;
        [self addGestureRecognizer:gesture];
        self.wchook_swipeGesture = gesture;
        WCPLLogDebug(@"Swipe gesture created: cell=%p cancelsTouches=%d delaysBegan=%d delaysEnded=%d",
                     self,
                     gesture.cancelsTouchesInView ? 1 : 0,
                     gesture.delaysTouchesBegan ? 1 : 0,
                     gesture.delaysTouchesEnded ? 1 : 0);
        wcpl_logLongPressCompatDecision(self,
                                        config,
                                        gesture,
                                        @"create_swipe_pan_keep_cancel_disable_delays",
                                        @"prevent_long_press_block");
    }

    BOOL hadTouchDelays = gesture.delaysTouchesBegan || gesture.delaysTouchesEnded;
    gesture.cancelsTouchesInView = YES;
    gesture.delaysTouchesBegan = NO;
    gesture.delaysTouchesEnded = NO;
    gesture.enabled = YES;

    if (hadTouchDelays) {
        wcpl_logLongPressCompatDecision(self,
                                        config,
                                        gesture,
                                        @"normalize_existing_swipe_pan_disable_delays",
                                        @"detected_legacy_delay_touch_settings");
    }

    if (!self.wchook_feedbackGenerator) {
        self.wchook_feedbackGenerator = [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleMedium];
    }
}

%new
- (void)wchook_setupDoubleTapGestureIfNeeded {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!config.doubleTapGestureEnable) {
        if (self.wchook_doubleTapGesture) {
            self.wchook_doubleTapGesture.enabled = NO;
        }
        return;
    }

    UITapGestureRecognizer *gesture = self.wchook_doubleTapGesture;
    if (!gesture) {
        gesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(wchook_handleDoubleTap:)];
        gesture.numberOfTapsRequired = 3;
        gesture.numberOfTouchesRequired = 1;
        gesture.cancelsTouchesInView = YES;
        gesture.delaysTouchesBegan = NO;
        gesture.delaysTouchesEnded = NO;
        gesture.delegate = (id<UIGestureRecognizerDelegate>)self;
        [self addGestureRecognizer:gesture];
        self.wchook_doubleTapGesture = gesture;
        WCPLLogDebug(@"Triple tap gesture created: cell=%p", self);
    }

    // 递归约束整棵消息 cell 视图树：禁用原生双击，低阶点击等待三击失败。
    wcpl_enforceTripleTapPriorityForViewTree(self, gesture, self);

    gesture.enabled = YES;
    if (!self.wchook_feedbackGenerator) {
        self.wchook_feedbackGenerator = [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleMedium];
    }
}

- (void)prepareForReuse {
    %orig;
    [self wchook_hideMessageTimeLabel];
    [self wchook_hideRepeatButtonByNFQPrinciple];
    // 兜底：避免滑动过程中 cell 复用导致 transform 残留（常见表现：头像/气泡偏移）
    [self wchook_resetSwipeAnimated:NO];
}

%new
- (void)wchook_handleSwipe:(UIPanGestureRecognizer *)gesture {
    if (!gesture) {
        return;
    }

    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    // 检查总开关和是否有任何滑动功能启用
    if (!config.swipeGestureEnable || (!config.swipeQuoteEnable && !config.swipeRightEnable)) {
        [self wchook_resetSwipeAnimated:YES];
        return;
    }

    NSArray<UIView *> *messageViews = wcpl_swipeQuote_affectedViews(self);
    if (gesture.state == UIGestureRecognizerStateBegan || messageViews.count == 0) {
        messageViews = [WCHookSwipeUtilities relatedMessageViewsForCommonView:self];
        wcpl_swipeQuote_setAffectedViews(self, messageViews);
    }
    CGPoint translation = [gesture translationInView:self];
    CGPoint velocity = [gesture velocityInView:self];

    // 判断滑动方向
    WCHookSwipeDirection direction = [WCHookSwipeUtilities swipeDirectionFromTranslation:translation];

    // 检查当前方向是否启用
    BOOL isDirectionEnabled = NO;
    if (direction == WCHookSwipeDirectionLeft && config.swipeQuoteEnable) {
        isDirectionEnabled = YES;
    } else if (direction == WCHookSwipeDirectionRight && config.swipeRightEnable) {
        isDirectionEnabled = YES;
    }

    // 如果当前方向未启用，忽略手势
    if (!isDirectionEnabled && gesture.state != UIGestureRecognizerStateBegan) {
        if (gesture.state == UIGestureRecognizerStateEnded || gesture.state == UIGestureRecognizerStateCancelled) {
            WCPLLogDebug(@"Swipe ignored: state=%@ cell=%p direction=%@ enabledQuote=%d enabledRight=%d tx=%.2f vx=%.2f",
                         wcpl_swipeStateName(gesture.state),
                         self,
                         wcpl_swipeDirectionName(direction),
                         config.swipeQuoteEnable ? 1 : 0,
                         config.swipeRightEnable ? 1 : 0,
                         translation.x,
                         velocity.x);
        }
        [WCHookSwipeUtilities applyTransform:CGAffineTransformIdentity toViews:messageViews];
        if (gesture.state == UIGestureRecognizerStateEnded || gesture.state == UIGestureRecognizerStateCancelled) {
            [self wchook_resetSwipeAnimated:YES];
        }
        return;
    }

    // 使用双向滑动检测
    if ([WCHookSwipeUtilities shouldIgnoreTranslationBidirectional:translation]) {
        [WCHookSwipeUtilities applyTransform:CGAffineTransformIdentity toViews:messageViews];
        if (gesture.state == UIGestureRecognizerStateEnded || gesture.state == UIGestureRecognizerStateCancelled) {
            [self wchook_resetSwipeAnimated:YES];
        }
        return;
    }

    CGFloat threshold = [WCHookSwipeUtilities thresholdForView:self] * [config swipeDistanceScale];
    CGFloat lightThreshold = threshold * [config swipeLightTriggerRatio];
    CGFloat hardVelocityTrigger = [config swipeVelocityTrigger];

    switch (gesture.state) {
    case UIGestureRecognizerStateBegan: {
        CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
        wcpl_armTouchSuppression(msgWrap, self, @"swipeBegan", kWCPLSwipeTouchSuppressDuration);
        WCPLLogDebug(@"Swipe state: began cell=%p direction=%@ tx=%.2f ty=%.2f vx=%.2f vy=%.2f threshold=%.2f light=%.2f",
                     self,
                     wcpl_swipeDirectionName(direction),
                     translation.x,
                     translation.y,
                     velocity.x,
                     velocity.y,
                     threshold,
                     lightThreshold);
        [self.wchook_feedbackGenerator prepare];
        self.wchook_feedbackTriggered = NO;
        self.wchook_swipeTriggerStage = 0;
        break;
    }
    case UIGestureRecognizerStateChanged: {
        // 双向滑动：限制在 [-threshold, threshold] 范围内
        CGFloat clamped = [WCHookSwipeUtilities clampedTranslationBidirectional:translation.x threshold:threshold];
        CGAffineTransform transform = CGAffineTransformMakeTranslation(clamped, 0.0f);
        [WCHookSwipeUtilities applyTransform:transform toViews:messageViews];

        // 分段反馈：轻触发 -> 重触发
        CGFloat absTranslation = fabs(translation.x);
        NSInteger stage = 0;
        if (absTranslation >= threshold) {
            stage = 2;
        } else if (absTranslation >= lightThreshold) {
            stage = 1;
        }

        // 只在“首次达到某一段”时触发反馈（避免反复抖动）
        if (stage > self.wchook_swipeTriggerStage) {
            CGFloat intensity = (stage == 1) ? 0.35f : 0.85f;
            if ([self.wchook_feedbackGenerator respondsToSelector:@selector(impactOccurredWithIntensity:)]) {
                [self.wchook_feedbackGenerator impactOccurredWithIntensity:intensity];
            } else {
                [self.wchook_feedbackGenerator impactOccurred];
            }
            self.wchook_swipeTriggerStage = stage;
            self.wchook_feedbackTriggered = (stage >= 2);
            WCPLLogDebug(@"Swipe stage reached: cell=%p stage=%ld direction=%@ tx=%.2f vx=%.2f",
                         self,
                         (long)stage,
                         wcpl_swipeDirectionName(direction),
                         translation.x,
                         velocity.x);
        }
        break;
    }
    case UIGestureRecognizerStateCancelled:
    case UIGestureRecognizerStateFailed:
    case UIGestureRecognizerStateEnded: {
        CGFloat absTranslation = fabs(translation.x);
        CGFloat absVelocity = fabs(velocity.x);

        // 方向兜底：轻甩但 translation 不明显时用 velocity 判方向
        if (direction == WCHookSwipeDirectionNone) {
            if (velocity.x > 0.0f) {
                direction = WCHookSwipeDirectionRight;
            } else if (velocity.x < 0.0f) {
                direction = WCHookSwipeDirectionLeft;
            }
        }

        BOOL shouldHardTrigger = (absTranslation >= threshold) || (absVelocity >= hardVelocityTrigger);
        BOOL shouldLightTrigger = (!shouldHardTrigger && absTranslation >= lightThreshold);
        WCPLLogDebug(@"Swipe state: %@ cell=%p direction=%@ absTx=%.2f absVx=%.2f threshold=%.2f light=%.2f hard=%d lightHit=%d",
                     wcpl_swipeStateName(gesture.state),
                     self,
                     wcpl_swipeDirectionName(direction),
                     absTranslation,
                     absVelocity,
                     threshold,
                     lightThreshold,
                     shouldHardTrigger ? 1 : 0,
                     shouldLightTrigger ? 1 : 0);

        // 触发轻/重动作：轻滑默认引用，重滑执行用户配置动作
        if (shouldHardTrigger) {
            CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
            wcpl_armTouchSuppression(msgWrap, self, @"swipeHardTrigger", kWCPLSwipeTouchSuppressDuration);
            if (self.wchook_swipeTriggerStage < 2) {
                if ([self.wchook_feedbackGenerator respondsToSelector:@selector(impactOccurredWithIntensity:)]) {
                    [self.wchook_feedbackGenerator impactOccurredWithIntensity:0.85f];
                } else {
                    [self.wchook_feedbackGenerator impactOccurred];
                }
            }
            [self wchook_triggerActionForDirection:direction];
        } else if (shouldLightTrigger) {
            CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
            wcpl_armTouchSuppression(msgWrap, self, @"swipeLightTrigger", kWCPLSwipeTouchSuppressDuration);
            if (self.wchook_swipeTriggerStage < 1) {
                if ([self.wchook_feedbackGenerator respondsToSelector:@selector(impactOccurredWithIntensity:)]) {
                    [self.wchook_feedbackGenerator impactOccurredWithIntensity:0.35f];
                } else {
                    [self.wchook_feedbackGenerator impactOccurred];
                }
            }
            [self wchook_triggerLightActionForDirection:direction];
        }
        [self wchook_resetSwipeAnimated:YES];
        break;
    }
    default: {
        break;
    }
    }
}

%new
- (void)wchook_handleDoubleTap:(UITapGestureRecognizer *)gesture {
    if (gesture && gesture.state != UIGestureRecognizerStateRecognized) {
        return;
    }

    if (gesture && [self isKindOfClass:[UIView class]]) {
        CGPoint pointInCell = [gesture locationInView:(UIView *)self];
        if (!wcpl_isPointInMessageBubbleArea(self, pointInCell, @"gesture_recognized_scope")) {
            CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
            if (msgWrap) {
                objc_setAssociatedObject(msgWrap, kWCPLDoubleTapLastTapAtKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                objc_setAssociatedObject(msgWrap, kWCPLDoubleTapManualTapCountKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
            WCPLLogDebug(@"Triple tap gesture ignored at recognized stage: cell=%p point=(%.1f,%.1f)",
                         self,
                         pointInCell.x,
                         pointInCell.y);
            return;
        }
    }

    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
    NSNumber *tapCountObj = msgWrap ? objc_getAssociatedObject(msgWrap, kWCPLDoubleTapManualTapCountKey) : nil;
    NSNumber *lastTapAt = msgWrap ? objc_getAssociatedObject(msgWrap, kWCPLDoubleTapLastTapAtKey) : nil;
    NSInteger tapCount = [tapCountObj isKindOfClass:[NSNumber class]] ? tapCountObj.integerValue : 0;
    CFTimeInterval delta = ([lastTapAt isKindOfClass:[NSNumber class]]) ? (CACurrentMediaTime() - lastTapAt.doubleValue) : -1.0;
    static const NSTimeInterval kWCPLManualGateInterval = 1.60;
    if (tapCount < 2 || delta < 0 || delta > kWCPLManualGateInterval) {
        WCPLLogDebug(@"Triple tap gesture ignored: manual gate miss cell=%p tapCount=%ld delta=%.3f",
                     self,
                     (long)tapCount,
                     delta);
        return;
    }

    [self wchook_fireDoubleTapActionWithSource:@"gesture"];
}

%new
- (void)wchook_fireDoubleTapActionWithSource:(NSString *)source {
    NSString *triggerSource = ([source isKindOfClass:[NSString class]] && source.length > 0) ? source : @"unknown";

    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!config.doubleTapGestureEnable) {
        return;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
    if (!msgWrap) {
        WCPLLogDebug(@"Double tap ignored: message wrap unavailable cell=%p source=%@", self, triggerSource);
        return;
    }

    CFTimeInterval now = CACurrentMediaTime();
    NSNumber *lastHandledAt = objc_getAssociatedObject(msgWrap, kWCPLDoubleTapLastHandledAtKey);
    if ([lastHandledAt isKindOfClass:[NSNumber class]] &&
        (now - lastHandledAt.doubleValue) < kWCPLDoubleTapTriggerDebounceInterval) {
        WCPLLogDebug(@"Double tap ignored by debounce: cell=%p source=%@ delta=%.3f",
                     self,
                     triggerSource,
                     now - lastHandledAt.doubleValue);
        return;
    }
    objc_setAssociatedObject(msgWrap, kWCPLDoubleTapLastHandledAtKey, @(now), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    // 一旦进入触发链路，重置手动连击状态，避免历史点击影响下一轮识别。
    objc_setAssociatedObject(msgWrap, kWCPLDoubleTapLastTapAtKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(msgWrap, kWCPLDoubleTapManualTapCountKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    BOOL isFromOther = wcpl_isMessageFromOther(msgWrap);
    BOOL isSelf = !isFromOther;
    NSInteger action = isSelf ? config.doubleTapSelfAction : config.doubleTapOtherAction;
    action = wcpl_normalizeSwipeActionValueLegacyAware(action, isSelf);

    WCPLLogInfo(@"Triple tap trigger: cell=%p source=%@ isFromOther=%d action=%ld otherAction=%ld selfAction=%ld msg=%@",
                self,
                triggerSource,
                isFromOther ? 1 : 0,
                (long)action,
                (long)config.doubleTapOtherAction,
                (long)config.doubleTapSelfAction,
                wcpl_repeatMessageDebugInfo(msgWrap));

    wcpl_armTouchSuppression(msgWrap, self, @"tripleTapTrigger", kWCPLSwipeTouchSuppressDuration);

    [self.wchook_feedbackGenerator prepare];
    if ([self.wchook_feedbackGenerator respondsToSelector:@selector(impactOccurredWithIntensity:)]) {
        [self.wchook_feedbackGenerator impactOccurredWithIntensity:0.55f];
    } else {
        [self.wchook_feedbackGenerator impactOccurred];
    }

    [self wchook_performConfiguredAction:action messageWrap:msgWrap isSelf:isSelf sceneTag:@"三击"];
}

%new
- (BOOL)wchook_tryFireManualDoubleTapWithSource:(NSString *)source {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!config.doubleTapGestureEnable) {
        return NO;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
    if (!msgWrap) {
        return NO;
    }

    NSString *triggerSource = ([source isKindOfClass:[NSString class]] && source.length > 0) ? source : @"manual";
    static const NSTimeInterval kWCPLManualDoubleTapInterval = 1.60;
    CFTimeInterval now = CACurrentMediaTime();
    NSNumber *lastTapAt = objc_getAssociatedObject(msgWrap, kWCPLDoubleTapLastTapAtKey);
    NSNumber *manualTapCount = objc_getAssociatedObject(msgWrap, kWCPLDoubleTapManualTapCountKey);
    NSInteger sequenceCount = 1;
    double delta = -1.0;
    if ([lastTapAt isKindOfClass:[NSNumber class]] &&
        (now - lastTapAt.doubleValue) <= kWCPLManualDoubleTapInterval) {
        delta = now - lastTapAt.doubleValue;
        sequenceCount = [manualTapCount isKindOfClass:[NSNumber class]] ? manualTapCount.integerValue + 1 : 2;
    }

    if (sequenceCount >= 3) {
        objc_setAssociatedObject(msgWrap, kWCPLDoubleTapLastTapAtKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(msgWrap, kWCPLDoubleTapManualTapCountKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        WCPLLogDebug(@"Triple tap manual matched: cell=%p source=%@ count=%ld delta=%.3f msg=%@",
                     self,
                     triggerSource,
                     (long)sequenceCount,
                     delta,
                     wcpl_repeatMessageDebugInfo(msgWrap));
        [self wchook_fireDoubleTapActionWithSource:[@"manual_" stringByAppendingString:triggerSource]];
        return YES;
    }

    objc_setAssociatedObject(msgWrap, kWCPLDoubleTapLastTapAtKey, @(now), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(msgWrap, kWCPLDoubleTapManualTapCountKey, @(sequenceCount), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    BOOL shouldSuppressNativeTap = (sequenceCount >= 2);
    WCPLLogDebug(@"Triple tap manual armed: cell=%p source=%@ count=%ld delta=%.3f suppress=%d msg=%@",
                 self,
                 triggerSource,
                 (long)sequenceCount,
                 delta,
                 shouldSuppressNativeTap ? 1 : 0,
                 wcpl_repeatMessageDebugInfo(msgWrap));
    // 从第二击开始吞掉 touchesEnded，避免原生双击放大链路抢先触发。
    return shouldSuppressNativeTap;
}

%new
- (BOOL)wchook_tryHandleDoubleTapFromTouches:(id)touches event:(id)event {
    (void)event;

    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!config.doubleTapGestureEnable) {
        return NO;
    }

    UITouch *touch = nil;
    if ([touches respondsToSelector:@selector(anyObject)]) {
        @try {
            touch = ((id (*)(id, SEL))objc_msgSend)(touches, @selector(anyObject));
        } @catch (__unused NSException *exceptionTouch) {
            touch = nil;
        }
    }

    if (![touch isKindOfClass:[UITouch class]]) {
        return NO;
    }

    if (touch.phase != UITouchPhaseEnded) {
        return NO;
    }

    if (!wcpl_isTouchInMessageBubbleArea(self, touch, @"touchesEnded_scope")) {
        CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
        if (msgWrap) {
            objc_setAssociatedObject(msgWrap, kWCPLDoubleTapLastTapAtKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            objc_setAssociatedObject(msgWrap, kWCPLDoubleTapManualTapCountKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
        return NO;
    }

    NSInteger tapCount = touch.tapCount;
    if (tapCount >= 3) {
        [self wchook_fireDoubleTapActionWithSource:@"touchesEnded"];
        return YES;
    }

    NSString *manualSource = [NSString stringWithFormat:@"touchesEnded_tap%ld", (long)tapCount];
    return [self wchook_tryFireManualDoubleTapWithSource:manualSource];
}

%new
- (void)wchook_triggerActionForDirection:(WCHookSwipeDirection)direction {
    dispatch_async(dispatch_get_main_queue(), ^{
        [self wchook_showSwipeActionMenuForDirection:direction];
    });
}

%new
- (void)wchook_triggerLightActionForDirection:(WCHookSwipeDirection)direction {
    // 轻滑动作：默认引用（不区分方向，避免误触发危险操作）
    NSString *directionName = (direction == WCHookSwipeDirectionRight) ? @"右滑" : @"左滑";
    WCPLCrashBreadcrumb(@"轻滑触发: %@ 引用", directionName);
    dispatch_async(dispatch_get_main_queue(), ^{
        [self wchook_performQuoteReply];
    });
}

%new
- (void)wchook_resetSwipeAnimated:(BOOL)animated {
    NSArray<UIView *> *messageViews = wcpl_swipeQuote_affectedViews(self);
    if (messageViews.count == 0) {
        messageViews = [WCHookSwipeUtilities relatedMessageViewsForCommonView:self];
    }
    [WCHookSwipeUtilities animateResetForViews:messageViews animated:animated];
    self.wchook_feedbackTriggered = NO;
    self.wchook_swipeTriggerStage = 0;
    wcpl_swipeQuote_setAffectedViews(self, nil);
}

%new
- (void)wchook_showSwipeActionMenuForDirection:(WCHookSwipeDirection)direction {
    // 获取消息内容
    CMessageWrap *msgWrap = nil;
    if ([self respondsToSelector:@selector(viewModel)]) {
        id viewModel = [self performSelector:@selector(viewModel)];
        // 优先使用 messageWrap 属性（BaseMessageViewModel 的标准属性）
        if ([viewModel respondsToSelector:@selector(messageWrap)]) {
            msgWrap = [viewModel performSelector:@selector(messageWrap)];
        }
        // 备用方法
        if (!msgWrap && [viewModel respondsToSelector:@selector(getCurrentMessageWrap)]) {
            msgWrap = [viewModel performSelector:@selector(getCurrentMessageWrap)];
        }
    }
    // 直接从 Cell 获取
    if (!msgWrap && [self respondsToSelector:@selector(messageWrap)]) {
        msgWrap = [self performSelector:@selector(messageWrap)];
    }
    if (!msgWrap && [self respondsToSelector:@selector(getCurrentMessageWrap)]) {
        msgWrap = [self performSelector:@selector(getCurrentMessageWrap)];
    }

    if (!msgWrap) {
        WCPLLogDebug(@"Cannot get message wrap for swipe action");
        return;
    }

    // 判断是否是自己发送的消息
    BOOL isFromOther = wcpl_isMessageFromOther(msgWrap);
    BOOL isSelf = !isFromOther;

    // 获取配置
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    NSInteger action = 0;

    // 根据滑动方向和消息发送者获取配置的操作
    if (direction == WCHookSwipeDirectionLeft) {
        action = isSelf ? config.swipeLeftSelfAction : config.swipeLeftOtherAction;
    } else {
        action = isSelf ? config.swipeRightSelfAction : config.swipeRightOtherAction;
    }

    NSString *directionName = (direction == WCHookSwipeDirectionLeft) ? @"左滑" : @"右滑";
    // 兼容历史值并兜底越界值，统一回退为 0（引用）
    action = wcpl_normalizeSwipeActionValueLegacyAware(action, isSelf);
    [self wchook_performConfiguredAction:action messageWrap:msgWrap isSelf:isSelf sceneTag:directionName];
}

%new
- (NSString *)wchook_actionNameForAction:(NSInteger)action {
    switch (action) {
        case 1:
            return @"关闭";
        case 2:
            return @"删除";
        case 3:
            return @"撤回";
        case 4:
            return @"复读";
        case 5:
            return @"转发";
        default:
            return @"引用";
    }
}

%new
- (void)wchook_performConfiguredAction:(NSInteger)action
                           messageWrap:(CMessageWrap *)msgWrap
                                isSelf:(BOOL)isSelf
                              sceneTag:(NSString *)sceneTag {
    if (!msgWrap) {
        return;
    }

    NSString *resolvedScene = ([sceneTag isKindOfClass:[NSString class]] && sceneTag.length > 0) ? sceneTag : @"手势";
    NSString *actionName = [self wchook_actionNameForAction:action];
    WCPLCrashBreadcrumb(@"%@动作: %@ msgType=%u from=%@ to=%@",
                        resolvedScene,
                        actionName,
                        msgWrap.m_uiMessageType,
                        msgWrap.m_nsFromUsr ?: @"",
                        msgWrap.m_nsToUsr ?: @"");

    // 0=引用, 1=关闭, 2=删除, 3=撤回(仅己方消息), 4=复读, 5=转发
    switch (action) {
        case 0: // 引用
            [self wchook_performQuoteReply];
            break;
        case 1: // 关闭
            WCPLLogDebug(@"%@ action close: no-op", resolvedScene);
            break;
        case 2: // 删除
            [self wchook_performDeleteMessage:msgWrap];
            break;
        case 3: // 撤回（仅己方消息有效）
            if (isSelf) {
                [self wchook_performRevokeMessage:msgWrap];
            } else {
                [self wchook_performQuoteReply];
            }
            break;
        case 4: // 复读
            wcpl_dispatchRepeatMessageWrapSafely(self, msgWrap, resolvedScene);
            break;
        case 5: // 转发
            [self wchook_performForwardMessage:msgWrap sceneTag:resolvedScene];
            break;
        default:
            [self wchook_performQuoteReply];
            break;
    }
}

%new
- (void)wchook_performQuoteReply {
    @try {
        CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
        if (!msgWrap) {
            WCPLLogWarning(@"Quote reply failed: message wrap not found");
            return;
        }

        BaseMsgContentViewController *chatVC = [self wchook_findChatViewController];
        if (!chatVC) {
            WCPLLogWarning(@"Quote reply failed: chat view controller not found");
            return;
        }

        wcpl_armQuoteLongPressSuppression(msgWrap, self, @"performQuoteReply");

        @try {
            id menuController = [UIMenuController sharedMenuController];
            SEL hideMenuSelector = NSSelectorFromString(@"hideMenuFromView:");
            if (menuController && [menuController respondsToSelector:hideMenuSelector]) {
                ((void (*)(id, SEL, id))objc_msgSend)(menuController, hideMenuSelector, self);
            }
        } @catch (__unused NSException *exceptionMenu) {
        }

        // 优先走 VC 引用入口，避免触发长按菜单链路
        if ([chatVC respondsToSelector:@selector(startReplyWithMessageWrap:)]) {
            [chatVC performSelector:@selector(startReplyWithMessageWrap:) withObject:msgWrap];
            wcpl_scheduleSwipeQuoteAtUserIfNeeded(msgWrap, chatVC, @"quote_reply_startReply");
            WCPLLogDebug(@"Quote reply via startReplyWithMessageWrap: msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
            return;
        }

        // 次选：输入 presenter 引用接口
        id inputPresenter = nil;
        if ([chatVC respondsToSelector:@selector(inputPresenter)]) {
            @try {
                inputPresenter = ((id (*)(id, SEL))objc_msgSend)(chatVC, @selector(inputPresenter));
            } @catch (__unused NSException *exceptionInputPresenter) {
                inputPresenter = nil;
            }
        }

        SEL replySelector = @selector(replyMessage:becomeFirstResponder:showDisplayName:);
        if (inputPresenter && [inputPresenter respondsToSelector:replySelector]) {
            @try {
                ((void (*)(id, SEL, id, BOOL, BOOL))objc_msgSend)(inputPresenter,
                                                                   replySelector,
                                                                   msgWrap,
                                                                   YES,
                                                                   YES);
                wcpl_scheduleSwipeQuoteAtUserIfNeeded(msgWrap, chatVC, @"quote_reply_inputPresenter");
                WCPLLogDebug(@"Quote reply via inputPresenter.replyMessage: msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
                return;
            } @catch (NSException *exceptionReplyPresenter) {
                WCPLLogWarning(@"Quote reply via inputPresenter failed: %@", exceptionReplyPresenter.reason ?: exceptionReplyPresenter);
            }
        }

        // 兜底：仅在没有 VC/presenter 能力时调用，避免误触发长按菜单
        if ([self respondsToSelector:@selector(onClickAsRefer)]) {
            [self performSelector:@selector(onClickAsRefer)];
            wcpl_scheduleSwipeQuoteAtUserIfNeeded(msgWrap, chatVC, @"quote_reply_onClickAsRefer");
            WCPLLogWarning(@"Quote reply fallback via onClickAsRefer: msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
            return;
        }

        WCPLLogWarning(@"Quote reply: no suitable method found");
    } @catch (NSException *exception) {
        WCPLLogError(@"Quote reply failed: %@", exception);
    }
}

%end
