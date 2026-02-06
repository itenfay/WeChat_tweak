#import <UIKit/UIKit.h>
#import "WeChatRedEnvelop.h"
#import "WCPLConfigCenter.h"
#import "WCHookSwipeUtilities.h"
#import "WCHookMessageNavigator.h"
#import "WCPLServiceCenter.h"
#import "WCPLCrashReporter.h"
#import "WCPLLogger.h"
#import <objc/runtime.h>
#import <objc/message.h>

static const NSInteger kWCPLRepeatButtonTag = 0x5743504C;
static const CGFloat kWCPLRepeatButtonSize = 20.0f;
static const CGFloat kWCPLRepeatButtonEdgeInset = 1.0f;
static const void *kWCPLRepeatButtonWrapKey = &kWCPLRepeatButtonWrapKey;

static BOOL wcpl_isMessageFromOther(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return NO;
    }

    @try {
        Class msgWrapClass = objc_getClass("CMessageWrap");
        SEL selector = @selector(isSenderFromMsgWrap:);
        if (msgWrapClass && [msgWrapClass respondsToSelector:selector]) {
            BOOL isSender = ((BOOL (*)(id, SEL, id))objc_msgSend)(msgWrapClass, selector, msgWrap);
            return !isSender;
        }
    } @catch (__unused NSException *exception) {
    }

    return YES;
}

static NSInteger wcpl_normalizeSwipeActionValueLegacyAware(NSInteger action, BOOL isSelfAction) {
    if (action == 1) {
        return 0;
    }

    if (action < 0) {
        return 0;
    }

    NSInteger maxAction = isSelfAction ? 3 : 2;
    if (action > maxAction) {
        return 0;
    }

    return action;
}

static NSString *wcpl_trimTextForRepeat(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) {
        return nil;
    }
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *wcpl_extractXMLValue(NSString *xml, NSString *openTag, NSString *closeTag) {
    if (![xml isKindOfClass:[NSString class]] || xml.length == 0) {
        return nil;
    }
    NSRange openRange = [xml rangeOfString:openTag];
    if (openRange.location == NSNotFound) {
        return nil;
    }
    NSUInteger valueStart = NSMaxRange(openRange);
    if (valueStart >= xml.length) {
        return nil;
    }
    NSRange closeRange = [xml rangeOfString:closeTag options:0 range:NSMakeRange(valueStart, xml.length - valueStart)];
    if (closeRange.location == NSNotFound || closeRange.location <= valueStart) {
        return nil;
    }
    NSString *value = [xml substringWithRange:NSMakeRange(valueStart, closeRange.location - valueStart)];
    return wcpl_trimTextForRepeat(value);
}

static NSString *wcpl_extractQuoteTitleFromXML(NSString *xml) {
    NSString *title = wcpl_extractXMLValue(xml, @"<title><![CDATA[", @"]]></title>");
    if (title.length > 0) {
        return title;
    }
    return wcpl_extractXMLValue(xml, @"<title>", @"</title>");
}

static CMessageWrap *wcpl_messageWrapForCellView(id cell) {
    if (!cell) {
        return nil;
    }

    SEL directSelectors[] = {
        @selector(getCurrentMessageWrap),
        @selector(messageWrap),
        @selector(getMediaWrap)
    };
    for (size_t idx = 0; idx < sizeof(directSelectors) / sizeof(directSelectors[0]); ++idx) {
        SEL selector = directSelectors[idx];
        if ([cell respondsToSelector:selector]) {
            @try {
                id wrap = ((id (*)(id, SEL))objc_msgSend)(cell, selector);
                if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                    return (CMessageWrap *)wrap;
                }
            } @catch (__unused NSException *exception) {
            }
        }
    }

    if ([cell respondsToSelector:@selector(viewModel)]) {
        id viewModel = nil;
        @try {
            viewModel = ((id (*)(id, SEL))objc_msgSend)(cell, @selector(viewModel));
        } @catch (__unused NSException *exception) {
            viewModel = nil;
        }
        if (viewModel) {
            SEL vmSelectors[] = {
                @selector(messageWrap),
                @selector(getCurrentMessageWrap),
                @selector(msgWrap)
            };
            for (size_t idx = 0; idx < sizeof(vmSelectors) / sizeof(vmSelectors[0]); ++idx) {
                SEL selector = vmSelectors[idx];
                if ([viewModel respondsToSelector:selector]) {
                    @try {
                        id wrap = ((id (*)(id, SEL))objc_msgSend)(viewModel, selector);
                        if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                            return (CMessageWrap *)wrap;
                        }
                    } @catch (__unused NSException *exception) {
                    }
                }
            }
        }
    }
    return nil;
}

static NSString *wcpl_repeatTextForMessageWrap(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return nil;
    }
    if (msgWrap.m_uiMessageType == 1) {
        return wcpl_trimTextForRepeat(msgWrap.m_nsContent);
    }
    if (msgWrap.m_uiMessageType == 49) {
        return wcpl_extractQuoteTitleFromXML(msgWrap.m_nsContent);
    }
    return nil;
}

static CMessageWrap *wcpl_quoteTargetFromMessageWrap(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return nil;
    }
    SEL selectors[] = {
        @selector(referingMessageWrap),
        @selector(referHostMsg),
        @selector(replyingMessageWrap)
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        SEL selector = selectors[idx];
        if ([msgWrap respondsToSelector:selector]) {
            @try {
                id target = ((id (*)(id, SEL))objc_msgSend)(msgWrap, selector);
                if ([target isKindOfClass:%c(CMessageWrap)]) {
                    return (CMessageWrap *)target;
                }
            } @catch (__unused NSException *exception) {
            }
        }
    }
    return nil;
}

static NSString *wcpl_chatNameForMessage(CMessageWrap *msgWrap, BaseMsgContentViewController *chatVC) {
    NSString *chatName = nil;
    if (chatVC && [chatVC respondsToSelector:@selector(getCurrentChatName)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(chatVC, @selector(getCurrentChatName));
            if ([value isKindOfClass:[NSString class]]) {
                chatName = (NSString *)value;
            }
        } @catch (__unused NSException *exception) {
            chatName = nil;
        }
    }
    if (chatName.length > 0) {
        return chatName;
    }
    if (msgWrap.m_nsFromUsr.length > 0) {
        return msgWrap.m_nsFromUsr;
    }
    return msgWrap.m_nsToUsr;
}

%hook CommonMessageCellView

%property(nonatomic, strong) UIPanGestureRecognizer *wchook_swipeGesture;
%property(nonatomic, strong) UIImpactFeedbackGenerator *wchook_feedbackGenerator;
%property(nonatomic, assign) BOOL wchook_feedbackTriggered;
%property(nonatomic, assign) NSInteger wchook_swipeTriggerStage;

%new
- (UIButton *)wchook_repeatButton {
    for (UIView *subview in self.subviews) {
        if ([subview isKindOfClass:[UIButton class]] && subview.tag == kWCPLRepeatButtonTag) {
            return (UIButton *)subview;
        }
    }
    return nil;
}

%new
- (BOOL)wchook_isMessageSupportedForRepeat:(CMessageWrap *)msgWrap {
    if (!msgWrap) {
        return NO;
    }
    switch (msgWrap.m_uiMessageType) {
        case 1:   // 文本
        case 49:  // 引用消息
            return YES;
        default:
            return NO;
    }
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
    for (UIView *subview in self.subviews) {
        if (subview.hidden || subview.tag == kWCPLRepeatButtonTag) {
            continue;
        }
        NSString *name = NSStringFromClass([subview class]);
        if ([name containsString:@"Head"] || [name containsString:@"Avatar"] || [name containsString:@"Label"] || [name containsString:@"Button"]) {
            continue;
        }
        CGRect frame = subview.frame;
        if (CGRectGetWidth(frame) < 40.0f || CGRectGetHeight(frame) < 20.0f) {
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
    CGRect bubbleFrame = bubbleView.frame;
    CGFloat centerY = CGRectGetMidY(bubbleFrame);
    CGFloat centerX = isSelf ? (CGRectGetMinX(bubbleFrame) - kWCPLRepeatButtonEdgeInset - kWCPLRepeatButtonSize * 0.5f)
                             : (CGRectGetMaxX(bubbleFrame) + kWCPLRepeatButtonEdgeInset + kWCPLRepeatButtonSize * 0.5f);
    button.bounds = CGRectMake(0.0f, 0.0f, kWCPLRepeatButtonSize, kWCPLRepeatButtonSize);
    button.center = CGPointMake(centerX, centerY);
    [self bringSubviewToFront:button];
}

%new
- (UIButton *)wchook_buildRepeatButton {
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.tag = kWCPLRepeatButtonTag;
    button.backgroundColor = [UIColor colorWithWhite:1.0f alpha:0.96f];
    button.layer.cornerRadius = kWCPLRepeatButtonSize * 0.5f;
    button.layer.borderWidth = 0.5f;
    button.layer.borderColor = [UIColor colorWithWhite:0.0f alpha:0.12f].CGColor;
    button.layer.shadowColor = [UIColor blackColor].CGColor;
    button.layer.shadowOffset = CGSizeMake(0.0f, 1.0f);
    button.layer.shadowRadius = 2.5f;
    button.layer.shadowOpacity = 0.10f;
    [button setTitle:@"+1" forState:UIControlStateNormal];
    [button setTitleColor:[UIColor colorWithRed:0.03f green:0.68f blue:0.36f alpha:1.0f] forState:UIControlStateNormal];
    button.titleLabel.font = [UIFont systemFontOfSize:11.0f weight:UIFontWeightSemibold];
    [button addTarget:self action:@selector(wchook_onRepeatButtonTapped:) forControlEvents:UIControlEventTouchUpInside];
    [button addTarget:self action:@selector(wchook_onRepeatButtonTouchDown:) forControlEvents:UIControlEventTouchDown];
    [button addTarget:self action:@selector(wchook_onRepeatButtonTouchUp:) forControlEvents:UIControlEventTouchUpInside | UIControlEventTouchUpOutside | UIControlEventTouchCancel];
    return button;
}

%new
- (void)wchook_removeRepeatButtonIfNeeded {
    UIButton *button = [self wchook_repeatButton];
    if (button) {
        [button removeFromSuperview];
    }
}

%new
- (void)wchook_updateRepeatButtonIfNeeded {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!config.repeatButtonEnable) {
        [self wchook_removeRepeatButtonIfNeeded];
        return;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
    if (![self wchook_isMessageSupportedForRepeat:msgWrap]) {
        [self wchook_removeRepeatButtonIfNeeded];
        return;
    }

    BOOL isFromOther = wcpl_isMessageFromOther(msgWrap);

    NSString *repeatText = wcpl_repeatTextForMessageWrap(msgWrap);
    if (repeatText.length == 0) {
        [self wchook_removeRepeatButtonIfNeeded];
        return;
    }

    UIView *bubbleView = [self wchook_bubbleAnchorView];
    if (!bubbleView) {
        [self wchook_removeRepeatButtonIfNeeded];
        return;
    }

    UIButton *button = [self wchook_repeatButton];
    if (!button) {
        button = [self wchook_buildRepeatButton];
        [self addSubview:button];
    }
    objc_setAssociatedObject(button, kWCPLRepeatButtonWrapKey, msgWrap, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [self wchook_layoutRepeatButton:button withBubbleView:bubbleView isSelf:!isFromOther];
}

- (void)layoutSubviews {
    %orig;

    [self wchook_updateRepeatButtonIfNeeded];

    // 跳过已经单独处理的 Cell 类型
    NSString *className = NSStringFromClass([self class]);
    if ([className isEqualToString:@"TextMessageCellView"] ||
        [className isEqualToString:@"AppMessageCellView"] ||
        [className isEqualToString:@"AppEmoticonMessageCellView"] ||
        [className isEqualToString:@"EmoticonMessageCellView"] ||
        [className isEqualToString:@"VoiceMessageCellView"] ||
        [className isEqualToString:@"ImageMessageCellView"] ||
        [className isEqualToString:@"VideoMessageCellView"]) {
        // 已经在各自的 hook 中处理
        return;
    }

    // 其他消息类型由子类自行处理
}

- (void)didMoveToWindow {
    %orig;

    if (!self.window) {
        [self wchook_removeRepeatButtonIfNeeded];
    } else {
        [self wchook_updateRepeatButtonIfNeeded];
    }

    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

%new
- (void)wchook_setupSwipeGestureIfNeeded {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    // 检查总开关和是否有任何滑动功能启用
    if (!config.swipeGestureEnable || (!config.swipeQuoteEnable && !config.swipeRightEnable)) {
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
    }

    gesture.enabled = YES;

    if (!self.wchook_feedbackGenerator) {
        self.wchook_feedbackGenerator = [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleMedium];
    }
}

- (void)prepareForReuse {
    %orig;
    [self wchook_removeRepeatButtonIfNeeded];
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

    NSArray<UIView *> *messageViews = [WCHookSwipeUtilities relatedMessageViewsForCommonView:self];
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
        }
        break;
    }
    case UIGestureRecognizerStateCancelled:
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

        // 触发轻/重动作：轻滑默认引用，重滑执行用户配置动作
        if (shouldHardTrigger) {
            if (self.wchook_swipeTriggerStage < 2) {
                if ([self.wchook_feedbackGenerator respondsToSelector:@selector(impactOccurredWithIntensity:)]) {
                    [self.wchook_feedbackGenerator impactOccurredWithIntensity:0.85f];
                } else {
                    [self.wchook_feedbackGenerator impactOccurred];
                }
            }
            [self wchook_triggerActionForDirection:direction];
        } else if (shouldLightTrigger) {
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
    NSArray<UIView *> *messageViews = [WCHookSwipeUtilities relatedMessageViewsForCommonView:self];
    [WCHookSwipeUtilities animateResetForViews:messageViews animated:animated];
    self.wchook_feedbackTriggered = NO;
    self.wchook_swipeTriggerStage = 0;
}

%new
- (void)wchook_triggerQuoteReply {
    dispatch_async(dispatch_get_main_queue(), ^{
        [self wchook_showSwipeActionMenuForDirection:WCHookSwipeDirectionLeft];
    });
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

    unsigned int msgType = msgWrap.m_uiMessageType;

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
    NSString *actionName = @"引用";
    // 兼容历史值并兜底越界值，统一回退为 0（引用）
    action = wcpl_normalizeSwipeActionValueLegacyAware(action, isSelf);
    switch (action) {
        case 2:
            actionName = @"删除";
            break;
        case 3:
            actionName = @"撤回";
            break;
        default:
            actionName = @"引用";
            break;
    }
    WCPLCrashBreadcrumb(@"滑动动作: %@ -> %@ msgType=%u from=%@ to=%@", directionName, actionName, msgType, msgWrap.m_nsFromUsr ?: @"", msgWrap.m_nsToUsr ?: @"");

    // 执行对应操作
    // 0=引用, 2=删除, 3=撤回(仅己方消息)
    switch (action) {
        case 0: // 引用
            [self wchook_performQuoteReply];
            break;
        case 2: // 删除
            [self wchook_performDeleteMessage:msgWrap];
            break;
        case 3: // 撤回（仅己方消息有效）
            if (isSelf) {
                [self wchook_performRevokeMessage:msgWrap];
            } else {
                // 对方消息不能撤回，改为引用
                [self wchook_performQuoteReply];
            }
            break;
        default:
            [self wchook_performQuoteReply];
            break;
    }
}

%new
- (void)wchook_performQuoteReply {
    @try {
        // 方法1: 直接调用 Cell 的引用方法
        if ([self respondsToSelector:@selector(onShowMsgReplyMenuItem:)]) {
            [self performSelector:@selector(onShowMsgReplyMenuItem:) withObject:nil];
            WCPLLogDebug(@"Quote reply via onShowMsgReplyMenuItem:");
            return;
        }

        // 方法2: 调用 onClickAsRefer 方法（表情包和图片消息可能使用这个）
        if ([self respondsToSelector:@selector(onClickAsRefer)]) {
            [self performSelector:@selector(onClickAsRefer)];
            WCPLLogDebug(@"Quote reply via onClickAsRefer");
            return;
        }

        // 方法3: 通过 ViewController 触发引用
        BaseMsgContentViewController *chatVC = [self wchook_findChatViewController];
        if (chatVC) {
            // 获取消息
            CMessageWrap *msgWrap = nil;
            if ([self respondsToSelector:@selector(viewModel)]) {
                id viewModel = [self performSelector:@selector(viewModel)];
                if ([viewModel respondsToSelector:@selector(messageWrap)]) {
                    msgWrap = [viewModel performSelector:@selector(messageWrap)];
                }
            }

            if (msgWrap && [chatVC respondsToSelector:@selector(startReplyWithMessageWrap:)]) {
                [chatVC performSelector:@selector(startReplyWithMessageWrap:) withObject:msgWrap];
                WCPLLogDebug(@"Quote reply via startReplyWithMessageWrap:");
                return;
            }
        }

        WCPLLogWarning(@"Quote reply: no suitable method found");
    } @catch (NSException *exception) {
        WCPLLogError(@"Quote reply failed: %@", exception);
    }
}

%new
- (void)wchook_repeatMessageWrap:(CMessageWrap *)msgWrap {
    if (!msgWrap) {
        return;
    }

    BaseMsgContentViewController *chatVC = [self wchook_findChatViewController];
    if (!chatVC) {
        WCPLLogWarning(@"Repeat failed: chat view controller not found");
        return;
    }

    NSString *repeatText = wcpl_repeatTextForMessageWrap(msgWrap);
    if (repeatText.length == 0) {
        WCPLLogWarning(@"Repeat failed: empty repeat text");
        return;
    }

    CMessageWrap *quoteTarget = wcpl_quoteTargetFromMessageWrap(msgWrap);
    if (!quoteTarget && msgWrap.m_uiMessageType == 49) {
        quoteTarget = msgWrap;
    }

    id logicController = nil;
    if ([chatVC respondsToSelector:@selector(m_logicController)]) {
        @try {
            logicController = [chatVC m_logicController];
        } @catch (__unused NSException *exception) {
            logicController = nil;
        }
    }

    if (quoteTarget && logicController && [logicController respondsToSelector:@selector(SendTextMessage:replyingMessage:isPasted:)]) {
        @try {
            ((void (*)(id, SEL, id, id, BOOL))objc_msgSend)(logicController,
                                                             @selector(SendTextMessage:replyingMessage:isPasted:),
                                                             repeatText,
                                                             quoteTarget,
                                                             NO);
            WCPLLogInfo(@"Repeat sent via logicController quote: type=%u localId=%u", msgWrap.m_uiMessageType, msgWrap.m_uiMesLocalID);
            return;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Repeat quote send via logicController failed: %@", exception.reason ?: exception);
        }
    }

    id toolView = nil;
    if ([chatVC respondsToSelector:@selector(toolView)]) {
        @try {
            toolView = [chatVC toolView];
        } @catch (__unused NSException *exception) {
            toolView = nil;
        }
    }

    if (quoteTarget && toolView) {
        BOOL didSetReplyingMessage = NO;
        if ([toolView respondsToSelector:@selector(setReplyingMessage:)]) {
            @try {
                ((void (*)(id, SEL, id))objc_msgSend)(toolView, @selector(setReplyingMessage:), quoteTarget);
                didSetReplyingMessage = YES;
            } @catch (__unused NSException *exception) {
            }
        }
        if ([toolView respondsToSelector:@selector(onClickTextViewSendText:)]) {
            @try {
                ((void (*)(id, SEL, id))objc_msgSend)(toolView, @selector(onClickTextViewSendText:), repeatText);
                WCPLLogInfo(@"Repeat sent via toolView quote: type=%u localId=%u", msgWrap.m_uiMessageType, msgWrap.m_uiMesLocalID);
                return;
            } @catch (NSException *exception) {
                WCPLLogWarning(@"Repeat quote send via toolView failed: %@", exception.reason ?: exception);
            }
        }
        if (didSetReplyingMessage && [toolView respondsToSelector:@selector(setReplyingMessage:)]) {
            @try {
                ((void (*)(id, SEL, id))objc_msgSend)(toolView, @selector(setReplyingMessage:), nil);
            } @catch (__unused NSException *exception) {
            }
        }
    }

    if (logicController && [logicController respondsToSelector:@selector(SendTextMessage:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(logicController, @selector(SendTextMessage:), repeatText);
            WCPLLogInfo(@"Repeat sent via logicController plain: type=%u localId=%u", msgWrap.m_uiMessageType, msgWrap.m_uiMesLocalID);
            return;
        } @catch (__unused NSException *exception) {
        }
    }

    if ([chatVC respondsToSelector:@selector(onSendTextMsg:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(chatVC, @selector(onSendTextMsg:), repeatText);
            WCPLLogInfo(@"Repeat sent via chatVC plain: type=%u localId=%u", msgWrap.m_uiMessageType, msgWrap.m_uiMesLocalID);
            return;
        } @catch (__unused NSException *exception) {
        }
    }

    id messageMgr = WCPLGetService(objc_getClass("CMessageMgr"));
    if (messageMgr && [messageMgr respondsToSelector:@selector(AddMsg:MsgWrap:)]) {
        @try {
            NSString *chatName = wcpl_chatNameForMessage(msgWrap, chatVC);
            CMessageWrap *newWrap = [[objc_getClass("CMessageWrap") alloc] initWithMsgType:1];
            newWrap.m_uiMessageType = 1;
            newWrap.m_nsContent = repeatText;
            newWrap.m_nsToUsr = chatName;
            [messageMgr AddMsg:chatName MsgWrap:newWrap];
            WCPLLogInfo(@"Repeat sent via CMessageMgr fallback: type=%u localId=%u", msgWrap.m_uiMessageType, msgWrap.m_uiMesLocalID);
            return;
        } @catch (NSException *exception) {
            WCPLLogError(@"Repeat fallback AddMsg failed: %@", exception.reason ?: exception);
        }
    }

    WCPLLogError(@"Repeat failed: no available send method");
}

%new
- (void)wchook_onRepeatButtonTapped:(UIButton *)sender {
    CMessageWrap *msgWrap = objc_getAssociatedObject(sender, kWCPLRepeatButtonWrapKey);
    if (!msgWrap) {
        msgWrap = wcpl_messageWrapForCellView(self);
    }
    WCPLLogDebug(@"Repeat button tapped: class=%@ type=%u localId=%u", NSStringFromClass([self class]), msgWrap.m_uiMessageType, msgWrap.m_uiMesLocalID);
    [self wchook_repeatMessageWrap:msgWrap];
}

%new
- (void)wchook_onRepeatButtonTouchDown:(UIButton *)sender {
    [UIView animateWithDuration:0.12 animations:^{
        sender.transform = CGAffineTransformMakeScale(0.92f, 0.92f);
        sender.alpha = 0.86f;
    }];
}

%new
- (void)wchook_onRepeatButtonTouchUp:(UIButton *)sender {
    [UIView animateWithDuration:0.12 animations:^{
        sender.transform = CGAffineTransformIdentity;
        sender.alpha = 1.0f;
    }];
}

%new
- (void)wchook_performDeleteMessage:(CMessageWrap *)msgWrap {
    if (!msgWrap) return;

    @try {
        // 方法1: 调用 Cell 的删除方法
        if ([self respondsToSelector:@selector(onDelete:)]) {
            [self performSelector:@selector(onDelete:) withObject:nil];
            WCPLLogDebug(@"Message deleted via onDelete:");
            return;
        }

        // 方法2: 通过 CMessageMgr 删除
        id messageMgr = WCPLGetService(objc_getClass("CMessageMgr"));
        if (messageMgr && [messageMgr respondsToSelector:@selector(DelMsg:MsgWrap:)]) {
            NSString *chatName = msgWrap.m_nsFromUsr ?: msgWrap.m_nsToUsr;
            [messageMgr DelMsg:chatName MsgWrap:msgWrap];
            WCPLLogDebug(@"Message deleted via CMessageMgr DelMsg:MsgWrap:");
            return;
        }

        // 方法3: 通过 ViewController 删除
        BaseMsgContentViewController *chatVC = [self wchook_findChatViewController];
        if (chatVC && [chatVC respondsToSelector:@selector(onDeleteMessage:)]) {
            [chatVC performSelector:@selector(onDeleteMessage:) withObject:msgWrap];
            WCPLLogDebug(@"Message deleted via onDeleteMessage:");
            return;
        }

        WCPLLogWarning(@"Delete message: no suitable method found");
    } @catch (NSException *exception) {
        WCPLLogError(@"Delete message failed: %@", exception);
    }
}

%new
- (void)wchook_performRevokeMessage:(CMessageWrap *)msgWrap {
    if (!msgWrap) return;

    @try {
        // 优先调用 Cell 的撤回方法 (正确的方法名是 onRevokeMsg:)
        if ([self respondsToSelector:@selector(onRevokeMsg:)]) {
            [self performSelector:@selector(onRevokeMsg:) withObject:nil];
            WCPLLogDebug(@"Message revoked via onRevokeMsg:");
            return;
        }

        // 备用方案：通过 CMessageMgr 撤回 (正确的方法签名是 RevokeMsg:MsgWrap:Counter:)
        id messageMgr = WCPLGetService(objc_getClass("CMessageMgr"));
        if (messageMgr && [messageMgr respondsToSelector:@selector(RevokeMsg:MsgWrap:Counter:)]) {
            NSString *chatName = msgWrap.m_nsToUsr;
            [messageMgr RevokeMsg:chatName MsgWrap:msgWrap Counter:0];
            WCPLLogDebug(@"Message revoked via CMessageMgr RevokeMsg:MsgWrap:Counter:");
        }
    } @catch (NSException *exception) {
        WCPLLogError(@"Revoke message failed: %@", exception);
    }
}

%new
- (UIViewController *)wchook_findTopViewController {
    UIResponder *responder = self;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

%new
- (BaseMsgContentViewController *)wchook_findChatViewController {
    UIResponder *responder = self;
    while (responder) {
        if ([responder isKindOfClass:NSClassFromString(@"BaseMsgContentViewController")]) {
            return (BaseMsgContentViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

- (void)handleTapForReferMsg:(id)sender {
    if ([WCPLConfigCenter shared].gesture.tapReferJumpEnable && [WCHookMessageNavigator senderLooksLikeReferView:sender]) {
        if ([WCHookMessageNavigator tryJumpFromCell:self]) {
            return;
        }
    }
    %orig;
}

- (void)handleTapReferMessage {
    if ([WCPLConfigCenter shared].gesture.tapReferJumpEnable) {
        if ([WCHookMessageNavigator tryJumpFromCell:self]) {
            return;
        }
    }
    %orig;
}

- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer *)gestureRecognizer {
    if (gestureRecognizer == self.wchook_swipeGesture) {
        WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
        // 检查总开关和是否有任何滑动功能启用
        if (!config.swipeGestureEnable || (!config.swipeQuoteEnable && !config.swipeRightEnable)) {
            return NO;
        }
        UIPanGestureRecognizer *pan = (UIPanGestureRecognizer *)gestureRecognizer;
        CGPoint velocity = [pan velocityInView:self];
        // 使用双向速度检测
        if (![WCHookSwipeUtilities isVelocityEligibleBidirectional:velocity]) {
            return NO;
        }
        // 检查滑动方向是否启用
        if (velocity.x < 0 && !config.swipeQuoteEnable) {
            // 左滑但左滑功能未启用
            return NO;
        }
        if (velocity.x > 0 && !config.swipeRightEnable) {
            // 右滑但右滑功能未启用
            return NO;
        }
    }

    BOOL result = %orig;
    return result;
}

- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer {
    if (gestureRecognizer == self.wchook_swipeGesture) {
        return NO;
    }
    BOOL result = %orig;
    return result;
}

- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer {
    if (gestureRecognizer == self.wchook_swipeGesture && [otherGestureRecognizer isKindOfClass:[UIScreenEdgePanGestureRecognizer class]]) {
        return YES;
    }
    BOOL result = %orig;
    return result;
}

%end

// ==================== 左滑引用 Hook MMInputToolView ====================

%hook MMInputToolView

- (void)onTapMsgReplyView:(id)sender {
    if ([WCPLConfigCenter shared].gesture.tapReferJumpEnable && [WCHookMessageNavigator senderLooksLikeReferView:sender]) {
        if ([WCHookMessageNavigator tryJumpFromInputTool:self]) {
            return;
        }
    }
    %orig;
}

%end
