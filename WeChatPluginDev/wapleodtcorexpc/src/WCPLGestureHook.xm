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
#include <stdint.h>
#include <math.h>

static const NSInteger kWCPLRepeatButtonTag = 0x5743504C;
static const CGFloat kWCPLRepeatButtonSize = 20.0f;
static const CGFloat kWCPLRepeatButtonEdgeInset = 1.0f;
static const CGFloat kWCPLRepeatButtonTailInsetX = 4.0f;
static const CGFloat kWCPLRepeatButtonTailInsetY = 3.0f;
static const void *kWCPLRepeatButtonWrapKey = &kWCPLRepeatButtonWrapKey;
static const void *kWCPLRepeatButtonViewKey = &kWCPLRepeatButtonViewKey;
static const void *kWCPLRepeatButtonLastFrameKey = &kWCPLRepeatButtonLastFrameKey;
static const void *kWCPLRepeatButtonMessageKey = &kWCPLRepeatButtonMessageKey;
static const void *kWCPLRepeatButtonFilterStateKey = &kWCPLRepeatButtonFilterStateKey;
static const void *kWCPLRepeatButtonStableUpdateCountKey = &kWCPLRepeatButtonStableUpdateCountKey;

static NSUInteger gWCPLRepeatButtonCreateCount = 0;
static NSUInteger gWCPLRepeatButtonUpdateCount = 0;

static NSString *wcpl_repeatMessageDebugInfo(CMessageWrap *msgWrap);

static void wcpl_collectRepeatButtonsFromView(UIView *root, NSMutableArray<UIButton *> *buttons) {
    if (!root || !buttons) {
        return;
    }
    for (UIView *subview in root.subviews) {
        if ([subview isKindOfClass:[UIButton class]] && subview.tag == kWCPLRepeatButtonTag) {
            [buttons addObject:(UIButton *)subview];
        }
        wcpl_collectRepeatButtonsFromView(subview, buttons);
    }
}

static BOOL wcpl_isQuoteReplyAppMessage(CMessageWrap *msgWrap) {
    if (!msgWrap || msgWrap.m_uiMessageType != 49) {
        return NO;
    }
    NSString *content = msgWrap.m_nsContent;
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return NO;
    }
    if ([content rangeOfString:@"<refermsg>"].location != NSNotFound) {
        return YES;
    }
    if ([content rangeOfString:@"<type>57</type>"].location != NSNotFound) {
        return YES;
    }
    if ([content rangeOfString:@"<type><![CDATA[57]]></type>"].location != NSNotFound) {
        return YES;
    }
    return NO;
}

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
    if (msgWrap.m_uiMessageType == 3) {
        return @"[图片]";
    }
    if (msgWrap.m_uiMessageType == 34) {
        return @"[语音]";
    }
    if (msgWrap.m_uiMessageType == 43) {
        return @"[视频]";
    }
    if (msgWrap.m_uiMessageType == 47) {
        return @"[表情]";
    }
    if (msgWrap.m_uiMessageType == 49) {
        if (!wcpl_isQuoteReplyAppMessage(msgWrap)) {
            return nil;
        }
        return wcpl_extractQuoteTitleFromXML(msgWrap.m_nsContent);
    }
    return nil;
}

static NSString *wcpl_repeatTypeName(unsigned int msgType) {
    switch (msgType) {
        case 1: return @"文本";
        case 3: return @"图片";
        case 34: return @"语音";
        case 43: return @"视频";
        case 47: return @"表情";
        case 49: return @"引用";
        default: return [NSString stringWithFormat:@"未知(%u)", msgType];
    }
}

static BOOL wcpl_isRepeatTypeEnabledByConfig(WCPLGestureConfig *config, CMessageWrap *msgWrap) {
    if (!msgWrap || !config) {
        return NO;
    }

    switch (msgWrap.m_uiMessageType) {
        case 1:
            return YES;
        case 3:
            return config.repeatSupportImageEnable;
        case 34:
            return config.repeatSupportVoiceEnable;
        case 43:
            return config.repeatSupportVideoEnable;
        case 47:
            return config.repeatSupportEmoticonEnable;
        case 49:
            return wcpl_isQuoteReplyAppMessage(msgWrap);
        default:
            return NO;
    }
}


static NSString *wcpl_emoticonMD5FromMessageWrap(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return nil;
    }

    NSString *md5 = wcpl_trimTextForRepeat(msgWrap.m_nsEmoticonMD5);
    if (md5.length == 32) {
        return md5;
    }

    NSString *content = msgWrap.m_nsContent;
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return nil;
    }

    NSArray<NSString *> *patterns = @[
        @"<md5><![CDATA[",
        @"<md5>",
        @"md5=\""
    ];

    for (NSString *start in patterns) {
        NSString *end = [start isEqualToString:@"md5=\""] ? @"\"" : ([start isEqualToString:@"<md5>"] ? @"</md5>" : @"]]></md5>");
        NSString *value = wcpl_extractXMLValue(content, start, end);
        if (value.length == 32) {
            return value;
        }
    }

    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"[a-fA-F0-9]{32}" options:0 error:nil];
    NSTextCheckingResult *match = [regex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (!match || match.range.location == NSNotFound) {
        return nil;
    }
    return [content substringWithRange:match.range];
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

static BOOL wcpl_repeatNativeResend(CMessageWrap *msgWrap,
                                    NSString *chatName,
                                    BaseMsgContentViewController *chatVC,
                                    NSString *sceneTag) {
    if (!msgWrap || chatName.length == 0) {
        return NO;
    }

    NSString *scene = [sceneTag isKindOfClass:[NSString class]] ? sceneTag : @"message";
    if (chatVC && [chatVC respondsToSelector:@selector(ResendMsg:MsgWrap:)]) {
        @try {
            ((void (*)(id, SEL, id, id))objc_msgSend)(chatVC, @selector(ResendMsg:MsgWrap:), chatName, msgWrap);
            WCPLLogInfo(@"Repeat sent: flow=native_resend_chatvc scene=%@ msg=%@ chat=%@", scene, wcpl_repeatMessageDebugInfo(msgWrap), chatName);
            return YES;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Repeat native resend via chatVC failed: scene=%@ reason=%@", scene, exception.reason ?: exception);
        }
    }

    id messageMgr = WCPLGetService(objc_getClass("CMessageMgr"));
    if (messageMgr && [messageMgr respondsToSelector:@selector(ResendMsg:MsgWrap:)]) {
        @try {
            ((void (*)(id, SEL, id, id))objc_msgSend)(messageMgr, @selector(ResendMsg:MsgWrap:), chatName, msgWrap);
            WCPLLogInfo(@"Repeat sent: flow=native_resend_messagemgr scene=%@ msg=%@ chat=%@", scene, wcpl_repeatMessageDebugInfo(msgWrap), chatName);
            return YES;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Repeat native resend via messageMgr failed: scene=%@ reason=%@", scene, exception.reason ?: exception);
        }
    }

    return NO;
}

static NSString *wcpl_repeatMessageKey(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return @"nil";
    }
    return [NSString stringWithFormat:@"%u_%lld_%u_%@_%@",
            msgWrap.m_uiMesLocalID,
            msgWrap.m_n64MesSvrID,
            msgWrap.m_uiMessageType,
            msgWrap.m_nsFromUsr ?: @"",
            msgWrap.m_nsToUsr ?: @""];
}

static NSString *wcpl_repeatMessageDebugInfo(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return @"nil";
    }
    return [NSString stringWithFormat:@"local=%u svr=%lld type=%u",
            msgWrap.m_uiMesLocalID,
            msgWrap.m_n64MesSvrID,
            msgWrap.m_uiMessageType];
}

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

static NSMapTable<NSString *, UIView *> *wcpl_repeatOwnerViewMap(void) {
    static NSMapTable<NSString *, UIView *> *ownerMap;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        ownerMap = [NSMapTable strongToWeakObjectsMapTable];
    });
    return ownerMap;
}

static UIView *wcpl_repeatOwnerViewForMessageKey(NSString *messageKey) {
    if (![messageKey isKindOfClass:[NSString class]] || messageKey.length == 0) {
        return nil;
    }
    return [wcpl_repeatOwnerViewMap() objectForKey:messageKey];
}

static void wcpl_setRepeatOwnerViewForMessageKey(NSString *messageKey, UIView *ownerView) {
    if (![messageKey isKindOfClass:[NSString class]] || messageKey.length == 0) {
        return;
    }
    NSMapTable<NSString *, UIView *> *map = wcpl_repeatOwnerViewMap();
    if (ownerView) {
        [map setObject:ownerView forKey:messageKey];
    } else {
        [map removeObjectForKey:messageKey];
    }
}

static UIView *wcpl_selectRepeatOwnerView(NSArray<UIView *> *relatedViews, Class preferredClass) {
    UIView *ownerView = nil;
    for (UIView *candidate in relatedViews) {
        if (!candidate || !candidate.window || candidate.hidden || candidate.alpha < 0.01f) {
            continue;
        }
        if (!ownerView) {
            ownerView = candidate;
            continue;
        }

        BOOL candidatePreferred = preferredClass && [candidate isKindOfClass:preferredClass];
        BOOL ownerPreferred = preferredClass && [ownerView isKindOfClass:preferredClass];
        if (candidatePreferred && !ownerPreferred) {
            ownerView = candidate;
        }
    }
    return ownerView;
}

@interface CommonMessageCellView (WCPLRepeatButton)
- (UIButton *)wchook_repeatButton;
- (NSArray<UIButton *> *)wchook_allRepeatButtons;
- (void)wchook_removeRepeatButtonsExcept:(UIButton *)keeper;
- (BOOL)wchook_isMessageSupportedForRepeat:(CMessageWrap *)msgWrap;
- (UIView *)wchook_bubbleAnchorView;
- (void)wchook_layoutRepeatButton:(UIButton *)button withBubbleView:(UIView *)bubbleView isSelf:(BOOL)isSelf;
- (UIButton *)wchook_buildRepeatButton;
- (void)wchook_removeRepeatButtonIfNeeded;
- (void)wchook_updateRepeatButtonIfNeeded;
- (void)wchook_repeatMessageWrap:(CMessageWrap *)msgWrap;
- (CGRect)showRectForMenuController;
- (UIView *)getBgImageView;
@end

%hook CommonMessageCellView

%property(nonatomic, strong) UIPanGestureRecognizer *wchook_swipeGesture;
%property(nonatomic, strong) UIImpactFeedbackGenerator *wchook_feedbackGenerator;
%property(nonatomic, assign) BOOL wchook_feedbackTriggered;
%property(nonatomic, assign) NSInteger wchook_swipeTriggerStage;

%new
- (UIButton *)wchook_repeatButton {
    UIButton *cachedButton = objc_getAssociatedObject(self, kWCPLRepeatButtonViewKey);
    if ([cachedButton isKindOfClass:[UIButton class]] &&
        cachedButton.tag == kWCPLRepeatButtonTag &&
        cachedButton.superview &&
        [cachedButton isDescendantOfView:self]) {
        return cachedButton;
    }

    NSArray<UIButton *> *buttons = [self wchook_allRepeatButtons];
    if (buttons.count == 0) {
        objc_setAssociatedObject(self, kWCPLRepeatButtonViewKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(self, kWCPLRepeatButtonMessageKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return nil;
    }

    UIButton *keeper = buttons.firstObject;
    if (buttons.count > 1) {
        [self wchook_removeRepeatButtonsExcept:keeper];
        WCPLLogWarning(@"Repeat button dedup in cell: class=%@ removed=%lu", NSStringFromClass([self class]), (unsigned long)(buttons.count - 1));
    }
    objc_setAssociatedObject(self, kWCPLRepeatButtonViewKey, keeper, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return keeper;
}

%new
- (NSArray<UIButton *> *)wchook_allRepeatButtons {
    NSMutableArray<UIButton *> *buttons = [NSMutableArray array];
    for (UIView *subview in self.subviews) {
        if ([subview isKindOfClass:[UIButton class]] && subview.tag == kWCPLRepeatButtonTag) {
            [buttons addObject:(UIButton *)subview];
        }
    }

    // 兼容历史实现：兜底递归扫描，清理潜在残留节点
    if (buttons.count == 0) {
        wcpl_collectRepeatButtonsFromView(self, buttons);
    }
    return buttons;
}

%new
- (void)wchook_removeRepeatButtonsExcept:(UIButton *)keeper {
    NSArray<UIButton *> *buttons = [self wchook_allRepeatButtons];
    for (UIButton *button in buttons) {
        if (keeper && button == keeper) {
            continue;
        }
        [button removeFromSuperview];
    }
    objc_setAssociatedObject(self, kWCPLRepeatButtonViewKey, keeper, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if (!keeper) {
        objc_setAssociatedObject(self, kWCPLRepeatButtonMessageKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
}

%new
- (BOOL)wchook_isMessageSupportedForRepeat:(CMessageWrap *)msgWrap {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    return wcpl_isRepeatTypeEnabledByConfig(config, msgWrap);
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

    CGRect bubbleFrame = [self convertRect:bubbleView.bounds fromView:bubbleView];
    if (CGRectIsEmpty(bubbleFrame) || CGRectGetWidth(bubbleFrame) <= 0.0f || CGRectGetHeight(bubbleFrame) <= 0.0f) {
        bubbleFrame = [self convertRect:bubbleView.frame fromView:bubbleView.superview ?: self];
    }

    CGRect menuRect = CGRectZero;
    if ([self respondsToSelector:@selector(showRectForMenuController)]) {
        @try {
            menuRect = [self showRectForMenuController];
        } @catch (__unused NSException *exception) {
            menuRect = CGRectZero;
        }
    }

    BOOL menuRectValid = !CGRectIsEmpty(menuRect) && CGRectGetWidth(menuRect) > 8.0f && CGRectGetHeight(menuRect) > 8.0f && CGRectIntersectsRect(menuRect, self.bounds);
    BOOL bubbleRectValid = !CGRectIsEmpty(bubbleFrame) && CGRectGetWidth(bubbleFrame) > 8.0f && CGRectGetHeight(bubbleFrame) > 8.0f;

    CGRect baseRect = bubbleRectValid ? bubbleFrame : menuRect;
    CGFloat anchorMaxY = bubbleRectValid ? CGRectGetMaxY(bubbleFrame) : CGRectGetMaxY(baseRect);
    if (menuRectValid) {
        anchorMaxY = MAX(anchorMaxY, CGRectGetMaxY(menuRect));
    }

    CGFloat centerY = anchorMaxY - kWCPLRepeatButtonTailInsetY - kWCPLRepeatButtonSize * 0.5f;
    CGFloat centerX = isSelf
        ? (CGRectGetMinX(baseRect) - kWCPLRepeatButtonEdgeInset - kWCPLRepeatButtonTailInsetX - kWCPLRepeatButtonSize * 0.5f)
        : (CGRectGetMaxX(baseRect) + kWCPLRepeatButtonEdgeInset + kWCPLRepeatButtonTailInsetX + kWCPLRepeatButtonSize * 0.5f);

    centerX = wcpl_repeatAlignToPixel(centerX);
    centerY = wcpl_repeatAlignToPixel(centerY);

    CGFloat halfSize = kWCPLRepeatButtonSize * 0.5f;
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
                                    kWCPLRepeatButtonSize,
                                    kWCPLRepeatButtonSize);

    NSValue *lastFrameValue = objc_getAssociatedObject(button, kWCPLRepeatButtonLastFrameKey);
    CGRect lastFrame = lastFrameValue ? lastFrameValue.CGRectValue : CGRectZero;
    if (wcpl_repeatRectAlmostEqual(lastFrame, targetFrame)) {
        [self bringSubviewToFront:button];
        return;
    }

    button.bounds = CGRectMake(0.0f, 0.0f, kWCPLRepeatButtonSize, kWCPLRepeatButtonSize);
    button.center = CGPointMake(centerX, centerY);
    [self bringSubviewToFront:button];

    objc_setAssociatedObject(button, kWCPLRepeatButtonLastFrameKey, [NSValue valueWithCGRect:button.frame], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if (didClamp) {
        WCPLLogDebug(@"Repeat button clamped to cell end: class=%@ bubble=%@ menu=%@ button=%@", NSStringFromClass([self class]), NSStringFromCGRect(bubbleFrame), NSStringFromCGRect(menuRect), NSStringFromCGRect(button.frame));
    }
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
    NSArray<UIButton *> *buttons = [self wchook_allRepeatButtons];
    if (buttons.count == 0) {
        objc_setAssociatedObject(self, kWCPLRepeatButtonViewKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(self, kWCPLRepeatButtonMessageKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(self, kWCPLRepeatButtonStableUpdateCountKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return;
    }
    for (UIButton *button in buttons) {
        [button removeFromSuperview];
    }
    objc_setAssociatedObject(self, kWCPLRepeatButtonViewKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatButtonMessageKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatButtonStableUpdateCountKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
    if (msgWrap) {
        NSString *messageKey = wcpl_repeatMessageKey(msgWrap);
        UIView *ownerView = wcpl_repeatOwnerViewForMessageKey(messageKey);
        if (ownerView == self) {
            wcpl_setRepeatOwnerViewForMessageKey(messageKey, nil);
        }
    }
    if (buttons.count > 1) {
        WCPLLogDebug(@"Repeat button remove cleanup: class=%@ count=%lu", NSStringFromClass([self class]), (unsigned long)buttons.count);
    }
}

%new
- (void)wchook_updateRepeatButtonIfNeeded {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!config.repeatButtonEnable) {
        NSString *filterKey = @"disabled";
        NSString *lastFilterKey = objc_getAssociatedObject(self, kWCPLRepeatButtonFilterStateKey);
        if (![lastFilterKey isEqualToString:filterKey]) {
            WCPLLogDebug(@"Repeat UI filter: class=%@ cell=%p reason=disabled", NSStringFromClass([self class]), self);
            objc_setAssociatedObject(self, kWCPLRepeatButtonFilterStateKey, filterKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
        }
        [self wchook_removeRepeatButtonIfNeeded];
        return;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
    if (![self wchook_isMessageSupportedForRepeat:msgWrap]) {
        NSString *filterKey = [NSString stringWithFormat:@"unsupported_%u", msgWrap.m_uiMessageType];
        NSString *lastFilterKey = objc_getAssociatedObject(self, kWCPLRepeatButtonFilterStateKey);
        if (![lastFilterKey isEqualToString:filterKey]) {
            WCPLLogDebug(@"Repeat UI filter: class=%@ cell=%p msg=%@ reason=unsupported", NSStringFromClass([self class]), self, wcpl_repeatMessageDebugInfo(msgWrap));
            objc_setAssociatedObject(self, kWCPLRepeatButtonFilterStateKey, filterKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
        }
        [self wchook_removeRepeatButtonIfNeeded];
        return;
    }

    BOOL isFromOther = wcpl_isMessageFromOther(msgWrap);

    NSString *repeatText = wcpl_repeatTextForMessageWrap(msgWrap);
    if (repeatText.length == 0) {
        NSString *filterKey = [NSString stringWithFormat:@"empty_%@", wcpl_repeatMessageKey(msgWrap)];
        NSString *lastFilterKey = objc_getAssociatedObject(self, kWCPLRepeatButtonFilterStateKey);
        if (![lastFilterKey isEqualToString:filterKey]) {
            WCPLLogDebug(@"Repeat UI filter: class=%@ cell=%p msg=%@ reason=emptyText", NSStringFromClass([self class]), self, wcpl_repeatMessageDebugInfo(msgWrap));
            objc_setAssociatedObject(self, kWCPLRepeatButtonFilterStateKey, filterKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
        }
        [self wchook_removeRepeatButtonIfNeeded];
        return;
    }

    UIView *bubbleView = [self wchook_bubbleAnchorView];
    if (!bubbleView) {
        NSString *filterKey = [NSString stringWithFormat:@"noBubble_%@", wcpl_repeatMessageKey(msgWrap)];
        NSString *lastFilterKey = objc_getAssociatedObject(self, kWCPLRepeatButtonFilterStateKey);
        if (![lastFilterKey isEqualToString:filterKey]) {
            WCPLLogDebug(@"Repeat UI filter: class=%@ cell=%p msg=%@ reason=noBubble", NSStringFromClass([self class]), self, wcpl_repeatMessageDebugInfo(msgWrap));
            objc_setAssociatedObject(self, kWCPLRepeatButtonFilterStateKey, filterKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
        }
        [self wchook_removeRepeatButtonIfNeeded];
        return;
    }

    objc_setAssociatedObject(self, kWCPLRepeatButtonFilterStateKey, nil, OBJC_ASSOCIATION_COPY_NONATOMIC);

    NSString *messageKey = wcpl_repeatMessageKey(msgWrap);

    NSArray<UIView *> *relatedViews = [WCHookSwipeUtilities relatedMessageViewsForCommonView:self];
    if (relatedViews.count > 1) {
        UIView *ownerView = wcpl_repeatOwnerViewForMessageKey(messageKey);
        if (!ownerView || !ownerView.window || ownerView.hidden || ownerView.alpha < 0.01f || ![relatedViews containsObject:ownerView]) {
            ownerView = wcpl_selectRepeatOwnerView(relatedViews, [self class]);
            if (!ownerView) {
                ownerView = self;
            }
            wcpl_setRepeatOwnerViewForMessageKey(messageKey, ownerView);
            WCPLLogDebug(@"Repeat owner assign: class=%@ msg=%@ owner=%p peers=%lu", NSStringFromClass([self class]), messageKey, ownerView, (unsigned long)relatedViews.count);
        }

        if (ownerView != self) {
            NSString *filterKey = [NSString stringWithFormat:@"nonOwner_%@", wcpl_repeatMessageKey(msgWrap)];
            NSString *lastFilterKey = objc_getAssociatedObject(self, kWCPLRepeatButtonFilterStateKey);
            if (![lastFilterKey isEqualToString:filterKey]) {
                WCPLLogDebug(@"Repeat UI filter: class=%@ cell=%p msg=%@ reason=nonOwner", NSStringFromClass([self class]), self, wcpl_repeatMessageDebugInfo(msgWrap));
                objc_setAssociatedObject(self, kWCPLRepeatButtonFilterStateKey, filterKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
            }
            [self wchook_removeRepeatButtonIfNeeded];
            return;
        }

        NSUInteger crossViewRemoved = 0;
        for (UIView *relatedView in relatedViews) {
            if (!relatedView || relatedView == self) {
                continue;
            }
            NSMutableArray<UIButton *> *buttons = [NSMutableArray array];
            wcpl_collectRepeatButtonsFromView(relatedView, buttons);
            for (UIButton *staleButton in buttons) {
                [staleButton removeFromSuperview];
                crossViewRemoved += 1;
            }
            if (buttons.count > 0) {
                objc_setAssociatedObject(relatedView, kWCPLRepeatButtonViewKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
        }
        if (crossViewRemoved > 0) {
            WCPLLogDebug(@"Repeat button owner cleanup: class=%@ peers=%lu removed=%lu", NSStringFromClass([self class]), (unsigned long)relatedViews.count, (unsigned long)crossViewRemoved);
        }
    }

    NSString *lastMessageKey = objc_getAssociatedObject(self, kWCPLRepeatButtonMessageKey);
    BOOL isSameMessage = [lastMessageKey isEqualToString:messageKey];

    UIButton *button = [self wchook_repeatButton];
    BOOL didCreateButton = NO;
    if (!button) {
        button = [self wchook_buildRepeatButton];
        [self addSubview:button];
        objc_setAssociatedObject(self, kWCPLRepeatButtonViewKey, button, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        didCreateButton = YES;
        gWCPLRepeatButtonCreateCount += 1;
    }

    gWCPLRepeatButtonUpdateCount += 1;
    objc_setAssociatedObject(self, kWCPLRepeatButtonMessageKey, messageKey, OBJC_ASSOCIATION_COPY_NONATOMIC);

    objc_setAssociatedObject(button, kWCPLRepeatButtonWrapKey, msgWrap, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if (!isSameMessage) {
        objc_setAssociatedObject(button, kWCPLRepeatButtonLastFrameKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(self, kWCPLRepeatButtonStableUpdateCountKey, @(1), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }

    [self wchook_layoutRepeatButton:button withBubbleView:bubbleView isSelf:!isFromOther];

    if (isSameMessage) {
        NSNumber *stableCountObj = objc_getAssociatedObject(self, kWCPLRepeatButtonStableUpdateCountKey);
        NSUInteger stableCount = stableCountObj ? stableCountObj.unsignedIntegerValue : 0;
        stableCount += 1;
        objc_setAssociatedObject(self, kWCPLRepeatButtonStableUpdateCountKey, @(stableCount), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        if (stableCount == 1 || stableCount == 5 || stableCount == 20 || (stableCount % 50 == 0)) {
            WCPLLogDebug(@"Repeat UI stable update: class=%@ cell=%p msg=%@ updates=%lu createTotal=%lu updateTotal=%lu frame=%@", NSStringFromClass([self class]), self, messageKey, (unsigned long)stableCount, (unsigned long)gWCPLRepeatButtonCreateCount, (unsigned long)gWCPLRepeatButtonUpdateCount, NSStringFromCGRect(button.frame));
        }
    } else {
        WCPLLogDebug(@"Repeat UI bind: class=%@ cell=%p msg=%@ created=%d createTotal=%lu updateTotal=%lu bubble=%@ button=%@", NSStringFromClass([self class]), self, messageKey, didCreateButton ? 1 : 0, (unsigned long)gWCPLRepeatButtonCreateCount, (unsigned long)gWCPLRepeatButtonUpdateCount, NSStringFromCGRect([self convertRect:bubbleView.bounds fromView:bubbleView]), NSStringFromCGRect(button.frame));
    }
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

    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!wcpl_isRepeatTypeEnabledByConfig(config, msgWrap)) {
        WCPLLogWarning(@"Repeat blocked: type=%@(%u) toggle(emoticon=%d voice=%d image=%d video=%d)",
                       wcpl_repeatTypeName(msgWrap.m_uiMessageType),
                       msgWrap.m_uiMessageType,
                       config.repeatSupportEmoticonEnable ? 1 : 0,
                       config.repeatSupportVoiceEnable ? 1 : 0,
                       config.repeatSupportImageEnable ? 1 : 0,
                       config.repeatSupportVideoEnable ? 1 : 0);
        return;
    }

    BaseMsgContentViewController *chatVC = [self wchook_findChatViewController];
    if (!chatVC) {
        WCPLLogWarning(@"Repeat failed: chat view controller not found");
        return;
    }

    id logicController = nil;
    if ([chatVC respondsToSelector:@selector(m_logicController)]) {
        @try {
            logicController = [chatVC m_logicController];
        } @catch (__unused NSException *exception) {
            logicController = nil;
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

    unsigned int msgType = msgWrap.m_uiMessageType;
    NSString *repeatText = wcpl_repeatTextForMessageWrap(msgWrap);
    NSString *chatName = wcpl_chatNameForMessage(msgWrap, chatVC);
    BOOL hasQuote = (wcpl_quoteTargetFromMessageWrap(msgWrap) != nil) || (msgType == 49);
    WCPLLogDebug(@"Repeat pipeline start: class=%@ cell=%p type=%@ msg=%@ hasQuote=%d textLen=%lu",
                 NSStringFromClass([self class]),
                 self,
                 wcpl_repeatTypeName(msgType),
                 wcpl_repeatMessageDebugInfo(msgWrap),
                 hasQuote ? 1 : 0,
                 (unsigned long)repeatText.length);

    if (msgType == 47) {
        NSString *emoticonMD5 = wcpl_emoticonMD5FromMessageWrap(msgWrap);
        id emoticonMgr = WCPLGetService(objc_getClass("CEmoticonMgr"));
        id emoticonWrap = nil;

        if (emoticonMgr) {
            if (emoticonMD5.length == 32 && [emoticonMgr respondsToSelector:@selector(getEmoticonWrapByMd5:)]) {
                @try {
                    emoticonWrap = ((id (*)(id, SEL, id))objc_msgSend)(emoticonMgr, @selector(getEmoticonWrapByMd5:), emoticonMD5);
                } @catch (__unused NSException *exception) {
                    emoticonWrap = nil;
                }
            }

            if (!emoticonWrap && [emoticonMgr respondsToSelector:@selector(getEmoticonWrapByMessageWrap:)]) {
                @try {
                    emoticonWrap = ((id (*)(id, SEL, id))objc_msgSend)(emoticonMgr, @selector(getEmoticonWrapByMessageWrap:), msgWrap);
                } @catch (__unused NSException *exception) {
                    emoticonWrap = nil;
                }
            }

            if (!emoticonWrap && [emoticonMgr respondsToSelector:@selector(getEmoticonWrapByContent:)] && msgWrap.m_nsContent.length > 0) {
                @try {
                    emoticonWrap = ((id (*)(id, SEL, id))objc_msgSend)(emoticonMgr, @selector(getEmoticonWrapByContent:), msgWrap.m_nsContent);
                } @catch (__unused NSException *exception) {
                    emoticonWrap = nil;
                }
            }
        }

        if (emoticonWrap) {
            if (logicController && [logicController respondsToSelector:@selector(SendEmoticonMessage:)]) {
                @try {
                    ((void (*)(id, SEL, id))objc_msgSend)(logicController, @selector(SendEmoticonMessage:), emoticonWrap);
                    WCPLLogInfo(@"Repeat sent: flow=logic_emoticon msg=%@ md5=%@", wcpl_repeatMessageDebugInfo(msgWrap), emoticonMD5 ?: @"(nil)");
                    return;
                } @catch (NSException *exception) {
                    WCPLLogWarning(@"Repeat emoticon via logicController failed: %@", exception.reason ?: exception);
                }
            }

            if ([chatVC respondsToSelector:@selector(SendEmoticonMesssageToolView:)]) {
                @try {
                    ((void (*)(id, SEL, id))objc_msgSend)(chatVC, @selector(SendEmoticonMesssageToolView:), emoticonWrap);
                    WCPLLogInfo(@"Repeat sent: flow=chatvc_emoticon msg=%@ md5=%@", wcpl_repeatMessageDebugInfo(msgWrap), emoticonMD5 ?: @"(nil)");
                    return;
                } @catch (NSException *exception) {
                    WCPLLogWarning(@"Repeat emoticon via chatVC failed: %@", exception.reason ?: exception);
                }
            }
        }

        id messageMgr = WCPLGetService(objc_getClass("CMessageMgr"));
        if (messageMgr && [messageMgr respondsToSelector:@selector(AddEmoticonMsg:MsgWrap:)]) {
            @try {
                NSString *chatName = wcpl_chatNameForMessage(msgWrap, chatVC);
                CMessageWrap *newWrap = [[objc_getClass("CMessageWrap") alloc] init];
                newWrap.m_uiMessageType = 47;
                newWrap.m_nsToUsr = chatName;
                newWrap.m_nsFromUsr = wcpl_trimTextForRepeat(msgWrap.m_nsFromUsr) ?: @"";
                newWrap.m_nsContent = msgWrap.m_nsContent ?: @"";
                if (emoticonMD5.length == 32) {
                    newWrap.m_nsEmoticonMD5 = emoticonMD5;
                }
                ((void (*)(id, SEL, id, id))objc_msgSend)(messageMgr, @selector(AddEmoticonMsg:MsgWrap:), chatName, newWrap);
                WCPLLogInfo(@"Repeat sent: flow=messageMgr_emoticon msg=%@ md5=%@ chat=%@", wcpl_repeatMessageDebugInfo(msgWrap), emoticonMD5 ?: @"(nil)", chatName ?: @"(nil)");
                return;
            } @catch (NSException *exception) {
                WCPLLogWarning(@"Repeat emoticon via messageMgr failed: %@", exception.reason ?: exception);
            }
        }

        WCPLLogWarning(@"Repeat emoticon fallback to text: msg=%@ md5=%@", wcpl_repeatMessageDebugInfo(msgWrap), emoticonMD5 ?: @"(nil)");
    }

    if (msgType == 3) {
        if (wcpl_repeatNativeResend(msgWrap, chatName, chatVC, @"image")) {
            return;
        }
        WCPLLogWarning(@"Repeat image fallback to text: native resend unavailable msg=%@ chat=%@", wcpl_repeatMessageDebugInfo(msgWrap), chatName ?: @"(nil)");
    }

    if (msgType == 43) {
        if (wcpl_repeatNativeResend(msgWrap, chatName, chatVC, @"video")) {
            return;
        }
        WCPLLogWarning(@"Repeat video fallback to text: native resend unavailable msg=%@ chat=%@", wcpl_repeatMessageDebugInfo(msgWrap), chatName ?: @"(nil)");
    }

    if (msgType == 34) {
        if (wcpl_repeatNativeResend(msgWrap, chatName, chatVC, @"voice")) {
            return;
        }
        WCPLLogWarning(@"Repeat voice fallback to text: native resend unavailable msg=%@ chat=%@", wcpl_repeatMessageDebugInfo(msgWrap), chatName ?: @"(nil)");
    }

    if (repeatText.length == 0) {
        WCPLLogWarning(@"Repeat failed: empty repeat text type=%@ msg=%@", wcpl_repeatTypeName(msgType), wcpl_repeatMessageDebugInfo(msgWrap));
        return;
    }

    CMessageWrap *quoteTarget = wcpl_quoteTargetFromMessageWrap(msgWrap);
    if (!quoteTarget && msgType == 49) {
        quoteTarget = msgWrap;
    }

    if (quoteTarget && logicController && [logicController respondsToSelector:@selector(SendTextMessage:replyingMessage:isPasted:)]) {
        @try {
            ((void (*)(id, SEL, id, id, BOOL))objc_msgSend)(logicController,
                                                             @selector(SendTextMessage:replyingMessage:isPasted:),
                                                             repeatText,
                                                             quoteTarget,
                                                             NO);
            WCPLLogInfo(@"Repeat sent: flow=logic_quote msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
            return;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Repeat quote send via logicController failed: %@", exception.reason ?: exception);
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
                WCPLLogInfo(@"Repeat sent: flow=toolview_quote msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
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
            WCPLLogInfo(@"Repeat sent: flow=logic_plain msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
            return;
        } @catch (__unused NSException *exception) {
        }
    }

    if ([chatVC respondsToSelector:@selector(onSendTextMsg:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(chatVC, @selector(onSendTextMsg:), repeatText);
            WCPLLogInfo(@"Repeat sent: flow=chatvc_plain msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
            return;
        } @catch (__unused NSException *exception) {
        }
    }

    id messageMgr = WCPLGetService(objc_getClass("CMessageMgr"));
    if (messageMgr && [messageMgr respondsToSelector:@selector(AddMsg:MsgWrap:)]) {
        @try {
            NSString *targetChatName = chatName.length > 0 ? chatName : wcpl_chatNameForMessage(msgWrap, chatVC);
            CMessageWrap *newWrap = [[objc_getClass("CMessageWrap") alloc] initWithMsgType:1];
            newWrap.m_uiMessageType = 1;
            newWrap.m_nsContent = repeatText;
            newWrap.m_nsToUsr = targetChatName;
            ((void (*)(id, SEL, id, id))objc_msgSend)(messageMgr, @selector(AddMsg:MsgWrap:), targetChatName, newWrap);
            WCPLLogInfo(@"Repeat sent: flow=messageMgr_fallback msg=%@ chat=%@", wcpl_repeatMessageDebugInfo(msgWrap), targetChatName ?: @"(nil)");
            return;
        } @catch (NSException *exception) {
            WCPLLogError(@"Repeat fallback AddMsg failed: %@", exception.reason ?: exception);
        }
    }

    WCPLLogError(@"Repeat failed: no available send method type=%@ msg=%@", wcpl_repeatTypeName(msgType), wcpl_repeatMessageDebugInfo(msgWrap));
}

%new
- (void)wchook_onRepeatButtonTapped:(UIButton *)sender {
    CMessageWrap *msgWrap = objc_getAssociatedObject(sender, kWCPLRepeatButtonWrapKey);
    if (!msgWrap) {
        msgWrap = wcpl_messageWrapForCellView(self);
    }
    BOOL hasQuote = (wcpl_quoteTargetFromMessageWrap(msgWrap) != nil) || (msgWrap && msgWrap.m_uiMessageType == 49);
    WCPLLogInfo(@"Repeat click: class=%@ cell=%p msg=%@ hasQuote=%d", NSStringFromClass([self class]), self, wcpl_repeatMessageDebugInfo(msgWrap), hasQuote ? 1 : 0);
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
