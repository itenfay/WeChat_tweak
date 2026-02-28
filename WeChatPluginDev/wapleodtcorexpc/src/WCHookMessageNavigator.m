#import "WCHookMessageNavigator.h"
#import "WCPLCrashReporter.h"
#import "WCPLDispatchUtils.h"
#import "WCPLLogger.h"
#import "WCPLServiceCenter.h"

#import <UIKit/UIKit.h>
#import <limits.h>
#import <objc/message.h>
#import <objc/runtime.h>

@interface CommonMessageCellView : UIView
@end

static Class WCHookReferViewClass(void);
static BOOL WCHookObjectIsReferView(id object);
static id WCHookInvokeObject(id target, SEL selector);
static BOOL WCHookRevokeDebugToastEnabled(void);
static void WCHookShowDebugToast(NSString *text);
static UIWindow *WCHookActiveWindow(void);
static UIResponder *WCHookLocateResponderForView(UIView *view);
static UIView *WCHookLocateCarrierViewFromObject(id object);
static CommonMessageCellView *WCHookResolveMessageCellForObject(id object);
static id WCHookMessageWrapFromObject(id object);
static id WCHookMessageWrapForCell(CommonMessageCellView *cell);
static BOOL WCHookLooksLikeMessageWrapObject(id object);
static id WCHookReferMessageFromWrap(id messageWrap);
static id WCHookLocateTargetFromObject(id object);
static BOOL WCHookLooksLikeRevokeTipContent(NSString *content);
static BOOL WCHookLooksLikeSelfRevokeTipContent(NSString *content);
static BOOL WCHookLooksLikeQuitMonitorTipContent(NSString *content);
static NSString *WCHookStringFieldFromWrap(id messageWrap, SEL selector, NSString *kvcKey);
static NSNumber *WCHookNumberFieldFromWrap(id messageWrap, SEL selector, NSString *kvcKey);
static long long WCHookLongLongFieldFromWrap(id messageWrap, SEL selector, NSString *kvcKey);
static NSString *WCHookMessageContentFromWrap(id messageWrap);
static NSString *WCHookMsgSourceFromWrap(id messageWrap);
static NSString *WCHookTrimString(NSString *text);
static NSString *WCHookInlineText(NSString *text);
static NSString *WCHookExtractTagValue(NSString *text, NSString *tag);
static NSString *WCHookExtractFirstCSVItem(NSString *text);
static long long WCHookParseLongLong(NSString *text);
static unsigned int WCHookParseUInt(NSString *text);
static unsigned int WCHookUIntFieldFromWrap(id messageWrap, SEL selector, NSString *kvcKey);
static NSArray<NSString *> *WCHookMetaSourceCandidatesFromWrap(id messageWrap);
static NSString *WCHookExtractRevokeExcerptFromTipContent(NSString *content);
static NSString *WCHookDigestForMessageWrap(id messageWrap);
static NSString *WCHookExtractQuitMonitorUserNameFromMsgSource(NSString *msgSource);
static NSString *WCHookExtractQuitMonitorUserNameFromContent(NSString *content);
static NSString *WCHookStripHTMLTags(NSString *text);
static NSString *WCHookExtractQuitMonitorDisplayNameFromContent(NSString *content);
static id WCHookContactForUserName(NSString *userName);
static id WCHookMessageMgr(void);
static id WCHookFindMsgByLocalID(id messageMgr, NSString *chatName, unsigned int localID);
static id WCHookFindRevokeTargetByExcerpt(id messageMgr, id tipMessageWrap, NSString *chatName, NSString *excerpt);
static id WCHookResolveRevokeTipTargetMessage(id messageWrap,
                                              id messageMgr,
                                              NSString **sessionOut,
                                              long long *svrIDOut,
                                              unsigned int *localIDOut,
                                              NSString **excerptOut);
static id WCHookResolveMsgContentTargetFromObject(id object);
static double WCHookResolveScrollMarginTop(id target);
static void WCHookPrepareRevokeReturnAnchor(id target, id tipMessageWrap, id targetMessage);
static void WCHookStabilizeRevokeReturnAnchor(id target, id tipMessageWrap, id targetMessage);
static void WCHookHighlightMessageIfPossible(id target, id targetMessage);
static BOOL WCHookScrollToMessageHighlight(id target, id targetMessage);
static BOOL WCHookLocateAndEmphasizeRevokeTarget(id locateTarget, id tipMessageWrap, id targetMessage);
static NSInteger WCHookMsgTargetScore(id object);
static UIScrollView *WCHookFindPreferredScrollViewInView(UIView *rootView);
static UIScrollView *WCHookResolveScrollViewFromTarget(id object);
static id WCHookFallbackLocateTarget(void);
static BOOL WCHookTryJumpFromRevokeTipMessageWrap(id messageWrap, id locateTarget);
static BOOL WCHookTryJumpFromRevokeTipCell(CommonMessageCellView *cell);
static BOOL WCHookCellMayContainRevokeTip(CommonMessageCellView *cell);
static id WCHookResolveProfileOpenTargetFromCell(CommonMessageCellView *cell);
static BOOL WCHookOpenProfileWithTarget(id target, NSString *userName, NSString *displayName);
static BOOL WCHookExecuteOpenQuitMemberProfileFromCell(CommonMessageCellView *cell);
static BOOL WCHookExecuteJumpToMessageFromCell(CommonMessageCellView *cell, id targetMessage);
static BOOL WCHookExecuteJumpToMessageWithTarget(id locateTarget, id targetMessage);
static BOOL WCHookExecuteJumpFromCell(CommonMessageCellView *cell);
static BOOL WCHookExecuteJumpFromInput(id toolView);
static BOOL WCHookPerformSyncOnMainThread(BOOL (^action)(void));

static NSString *const kWCHookRevokeDebugToastEnabledKey = @"kWCPLRevokeDebugToastEnabled";
static NSTimeInterval gWCHookRevokeTipTapThrottleUntil = 0;
static NSTimeInterval const kWCHookRevokeAnchorStabilizeInterval = 0.12;
static NSInteger const kWCHookRevokeAnchorStabilizeAttempts = 12;

@implementation WCHookMessageNavigator

+ (BOOL)senderLooksLikeReferView:(id)sender {
    if (!sender) {
        return YES;
    }
    if ([sender isKindOfClass:[UITapGestureRecognizer class]]) {
        return WCHookObjectIsReferView(((UITapGestureRecognizer *)sender).view);
    }
    return WCHookObjectIsReferView(sender);
}

+ (BOOL)tryJumpFromCell:(CommonMessageCellView *)cell {
    if (!cell) {
        return NO;
    }
    WCPLCrashBreadcrumb(@"引用跳转(消息气泡): cell=%@", NSStringFromClass([cell class]));
    return WCHookPerformSyncOnMainThread(^BOOL{
        return WCHookExecuteJumpFromCell(cell);
    });
}

+ (BOOL)tryJumpFromInputTool:(id)toolView {
    if (!toolView) {
        return NO;
    }
    WCPLCrashBreadcrumb(@"引用跳转(输入框): toolView=%@", NSStringFromClass([toolView class]));
    return WCHookPerformSyncOnMainThread(^BOOL{
        return WCHookExecuteJumpFromInput(toolView);
    });
}

+ (BOOL)tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)cell {
    if (!cell) {
        return NO;
    }
    return WCHookPerformSyncOnMainThread(^BOOL{
        return WCHookExecuteOpenQuitMemberProfileFromCell(cell);
    });
}

+ (BOOL)tryJumpFromRevokeTipCell:(CommonMessageCellView *)cell {
    if (!cell) {
        return NO;
    }
    if (!WCHookCellMayContainRevokeTip(cell)) {
        return NO;
    }
    WCPLCrashBreadcrumb(@"防撤回提示跳转(消息气泡): cell=%@", NSStringFromClass([cell class]));
    return WCHookPerformSyncOnMainThread(^BOOL{
        return WCHookTryJumpFromRevokeTipCell(cell);
    });
}

+ (BOOL)tryJumpFromRevokeTipMessageWrap:(id)messageWrap locateTarget:(id)locateTarget {
    return WCHookPerformSyncOnMainThread(^BOOL{
        return WCHookTryJumpFromRevokeTipMessageWrap(messageWrap, locateTarget);
    });
}

@end

static Class WCHookReferViewClass(void) {
    static Class referViewClass = Nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        referViewClass = NSClassFromString(@"MMInputMsgReferView");
    });
    return referViewClass;
}

static BOOL WCHookObjectIsReferView(id object) {
    Class referClass = WCHookReferViewClass();
    return referClass && [object isKindOfClass:referClass];
}

static UIWindow *WCHookActiveWindow(void) {
    UIApplication *application = [UIApplication sharedApplication];
    if (![application isKindOfClass:[UIApplication class]]) {
        return nil;
    }
    if ([application respondsToSelector:@selector(windows)]) {
        for (UIWindow *candidate in [application.windows reverseObjectEnumerator]) {
            if (![candidate isKindOfClass:[UIWindow class]] || candidate.hidden || candidate.alpha < 0.01) {
                continue;
            }
            return candidate;
        }
    }
    return nil;
}

static BOOL WCHookRevokeDebugToastEnabled(void) {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if (![defaults isKindOfClass:[NSUserDefaults class]]) {
        return NO;
    }
    id value = [defaults objectForKey:kWCHookRevokeDebugToastEnabledKey];
    if ([value respondsToSelector:@selector(boolValue)]) {
        return ((BOOL (*)(id, SEL))objc_msgSend)(value, @selector(boolValue));
    }
    return NO;
}

static void WCHookShowDebugToast(NSString *text) {
    if (!WCHookRevokeDebugToastEnabled()) {
        return;
    }

    NSString *message = WCHookTrimString(text);
    if (message.length == 0) {
        return;
    }

    UIWindow *window = WCHookActiveWindow();
    if (!window) {
        return;
    }

    static NSInteger const kToastTag = 0x5743504c;
    UIView *existing = [window viewWithTag:kToastTag];
    if (existing) {
        [existing removeFromSuperview];
    }

    UILabel *toast = [[UILabel alloc] initWithFrame:CGRectZero];
    toast.tag = kToastTag;
    toast.text = message;
    toast.textColor = UIColor.whiteColor;
    toast.font = [UIFont boldSystemFontOfSize:13.0];
    toast.textAlignment = NSTextAlignmentCenter;
    toast.numberOfLines = 2;
    toast.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.78];
    toast.layer.cornerRadius = 9.0;
    toast.layer.masksToBounds = YES;
    toast.alpha = 0.0;

    CGSize maxSize = CGSizeMake(MIN(CGRectGetWidth(window.bounds) - 40.0, 280.0), CGFLOAT_MAX);
    CGSize textSize = [toast sizeThatFits:maxSize];
    CGFloat width = MIN(MAX(textSize.width + 24.0, 150.0), maxSize.width + 20.0);
    CGFloat height = MIN(MAX(textSize.height + 14.0, 34.0), 72.0);
    toast.frame = CGRectMake((CGRectGetWidth(window.bounds) - width) * 0.5,
                             CGRectGetHeight(window.bounds) * 0.2,
                             width,
                             height);
    [window addSubview:toast];

    [UIView animateWithDuration:0.16 animations:^{
        toast.alpha = 1.0;
    } completion:^(__unused BOOL finishedIn) {
        [UIView animateWithDuration:0.28
                              delay:1.1
                            options:UIViewAnimationOptionCurveEaseInOut
                         animations:^{
            toast.alpha = 0.0;
    } completion:^(__unused BOOL finishedOut) {
            [toast removeFromSuperview];
        }];
    }];
}

static id WCHookInvokeObject(id target, SEL selector) {
    if (!target || !selector) {
        return nil;
    }
    if (![target respondsToSelector:selector]) {
        return nil;
    }
    return ((id (*)(id, SEL))objc_msgSend)(target, selector);
}

static UIResponder *WCHookLocateResponderForView(UIView *view) {
    SEL selector = @selector(locateToMsg:);
    UIResponder *responder = view;
    while (responder) {
        if ([responder respondsToSelector:selector]) {
            return responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

static UIView *WCHookLocateCarrierViewFromObject(id object) {
    if (!object) {
        return nil;
    }
    if ([object isKindOfClass:[UIView class]]) {
        return (UIView *)object;
    }

    SEL selectors[] = {
        @selector(getRichTextView),
        @selector(getContentView),
        @selector(contentView),
        @selector(view)
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        id candidate = WCHookInvokeObject(object, selectors[idx]);
        if ([candidate isKindOfClass:[UIView class]]) {
            return (UIView *)candidate;
        }
    }
    return nil;
}

static CommonMessageCellView *WCHookResolveMessageCellForObject(id object) {
    if (!object) {
        return nil;
    }

    Class commonCellClass = NSClassFromString(@"CommonMessageCellView");
    if (commonCellClass && [object isKindOfClass:commonCellClass] &&
        [object respondsToSelector:@selector(onReturnToOriginalMsg)]) {
        return (CommonMessageCellView *)object;
    }

    UIView *carrier = WCHookLocateCarrierViewFromObject(object);
    UIView *view = carrier;
    while (view) {
        BOOL classLooksCell = [NSStringFromClass([view class]) hasSuffix:@"MessageCellView"];
        if ((commonCellClass && [view isKindOfClass:commonCellClass]) || classLooksCell) {
            if ([view respondsToSelector:@selector(onReturnToOriginalMsg)] &&
                [view respondsToSelector:@selector(getCurrentMessageWrap)]) {
                return (CommonMessageCellView *)view;
            }
        }
        view = view.superview;
    }
    return nil;
}

static id WCHookMessageWrapFromObject(id object) {
    if (!object) {
        return nil;
    }
    SEL selectors[] = {
        @selector(messageWrap),
        @selector(getMessageWrap),
        @selector(getCurrentMessageWrap),
        @selector(msgWrap)
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        SEL selector = selectors[idx];
        id result = WCHookInvokeObject(object, selector);
        if (result) {
            return result;
        }
    }
    return nil;
}

static id WCHookMessageWrapForCell(CommonMessageCellView *cell) {
    id messageWrap = WCHookMessageWrapFromObject(cell);
    if (messageWrap) {
        return messageWrap;
    }
    id viewModel = WCHookInvokeObject(cell, @selector(viewModel));
    messageWrap = WCHookMessageWrapFromObject(viewModel);
    if (!messageWrap && viewModel) {
        messageWrap = WCHookInvokeObject(viewModel, @selector(getCurrentMessageWrap));
    }
    if (!messageWrap) {
        messageWrap = WCHookInvokeObject(cell, @selector(getCurrentMessageWrap));
    }
    return messageWrap;
}

static BOOL WCHookLooksLikeMessageWrapObject(id object) {
    if (!object) {
        return NO;
    }

    Class messageWrapClass = NSClassFromString(@"CMessageWrap");
    if (messageWrapClass) {
        return [object isKindOfClass:messageWrapClass];
    }

    if ([object isKindOfClass:[NSString class]] ||
        [object isKindOfClass:[NSNumber class]] ||
        [object isKindOfClass:[NSArray class]] ||
        [object isKindOfClass:[NSDictionary class]]) {
        return NO;
    }

    if ([object respondsToSelector:@selector(isValid)] ||
        [object respondsToSelector:@selector(m_uiMesLocalID)] ||
        [object respondsToSelector:@selector(m_n64MesSvrID)]) {
        return YES;
    }

    return NO;
}

static id WCHookReferMessageFromWrap(id messageWrap) {
    if (!messageWrap) {
        return nil;
    }
    SEL selectors[] = {
        @selector(referHostMsg),
        @selector(referingMessageWrap),
        @selector(replyingMessageWrap)
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        SEL selector = selectors[idx];
        id result = WCHookInvokeObject(messageWrap, selector);
        if (WCHookLooksLikeMessageWrapObject(result)) {
            return result;
        }
    }
    return nil;
}

static BOOL WCHookLooksLikeRevokeTipContent(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return NO;
    }
    return ([content rangeOfString:@"撤回了一条消息"].location != NSNotFound ||
            [content rangeOfString:@"已拦截撤回"].location != NSNotFound);
}

static BOOL WCHookLooksLikeSelfRevokeTipContent(NSString *content) {
    NSString *text = WCHookTrimString(content);
    if (text.length == 0) {
        return NO;
    }

    // 说明：自己撤回的提示通常包含「你撤回……」，且该提示往往带有「重新编辑」入口。
    // 我们的“撤回提示跳转”逻辑如果吞掉点击，会导致「重新编辑」无响应，因此必须跳过自撤回提示。
    if ([text rangeOfString:@"你撤回"].location != NSNotFound) {
        return YES;
    }

    if ([text rangeOfString:@"You recalled" options:NSCaseInsensitiveSearch].location != NSNotFound) {
        return YES;
    }

    return NO;
}

static BOOL WCHookLooksLikeQuitMonitorTipContent(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return NO;
    }
    return ([content rangeOfString:@"[退群监控]"].location != NSNotFound &&
            ([content rangeOfString:@"已退出群聊"].location != NSNotFound ||
             [content rangeOfString:@"退出群聊"].location != NSNotFound));
}

static NSString *WCHookStringFieldFromWrap(id messageWrap, SEL selector, NSString *kvcKey) {
    if (!messageWrap) {
        return nil;
    }

    id fieldObj = WCHookInvokeObject(messageWrap, selector);
    if ([fieldObj isKindOfClass:[NSString class]]) {
        return (NSString *)fieldObj;
    }

    if (![kvcKey isKindOfClass:[NSString class]] || kvcKey.length == 0) {
        return nil;
    }

    @try {
        id kvcValue = [messageWrap valueForKey:kvcKey];
        if ([kvcValue isKindOfClass:[NSString class]]) {
            return (NSString *)kvcValue;
        }
    } @catch (__unused NSException *exceptionKVC) {
    }
    return nil;
}

static NSNumber *WCHookNumberFieldFromWrap(id messageWrap, SEL selector, NSString *kvcKey) {
    if (!messageWrap) {
        return nil;
    }

    id fieldObj = WCHookInvokeObject(messageWrap, selector);
    if ([fieldObj isKindOfClass:[NSNumber class]]) {
        return (NSNumber *)fieldObj;
    }

    if (![kvcKey isKindOfClass:[NSString class]] || kvcKey.length == 0) {
        return nil;
    }

    @try {
        id kvcValue = [messageWrap valueForKey:kvcKey];
        if ([kvcValue isKindOfClass:[NSNumber class]]) {
            return (NSNumber *)kvcValue;
        }
    } @catch (__unused NSException *exceptionKVC) {
    }
    return nil;
}

static long long WCHookLongLongFieldFromWrap(id messageWrap, SEL selector, NSString *kvcKey) {
    NSNumber *number = WCHookNumberFieldFromWrap(messageWrap, selector, kvcKey);
    if (![number isKindOfClass:[NSNumber class]]) {
        return 0;
    }
    return number.longLongValue;
}

static NSString *WCHookMessageContentFromWrap(id messageWrap) {
    return WCHookStringFieldFromWrap(messageWrap, @selector(m_nsContent), @"m_nsContent");
}

static NSString *WCHookMsgSourceFromWrap(id messageWrap) {
    return WCHookStringFieldFromWrap(messageWrap, @selector(m_nsMsgSource), @"m_nsMsgSource");
}

static NSString *WCHookTrimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) {
        return nil;
    }
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *WCHookInlineText(NSString *text) {
    NSString *trimmed = WCHookTrimString(text);
    if (trimmed.length == 0) {
        return nil;
    }
    NSString *inlined = [[trimmed stringByReplacingOccurrencesOfString:@"\r" withString:@" "]
                         stringByReplacingOccurrencesOfString:@"\n" withString:@" "];
    return WCHookTrimString(inlined);
}

static NSString *WCHookExtractFirstCSVItem(NSString *text) {
    NSString *trimmed = WCHookTrimString(text);
    if (trimmed.length == 0) {
        return nil;
    }
    NSCharacterSet *separators = [NSCharacterSet characterSetWithCharactersInString:@",; \n\t\r"];
    NSArray<NSString *> *parts = [trimmed componentsSeparatedByCharactersInSet:separators];
    for (NSString *part in parts) {
        NSString *value = WCHookTrimString(part);
        if (value.length > 0) {
            return value;
        }
    }
    return nil;
}

static long long WCHookParseLongLong(NSString *text) {
    NSString *value = WCHookTrimString(text);
    if (value.length == 0) {
        return 0;
    }

    NSScanner *scanner = [NSScanner scannerWithString:value];
    long long parsed = 0;
    if (![scanner scanLongLong:&parsed]) {
        return 0;
    }
    return parsed;
}

static unsigned int WCHookParseUInt(NSString *text) {
    long long value = WCHookParseLongLong(text);
    if (value <= 0) {
        return 0;
    }
    if (value > UINT_MAX) {
        return UINT_MAX;
    }
    return (unsigned int)value;
}

static unsigned int WCHookUIntFieldFromWrap(id messageWrap, SEL selector, NSString *kvcKey) {
    NSNumber *number = WCHookNumberFieldFromWrap(messageWrap, selector, kvcKey);
    if (![number isKindOfClass:[NSNumber class]]) {
        return 0;
    }
    long long value = number.longLongValue;
    if (value <= 0) {
        return 0;
    }
    if (value > UINT_MAX) {
        return UINT_MAX;
    }
    return (unsigned int)value;
}

static NSArray<NSString *> *WCHookMetaSourceCandidatesFromWrap(id messageWrap) {
    if (!messageWrap) {
        return @[];
    }
    NSMutableArray<NSString *> *results = [NSMutableArray array];
    void (^appendIfNeeded)(NSString *) = ^(NSString *value) {
        NSString *trimmed = WCHookTrimString(value);
        if (trimmed.length == 0) {
            return;
        }
        for (NSString *existing in results) {
            if ([existing isEqualToString:trimmed]) {
                return;
            }
        }
        [results addObject:trimmed];
    };
    appendIfNeeded(WCHookStringFieldFromWrap(messageWrap, @selector(m_nsMsgSource), @"m_nsMsgSource"));
    appendIfNeeded(WCHookStringFieldFromWrap(messageWrap, @selector(m_nsBizClientMsgID), @"m_nsBizClientMsgID"));
    appendIfNeeded(WCHookStringFieldFromWrap(messageWrap, @selector(m_nsSignature), @"m_nsSignature"));
    return results;
}

static NSString *WCHookExtractRevokeExcerptFromTipContent(NSString *content) {
    NSString *text = WCHookTrimString(content);
    if (text.length == 0 || !WCHookLooksLikeRevokeTipContent(text)) {
        return nil;
    }

    NSArray<NSString *> *tokens = @[@"原消息：", @"原消息:"];
    for (NSString *token in tokens) {
        NSRange tokenRange = [text rangeOfString:token];
        if (tokenRange.location == NSNotFound || NSMaxRange(tokenRange) >= text.length) {
            continue;
        }
        NSString *suffix = [text substringFromIndex:NSMaxRange(tokenRange)];
        NSString *inlineSuffix = WCHookInlineText(suffix);
        if (inlineSuffix.length > 0) {
            return inlineSuffix;
        }
    }

    NSArray<NSString *> *lines = [text componentsSeparatedByString:@"\n"];
    for (NSInteger idx = (NSInteger)lines.count - 1; idx >= 0; idx--) {
        NSString *line = WCHookInlineText(lines[(NSUInteger)idx]);
        if (line.length == 0) {
            continue;
        }
        if ([line rangeOfString:@"撤回了一条消息"].location != NSNotFound ||
            [line rangeOfString:@"已拦截撤回"].location != NSNotFound) {
            continue;
        }
        return line;
    }
    return nil;
}

static NSString *WCHookDigestForMessageWrap(id messageWrap) {
    if (!messageWrap) {
        return nil;
    }

    unsigned int msgType = WCHookUIntFieldFromWrap(messageWrap, @selector(m_uiMessageType), @"m_uiMessageType");
    switch (msgType) {
        case 1:
            return WCHookInlineText(WCHookMessageContentFromWrap(messageWrap));
        case 3:
            return @"[图片]";
        case 34:
            return @"[语音]";
        case 43:
            return @"[视频]";
        case 47:
            return @"[表情]";
        case 49:
            return @"[应用消息]";
        default:
            return [NSString stringWithFormat:@"[类型:%u]", msgType];
    }
}

static NSString *WCHookExtractTagValue(NSString *text, NSString *tag) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0 ||
        ![tag isKindOfClass:[NSString class]] || tag.length == 0) {
        return nil;
    }

    NSString *openTag = [NSString stringWithFormat:@"<%@>", tag];
    NSString *closeTag = [NSString stringWithFormat:@"</%@>", tag];
    NSRange openRange = [text rangeOfString:openTag options:NSCaseInsensitiveSearch];
    if (openRange.location == NSNotFound) {
        return nil;
    }
    NSRange closeSearchRange = NSMakeRange(NSMaxRange(openRange), text.length - NSMaxRange(openRange));
    NSRange closeRange = [text rangeOfString:closeTag options:NSCaseInsensitiveSearch range:closeSearchRange];
    if (closeRange.location == NSNotFound || closeRange.location <= NSMaxRange(openRange)) {
        return nil;
    }

    NSRange valueRange = NSMakeRange(NSMaxRange(openRange), closeRange.location - NSMaxRange(openRange));
    if (NSMaxRange(valueRange) > text.length) {
        return nil;
    }
    NSString *value = [text substringWithRange:valueRange];
    if ([value hasPrefix:@"<![CDATA["] && [value hasSuffix:@"]]>"] && value.length >= 12) {
        value = [value substringWithRange:NSMakeRange(9, value.length - 12)];
    }
    return WCHookTrimString(value);
}

static NSString *WCHookExtractQuitMonitorUserNameFromMsgSource(NSString *msgSource) {
    NSString *userName = WCHookExtractTagValue(msgSource, @"memberusername");
    if (userName.length == 0) {
        userName = WCHookExtractTagValue(msgSource, @"username");
    }
    if (userName.length == 0) {
        userName = WCHookExtractTagValue(msgSource, @"fromusr");
    }
    if (userName.length == 0) {
        NSString *atUserList = WCHookExtractTagValue(msgSource, @"atuserlist");
        userName = WCHookExtractFirstCSVItem(atUserList);
    }
    return WCHookTrimString(userName);
}

static NSString *WCHookExtractQuitMonitorUserNameFromContent(NSString *content) {
    NSString *text = WCHookTrimString(content);
    if (text.length == 0) {
        return nil;
    }

    NSRange profileRange = [text rangeOfString:@"weixin://contacts/profile/" options:NSCaseInsensitiveSearch];
    if (profileRange.location != NSNotFound) {
        NSUInteger start = NSMaxRange(profileRange);
        if (start < text.length) {
            NSCharacterSet *endSet = [NSCharacterSet characterSetWithCharactersInString:@"\"'<> )】\n\r\t"];
            NSRange searchRange = NSMakeRange(start, text.length - start);
            NSRange endRange = [text rangeOfCharacterFromSet:endSet options:0 range:searchRange];
            NSUInteger end = (endRange.location == NSNotFound) ? text.length : endRange.location;
            if (end > start && end <= text.length) {
                NSString *encoded = [text substringWithRange:NSMakeRange(start, end - start)];
                NSString *decoded = [encoded stringByRemovingPercentEncoding] ?: encoded;
                NSString *trimmed = WCHookTrimString(decoded);
                if (trimmed.length > 0) {
                    return trimmed;
                }
            }
        }
    }

    NSString *userName = WCHookExtractTagValue(text, @"memberusername");
    if (userName.length == 0) {
        userName = WCHookExtractTagValue(text, @"username");
    }
    if (userName.length == 0) {
        userName = WCHookExtractTagValue(text, @"fromusr");
    }
    return WCHookTrimString(userName);
}

static NSString *WCHookStripHTMLTags(NSString *text) {
    NSString *input = WCHookTrimString(text);
    if (input.length == 0) {
        return nil;
    }
    NSError *error = nil;
    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"<[^>]+>"
                                                                           options:0
                                                                             error:&error];
    if (error || !regex) {
        return input;
    }
    NSString *stripped = [regex stringByReplacingMatchesInString:input
                                                         options:0
                                                           range:NSMakeRange(0, input.length)
                                                    withTemplate:@""];
    return WCHookTrimString(stripped);
}

static NSString *WCHookExtractQuitMonitorDisplayNameFromContent(NSString *content) {
    NSString *text = WCHookTrimString(content);
    if (text.length == 0) {
        return nil;
    }

    NSString *nickName = WCHookExtractTagValue(text, @"nickname");
    if (nickName.length == 0) {
        nickName = WCHookExtractTagValue(text, @"displayname");
    }
    if (nickName.length > 0) {
        return WCHookTrimString(nickName);
    }

    NSRange prefixRange = [text rangeOfString:@"[退群监控]"];
    if (prefixRange.location != NSNotFound) {
        text = [text substringFromIndex:NSMaxRange(prefixRange)];
    }

    NSRange suffixRange = [text rangeOfString:@"已退出群聊"];
    if (suffixRange.location != NSNotFound) {
        text = [text substringToIndex:suffixRange.location];
    } else {
        suffixRange = [text rangeOfString:@"退出群聊"];
        if (suffixRange.location != NSNotFound) {
            text = [text substringToIndex:suffixRange.location];
        }
    }

    text = WCHookStripHTMLTags(text);
    if (text.length == 0) {
        return nil;
    }

    text = [text stringByReplacingOccurrencesOfString:@"（" withString:@" "];
    text = [text stringByReplacingOccurrencesOfString:@"）" withString:@" "];
    text = [text stringByReplacingOccurrencesOfString:@"(" withString:@" "];
    text = [text stringByReplacingOccurrencesOfString:@")" withString:@" "];
    text = [text stringByReplacingOccurrencesOfString:@"、" withString:@" "];
    text = [text stringByReplacingOccurrencesOfString:@"@" withString:@""];
    text = WCHookExtractFirstCSVItem(text);
    return WCHookTrimString(text);
}

static id WCHookContactForUserName(NSString *userName) {
    NSString *target = WCHookTrimString(userName);
    if (target.length == 0) {
        return nil;
    }

    Class serviceCenterClass = NSClassFromString(@"MMServiceCenter");
    Class contactMgrClass = NSClassFromString(@"CContactMgr");
    if (!serviceCenterClass || !contactMgrClass ||
        ![serviceCenterClass respondsToSelector:@selector(defaultCenter)]) {
        return nil;
    }
    id serviceCenter = ((id (*)(id, SEL))objc_msgSend)(serviceCenterClass, @selector(defaultCenter));
    if (!serviceCenter || ![serviceCenter respondsToSelector:@selector(getService:)]) {
        return nil;
    }
    id contactMgr = ((id (*)(id, SEL, id))objc_msgSend)(serviceCenter, @selector(getService:), contactMgrClass);
    if (!contactMgr) {
        return nil;
    }

    SEL selectors[] = {
        NSSelectorFromString(@"getContactByName:"),
        NSSelectorFromString(@"getContactByNameFromDB:"),
        NSSelectorFromString(@"getContactByNameFromCache:")
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        SEL selector = selectors[idx];
        if (![contactMgr respondsToSelector:selector]) {
            continue;
        }
        @try {
            id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, selector, target);
            if (contact) {
                return contact;
            }
        } @catch (__unused NSException *exceptionLookup) {
        }
    }
    return nil;
}

static id WCHookMessageMgr(void) {
    Class messageMgrClass = NSClassFromString(@"CMessageMgr");
    if (!messageMgrClass) {
        return nil;
    }

    id service = WCPLGetService(messageMgrClass);
    if (service) {
        return service;
    }

    Class serviceCenterClass = NSClassFromString(@"MMServiceCenter");
    if (!serviceCenterClass || ![serviceCenterClass respondsToSelector:@selector(defaultCenter)]) {
        return nil;
    }

    id serviceCenter = ((id (*)(id, SEL))objc_msgSend)(serviceCenterClass, @selector(defaultCenter));
    if (!serviceCenter || ![serviceCenter respondsToSelector:@selector(getService:)]) {
        return nil;
    }

    return ((id (*)(id, SEL, id))objc_msgSend)(serviceCenter, @selector(getService:), messageMgrClass);
}

static id WCHookFindMsgByLocalID(id messageMgr, NSString *chatName, unsigned int localID) {
    if (!messageMgr || ![chatName isKindOfClass:[NSString class]] || chatName.length == 0 || localID == 0) {
        return nil;
    }

    if ([messageMgr respondsToSelector:@selector(GetMsg:LocalID:)]) {
        @try {
            id message = ((id (*)(id, SEL, id, unsigned int))objc_msgSend)(messageMgr,
                                                                            @selector(GetMsg:LocalID:),
                                                                            chatName,
                                                                            localID);
            if (message) {
                return message;
            }
        } @catch (__unused NSException *exceptionGetMsgLocalID) {
        }
    }

    if ([messageMgr respondsToSelector:@selector(GetMsg:LocalID:hasError:needOriginContent:)]) {
        @try {
            BOOL hasError = NO;
            id message = ((id (*)(id, SEL, id, unsigned int, BOOL *, BOOL))objc_msgSend)(messageMgr,
                                                                                           @selector(GetMsg:LocalID:hasError:needOriginContent:),
                                                                                           chatName,
                                                                                           localID,
                                                                                           &hasError,
                                                                                           NO);
            if (message) {
                return message;
            }
        } @catch (__unused NSException *exceptionGetMsgLocalIDEx) {
        }
    }

    if ([messageMgr respondsToSelector:@selector(GetMsgForUsr:fromLocalIdList:)]) {
        @try {
            NSArray<NSNumber *> *localIDs = @[@(localID)];
            id result = ((id (*)(id, SEL, id, id))objc_msgSend)(messageMgr,
                                                                 @selector(GetMsgForUsr:fromLocalIdList:),
                                                                 chatName,
                                                                 localIDs);
            if ([result isKindOfClass:[NSArray class]] && [result count] > 0) {
                return [result firstObject];
            }
        } @catch (__unused NSException *exceptionGetMsgForUsr) {
        }
    }

    return nil;
}

static id WCHookFindRevokeTargetByExcerpt(id messageMgr, id tipMessageWrap, NSString *chatName, NSString *excerpt) {
    NSString *trimmedChat = WCHookTrimString(chatName);
    NSString *trimmedExcerpt = WCHookInlineText(excerpt);
    if (!messageMgr || trimmedChat.length == 0 || trimmedExcerpt.length == 0) {
        return nil;
    }

    unsigned int tipLocalID = WCHookUIntFieldFromWrap(tipMessageWrap, @selector(m_uiMesLocalID), @"m_uiMesLocalID");
    unsigned int startLocalID = tipLocalID;
    if (startLocalID == 0 && [messageMgr respondsToSelector:@selector(GetLastMsgLocalID:)]) {
        @try {
            startLocalID = ((unsigned int (*)(id, SEL, id))objc_msgSend)(messageMgr,
                                                                          @selector(GetLastMsgLocalID:),
                                                                          trimmedChat);
        } @catch (__unused NSException *exceptionLastLocalID) {
            startLocalID = 0;
        }
    }
    if (startLocalID == 0) {
        return nil;
    }

    id messageList = nil;
    if ([messageMgr respondsToSelector:@selector(GetMsg:FromID:Limit:LeftCount:)]) {
        @try {
            unsigned int leftCount = 0;
            messageList = ((id (*)(id, SEL, id, unsigned int, int, unsigned int *))objc_msgSend)(messageMgr,
                                                                                                   @selector(GetMsg:FromID:Limit:LeftCount:),
                                                                                                   trimmedChat,
                                                                                                   startLocalID,
                                                                                                   220,
                                                                                                   &leftCount);
        } @catch (__unused NSException *exceptionGetMsgList) {
            messageList = nil;
        }
    }

    if (![messageList isKindOfClass:[NSArray class]] || [messageList count] == 0) {
        return nil;
    }

    id fuzzyCandidate = nil;
    for (id candidate in (NSArray *)messageList) {
        if (!candidate) {
            continue;
        }
        unsigned int candidateLocalID = WCHookUIntFieldFromWrap(candidate, @selector(m_uiMesLocalID), @"m_uiMesLocalID");
        if (tipLocalID > 0 && candidateLocalID == tipLocalID) {
            continue;
        }

        NSString *candidateContent = WCHookMessageContentFromWrap(candidate);
        if (WCHookLooksLikeRevokeTipContent(candidateContent)) {
            continue;
        }

        NSString *candidateDigest = WCHookDigestForMessageWrap(candidate);
        if (candidateDigest.length == 0) {
            continue;
        }

        if ([candidateDigest isEqualToString:trimmedExcerpt]) {
            return candidate;
        }
        if ([candidateDigest rangeOfString:trimmedExcerpt].location != NSNotFound ||
            [trimmedExcerpt rangeOfString:candidateDigest].location != NSNotFound) {
            if (!fuzzyCandidate) {
                fuzzyCandidate = candidate;
            }
        }
    }

    if (fuzzyCandidate) {
        return fuzzyCandidate;
    }

    // 兜底：按 LocalID 向前扫描，兼容旧提示/历史消息结构差异。
    unsigned int backwardStart = tipLocalID > 0 ? tipLocalID : startLocalID;
    if (backwardStart > 1) {
        unsigned int maxSteps = 320;
        for (unsigned int step = 1; step <= maxSteps; step++) {
            if (backwardStart <= step) {
                break;
            }
            unsigned int candidateLocalID = backwardStart - step;
            id candidate = WCHookFindMsgByLocalID(messageMgr, trimmedChat, candidateLocalID);
            if (!candidate) {
                continue;
            }

            NSString *candidateContent = WCHookMessageContentFromWrap(candidate);
            if (WCHookLooksLikeRevokeTipContent(candidateContent)) {
                continue;
            }

            NSString *candidateDigest = WCHookDigestForMessageWrap(candidate);
            if (candidateDigest.length == 0) {
                continue;
            }

            if ([candidateDigest isEqualToString:trimmedExcerpt] ||
                [candidateDigest rangeOfString:trimmedExcerpt].location != NSNotFound ||
                [trimmedExcerpt rangeOfString:candidateDigest].location != NSNotFound) {
                return candidate;
            }
        }
    }

    return nil;
}

static id WCHookResolveRevokeTipTargetMessage(id messageWrap,
                                              id messageMgr,
                                              NSString **sessionOut,
                                              long long *svrIDOut,
                                              unsigned int *localIDOut,
                                              NSString **excerptOut) {
    if (sessionOut) {
        *sessionOut = nil;
    }
    if (svrIDOut) {
        *svrIDOut = 0;
    }
    if (localIDOut) {
        *localIDOut = 0;
    }
    if (excerptOut) {
        *excerptOut = nil;
    }
    if (!messageWrap) {
        return nil;
    }

    NSMutableArray<NSString *> *sessionCandidates = [NSMutableArray array];
    void (^appendSessionIfNeeded)(NSString *) = ^(NSString *value) {
        NSString *trimmed = WCHookTrimString(value);
        if (trimmed.length == 0) {
            return;
        }
        for (NSString *existing in sessionCandidates) {
            if ([existing isEqualToString:trimmed]) {
                return;
            }
        }
        [sessionCandidates addObject:trimmed];
    };
    appendSessionIfNeeded(WCHookStringFieldFromWrap(messageWrap, @selector(m_nsSpecifiedChatName), @"m_nsSpecifiedChatName"));
    appendSessionIfNeeded(WCHookStringFieldFromWrap(messageWrap, @selector(m_nsToUsr), @"m_nsToUsr"));
    appendSessionIfNeeded(WCHookStringFieldFromWrap(messageWrap, @selector(m_nsFromUsr), @"m_nsFromUsr"));

    long long svrID = WCHookLongLongFieldFromWrap(messageWrap, @selector(m_revokedReferSvrid), @"m_revokedReferSvrid");
    unsigned int localID = 0;
    for (NSString *metaSource in WCHookMetaSourceCandidatesFromWrap(messageWrap)) {
        if ([metaSource rangeOfString:@"wcpl_revoke_jump" options:NSCaseInsensitiveSearch].location == NSNotFound) {
            continue;
        }
        appendSessionIfNeeded(WCHookExtractTagValue(metaSource, @"wcpl_revoke_session"));
        if (svrID <= 0) {
            long long parsedSvrID = WCHookParseLongLong(WCHookExtractTagValue(metaSource, @"wcpl_revoke_svrid"));
            if (parsedSvrID > 0) {
                svrID = parsedSvrID;
            }
        }
        if (localID == 0) {
            unsigned int parsedLocalID = WCHookParseUInt(WCHookExtractTagValue(metaSource, @"wcpl_revoke_localid"));
            if (parsedLocalID > 0) {
                localID = parsedLocalID;
            }
        }
    }
    if (svrID <= 0) {
        unsigned int originSvrID = WCHookUIntFieldFromWrap(messageWrap, @selector(m_uiOriginMsgSvrId), @"m_uiOriginMsgSvrId");
        if (originSvrID > 0) {
            svrID = (long long)originSvrID;
        }
    }

    NSString *excerpt = WCHookExtractRevokeExcerptFromTipContent(WCHookMessageContentFromWrap(messageWrap));
    if (excerptOut) {
        *excerptOut = excerpt;
    }

    NSString *usedSession = nil;
    id targetMessage = nil;

    if (!targetMessage && messageMgr && sessionCandidates.count > 0 && (svrID > 0 || localID > 0)) {
        for (NSString *session in sessionCandidates) {
            if (!targetMessage && svrID > 0 && [messageMgr respondsToSelector:@selector(GetMsg:n64SvrID:)]) {
                @try {
                    targetMessage = ((id (*)(id, SEL, id, long long))objc_msgSend)(messageMgr,
                                                                                    @selector(GetMsg:n64SvrID:),
                                                                                    session,
                                                                                    svrID);
                } @catch (__unused NSException *exceptionGetMsgBySvrID) {
                    targetMessage = nil;
                }
            }
            if (!targetMessage && localID > 0) {
                targetMessage = WCHookFindMsgByLocalID(messageMgr, session, localID);
            }
            if (targetMessage) {
                usedSession = session;
                break;
            }
        }
    }

    if (!targetMessage && messageMgr && excerpt.length > 0 && sessionCandidates.count > 0) {
        for (NSString *session in sessionCandidates) {
            targetMessage = WCHookFindRevokeTargetByExcerpt(messageMgr, messageWrap, session, excerpt);
            if (targetMessage) {
                usedSession = session;
                WCPLLogInfo(@"Revoke tip fallback match by excerpt: session=%@ excerpt=%@",
                            session,
                            excerpt);
                break;
            }
        }
    }

    if (targetMessage && !WCHookLooksLikeMessageWrapObject(targetMessage)) {
        WCPLLogWarning(@"Revoke tip resolve got unexpected target type: class=%@ session=%@",
                       NSStringFromClass([targetMessage class]),
                       usedSession ?: @"");
        targetMessage = nil;
    }

    if (!usedSession && sessionCandidates.count > 0) {
        usedSession = sessionCandidates.firstObject;
    }
    if (sessionOut) {
        *sessionOut = usedSession;
    }
    if (svrIDOut) {
        *svrIDOut = svrID;
    }
    if (localIDOut) {
        *localIDOut = localID;
    }
    return targetMessage;
}

static NSInteger WCHookMsgTargetScore(id object) {
    if (!object) {
        return 0;
    }
    NSInteger score = 0;
    if ([object respondsToSelector:@selector(scrollToMessage:highlight:marginTop:animated:)]) {
        score += 100;
    } else if ([object respondsToSelector:@selector(scrollToMessage:highlight:marginTop:)]) {
        score += 90;
    }
    if ([object respondsToSelector:@selector(highlightMsg:)]) {
        score += 50;
    }
    if ([object respondsToSelector:@selector(returnToOriginalMsg:)]) {
        score += 30;
    }
    if ([object respondsToSelector:@selector(locateToMsg:)]) {
        score += 20;
    }
    if ([object respondsToSelector:@selector(getViewController)]) {
        score += 5;
    }
    return score;
}

static id WCHookResolveMsgContentTargetFromObject(id object) {
    if (!object) {
        return nil;
    }

    __block id bestTarget = nil;
    __block NSInteger bestScore = 0;
    void (^consider)(id) = ^(id candidate) {
        if (!candidate) {
            return;
        }
        NSInteger score = WCHookMsgTargetScore(candidate);
        if (score > bestScore) {
            bestScore = score;
            bestTarget = candidate;
        }
    };

    consider(object);

    id viewController = WCHookInvokeObject(object, @selector(getViewController));
    if (viewController && viewController != object) {
        consider(viewController);
    }

    NSArray<NSString *> *kvcKeys = @[@"viewController", @"m_viewController", @"controller", @"delegate"];
    for (NSString *key in kvcKeys) {
        id candidate = nil;
        @try {
            candidate = [object valueForKey:key];
        } @catch (__unused NSException *exceptionKVC) {
            candidate = nil;
        }
        consider(candidate);
    }

    UIView *carrier = WCHookLocateCarrierViewFromObject(object);
    UIResponder *responder = carrier;
    while (responder) {
        consider(responder);
        responder = [responder nextResponder];
    }

    return bestTarget;
}

static UIScrollView *WCHookFindPreferredScrollViewInView(UIView *rootView) {
    if (![rootView isKindOfClass:[UIView class]]) {
        return nil;
    }

    UIScrollView *bestScrollView = nil;
    CGFloat bestArea = 0.0;
    NSMutableArray<UIView *> *stack = [NSMutableArray arrayWithObject:rootView];
    while (stack.count > 0) {
        UIView *candidate = stack.lastObject;
        [stack removeLastObject];
        if (![candidate isKindOfClass:[UIView class]]) {
            continue;
        }

        if ([candidate isKindOfClass:[UIScrollView class]]) {
            CGFloat area = CGRectGetWidth(candidate.bounds) * CGRectGetHeight(candidate.bounds);
            if (!bestScrollView || area > bestArea) {
                bestScrollView = (UIScrollView *)candidate;
                bestArea = area;
            }
        }

        NSArray<UIView *> *subviews = candidate.subviews;
        for (UIView *subview in subviews) {
            if ([subview isKindOfClass:[UIView class]]) {
                [stack addObject:subview];
            }
        }
    }

    return bestScrollView;
}

static __attribute__((unused)) UIScrollView *WCHookResolveScrollViewFromTarget(id object) {
    if (!object) {
        return nil;
    }

    if ([object isKindOfClass:[UIScrollView class]]) {
        return (UIScrollView *)object;
    }

    SEL selectors[] = {
        @selector(tableView),
        @selector(collectionView),
        @selector(scrollView),
        NSSelectorFromString(@"m_tableView")
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        id candidate = WCHookInvokeObject(object, selectors[idx]);
        if ([candidate isKindOfClass:[UIScrollView class]]) {
            return (UIScrollView *)candidate;
        }
    }

    UIView *carrier = WCHookLocateCarrierViewFromObject(object);
    UIScrollView *fromCarrier = WCHookFindPreferredScrollViewInView(carrier);
    if (fromCarrier) {
        return fromCarrier;
    }

    id viewObject = WCHookInvokeObject(object, @selector(view));
    if ([viewObject isKindOfClass:[UIView class]]) {
        return WCHookFindPreferredScrollViewInView((UIView *)viewObject);
    }

    return nil;
}

static double WCHookResolveScrollMarginTop(id target) {
    if (!target) {
        return 0.0;
    }

    SEL contentYSelector = @selector(getContentViewY);
    if ([target respondsToSelector:contentYSelector]) {
        @try {
            double value = ((double (*)(id, SEL))objc_msgSend)(target, contentYSelector);
            if (value > 0.0) {
                return value;
            }
        } @catch (__unused NSException *exceptionContentY) {
        }
    }

    id viewObj = WCHookInvokeObject(target, @selector(view));
    if ([viewObj isKindOfClass:[UIView class]]) {
        UIView *view = (UIView *)viewObj;
        CGFloat topInset = view.safeAreaInsets.top;
        if (topInset > 0.0) {
            return (double)topInset;
        }
    }

    return 0.0;
}

static void WCHookPrepareRevokeReturnAnchor(id target, id tipMessageWrap, id targetMessage) {
    if (!target || !tipMessageWrap || !targetMessage) {
        return;
    }

    Class msgContentVCClass = NSClassFromString(@"BaseMsgContentViewController");
    if (!(msgContentVCClass && [target isKindOfClass:msgContentVCClass])) {
        return;
    }

    // 让微信原生“返回”入口能回到撤回提示处。
    @try {
        [target setValue:tipMessageWrap forKey:@"m_referOwnerMsg"];
    } @catch (__unused NSException *exceptionSetOwner) {
    }
    @try {
        [target setValue:targetMessage forKey:@"m_referKeeperMsg"];
    } @catch (__unused NSException *exceptionSetKeeper) {
    }
}

static void WCHookStabilizeRevokeReturnAnchor(id target, id tipMessageWrap, id targetMessage) {
    if (!target || !tipMessageWrap || !targetMessage) {
        return;
    }

    Class msgContentVCClass = NSClassFromString(@"BaseMsgContentViewController");
    if (!(msgContentVCClass && [target isKindOfClass:msgContentVCClass])) {
        return;
    }

    // 先立即补一次，避免原生逻辑在滚动过程中清空锚点导致“返回”按钮闪一下就消失。
    @try {
        [target setValue:tipMessageWrap forKey:@"m_referOwnerMsg"];
    } @catch (__unused NSException *exceptionOwnerImmediate) {
    }
    @try {
        [target setValue:targetMessage forKey:@"m_referKeeperMsg"];
    } @catch (__unused NSException *exceptionKeeperImmediate) {
    }

    for (NSInteger attempt = 1; attempt <= kWCHookRevokeAnchorStabilizeAttempts; attempt++) {
        NSTimeInterval delay = kWCHookRevokeAnchorStabilizeInterval * (NSTimeInterval)attempt;
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{
            @try {
                id currentOwner = [target valueForKey:@"m_referOwnerMsg"];
                id currentKeeper = [target valueForKey:@"m_referKeeperMsg"];
                if (currentOwner != tipMessageWrap || currentKeeper != targetMessage) {
                    [target setValue:tipMessageWrap forKey:@"m_referOwnerMsg"];
                    [target setValue:targetMessage forKey:@"m_referKeeperMsg"];
                }
            } @catch (__unused NSException *exceptionStabilize) {
            }
        });
    }
}

static void WCHookHighlightMessageIfPossible(id target, id targetMessage) {
    if (!target || !targetMessage) {
        return;
    }
    SEL selector = @selector(highlightMsg:);
    if (![target respondsToSelector:selector]) {
        return;
    }
    @try {
        ((void (*)(id, SEL, id))objc_msgSend)(target, selector, targetMessage);
    } @catch (__unused NSException *exceptionHighlight) {
    }
}

static BOOL WCHookScrollToMessageHighlight(id target, id targetMessage) {
    if (!target || !targetMessage) {
        return NO;
    }

    double marginTop = WCHookResolveScrollMarginTop(target);
    if ([target respondsToSelector:@selector(scrollToMessage:highlight:marginTop:animated:)]) {
        @try {
            ((void (*)(id, SEL, id, BOOL, double, BOOL))objc_msgSend)(target,
                                                                      @selector(scrollToMessage:highlight:marginTop:animated:),
                                                                      targetMessage,
                                                                      YES,
                                                                      marginTop,
                                                                      YES);
            WCHookHighlightMessageIfPossible(target, targetMessage);
            return YES;
        } @catch (__unused NSException *exceptionScroll) {
        }
    }

    if ([target respondsToSelector:@selector(scrollToMessage:highlight:marginTop:)]) {
        @try {
            ((void (*)(id, SEL, id, BOOL, double))objc_msgSend)(target,
                                                               @selector(scrollToMessage:highlight:marginTop:),
                                                               targetMessage,
                                                               YES,
                                                               marginTop);
            WCHookHighlightMessageIfPossible(target, targetMessage);
            return YES;
        } @catch (__unused NSException *exceptionScroll) {
        }
    }

    // 回退链路：某些版本没有 scrollToMessage:*，仍可定位到原消息。
    if ([target respondsToSelector:@selector(locateToMsg:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(target, @selector(locateToMsg:), targetMessage);
            WCHookHighlightMessageIfPossible(target, targetMessage);
            return YES;
        } @catch (__unused NSException *exceptionLocate) {
            return NO;
        }
    }

    return NO;
}

static BOOL WCHookLocateAndEmphasizeRevokeTarget(id locateTarget, id tipMessageWrap, id targetMessage) {
    if (!WCHookLooksLikeMessageWrapObject(targetMessage)) {
        if (targetMessage) {
            WCPLLogWarning(@"Revoke tip locate blocked by target type: class=%@",
                           NSStringFromClass([targetMessage class]));
        }
        return NO;
    }

    id target = WCHookResolveMsgContentTargetFromObject(locateTarget) ?: locateTarget;
    if (!target) {
        return NO;
    }

    // 激进策略：尽量走微信“定位原文”同款链路，让顶部时间变红且出现原生“返回”入口。
    // 备注：少数版本/机型在定位/高亮链路可能存在 SIGSEGV 风险；用户已要求对齐原生体验，接受该取舍。
    WCHookPrepareRevokeReturnAnchor(target, tipMessageWrap, targetMessage);
    BOOL jumped = WCHookScrollToMessageHighlight(target, targetMessage);
    if (jumped) {
        // 部分版本在 scrollToMessage 内部会清空 refer 锚点，这里立刻补一次，避免返回按钮闪退。
        WCHookPrepareRevokeReturnAnchor(target, tipMessageWrap, targetMessage);
        WCHookStabilizeRevokeReturnAnchor(target, tipMessageWrap, targetMessage);
    }
    return jumped;
}

static id WCHookFallbackLocateTarget(void) {
    UIApplication *application = [UIApplication sharedApplication];
    if (![application isKindOfClass:[UIApplication class]]) {
        return nil;
    }

    NSMutableArray<UIWindow *> *windowCandidates = [NSMutableArray array];
    if ([application respondsToSelector:@selector(windows)]) {
        for (UIWindow *window in application.windows) {
            if (![window isKindOfClass:[UIWindow class]]) {
                continue;
            }
            if ([windowCandidates containsObject:window]) {
                continue;
            }
            [windowCandidates addObject:window];
        }
    }

    for (UIWindow *window in [windowCandidates reverseObjectEnumerator]) {
        if (window.hidden) {
            continue;
        }
        id target = WCHookLocateTargetFromObject(window);
        if (target && [target respondsToSelector:@selector(locateToMsg:)]) {
            return target;
        }

        UIViewController *controller = window.rootViewController;
        while ([controller respondsToSelector:@selector(presentedViewController)] && controller.presentedViewController) {
            controller = controller.presentedViewController;
        }

        if (controller && [controller respondsToSelector:@selector(locateToMsg:)]) {
            return controller;
        }

        if (controller) {
            target = WCHookLocateTargetFromObject(controller);
            if (target && [target respondsToSelector:@selector(locateToMsg:)]) {
                return target;
            }
        }
    }

    return nil;
}

static BOOL WCHookTryJumpFromRevokeTipMessageWrap(id messageWrap, id locateTarget) {
    if (!messageWrap) {
        return NO;
    }

    NSString *content = WCHookMessageContentFromWrap(messageWrap);
    if (!WCHookLooksLikeRevokeTipContent(content)) {
        WCHookShowDebugToast(@"撤回提示: 文案不匹配");
        return NO;
    }

    // 说明：自撤回提示包含「重新编辑」入口。这里必须放行给微信原生处理，否则会出现点击无响应。
    if (WCHookLooksLikeSelfRevokeTipContent(content)) {
        return NO;
    }

    // ⚠️ 经验性防护：
    // 部分“表情包撤回”场景下，撤回提示尾行会是「[未知消息]」，此时继续走定位/高亮链路
    // 在某些机型/微信版本会触发 SIGSEGV（用户反馈：点击即崩溃重启）。
    // 该场景本身也无法可靠定位原消息，因此直接吞掉点击，避免崩溃。
    NSString *inlineExcerpt = WCHookExtractRevokeExcerptFromTipContent(content);
    if ([inlineExcerpt isKindOfClass:[NSString class]] && inlineExcerpt.length > 0) {
        if ([inlineExcerpt rangeOfString:@"未知消息"].location != NSNotFound ||
            [inlineExcerpt rangeOfString:@"[未知"].location != NSNotFound ||
            [inlineExcerpt rangeOfString:@"[类型:"].location != NSNotFound) {
            WCPLLogWarning(@"Revoke tip jump skipped: unsafe excerpt=%@", inlineExcerpt);
            WCHookShowDebugToast(@"撤回提示: 原消息未知，已阻止点击");
            return YES;
        }
    }

    id messageMgr = WCHookMessageMgr();
    NSString *usedSession = nil;
    long long svrID = 0;
    unsigned int localID = 0;
    NSString *excerpt = nil;
    id targetMessage = WCHookResolveRevokeTipTargetMessage(messageWrap,
                                                           messageMgr,
                                                           &usedSession,
                                                           &svrID,
                                                           &localID,
                                                           &excerpt);
    if (!targetMessage && !messageMgr) {
        WCHookShowDebugToast(@"撤回提示: 消息服务未就绪");
        // 说明：撤回提示消息点击后，官方链路在部分消息类型（如表情包）会触发崩溃。
        // 即使本次无法定位原消息，也要吞掉点击，避免继续走官方处理逻辑。
        return YES;
    }
    if (!targetMessage) {
        WCPLLogWarning(@"Revoke tip jump miss target: session=%@ svrID=%lld localID=%u excerpt=%@",
                       usedSession ?: @"",
                       svrID,
                       localID,
                       excerpt ?: @"");
        WCHookShowDebugToast(@"撤回提示: 未找到原消息");
        // 同上：避免落回官方点击处理导致崩溃/重启。
        return YES;
    }

    id effectiveLocateTarget = locateTarget;
    if (!(effectiveLocateTarget && [effectiveLocateTarget respondsToSelector:@selector(locateToMsg:)])) {
        effectiveLocateTarget = WCHookFallbackLocateTarget();
    }
    if (!(effectiveLocateTarget && [effectiveLocateTarget respondsToSelector:@selector(locateToMsg:)])) {
        WCPLLogWarning(@"Revoke tip jump miss locate target: session=%@ svrID=%lld localID=%u",
                       usedSession ?: @"",
                       svrID,
                       localID);
        WCHookShowDebugToast(@"撤回提示: 无法定位会话");
        return YES;
    }

    BOOL jumped = WCHookLocateAndEmphasizeRevokeTarget(effectiveLocateTarget, messageWrap, targetMessage);
    if (jumped) {
        WCPLLogInfo(@"Revoke tip jump success: session=%@ svrID=%lld localID=%u",
                    usedSession ?: @"",
                    svrID,
                    localID);
        WCHookShowDebugToast(@"撤回提示: 跳转成功");
    } else {
        // 说明：即使跳转失败，也吞掉点击，避免官方链路重复处理导致异常。
        WCHookShowDebugToast(@"撤回提示: 跳转失败");
    }
    return YES;
}

static BOOL WCHookTryJumpFromRevokeTipCell(CommonMessageCellView *cell) {
    if (!cell) {
        return NO;
    }
    NSTimeInterval now = NSDate.date.timeIntervalSince1970;
    BOOL throttled = (now < gWCHookRevokeTipTapThrottleUntil);

    CommonMessageCellView *resolvedCell = WCHookResolveMessageCellForObject(cell) ?: cell;
    if (resolvedCell != cell) {
        WCPLLogInfo(@"Revoke tip cell normalized: raw=%@ resolved=%@",
                    NSStringFromClass([cell class]),
                    NSStringFromClass([resolvedCell class]));
    }

    id messageWrap = WCHookMessageWrapForCell(resolvedCell);
    if (!messageWrap) {
        return NO;
    }

    NSString *content = WCHookMessageContentFromWrap(messageWrap);
    if (!WCHookLooksLikeRevokeTipContent(content)) {
        return NO;
    }

    // 自撤回提示（含「重新编辑」）必须放行给微信原生逻辑处理。
    if (WCHookLooksLikeSelfRevokeTipContent(content)) {
        return NO;
    }

    if (throttled) {
        WCPLLogInfo(@"Revoke tip tap throttled: remain=%.3f",
                    gWCHookRevokeTipTapThrottleUntil - now);
        return YES;
    }

    WCHookShowDebugToast(@"撤回提示: 已点击");
    gWCHookRevokeTipTapThrottleUntil = now + 0.2;

    id locateTarget = WCHookLocateTargetFromObject(resolvedCell);
    return WCHookTryJumpFromRevokeTipMessageWrap(messageWrap, locateTarget);
}

static BOOL WCHookCellMayContainRevokeTip(CommonMessageCellView *cell) {
    if (!cell) {
        return NO;
    }
    NSString *className = NSStringFromClass([cell class]);
    if (className.length == 0) {
        return NO;
    }

    static NSArray<NSString *> *highRiskSuffixes;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        highRiskSuffixes = @[
            @"ImageMessageCellView",
            @"VideoMessageCellView",
            @"VoiceMessageCellView",
            @"LocationMessageCellView",
            @"EmoticonMessageCellView",
            @"AppEmoticonMessageCellView",
            @"FileMessageCellView"
        ];
    });
    for (NSString *suffix in highRiskSuffixes) {
        if ([className hasSuffix:suffix]) {
            return NO;
        }
    }

    if ([className hasSuffix:@"SystemMessageCellView"] ||
        [className hasSuffix:@"TextMessageCellView"] ||
        [className rangeOfString:@"MessageSys" options:NSCaseInsensitiveSearch].location != NSNotFound) {
        return YES;
    }

    if ([className hasSuffix:@"MessageCellView"] &&
        [cell respondsToSelector:@selector(getCurrentMessageWrap)] &&
        [cell respondsToSelector:@selector(onReturnToOriginalMsg)]) {
        return YES;
    }

    return NO;
}

static id WCHookResolveProfileOpenTargetFromCell(CommonMessageCellView *cell) {
    if (!cell) {
        return nil;
    }

    id locateTarget = WCHookLocateTargetFromObject(cell);
    if (locateTarget) {
        return locateTarget;
    }

    id viewController = WCHookInvokeObject(cell, @selector(getViewController));
    if (viewController) {
        return viewController;
    }

    UIView *carrier = WCHookLocateCarrierViewFromObject(cell);
    UIResponder *responder = carrier;
    while (responder) {
        if ([responder respondsToSelector:@selector(jumpToUserProfile:Displayname:Scence:)] ||
            [responder respondsToSelector:@selector(jumpToUserProfile:Displayname:Scence:fromBanner:)] ||
            [responder respondsToSelector:@selector(OpenContactInfo:)]) {
            return responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

static BOOL WCHookOpenProfileWithTarget(id target, NSString *userName, NSString *displayName) {
    NSString *targetUser = WCHookTrimString(userName);
    if (!target || targetUser.length == 0) {
        return NO;
    }
    NSString *targetName = WCHookTrimString(displayName) ?: targetUser;

    SEL jumpWithBanner = NSSelectorFromString(@"jumpToUserProfile:Displayname:Scence:fromBanner:");
    if ([target respondsToSelector:jumpWithBanner]) {
        @try {
            ((void (*)(id, SEL, id, id, unsigned int, BOOL))objc_msgSend)(target,
                                                                           jumpWithBanner,
                                                                           targetUser,
                                                                           targetName,
                                                                           89,
                                                                           NO);
            return YES;
        } @catch (__unused NSException *exceptionJumpBanner) {
        }
    }

    SEL jumpBasic = NSSelectorFromString(@"jumpToUserProfile:Displayname:Scence:");
    if ([target respondsToSelector:jumpBasic]) {
        @try {
            ((void (*)(id, SEL, id, id, unsigned int))objc_msgSend)(target,
                                                                     jumpBasic,
                                                                     targetUser,
                                                                     targetName,
                                                                     89);
            return YES;
        } @catch (__unused NSException *exceptionJumpBasic) {
        }
    }

    id contact = WCHookContactForUserName(targetUser);
    if (!contact) {
        return NO;
    }

    SEL openSelectors[] = {
        NSSelectorFromString(@"OpenContactInfo:"),
        NSSelectorFromString(@"openContactInfo:"),
        NSSelectorFromString(@"_openContactInfo:"),
        NSSelectorFromString(@"showContactInfoView:"),
        NSSelectorFromString(@"openUserProfileViewControllerWithContact:")
    };
    for (size_t idx = 0; idx < sizeof(openSelectors) / sizeof(openSelectors[0]); ++idx) {
        SEL selector = openSelectors[idx];
        if (![target respondsToSelector:selector]) {
            continue;
        }
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(target, selector, contact);
            return YES;
        } @catch (__unused NSException *exceptionOpen) {
        }
    }
    return NO;
}

static BOOL WCHookExecuteOpenQuitMemberProfileFromCell(CommonMessageCellView *cell) {
    id messageWrap = WCHookMessageWrapForCell(cell);
    NSString *content = WCHookMessageContentFromWrap(messageWrap);
    if (!WCHookLooksLikeQuitMonitorTipContent(content)) {
        return NO;
    }

    NSString *msgSource = WCHookMsgSourceFromWrap(messageWrap);
    NSString *userName = WCHookExtractQuitMonitorUserNameFromMsgSource(msgSource);
    if (userName.length == 0) {
        userName = WCHookExtractQuitMonitorUserNameFromContent(content);
    }
    if (userName.length == 0) {
        WCPLLogDebug(@"Quit monitor profile open skip: username missing content=%@", content ?: @"");
        return NO;
    }

    NSString *displayName = WCHookExtractQuitMonitorDisplayNameFromContent(content);
    id target = WCHookResolveProfileOpenTargetFromCell(cell);
    BOOL opened = WCHookOpenProfileWithTarget(target, userName, displayName);
    if (!opened) {
        id viewController = WCHookInvokeObject(target, @selector(getViewController));
        if (viewController && viewController != target) {
            opened = WCHookOpenProfileWithTarget(viewController, userName, displayName);
        }
    }

    if (opened) {
        WCPLLogInfo(@"Quit monitor profile open success: user=%@ name=%@ target=%@",
                    userName,
                    displayName ?: @"",
                    NSStringFromClass([target class]));
    } else {
        WCPLLogWarning(@"Quit monitor profile open failed: user=%@ name=%@ target=%@",
                       userName,
                       displayName ?: @"",
                       target ? NSStringFromClass([target class]) : @"(nil)");
    }
    return opened;
}

static id WCHookLocateTargetFromObject(id object) {
    id locateTarget = nil;
    UIView *carrierView = WCHookLocateCarrierViewFromObject(object);
    if (carrierView) {
        locateTarget = WCHookLocateResponderForView(carrierView);
    }
    if (!locateTarget) {
        locateTarget = WCHookInvokeObject(object, @selector(getViewController));
    }
    if (!locateTarget) {
        id viewModel = WCHookInvokeObject(object, @selector(viewModel));
        id dataSource = WCHookInvokeObject(viewModel, @selector(recordNodeDataSource));
        if (dataSource && [dataSource respondsToSelector:@selector(locateToMsg:)]) {
            locateTarget = dataSource;
        }
    }
    return locateTarget;
}

static BOOL WCHookExecuteJumpToMessageFromCell(CommonMessageCellView *cell, id targetMessage) {
    if (!cell || !targetMessage) {
        return NO;
    }

    id locateTarget = WCHookLocateTargetFromObject(cell);
    return WCHookExecuteJumpToMessageWithTarget(locateTarget, targetMessage);
}

static BOOL WCHookExecuteJumpToMessageWithTarget(id locateTarget, id targetMessage) {
    if (!locateTarget || !targetMessage) {
        return NO;
    }
    if (!WCHookLooksLikeMessageWrapObject(targetMessage)) {
        WCPLLogWarning(@"Message jump blocked by target type: class=%@",
                       NSStringFromClass([targetMessage class]));
        return NO;
    }
    SEL locateSelector = @selector(locateToMsg:);
    if (![locateTarget respondsToSelector:locateSelector]) {
        return NO;
    }
    ((void (*)(id, SEL, id))objc_msgSend)(locateTarget, locateSelector, targetMessage);
    return YES;
}

static BOOL WCHookExecuteJumpFromCell(CommonMessageCellView *cell) {
    if (!cell) {
        return NO;
    }

    id messageWrap = WCHookMessageWrapForCell(cell);
    id locateTarget = WCHookLocateTargetFromObject(cell);
    if (WCHookTryJumpFromRevokeTipCell(cell)) {
        return YES;
    }

    SEL returnSelector = @selector(onReturnToOriginalMsg);
    if ([cell respondsToSelector:returnSelector]) {
        @try {
            ((void (*)(id, SEL))objc_msgSend)(cell, returnSelector);
            return YES;
        } @catch (__unused NSException *exception) {
        }
    }

    id targetMessage = WCHookReferMessageFromWrap(messageWrap);
    if (!targetMessage) {
        return NO;
    }

    if (locateTarget) {
        return WCHookExecuteJumpToMessageWithTarget(locateTarget, targetMessage);
    }
    return WCHookExecuteJumpToMessageFromCell(cell, targetMessage);
}

static BOOL WCHookExecuteJumpFromInput(id toolView) {
    if (!toolView) {
        return NO;
    }

    id replyingMessage = WCHookInvokeObject(toolView, @selector(replyingMessage));
    if (!replyingMessage) {
        return NO;
    }
    if (!WCHookLooksLikeMessageWrapObject(replyingMessage)) {
        WCPLLogWarning(@"Input jump blocked by target type: class=%@",
                       NSStringFromClass([replyingMessage class]));
        return NO;
    }

    id locateTarget = WCHookLocateTargetFromObject(toolView);
    SEL locateSelector = @selector(locateToMsg:);
    if (!locateTarget || ![locateTarget respondsToSelector:locateSelector]) {
        return NO;
    }

    ((void (*)(id, SEL, id))objc_msgSend)(locateTarget, locateSelector, replyingMessage);
    return YES;
}

static BOOL WCHookPerformSyncOnMainThread(BOOL (^action)(void)) {
    if (!action) {
        return NO;
    }
    if ([NSThread isMainThread]) {
        return action();
    }
    __block BOOL result = NO;
    BOOL didFinish = WCPLDispatchMainSyncWithTimeout(2.0, ^{
        result = action();
    });
    if (!didFinish) {
        WCPLLogWarning(@"[引用跳转] 主线程同步调度超时，已放弃执行");
        return NO;
    }
    return result;
}
