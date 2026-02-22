#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "WeChatRedEnvelop.h"
#import "WCPLConfigCenter.h"
#import "WCHookSwipeUtilities.h"
#import "WCHookMessageNavigator.h"
#import "WCPLServiceCenter.h"
#import "WCPLCrashReporter.h"
#import "WCPLLogger.h"
#import "WCPLRepeatButtonEngine.h"
#import <objc/runtime.h>
#import <objc/message.h>
#include <stdint.h>
#include <math.h>

static const NSInteger kWCPLRepeatButtonTag = 0x5743504C;
static const CGFloat kWCPLRepeatButtonDefaultSize = 20.0f;
static const CGFloat kWCPLRepeatButtonMinSize = 16.0f;
static const CGFloat kWCPLRepeatButtonMaxSize = 30.0f;
static const CGFloat kWCPLRepeatButtonEdgeInset = 1.0f;
static const CGFloat kWCPLRepeatButtonTailInsetX = 4.0f;
static const CGFloat kWCPLRepeatButtonTailInsetY = 3.0f;
static const void *kWCPLRepeatButtonWrapKey = &kWCPLRepeatButtonWrapKey;
static const void *kWCPLRepeatButtonViewKey = &kWCPLRepeatButtonViewKey;
static const void *kWCPLRepeatButtonLastFrameKey = &kWCPLRepeatButtonLastFrameKey;
static const void *kWCPLRepeatButtonMessageKey = &kWCPLRepeatButtonMessageKey;
static const void *kWCPLRepeatButtonTextAnchorLogOnceKey = &kWCPLRepeatButtonTextAnchorLogOnceKey;
static const void *kWCPLRepeatButtonTapFeedbackKey = &kWCPLRepeatButtonTapFeedbackKey;
static const void *kWCPLRepeatButtonLastTapTimeKey = &kWCPLRepeatButtonLastTapTimeKey;
static const void *kWCPLDoubleTapLastHandledAtKey = &kWCPLDoubleTapLastHandledAtKey;
static const void *kWCPLDoubleTapLastTapAtKey = &kWCPLDoubleTapLastTapAtKey;
static const void *kWCPLDoubleTapManualTapCountKey = &kWCPLDoubleTapManualTapCountKey;
static const void *kWCPLNativeDoubleTapRecognizerDisabledKey = &kWCPLNativeDoubleTapRecognizerDisabledKey;
static const void *kWCPLRepeatAnchorMessageKey = &kWCPLRepeatAnchorMessageKey;
static const void *kWCPLRepeatAnchorWrapKey = &kWCPLRepeatAnchorWrapKey;
static const void *kWCPLRepeatAnchorReportTimeKey = &kWCPLRepeatAnchorReportTimeKey;
static const void *kWCPLRepeatAnchorIsSelfKey = &kWCPLRepeatAnchorIsSelfKey;
static const void *kWCPLRepeatAnchorSignatureKey = &kWCPLRepeatAnchorSignatureKey;
static const void *kWCPLRepeatAnchorQuoteProxyKey = &kWCPLRepeatAnchorQuoteProxyKey;
static const void *kWCPLRepeatAnchorQuoteReferSvrIDKey = &kWCPLRepeatAnchorQuoteReferSvrIDKey;
static const void *kWCPLRepeatViewModelIsEligibleKey = &kWCPLRepeatViewModelIsEligibleKey;
static const void *kWCPLRepeatMergedForwardCacheKey = &kWCPLRepeatMergedForwardCacheKey;
static const void *kWCPLRepeatFileAppCacheKey = &kWCPLRepeatFileAppCacheKey;
static const void *kWCPLRepeatQuoteAppCacheKey = &kWCPLRepeatQuoteAppCacheKey;
static const void *kWCPLRepeatEmoticonAppCacheKey = &kWCPLRepeatEmoticonAppCacheKey;
static const NSTimeInterval kWCPLQuoteLongPressSuppressDuration = 1.2;
static const NSTimeInterval kWCPLSwipeTouchSuppressDuration = 0.55;
static const NSTimeInterval kWCPLRepeatAnchorStaleInterval = 0.75;
static const NSTimeInterval kWCPLRepeatRefreshThrottleInterval = 0.15;
static const NSTimeInterval kWCPLRepeatSettleRefreshDelay = 0.12;
static const NSTimeInterval kWCPLRepeatSettleRefreshFollowDelay = 0.32;
static const NSTimeInterval kWCPLRepeatButtonTapDebounceInterval = 0.08;
static const NSTimeInterval kWCPLDoubleTapTriggerDebounceInterval = 0.22;
static const NSTimeInterval kWCPLRepeatBurstSendMinInterval = 0.42;
static const NSUInteger kWCPLRepeatFullResyncInterval = 16;
static const CGFloat kWCPLMessageTimeLabelMinWidth = 36.0f;
static const CGFloat kWCPLMessageTimeLabelMaxWidth = 86.0f;
static const CGFloat kWCPLMessageTimeLabelTopInset = -3.0f;
static const CGFloat kWCPLMessageTimeLabelMinHeight = 12.0f;
static NSString *const kWCPLIssueIdLongPressMenu = @"wx-bugfix-longpress-menu-20260207";

static CFTimeInterval gWCPLQuoteLongPressSuppressUntil = 0;
static uintptr_t gWCPLQuoteLongPressSuppressCellAddr = 0;
static unsigned int gWCPLQuoteLongPressSuppressMsgType = 0;

static BOOL gWCPLRepeatGlobalRefreshPending = NO;
static BOOL gWCPLRepeatRefreshGateEnabled = NO;
static CFTimeInterval gWCPLRepeatResumeSuppressUntil = 0;
static CFTimeInterval gWCPLRepeatLastRefreshAt = 0;
static NSUInteger gWCPLRepeatRefreshScheduleToken = 0;
static BOOL gWCPLRepeatSettleRefreshPending = NO;
static BOOL gWCPLRepeatSettleRefreshFollowPending = NO;
static BOOL gWCPLRepeatNeedFullResync = YES;
static NSUInteger gWCPLRepeatRefreshRoundCounter = 0;
static BOOL gWCPLRepeatEngineModeInitialized = NO;
static BOOL gWCPLRepeatEngineV2LastEnabled = NO;
static CFTimeInterval gWCPLRepeatLastQueuedSendAt = 0;
static const BOOL kWCPLRepeatForceLocalCellEngine = YES;

static NSString *wcpl_repeatMessageDebugInfo(CMessageWrap *msgWrap);
static NSString *wcpl_repeatTextForMessageWrap(CMessageWrap *msgWrap);
static NSArray<NSString *> *wcpl_repeatIdentityTokens(CMessageWrap *msgWrap);
static NSString *wcpl_currentSelfUserNameForRepeat(void);
static void wcpl_scheduleSwipeQuoteAtUserIfNeeded(CMessageWrap *msgWrap,
                                                   BaseMsgContentViewController *chatVC,
                                                   NSString *sceneTag);
static long long wcpl_quoteReferServerIDFromContent(NSString *content);
static CMessageWrap *wcpl_quoteTargetFromMessageWrap(CMessageWrap *msgWrap);
static BOOL wcpl_isRepeatTypeEnabledByConfig(WCPLGestureConfig *config, CMessageWrap *msgWrap);
static BOOL wcpl_isMediaBubbleRepeatMessage(CMessageWrap *msgWrap);
static NSInteger wcpl_appMessageInnerTypeFast(CMessageWrap *msgWrap);
static BOOL wcpl_isMergedForwardAppMessage(CMessageWrap *msgWrap);
static id wcpl_viewModelForCellView(id cellView);
static BOOL wcpl_resolveRepeatButtonEligibleBySubViewModel(id viewModel);
static void wcpl_markRepeatButtonEligibilityForViewModel(id viewModel);
static BOOL wcpl_isCellViewEligibleForRepeatButton(id cellView);
static BOOL wcpl_tryResolveIsSelfFromCellView(id cellView, BOOL *isSelfOut);
static BOOL wcpl_resolveIsSelfForRepeatCell(id cellView, CMessageWrap *msgWrap, BOOL *usedCellValueOut);
static __attribute__((unused)) BOOL wcpl_resolveIsSelfByGeometry(UIView *cellView,
                                         CGRect menuRect,
                                         BOOL menuRectValid,
                                         CGRect bubbleRect,
                                         BOOL bubbleRectValid,
                                         BOOL fallbackIsSelf);
static NSArray<UIWindow *> *wcpl_applicationWindows(void);
static void wcpl_clearRepeatOwnerMaps(void);
static void wcpl_forceClearRepeatButtonsInRootView(UIView *rootView);
static void wcpl_forceClearRepeatButtonsInAllWindows(void);
static void wcpl_resyncGlobalRepeatButtonsMap(void);
static BOOL wcpl_pruneGlobalRepeatButtonsMapLightweight(void);
static void wcpl_clearRepeatAnchorForCell(UIView *cellView);
static void wcpl_collectMessageCellViewsInView(UIView *root, NSMutableArray<UIView *> *storage);
static UITableView *wcpl_findContainingTableView(UIView *view);
static UITableView *wcpl_findAnyScrollingTableView(void);
static UIView *wcpl_selectBottomMostOwnerView(NSArray<UIView *> *views, UITableView *tableView, UIView *fallback);
static BOOL wcpl_isBottomMostRepeatOwnerForMessageKey(UIView *cellView, NSString *messageKey);
static NSMutableDictionary<NSString *, UIButton *> *wcpl_repeatGlobalButtonMap(void);
static UIView *wcpl_repeatOwnerViewForMessageKey(NSString *messageKey);
static void wcpl_setRepeatOwnerViewForMessageKey(NSString *messageKey, UIView *ownerView);
static void wcpl_bindRepeatButtonTargetsToOwner(UIButton *button, id owner);
static void wcpl_removeRepeatButtonFromGlobalMap(NSMutableDictionary<NSString *, UIButton *> *buttonMap, UIButton *button, NSString *messageKey);
static NSString *wcpl_repeatAnchorSignatureForCell(UIView *cellView, NSString *messageKey, BOOL isSelf, UIView *bubbleView);
static void wcpl_syncRepeatEngineModeIfNeeded(void);
static BOOL wcpl_repeatQuoteNativeResendFresh(CMessageWrap *msgWrap,
                                              NSString *chatName,
                                              BaseMsgContentViewController *chatVC,
                                              NSString *sceneTag);
static UIView *wcpl_findMessageCellAncestorView(UIView *view);
static BOOL wcpl_shouldBlockNativeDoubleTapForView(id ownerView, id sender, NSString *scopeTag);
static void wcpl_enforceTripleTapPriorityForViewTree(UIView *root, UITapGestureRecognizer *tripleTap, id ownerCell);
static BOOL wcpl_isPointInMessageBubbleArea(id cell, CGPoint pointInCell, NSString *scopeTag);
static BOOL wcpl_isTouchInMessageBubbleArea(id cell, UITouch *touch, NSString *scopeTag);
static NSDateFormatter *wcpl_messageTimeFormatter(void);
static NSString *wcpl_messageTimeTextForTimestamp(unsigned int timestamp);

static BOOL wcpl_shouldUseLocalCellRepeatEngine(WCPLGestureConfig *config) {
    if (kWCPLRepeatForceLocalCellEngine) {
        return YES;
    }
    return config.repeatButtonEngineV2Enable;
}

static NSString *wcpl_swipeDirectionName(WCHookSwipeDirection direction) {
    switch (direction) {
        case WCHookSwipeDirectionLeft:
            return @"left";
        case WCHookSwipeDirectionRight:
            return @"right";
        default:
            return @"none";
    }
}

static NSString *wcpl_swipeStateName(UIGestureRecognizerState state) {
    switch (state) {
        case UIGestureRecognizerStatePossible:
            return @"possible";
        case UIGestureRecognizerStateBegan:
            return @"began";
        case UIGestureRecognizerStateChanged:
            return @"changed";
        case UIGestureRecognizerStateEnded:
            return @"ended";
        case UIGestureRecognizerStateCancelled:
            return @"cancelled";
        case UIGestureRecognizerStateFailed:
            return @"failed";
        default:
            return @"unknown";
    }
}

static void wcpl_logLongPressCompatDecision(id cell,
                                            WCPLGestureConfig *config,
                                            UIPanGestureRecognizer *gesture,
                                            NSString *branchDecision,
                                            NSString *fallbackReason) {
    if (!gesture) {
        return;
    }

    WCPLLogInfo(@"issue_id=%@ module=WCPLGestureHook scene=message_long_press_menu input={cell=%p,swipeEnable=%d,quoteEnable=%d,rightEnable=%d,cancels=%d,delaysBegan=%d,delaysEnded=%d} branch_decision=%@ error=%@ fallback_reason=%@",
                kWCPLIssueIdLongPressMenu,
                cell,
                config ? (config.swipeGestureEnable ? 1 : 0) : -1,
                config ? (config.swipeQuoteEnable ? 1 : 0) : -1,
                config ? (config.swipeRightEnable ? 1 : 0) : -1,
                gesture.cancelsTouchesInView ? 1 : 0,
                gesture.delaysTouchesBegan ? 1 : 0,
                gesture.delaysTouchesEnded ? 1 : 0,
                branchDecision ?: @"unknown",
                @"none",
                fallbackReason ?: @"none");
}

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

static NSString *wcpl_decodeBasicXMLEntities(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) {
        return nil;
    }
    if ([text rangeOfString:@"&"].location == NSNotFound) {
        return text;
    }

    NSString *decoded = text;
    for (NSUInteger pass = 0; pass < 3; pass++) {
        NSString *next = [[[[decoded stringByReplacingOccurrencesOfString:@"&lt;" withString:@"<"]
                           stringByReplacingOccurrencesOfString:@"&gt;" withString:@">"]
                          stringByReplacingOccurrencesOfString:@"&quot;" withString:@"\""]
                         stringByReplacingOccurrencesOfString:@"&apos;" withString:@"'"];
        next = [next stringByReplacingOccurrencesOfString:@"&amp;" withString:@"&"];

        if ([next isEqualToString:decoded]) {
            break;
        }
        decoded = next;

        if ([decoded rangeOfString:@"&"].location == NSNotFound) {
            break;
        }
    }

    return decoded;
}

static BOOL wcpl_isQuoteReplyAppMessage(CMessageWrap *msgWrap) {
    if (!msgWrap || msgWrap.m_uiMessageType != 49) {
        return NO;
    }
    NSNumber *cached = objc_getAssociatedObject(msgWrap, kWCPLRepeatQuoteAppCacheKey);
    if ([cached isKindOfClass:[NSNumber class]]) {
        return cached.boolValue;
    }
    if (wcpl_isMergedForwardAppMessage(msgWrap)) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatQuoteAppCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return NO;
    }
    NSString *content = msgWrap.m_nsContent;
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatQuoteAppCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return NO;
    }

    BOOL (^containsQuoteMarkers)(NSString *) = ^BOOL(NSString *xml) {
        if (![xml isKindOfClass:[NSString class]] || xml.length == 0) {
            return NO;
        }

        NSArray<NSString *> *markers = @[
            @"<refermsg",
            @"<refer_msg",
            @"<type>57</type>",
            @"<type><![CDATA[57]]></type>",
            @"<referfromscene",
            @"<referfromusername",
            @"<refermsgsvrid"
        ];

        for (NSString *marker in markers) {
            if ([xml rangeOfString:marker options:NSCaseInsensitiveSearch].location != NSNotFound) {
                return YES;
            }
        }
        return NO;
    };

    if (containsQuoteMarkers(content)) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatQuoteAppCacheKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return YES;
    }

    NSString *decodedContent = wcpl_decodeBasicXMLEntities(content);
    if (decodedContent.length > 0 && ![decodedContent isEqualToString:content] && containsQuoteMarkers(decodedContent)) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatQuoteAppCacheKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return YES;
    }

    BOOL isQuote = (wcpl_quoteReferServerIDFromContent(content) > 0);
    objc_setAssociatedObject(msgWrap, kWCPLRepeatQuoteAppCacheKey, @(isQuote), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return isQuote;
}

static BOOL wcpl_isFileAppMessage(CMessageWrap *msgWrap) {
    if (!msgWrap || msgWrap.m_uiMessageType != 49) {
        return NO;
    }
    NSNumber *cached = objc_getAssociatedObject(msgWrap, kWCPLRepeatFileAppCacheKey);
    if ([cached isKindOfClass:[NSNumber class]]) {
        return cached.boolValue;
    }
    if (wcpl_isMergedForwardAppMessage(msgWrap)) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatFileAppCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return NO;
    }

    NSString *content = msgWrap.m_nsContent;
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatFileAppCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return NO;
    }

    BOOL (^looksLikeFileType)(NSString *) = ^BOOL(NSString *xml) {
        if (![xml isKindOfClass:[NSString class]] || xml.length == 0) {
            return NO;
        }

        BOOL hasFileTypeMarker =
            [xml rangeOfString:@"<type>6</type>" options:NSCaseInsensitiveSearch].location != NSNotFound ||
            [xml rangeOfString:@"<type><![CDATA[6]]></type>" options:NSCaseInsensitiveSearch].location != NSNotFound;
        if (!hasFileTypeMarker) {
            return NO;
        }

        return [xml rangeOfString:@"<appattach" options:NSCaseInsensitiveSearch].location != NSNotFound ||
               [xml rangeOfString:@"<fileext" options:NSCaseInsensitiveSearch].location != NSNotFound ||
               [xml rangeOfString:@"<totallen" options:NSCaseInsensitiveSearch].location != NSNotFound;
    };

    if (looksLikeFileType(content)) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatFileAppCacheKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return YES;
    }

    NSString *decoded = wcpl_decodeBasicXMLEntities(content);
    if (decoded.length > 0 && ![decoded isEqualToString:content] && looksLikeFileType(decoded)) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatFileAppCacheKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return YES;
    }

    objc_setAssociatedObject(msgWrap, kWCPLRepeatFileAppCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return NO;
}

static BOOL wcpl_isAppEmoticonMessage(CMessageWrap *msgWrap) {
    if (!msgWrap || msgWrap.m_uiMessageType != 49) {
        return NO;
    }
    NSNumber *cached = objc_getAssociatedObject(msgWrap, kWCPLRepeatEmoticonAppCacheKey);
    if ([cached isKindOfClass:[NSNumber class]]) {
        return cached.boolValue;
    }
    if (wcpl_isMergedForwardAppMessage(msgWrap)) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatEmoticonAppCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return NO;
    }
    if (wcpl_isQuoteReplyAppMessage(msgWrap)) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatEmoticonAppCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return NO;
    }

    NSString *md5 = nil;
    if ([msgWrap.m_nsEmoticonMD5 isKindOfClass:[NSString class]]) {
        md5 = [msgWrap.m_nsEmoticonMD5 stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    }
    if (md5.length == 32) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatEmoticonAppCacheKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return YES;
    }

    NSString *content = msgWrap.m_nsContent;
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatEmoticonAppCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return NO;
    }

    if ([content rangeOfString:@"<emoji" options:NSCaseInsensitiveSearch].location != NSNotFound) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatEmoticonAppCacheKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return YES;
    }
    if ([content rangeOfString:@"<emoticon" options:NSCaseInsensitiveSearch].location != NSNotFound) {
        objc_setAssociatedObject(msgWrap, kWCPLRepeatEmoticonAppCacheKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return YES;
    }

    objc_setAssociatedObject(msgWrap, kWCPLRepeatEmoticonAppCacheKey, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return NO;
}

static NSInteger wcpl_appMessageInnerTypeFast(CMessageWrap *msgWrap) {
    if (!msgWrap || msgWrap.m_uiMessageType != 49) {
        return 0;
    }

    SEL selectors[] = {
        NSSelectorFromString(@"appMsgInnerType"),
        NSSelectorFromString(@"uiAppMsgInnerType"),
        NSSelectorFromString(@"m_uiAppMsgInnerType"),
        NSSelectorFromString(@"appMsgType"),
        NSSelectorFromString(@"uiAppMsgType"),
        NSSelectorFromString(@"m_uiAppMsgType")
    };
    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        SEL sel = selectors[idx];
        if (![msgWrap respondsToSelector:sel]) {
            continue;
        }
        @try {
            NSUInteger value = ((NSUInteger (*)(id, SEL))objc_msgSend)(msgWrap, sel);
            if (value > 0 && value < 10000) {
                return (NSInteger)value;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    NSArray<NSString *> *kvcKeys = @[
        @"m_uiAppMsgInnerType",
        @"uiAppMsgInnerType",
        @"appMsgInnerType",
        @"m_uiAppMsgType",
        @"uiAppMsgType",
        @"appMsgType"
    ];
    for (NSString *key in kvcKeys) {
        @try {
            id value = [msgWrap valueForKey:key];
            NSInteger innerType = 0;
            if ([value isKindOfClass:[NSNumber class]]) {
                innerType = [(NSNumber *)value integerValue];
            } else if ([value isKindOfClass:[NSString class]]) {
                innerType = [(NSString *)value integerValue];
            }
            if (innerType > 0 && innerType < 10000) {
                return innerType;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    return 0;
}

static BOOL wcpl_isMergedForwardAppMessage(CMessageWrap *msgWrap) {
    if (!msgWrap || msgWrap.m_uiMessageType != 49) {
        return NO;
    }

    NSNumber *cached = objc_getAssociatedObject(msgWrap, kWCPLRepeatMergedForwardCacheKey);
    if ([cached isKindOfClass:[NSNumber class]]) {
        return cached.boolValue;
    }

    BOOL mergedForward = NO;
    NSInteger innerType = wcpl_appMessageInnerTypeFast(msgWrap);
    if (innerType == 19) {
        mergedForward = YES;
    }

    if (!mergedForward) {
        NSString *content = msgWrap.m_nsContent;
        if ([content isKindOfClass:[NSString class]] && content.length > 0) {
            NSString *prefix = content;
            if (prefix.length > 4096) {
                prefix = [prefix substringToIndex:4096];
            }

            BOOL hasRecordMarkers =
                [prefix rangeOfString:@"<recorditem" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                [prefix rangeOfString:@"<datalist" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                [prefix rangeOfString:@"<recordxml" options:NSCaseInsensitiveSearch].location != NSNotFound;
            BOOL hasType19 =
                [prefix rangeOfString:@"<type>19</type>" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                [prefix rangeOfString:@"<type><![CDATA[19]]></type>" options:NSCaseInsensitiveSearch].location != NSNotFound;
            mergedForward = hasRecordMarkers || hasType19;
        }
    }

    objc_setAssociatedObject(msgWrap, kWCPLRepeatMergedForwardCacheKey, @(mergedForward), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return mergedForward;
}

static BOOL wcpl_isMessageFromOther(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return NO;
    }

    BOOL isSender = NO;
    BOOL shouldFallback = YES;

    @try {
        Class msgWrapClass = objc_getClass("CMessageWrap");
        SEL selector = @selector(isSenderFromMsgWrap:);
        if (msgWrapClass && [msgWrapClass respondsToSelector:selector]) {
            isSender = ((BOOL (*)(id, SEL, id))objc_msgSend)(msgWrapClass, selector, msgWrap);
            // 主路径可信时直接采用，仅在“判为非发送者”时再做兜底补判
            shouldFallback = !isSender;
        }
    } @catch (__unused NSException *exception) {
    }

    if (shouldFallback) {
        @try {
            // 兜底1：优先使用发送者状态字段
            if (msgWrap.m_uiIsSenderStatus > 0) {
                isSender = YES;
                shouldFallback = NO;
            }
        } @catch (__unused NSException *exception) {
        }

        if (shouldFallback) {
            @try {
                // 兜底2：兼容旧字段 m_bFromMe
                id fromMeValue = [msgWrap valueForKey:@"m_bFromMe"];
                if ([fromMeValue respondsToSelector:@selector(boolValue)]) {
                    isSender = [fromMeValue boolValue];
                }
            } @catch (__unused NSException *exception) {
            }
        }

        if (shouldFallback) {
            @try {
                // 兜底3：当发送者字段缺失时，用当前账号与 fromUsr 比对
                NSString *selfUserName = wcpl_currentSelfUserNameForRepeat();
                NSString *fromUser = [msgWrap.m_nsFromUsr isKindOfClass:[NSString class]] ? msgWrap.m_nsFromUsr : nil;
                if (selfUserName.length > 0 && fromUser.length > 0 && [fromUser isEqualToString:selfUserName]) {
                    isSender = YES;
                    shouldFallback = NO;
                }
            } @catch (__unused NSException *exception) {
            }
        }
    }

    return !isSender;
}

static id wcpl_viewModelForCellView(id cellView) {
    if (!cellView) {
        return nil;
    }

    id viewModel = nil;
    if ([cellView respondsToSelector:@selector(viewModel)]) {
        @try {
            viewModel = ((id (*)(id, SEL))objc_msgSend)(cellView, @selector(viewModel));
        } @catch (__unused NSException *exception) {
            viewModel = nil;
        }
    }

    if (!viewModel) {
        @try {
            viewModel = [cellView valueForKey:@"viewModel"];
        } @catch (__unused NSException *exception) {
            viewModel = nil;
        }
    }

    return viewModel;
}

static BOOL wcpl_isTextSubViewModelForRepeat(id viewModel) {
    if (!viewModel) {
        return NO;
    }

    Class textSubViewModelClass = objc_getClass("TextMessageSubViewModel");
    if (textSubViewModelClass && [viewModel isKindOfClass:textSubViewModelClass]) {
        return YES;
    }

    NSString *className = NSStringFromClass([viewModel class]);
    if (![className isKindOfClass:[NSString class]] || className.length == 0) {
        return NO;
    }
    return [className rangeOfString:@"TextMessageSubViewModel"].location != NSNotFound;
}

static BOOL wcpl_resolveRepeatButtonEligibleBySubViewModel(id viewModel) {
    if (!viewModel) {
        return YES;
    }

    if (!wcpl_isTextSubViewModelForRepeat(viewModel)) {
        return YES;
    }

    id parentModel = nil;
    if ([viewModel respondsToSelector:@selector(parentModel)]) {
        @try {
            parentModel = ((id (*)(id, SEL))objc_msgSend)(viewModel, @selector(parentModel));
        } @catch (__unused NSException *exception) {
            parentModel = nil;
        }
    }
    if (!parentModel) {
        @try {
            parentModel = [viewModel valueForKey:@"parentModel"];
        } @catch (__unused NSException *exception) {
            parentModel = nil;
        }
    }
    if (!parentModel) {
        return YES;
    }

    id subViewModels = nil;
    if ([parentModel respondsToSelector:@selector(subViewModels)]) {
        @try {
            subViewModels = ((id (*)(id, SEL))objc_msgSend)(parentModel, @selector(subViewModels));
        } @catch (__unused NSException *exception) {
            subViewModels = nil;
        }
    }
    if (!subViewModels) {
        @try {
            subViewModels = [parentModel valueForKey:@"subViewModels"];
        } @catch (__unused NSException *exception) {
            subViewModels = nil;
        }
    }

    if (![subViewModels respondsToSelector:@selector(count)] ||
        ![subViewModels respondsToSelector:@selector(indexOfObject:)]) {
        return YES;
    }

    NSUInteger count = 0;
    NSUInteger index = NSNotFound;
    @try {
        count = (NSUInteger)[subViewModels count];
        index = (NSUInteger)[subViewModels indexOfObject:viewModel];
    } @catch (__unused NSException *exception) {
        return YES;
    }

    if (count < 2 || index == NSNotFound) {
        return YES;
    }

    return index == (count - 1);
}

static void wcpl_markRepeatButtonEligibilityForViewModel(id viewModel) {
    if (!viewModel) {
        return;
    }
    BOOL eligible = wcpl_resolveRepeatButtonEligibleBySubViewModel(viewModel);
    objc_setAssociatedObject(viewModel,
                             kWCPLRepeatViewModelIsEligibleKey,
                             @(eligible),
                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static BOOL wcpl_isCellViewEligibleForRepeatButton(id cellView) {
    id viewModel = wcpl_viewModelForCellView(cellView);
    if (!viewModel) {
        return YES;
    }

    NSNumber *cached = objc_getAssociatedObject(viewModel, kWCPLRepeatViewModelIsEligibleKey);
    if ([cached isKindOfClass:[NSNumber class]]) {
        return cached.boolValue;
    }

    BOOL eligible = wcpl_resolveRepeatButtonEligibleBySubViewModel(viewModel);
    objc_setAssociatedObject(viewModel,
                             kWCPLRepeatViewModelIsEligibleKey,
                             @(eligible),
                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return eligible;
}

static BOOL wcpl_tryResolveIsSelfFromCellView(id cellView, BOOL *isSelfOut) {
    if (!isSelfOut || !cellView) {
        return NO;
    }

    id viewModel = wcpl_viewModelForCellView(cellView);
    if (!viewModel) {
        return NO;
    }

    if ([viewModel respondsToSelector:@selector(isSender)]) {
        @try {
            BOOL isSender = ((BOOL (*)(id, SEL))objc_msgSend)(viewModel, @selector(isSender));
            *isSelfOut = isSender;
            return YES;
        } @catch (__unused NSException *exception) {
        }
    }

    @try {
        id isSenderValue = [viewModel valueForKey:@"isSender"];
        if ([isSenderValue respondsToSelector:@selector(boolValue)]) {
            *isSelfOut = [isSenderValue boolValue];
            return YES;
        }
    } @catch (__unused NSException *exception) {
    }

    return NO;
}

static BOOL wcpl_resolveIsSelfForRepeatCell(id cellView, CMessageWrap *msgWrap, BOOL *usedCellValueOut) {
    BOOL wrapIsSelf = !wcpl_isMessageFromOther(msgWrap);
    BOOL usedCellValue = NO;

    BOOL resolvedCellIsSelf = NO;
    if (wcpl_tryResolveIsSelfFromCellView(cellView, &resolvedCellIsSelf)) {
        // 对齐农夫山泉：方向优先使用 viewModel.isSender。
        wrapIsSelf = resolvedCellIsSelf;
        usedCellValue = YES;
    }

    if (usedCellValueOut) {
        *usedCellValueOut = usedCellValue;
    }
    return wrapIsSelf;
}

static __attribute__((unused)) BOOL wcpl_resolveIsSelfByGeometry(UIView *cellView,
                                         CGRect menuRect,
                                         BOOL menuRectValid,
                                         CGRect bubbleRect,
                                         BOOL bubbleRectValid,
                                         BOOL fallbackIsSelf) {
    if (![cellView isKindOfClass:[UIView class]]) {
        return fallbackIsSelf;
    }

    CGRect cellBounds = cellView.bounds;
    if (CGRectIsEmpty(cellBounds) || CGRectIsNull(cellBounds) || CGRectIsInfinite(cellBounds) || CGRectGetWidth(cellBounds) <= 16.0f) {
        return fallbackIsSelf;
    }

    BOOL (^inferFromRect)(CGRect, BOOL *) = ^BOOL(CGRect rect, BOOL *didInfer) {
        if (didInfer) {
            *didInfer = NO;
        }

        BOOL rectValid = !CGRectIsEmpty(rect) && !CGRectIsNull(rect) && !CGRectIsInfinite(rect) &&
                         CGRectGetWidth(rect) > 8.0f && CGRectGetHeight(rect) > 8.0f &&
                         CGRectIntersectsRect(rect, cellBounds);
        if (!rectValid) {
            return fallbackIsSelf;
        }

        CGFloat leftGap = CGRectGetMinX(rect) - CGRectGetMinX(cellBounds);
        CGFloat rightGap = CGRectGetMaxX(cellBounds) - CGRectGetMaxX(rect);
        CGFloat gapDelta = leftGap - rightGap;
        if (fabs(gapDelta) > 6.0f) {
            if (didInfer) {
                *didInfer = YES;
            }
            return gapDelta > 0.0f;
        }

        CGFloat cellMidX = CGRectGetMidX(cellBounds);
        CGFloat rectMidX = CGRectGetMidX(rect);
        CGFloat midDelta = rectMidX - cellMidX;
        // 靠近中轴的矩形不参与方向推断，避免大气泡跨中线时误判。
        if (fabs(midDelta) <= 8.0f) {
            return fallbackIsSelf;
        }

        if (didInfer) {
            *didInfer = YES;
        }
        return midDelta > 0.0f;
    };

    BOOL didInfer = NO;
    // 优先依据气泡几何，其次再看 menuRect，避免引用消息 menuRect 左偏导致自消息误判。
    if (bubbleRectValid) {
        BOOL inferred = inferFromRect(bubbleRect, &didInfer);
        if (didInfer) {
            return inferred;
        }
    }

    if (menuRectValid) {
        BOOL inferred = inferFromRect(menuRect, &didInfer);
        if (didInfer) {
            return inferred;
        }
    }

    return fallbackIsSelf;
}

static BOOL wcpl_isMessageSettledForRepeat(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return NO;
    }

    if (msgWrap.m_n64MesSvrID > 0) {
        return YES;
    }

    unsigned int status = msgWrap.m_uiStatus;
    if (status == 2 || status == 3) {
        return YES;
    }

    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!config.repeatImmediateRenderEnable) {
        return NO;
    }
    if (wcpl_isMessageFromOther(msgWrap)) {
        return NO;
    }
    if (status > 1) {
        return NO;
    }
    if (msgWrap.m_uiMesLocalID > 0) {
        return YES;
    }

    // 本地发送早期阶段可能尚未分配 localID，用短时间窗允许首帧显示复读按钮。
    if (msgWrap.m_uiCreateTime > 0) {
        NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
        NSTimeInterval delta = fabs(now - (NSTimeInterval)msgWrap.m_uiCreateTime);
        if (delta <= 30.0) {
            return YES;
        }
    }

    return NO;
}

static NSInteger wcpl_normalizeSwipeActionValueLegacyAware(NSInteger action, BOOL isSelfAction) {
    if (action < 0) {
        return 0;
    }

    if (action == 3 && !isSelfAction) {
        return 0;
    }

    if (action > 5) {
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
    if (title.length == 0) {
        title = wcpl_extractXMLValue(xml, @"<title>", @"</title>");
    }

    if (title.length == 0) {
        NSString *decodedXML = wcpl_decodeBasicXMLEntities(xml);
        if (decodedXML.length > 0 && ![decodedXML isEqualToString:xml]) {
            title = wcpl_extractXMLValue(decodedXML, @"<title><![CDATA[", @"]]></title>");
            if (title.length == 0) {
                title = wcpl_extractXMLValue(decodedXML, @"<title>", @"</title>");
            }
        }
    }

    title = wcpl_trimTextForRepeat(title);
    return title.length > 0 ? title : nil;
}

static CMessageWrap *wcpl_messageWrapForCellView(id cell) {
    if (!cell) {
        return nil;
    }

    SEL directSelectors[] = {
        @selector(getCurrentMessageWrap),
        @selector(messageWrap),
        @selector(getMediaWrap),
        @selector(msgWrap),
        @selector(getMessageWrap)
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
                @selector(msgWrap),
                @selector(getMessageWrap)
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

        NSArray<NSString *> *kvcKeys = @[@"msgWrap", @"messageWrap", @"m_msgWrap", @"m_messageWrap", @"_msgWrap", @"_messageWrap", @"m_oMessageWrap"];
        NSArray *targets = viewModel ? @[cell, viewModel] : @[cell];
        for (id target in targets) {
            for (NSString *key in kvcKeys) {
                @try {
                    id wrap = [target valueForKey:key];
                    if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                        return (CMessageWrap *)wrap;
                    }
                } @catch (__unused NSException *exceptionKVC) {
                }
            }
        }
    }
    return nil;
}

static BOOL wcpl_isMediaBubbleRepeatMessage(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return NO;
    }
    if (msgWrap.m_uiMessageType == 3 ||
        msgWrap.m_uiMessageType == 43 ||
        msgWrap.m_uiMessageType == 47) {
        return YES;
    }
    if (msgWrap.m_uiMessageType == 49 && wcpl_isAppEmoticonMessage(msgWrap)) {
        return YES;
    }
    return NO;
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
        if (wcpl_isMergedForwardAppMessage(msgWrap)) {
            return nil;
        }
        // 引用文件消息的 refer 内容里可能包含 <type>6，需优先识别为引用。
        if (wcpl_isQuoteReplyAppMessage(msgWrap)) {
            NSString *quoteTitle = wcpl_extractQuoteTitleFromXML(msgWrap.m_nsContent);
            if (quoteTitle.length > 0) {
                return quoteTitle;
            }
            return @"[引用]";
        }
        if (wcpl_isFileAppMessage(msgWrap)) {
            return nil;
        }
        if (wcpl_isAppEmoticonMessage(msgWrap)) {
            return @"[表情]";
        }
        return nil;
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
        case 49: {
            if (wcpl_isMergedForwardAppMessage(msgWrap)) {
                return NO;
            }
            // 引用文件消息外层是引用(type=57)，仅 refer 内层可能出现文件(type=6)。
            // 先判引用，避免“引用文件”被误拦截为“文件消息”。
            if (wcpl_isQuoteReplyAppMessage(msgWrap)) {
                return YES;
            }
            if (wcpl_isFileAppMessage(msgWrap)) {
                return NO;
            }
            if (config.repeatSupportEmoticonEnable && wcpl_isAppEmoticonMessage(msgWrap)) {
                return YES;
            }
            return NO;
        }
        default:
            return NO;
    }
}

static void wcpl_armTouchSuppression(CMessageWrap *msgWrap, id cell, NSString *source, NSTimeInterval duration) {
    NSTimeInterval ttl = duration > 0 ? duration : kWCPLQuoteLongPressSuppressDuration;
    CFTimeInterval until = CACurrentMediaTime() + ttl;
    if (until < gWCPLQuoteLongPressSuppressUntil) {
        until = gWCPLQuoteLongPressSuppressUntil;
    }
    gWCPLQuoteLongPressSuppressUntil = until;
    gWCPLQuoteLongPressSuppressCellAddr = (uintptr_t)cell;
    gWCPLQuoteLongPressSuppressMsgType = msgWrap ? msgWrap.m_uiMessageType : 0;
    WCPLLogDebug(@"Quote guard armed: source=%@ cell=%p type=%u ttlMs=%.0f",
                 source ?: @"unknown",
                 (void *)cell,
                 gWCPLQuoteLongPressSuppressMsgType,
                 (double)(ttl * 1000.0));
}

static void wcpl_armQuoteLongPressSuppression(CMessageWrap *msgWrap, id cell, NSString *source) {
    wcpl_armTouchSuppression(msgWrap, cell, source, kWCPLQuoteLongPressSuppressDuration);
}

static BOOL wcpl_shouldSuppressLongPressForCell(id cell, NSString *entry) {
    CFTimeInterval remain = gWCPLQuoteLongPressSuppressUntil - CACurrentMediaTime();
    if (remain <= 0) {
        return NO;
    }

    if (gWCPLQuoteLongPressSuppressCellAddr != 0 && cell && gWCPLQuoteLongPressSuppressCellAddr != (uintptr_t)cell) {
        return NO;
    }

    WCPLLogDebug(@"Quote guard blocked long-press: entry=%@ remainMs=%.0f cell=%p type=%u",
                 entry ?: @"unknown",
                 (double)(remain * 1000.0),
                 (void *)cell,
                 gWCPLQuoteLongPressSuppressMsgType);
    return YES;
}

static BOOL wcpl_shouldSuppressTapForCell(id cell, NSString *entry) {
    CFTimeInterval remain = gWCPLQuoteLongPressSuppressUntil - CACurrentMediaTime();
    if (remain <= 0) {
        return NO;
    }

    if (gWCPLQuoteLongPressSuppressCellAddr != 0 && cell && gWCPLQuoteLongPressSuppressCellAddr != (uintptr_t)cell) {
        return NO;
    }

    WCPLLogDebug(@"Quote guard blocked tap: entry=%@ remainMs=%.0f cell=%p type=%u",
                 entry ?: @"unknown",
                 (double)(remain * 1000.0),
                 (void *)cell,
                 gWCPLQuoteLongPressSuppressMsgType);
    return YES;
}

static BOOL wcpl_shouldSuppressTapForTripleSequence(id cell, NSString *entry) {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!config.doubleTapGestureEnable) {
        return NO;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(cell);
    if (!msgWrap) {
        return NO;
    }

    NSNumber *lastTapAt = objc_getAssociatedObject(msgWrap, kWCPLDoubleTapLastTapAtKey);
    NSNumber *tapCountObj = objc_getAssociatedObject(msgWrap, kWCPLDoubleTapManualTapCountKey);
    NSInteger tapCount = [tapCountObj isKindOfClass:[NSNumber class]] ? tapCountObj.integerValue : 0;
    if (tapCount < 2 || ![lastTapAt isKindOfClass:[NSNumber class]]) {
        return NO;
    }

    static const NSTimeInterval kWCPLManualDoubleTapInterval = 1.60;
    CFTimeInterval delta = CACurrentMediaTime() - lastTapAt.doubleValue;
    if (delta < 0 || delta > kWCPLManualDoubleTapInterval) {
        return NO;
    }

    WCPLLogDebug(@"Triple tap pre-suppress native tap: entry=%@ cell=%p count=%ld delta=%.3f msg=%@",
                 entry ?: @"unknown",
                 cell,
                 (long)tapCount,
                 delta,
                 wcpl_repeatMessageDebugInfo(msgWrap));
    return YES;
}

static BOOL wcpl_isPointInMessageBubbleArea(id cell, CGPoint pointInCell, NSString *scopeTag) {
    if (![cell isKindOfClass:[UIView class]]) {
        return NO;
    }

    UIView *cellView = (UIView *)cell;
    if (!CGRectContainsPoint(cellView.bounds, pointInCell)) {
        return NO;
    }

    BOOL (^isRectUsable)(CGRect) = ^BOOL(CGRect rect) {
        return !CGRectIsEmpty(rect) &&
               !CGRectIsNull(rect) &&
               !CGRectIsInfinite(rect) &&
               CGRectGetWidth(rect) > 8.0f &&
               CGRectGetHeight(rect) > 8.0f &&
               CGRectIntersectsRect(rect, cellView.bounds);
    };

    BOOL (^isRowWideRect)(CGRect) = ^BOOL(CGRect rect) {
        if (!isRectUsable(rect)) {
            return NO;
        }
        CGFloat cellWidth = CGRectGetWidth(cellView.bounds);
        if (cellWidth <= 24.0f) {
            return NO;
        }
        CGFloat widthRatio = CGRectGetWidth(rect) / cellWidth;
        BOOL spansBothSides = (CGRectGetMinX(rect) <= 10.0f) &&
                              ((cellWidth - CGRectGetMaxX(rect)) <= 10.0f);
        return widthRatio >= 0.80f || spansBothSides;
    };

    CGRect anchorRect = CGRectZero;
    BOOL anchorRectValid = NO;
    if ([(id)cell respondsToSelector:@selector(wchook_bubbleAnchorView)]) {
        @try {
            UIView *bubbleView = ((id (*)(id, SEL))objc_msgSend)((id)cell, @selector(wchook_bubbleAnchorView));
            if ([bubbleView isKindOfClass:[UIView class]]) {
                anchorRect = [cellView convertRect:bubbleView.bounds fromView:bubbleView];
                anchorRectValid = isRectUsable(anchorRect);
            }
        } @catch (__unused NSException *exceptionBubble) {
            anchorRectValid = NO;
        }
    }

    CGRect menuRect = CGRectZero;
    BOOL menuRectValid = NO;
    if ([(id)cell respondsToSelector:@selector(showRectForMenuController)]) {
        @try {
            menuRect = ((CGRect (*)(id, SEL))objc_msgSend)((id)cell, @selector(showRectForMenuController));
            menuRectValid = isRectUsable(menuRect);
        } @catch (__unused NSException *exceptionMenuRect) {
            menuRectValid = NO;
        }
    }

    CGRect bubbleRect = CGRectZero;
    BOOL bubbleRectValid = NO;
    if (anchorRectValid && menuRectValid) {
        CGRect intersectRect = CGRectIntersection(anchorRect, menuRect);
        if (isRectUsable(intersectRect)) {
            bubbleRect = intersectRect;
        } else {
            BOOL anchorWide = isRowWideRect(anchorRect);
            BOOL menuWide = isRowWideRect(menuRect);
            if (anchorWide && !menuWide) {
                bubbleRect = menuRect;
            } else if (menuWide && !anchorWide) {
                bubbleRect = anchorRect;
            } else {
                CGFloat anchorArea = CGRectGetWidth(anchorRect) * CGRectGetHeight(anchorRect);
                CGFloat menuArea = CGRectGetWidth(menuRect) * CGRectGetHeight(menuRect);
                bubbleRect = (menuArea > 0.0f && menuArea < anchorArea) ? menuRect : anchorRect;
            }
        }
        bubbleRectValid = YES;
    } else if (anchorRectValid) {
        bubbleRect = anchorRect;
        bubbleRectValid = YES;
    } else if (menuRectValid) {
        bubbleRect = menuRect;
        bubbleRectValid = YES;
    }

    // 严格范围控制：无法确定气泡矩形时，默认不触发。
    if (!bubbleRectValid) {
        WCPLLogDebug(@"Triple tap ignored: bubble rect unavailable scope=%@ class=%@ point=(%.1f,%.1f)",
                     scopeTag ?: @"unknown",
                     NSStringFromClass([cellView class]),
                     pointInCell.x,
                     pointInCell.y);
        return NO;
    }

    if (isRowWideRect(bubbleRect)) {
        WCPLLogDebug(@"Triple tap ignored: bubble rect too wide scope=%@ class=%@ point=(%.1f,%.1f) bubble=(%.1f,%.1f,%.1f,%.1f)",
                     scopeTag ?: @"unknown",
                     NSStringFromClass([cellView class]),
                     pointInCell.x,
                     pointInCell.y,
                     bubbleRect.origin.x,
                     bubbleRect.origin.y,
                     bubbleRect.size.width,
                     bubbleRect.size.height);
        return NO;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(cell);
    if (msgWrap && CGRectGetWidth(cellView.bounds) > 20.0f) {
        BOOL isSelf = !wcpl_isMessageFromOther(msgWrap);
        CGFloat cellMidX = CGRectGetMidX(cellView.bounds);
        CGRect sideClampedRect = bubbleRect;
        if (isSelf) {
            CGFloat minX = MAX(CGRectGetMinX(sideClampedRect), cellMidX - 12.0f);
            CGFloat maxX = CGRectGetMaxX(sideClampedRect);
            if (maxX - minX > 8.0f) {
                sideClampedRect.origin.x = minX;
                sideClampedRect.size.width = maxX - minX;
            }
        } else {
            CGFloat minX = CGRectGetMinX(sideClampedRect);
            CGFloat maxX = MIN(CGRectGetMaxX(sideClampedRect), cellMidX + 12.0f);
            if (maxX - minX > 8.0f) {
                sideClampedRect.origin.x = minX;
                sideClampedRect.size.width = maxX - minX;
            }
        }
        bubbleRect = sideClampedRect;
    }

    CGRect hitRect = CGRectInset(bubbleRect, 1.0f, 1.0f);
    if (CGRectIsEmpty(hitRect) || CGRectGetWidth(hitRect) <= 2.0f || CGRectGetHeight(hitRect) <= 2.0f) {
        hitRect = bubbleRect;
    }
    BOOL inside = CGRectContainsPoint(hitRect, pointInCell);
    if (!inside) {
        WCPLLogDebug(@"Triple tap ignored outside bubble: scope=%@ class=%@ point=(%.1f,%.1f) bubble=(%.1f,%.1f,%.1f,%.1f)",
                     scopeTag ?: @"unknown",
                     NSStringFromClass([cellView class]),
                     pointInCell.x,
                     pointInCell.y,
                     bubbleRect.origin.x,
                     bubbleRect.origin.y,
                     bubbleRect.size.width,
                     bubbleRect.size.height);
    }
    return inside;
}

static BOOL wcpl_isTouchInMessageBubbleArea(id cell, UITouch *touch, NSString *scopeTag) {
    if (![cell isKindOfClass:[UIView class]] || ![touch isKindOfClass:[UITouch class]]) {
        return NO;
    }
    UIView *cellView = (UIView *)cell;
    CGPoint pointInCell = [touch locationInView:cellView];
    return wcpl_isPointInMessageBubbleArea(cell, pointInCell, scopeTag);
}

static UIView *wcpl_findMessageCellAncestorView(UIView *view) {
    UIView *current = view;
    Class commonCellClass = objc_getClass("CommonMessageCellView");
    while (current) {
        if ((commonCellClass && [current isKindOfClass:commonCellClass]) ||
            [NSStringFromClass([current class]) hasSuffix:@"MessageCellView"]) {
            return current;
        }
        current = current.superview;
    }
    return nil;
}

static BOOL wcpl_shouldBlockNativeDoubleTap(id cell, id sender, NSString *scopeTag) {
    return wcpl_shouldBlockNativeDoubleTapForView(cell, sender, scopeTag);
}

static BOOL wcpl_shouldBlockNativeDoubleTapForView(id ownerView, id sender, NSString *scopeTag) {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!config.doubleTapGestureEnable) {
        return NO;
    }

    UIView *originView = nil;
    if ([sender isKindOfClass:[UIGestureRecognizer class]]) {
        originView = ((UIGestureRecognizer *)sender).view;
    } else if ([sender isKindOfClass:[UIView class]]) {
        originView = (UIView *)sender;
    }
    if (!originView && [ownerView isKindOfClass:[UIView class]]) {
        originView = (UIView *)ownerView;
    }

    UIView *cellView = wcpl_findMessageCellAncestorView(originView);
    if (!cellView && [ownerView isKindOfClass:[UIView class]]) {
        cellView = wcpl_findMessageCellAncestorView((UIView *)ownerView);
    }
    if (!cellView) {
        return NO;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(cellView);
    NSString *scope = ([scopeTag isKindOfClass:[NSString class]] && scopeTag.length > 0) ? scopeTag : @"unknown";
    NSString *senderClass = sender ? NSStringFromClass([sender class]) : @"(nil)";
    WCPLLogInfo(@"Native double tap blocked: scope=%@ class=%@ sender=%@ msg=%@",
                scope,
                NSStringFromClass([cellView class]),
                senderClass,
                wcpl_repeatMessageDebugInfo(msgWrap));
    return YES;
}

static void wcpl_enforceTripleTapPriorityForViewTree(UIView *root, UITapGestureRecognizer *tripleTap, id ownerCell) {
    if (!root || !tripleTap) {
        return;
    }

    NSMutableArray<UIView *> *stack = [NSMutableArray arrayWithObject:root];
    while (stack.count > 0) {
        UIView *view = stack.lastObject;
        [stack removeLastObject];

        NSArray<UIGestureRecognizer *> *recognizers = [view.gestureRecognizers copy];
        for (UIGestureRecognizer *recognizer in recognizers) {
            if (recognizer == tripleTap || ![recognizer isKindOfClass:[UITapGestureRecognizer class]]) {
                continue;
            }

            UITapGestureRecognizer *tap = (UITapGestureRecognizer *)recognizer;
            if (tap.numberOfTouchesRequired != 1) {
                continue;
            }

            if (tap.numberOfTapsRequired == 2) {
                if (tap.enabled) {
                    tap.enabled = NO;
                    NSNumber *didLog = objc_getAssociatedObject(tap, kWCPLNativeDoubleTapRecognizerDisabledKey);
                    if (![didLog isKindOfClass:[NSNumber class]] || !didLog.boolValue) {
                        WCPLLogInfo(@"Native double tap recognizer disabled: cell=%p owner=%@ view=%@ recognizer=%@",
                                    ownerCell,
                                    ownerCell ? NSStringFromClass([ownerCell class]) : @"(nil)",
                                    NSStringFromClass([view class]),
                                    NSStringFromClass([tap class]));
                        objc_setAssociatedObject(tap, kWCPLNativeDoubleTapRecognizerDisabledKey, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                    }
                }
                continue;
            }

            if (tap.numberOfTapsRequired > 0 && tap.numberOfTapsRequired < tripleTap.numberOfTapsRequired) {
                [tap requireGestureRecognizerToFail:tripleTap];
            }
        }

        for (UIView *subview in view.subviews) {
            [stack addObject:subview];
        }
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

static BOOL wcpl_isChatRoomName(NSString *name) {
    NSString *trimmed = wcpl_trimTextForRepeat(name);
    if (trimmed.length == 0) {
        return NO;
    }
    return ([trimmed rangeOfString:@"@chatroom" options:NSCaseInsensitiveSearch].location != NSNotFound);
}

static NSString *wcpl_normalizeMentionCandidate(NSString *candidate) {
    NSString *value = wcpl_trimTextForRepeat(candidate);
    if (value.length == 0) {
        return nil;
    }

    if ([value hasPrefix:@"@"]) {
        value = wcpl_trimTextForRepeat([value substringFromIndex:1]);
    }
    if ([value hasSuffix:@":"]) {
        value = wcpl_trimTextForRepeat([value substringToIndex:MAX((NSInteger)value.length - 1, 0)]);
    }
    if (value.length == 0 || value.length > 128) {
        return nil;
    }

    if ([value rangeOfString:@"<"].location != NSNotFound || [value rangeOfString:@">"].location != NSNotFound) {
        return nil;
    }
    if ([value rangeOfCharacterFromSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]].location != NSNotFound) {
        return nil;
    }
    if (wcpl_isChatRoomName(value)) {
        return nil;
    }

    return value;
}

static NSString *wcpl_extractMentionCandidateFromXML(NSString *xmlText) {
    if (![xmlText isKindOfClass:[NSString class]] || xmlText.length == 0) {
        return nil;
    }

    NSArray<NSArray<NSString *> *> *tagPairs = @[
        @[@"<memberusername><![CDATA[", @"]]></memberusername>"],
        @[@"<memberusername>", @"</memberusername>"],
        @[@"<senderusername><![CDATA[", @"]]></senderusername>"],
        @[@"<senderusername>", @"</senderusername>"],
        @[@"<fromusr><![CDATA[", @"]]></fromusr>"],
        @[@"<fromusr>", @"</fromusr>"],
        @[@"<chatusr><![CDATA[", @"]]></chatusr>"],
        @[@"<chatusr>", @"</chatusr>"],
        @[@"<realchatname><![CDATA[", @"]]></realchatname>"],
        @[@"<realchatname>", @"</realchatname>"],
        @[@"<username><![CDATA[", @"]]></username>"],
        @[@"<username>", @"</username>"]
    ];

    NSString *(^extractFromText)(NSString *) = ^NSString *(NSString *text) {
        if (![text isKindOfClass:[NSString class]] || text.length == 0) {
            return nil;
        }
        for (NSArray<NSString *> *pair in tagPairs) {
            if (pair.count != 2) {
                continue;
            }
            NSString *value = wcpl_extractXMLValue(text, pair[0], pair[1]);
            NSString *candidate = wcpl_normalizeMentionCandidate(value);
            if (candidate.length > 0) {
                return candidate;
            }
        }
        return nil;
    };

    NSString *candidate = extractFromText(xmlText);
    if (candidate.length > 0) {
        return candidate;
    }

    NSString *decoded = wcpl_decodeBasicXMLEntities(xmlText);
    if (decoded.length > 0 && ![decoded isEqualToString:xmlText]) {
        candidate = extractFromText(decoded);
        if (candidate.length > 0) {
            return candidate;
        }
    }

    return nil;
}

static NSString *wcpl_extractMentionCandidateFromGroupContentPrefix(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return nil;
    }

    NSRange newlineRange = [content rangeOfString:@"\n"];
    if (newlineRange.location == NSNotFound || newlineRange.location == 0) {
        return nil;
    }

    NSString *firstLine = [content substringToIndex:newlineRange.location];
    return wcpl_normalizeMentionCandidate(firstLine);
}

static NSString *wcpl_quoteMentionUserNameForMessage(CMessageWrap *msgWrap,
                                                     NSString *chatName,
                                                     NSString *selfUserName) {
    if (!msgWrap) {
        return nil;
    }

    NSString *selfName = wcpl_trimTextForRepeat(selfUserName);
    if (selfName.length == 0) {
        selfName = wcpl_trimTextForRepeat(wcpl_currentSelfUserNameForRepeat());
    }

    BOOL isGroupChat = wcpl_isChatRoomName(chatName) ||
                       wcpl_isChatRoomName(msgWrap.m_nsFromUsr) ||
                       wcpl_isChatRoomName(msgWrap.m_nsToUsr);

    if (!isGroupChat) {
        return nil;
    }

    NSMutableArray<NSString *> *candidates = [NSMutableArray arrayWithCapacity:6];

    NSString *realChatUsr = wcpl_normalizeMentionCandidate(msgWrap.m_nsRealChatUsr);
    if (realChatUsr.length > 0) {
        [candidates addObject:realChatUsr];
    }

    NSString *fromUsr = wcpl_normalizeMentionCandidate(msgWrap.m_nsFromUsr);
    if (fromUsr.length > 0) {
        [candidates addObject:fromUsr];
    }

    if (isGroupChat) {
        NSString *msgSourceCandidate = wcpl_extractMentionCandidateFromXML(msgWrap.m_nsMsgSource);
        if (msgSourceCandidate.length > 0) {
            [candidates addObject:msgSourceCandidate];
        }

        NSString *contentPrefixCandidate = wcpl_extractMentionCandidateFromGroupContentPrefix(msgWrap.m_nsContent);
        if (contentPrefixCandidate.length > 0) {
            [candidates addObject:contentPrefixCandidate];
        }

        NSString *contentXMLCandidate = wcpl_extractMentionCandidateFromXML(msgWrap.m_nsContent);
        if (contentXMLCandidate.length > 0) {
            [candidates addObject:contentXMLCandidate];
        }
    }

    for (NSString *candidate in candidates) {
        if (candidate.length == 0) {
            continue;
        }
        if (selfName.length > 0 && [candidate isEqualToString:selfName]) {
            continue;
        }
        return candidate;
    }

    return nil;
}

static id wcpl_quoteContactForUserName(NSString *userName) {
    if (userName.length == 0) {
        return nil;
    }

    id contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
    if (!contactMgr) {
        return nil;
    }

    id contact = nil;
    if ([contactMgr respondsToSelector:@selector(getContactByName:)]) {
        @try {
            contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByName:), userName);
        } @catch (__unused NSException *exceptionGetByName) {
            contact = nil;
        }
    }

    if (!contact && [contactMgr respondsToSelector:@selector(getContactByNameFromCache:)]) {
        @try {
            contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByNameFromCache:), userName);
        } @catch (__unused NSException *exceptionGetFromCache) {
            contact = nil;
        }
    }

    if (!contact && [contactMgr respondsToSelector:@selector(getContactForSearchByName:)]) {
        @try {
            contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactForSearchByName:), userName);
        } @catch (__unused NSException *exceptionSearchByName) {
            contact = nil;
        }
    }

    if (!contact && [contactMgr respondsToSelector:@selector(getContactByNameFromDB:)]) {
        @try {
            contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByNameFromDB:), userName);
        } @catch (__unused NSException *exceptionGetByNameFromDB) {
            contact = nil;
        }
    }

    return contact;
}

static id wcpl_quoteContactFromMessage(CMessageWrap *msgWrap, NSString *expectedUserName) {
    if (!msgWrap) {
        return nil;
    }

    id contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
    if (!(contactMgr && [contactMgr respondsToSelector:@selector(getMessageChatContactByMessageWrap:)])) {
        return nil;
    }

    id contact = nil;
    @try {
        contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getMessageChatContactByMessageWrap:), msgWrap);
    } @catch (__unused NSException *exceptionGetByWrap) {
        contact = nil;
    }

    if (!contact || expectedUserName.length == 0 || ![contact respondsToSelector:@selector(m_nsUsrName)]) {
        return contact;
    }

    NSString *contactUserName = nil;
    @try {
        id value = ((id (*)(id, SEL))objc_msgSend)(contact, @selector(m_nsUsrName));
        if ([value isKindOfClass:[NSString class]]) {
            contactUserName = wcpl_trimTextForRepeat((NSString *)value);
        }
    } @catch (__unused NSException *exceptionContactUser) {
        contactUserName = nil;
    }

    if (contactUserName.length > 0 && ![contactUserName isEqualToString:expectedUserName]) {
        WCPLLogDebug(@"Swipe quote mention contact mismatch(fromMessage): expect=%@ got=%@",
                     expectedUserName ?: @"(nil)",
                     contactUserName ?: @"(nil)");
    }

    return contact;
}

static BOOL wcpl_quoteContactMatchesUserName(id contact, NSString *expectedUserName) {
    if (!contact) {
        return NO;
    }
    if (expectedUserName.length == 0) {
        return YES;
    }

    NSString *contactUserName = nil;
    if ([contact isKindOfClass:[NSString class]]) {
        contactUserName = wcpl_trimTextForRepeat((NSString *)contact);
    } else if ([contact respondsToSelector:@selector(m_nsUsrName)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(contact, @selector(m_nsUsrName));
            if ([value isKindOfClass:[NSString class]]) {
                contactUserName = wcpl_trimTextForRepeat((NSString *)value);
            }
        } @catch (__unused NSException *exceptionContactUser) {
            contactUserName = nil;
        }
    }

    return (contactUserName.length > 0 && [contactUserName isEqualToString:expectedUserName]);
}

static id wcpl_quoteContactFromChatVC(BaseMsgContentViewController *chatVC,
                                      CMessageWrap *msgWrap,
                                      NSString *expectedUserName) {
    if (!(chatVC && msgWrap)) {
        return nil;
    }

    if (![chatVC respondsToSelector:@selector(getMessageChatContactByMessageWrap:)]) {
        return nil;
    }

    id contact = nil;
    @try {
        contact = ((id (*)(id, SEL, id))objc_msgSend)(chatVC,
                                                       @selector(getMessageChatContactByMessageWrap:),
                                                       msgWrap);
    } @catch (__unused NSException *exceptionGetByChatVC) {
        contact = nil;
    }

    if (contact && expectedUserName.length > 0 && !wcpl_quoteContactMatchesUserName(contact, expectedUserName)) {
        WCPLLogDebug(@"Swipe quote mention contact mismatch(fromChatVC): expect=%@",
                     expectedUserName ?: @"(nil)");
    }

    return contact;
}

static id wcpl_quoteLogicControllerForChatVC(BaseMsgContentViewController *chatVC) {
    if (!chatVC) {
        return nil;
    }

    id logicController = nil;
    if ([chatVC respondsToSelector:@selector(m_logicController)]) {
        @try {
            logicController = ((id (*)(id, SEL))objc_msgSend)(chatVC, @selector(m_logicController));
        } @catch (__unused NSException *exceptionLogic0) {
            logicController = nil;
        }
    }

    if (!logicController && [chatVC respondsToSelector:@selector(logicController)]) {
        @try {
            logicController = ((id (*)(id, SEL))objc_msgSend)(chatVC, @selector(logicController));
        } @catch (__unused NSException *exceptionLogic1) {
            logicController = nil;
        }
    }

    return logicController;
}

static id wcpl_quoteToolViewForChatVC(BaseMsgContentViewController *chatVC) {
    if (!(chatVC && [chatVC respondsToSelector:@selector(toolView)])) {
        return nil;
    }

    id toolView = nil;
    @try {
        toolView = ((id (*)(id, SEL))objc_msgSend)(chatVC, @selector(toolView));
    } @catch (__unused NSException *exceptionToolView) {
        toolView = nil;
    }
    return toolView;
}

static id wcpl_quoteCurrentLogicControllerFromManager(void) {
    id logicManager = WCPLGetService(objc_getClass("MMMsgLogicManager"));
    if (!(logicManager && [logicManager respondsToSelector:@selector(GetCurrentLogicController)])) {
        return nil;
    }

    id currentLogic = nil;
    @try {
        currentLogic = ((id (*)(id, SEL))objc_msgSend)(logicManager, @selector(GetCurrentLogicController));
    } @catch (__unused NSException *exceptionCurrentLogic) {
        currentLogic = nil;
    }
    return currentLogic;
}

static NSString *wcpl_quoteInputTextFromToolView(id toolView) {
    if (!toolView) {
        return nil;
    }

    NSString *inputText = nil;
    if ([toolView respondsToSelector:@selector(inputText)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(toolView, @selector(inputText));
            if ([value isKindOfClass:[NSString class]]) {
                inputText = (NSString *)value;
            }
        } @catch (__unused NSException *exceptionInputText) {
            inputText = nil;
        }
    }

    if (inputText.length == 0 && [toolView respondsToSelector:@selector(text)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(toolView, @selector(text));
            if ([value isKindOfClass:[NSString class]]) {
                inputText = (NSString *)value;
            }
        } @catch (__unused NSException *exceptionText) {
            inputText = nil;
        }
    }

    return wcpl_trimTextForRepeat(inputText);
}

static BOOL wcpl_quoteInputHasAtSymbol(BaseMsgContentViewController *chatVC) {
    id toolView = wcpl_quoteToolViewForChatVC(chatVC);
    NSString *inputText = wcpl_quoteInputTextFromToolView(toolView);
    if (inputText.length == 0) {
        return NO;
    }
    return ([inputText rangeOfString:@"@"].location != NSNotFound);
}

static NSString *wcpl_quoteUserNameFromContact(id contact) {
    if (!contact) {
        return nil;
    }

    if ([contact isKindOfClass:[NSString class]]) {
        return wcpl_trimTextForRepeat((NSString *)contact);
    }

    NSString *userName = nil;
    if ([contact respondsToSelector:@selector(m_nsUsrName)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(contact, @selector(m_nsUsrName));
            if ([value isKindOfClass:[NSString class]]) {
                userName = wcpl_trimTextForRepeat((NSString *)value);
            }
        } @catch (__unused NSException *exceptionUser0) {
            userName = nil;
        }
    }

    if (userName.length == 0) {
        @try {
            id value = [contact valueForKey:@"m_nsUsrName"];
            if ([value isKindOfClass:[NSString class]]) {
                userName = wcpl_trimTextForRepeat((NSString *)value);
            }
        } @catch (__unused NSException *exceptionUser1) {
            userName = nil;
        }
    }

    return userName;
}

static BOOL wcpl_tryInvokeSingleArgSelector(id target, SEL selector, id arg) {
    if (!(target && selector && arg) || ![target respondsToSelector:selector]) {
        return NO;
    }
    @try {
        ((void (*)(id, SEL, id))objc_msgSend)(target, selector, arg);
        return YES;
    } @catch (__unused NSException *exception) {
        return NO;
    }
}

static BOOL wcpl_applySwipeQuoteAtUserIfNeeded(CMessageWrap *msgWrap,
                                                BaseMsgContentViewController *chatVC,
                                                NSString *sceneTag) {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!(config && config.swipeQuoteAtUserEnable) || !(msgWrap && chatVC)) {
        return NO;
    }

    NSString *selfUserName = wcpl_currentSelfUserNameForRepeat();
    NSString *chatName = wcpl_chatNameForMessage(msgWrap, chatVC);
    NSString *mentionUserName = wcpl_quoteMentionUserNameForMessage(msgWrap, chatName, selfUserName);
    if (mentionUserName.length == 0) {
        return NO;
    }

    NSString *realChatUserName = wcpl_normalizeMentionCandidate(msgWrap.m_nsRealChatUsr);
    if (realChatUserName.length > 0 && selfUserName.length > 0 && [realChatUserName isEqualToString:selfUserName]) {
        realChatUserName = nil;
    }

    id contact = wcpl_quoteContactFromChatVC(chatVC, msgWrap, mentionUserName);
    if (!contact) {
        contact = wcpl_quoteContactFromMessage(msgWrap, mentionUserName);
    }
    if (!contact && realChatUserName.length > 0) {
        contact = wcpl_quoteContactForUserName(realChatUserName);
    }
    if (!contact) {
        contact = wcpl_quoteContactForUserName(mentionUserName);
    }
    NSString *contactUserName = wcpl_quoteUserNameFromContact(contact);
    if (contactUserName.length > 0 && !wcpl_isChatRoomName(contactUserName)) {
        mentionUserName = contactUserName;
    } else if (realChatUserName.length > 0) {
        mentionUserName = realChatUserName;
    }
    id mentionTarget = contact ?: mentionUserName;

    id managerLogicController = wcpl_quoteCurrentLogicControllerFromManager();
    id logicController = wcpl_quoteLogicControllerForChatVC(chatVC);
    id toolView = wcpl_quoteToolViewForChatVC(chatVC);
    id primaryLogicController = managerLogicController ?: logicController;
    BOOL injectedByDidSelect = NO;
    BOOL injectedByAddAt = NO;

    if (primaryLogicController && contact) {
        injectedByDidSelect = wcpl_tryInvokeSingleArgSelector(primaryLogicController, @selector(didSelectContact:), contact);
    }
    if (!injectedByDidSelect && logicController && logicController != primaryLogicController && contact) {
        injectedByDidSelect = wcpl_tryInvokeSingleArgSelector(logicController, @selector(didSelectContact:), contact);
    }

    NSMutableArray *addAtArgs = [NSMutableArray arrayWithCapacity:2];
    if (contact) {
        [addAtArgs addObject:contact];
    }
    if (mentionUserName.length > 0) {
        [addAtArgs addObject:mentionUserName];
    }

    SEL addAtLowerSelector = NSSelectorFromString(@"addAtUser:");
    NSArray<NSString *> *addAtSelectorNames = @[@"AddAtUser:", @"addAtUser:"];
    NSMutableArray *addAtTargets = [NSMutableArray arrayWithCapacity:4];
    if (primaryLogicController) {
        [addAtTargets addObject:primaryLogicController];
    }
    if (logicController && logicController != primaryLogicController) {
        [addAtTargets addObject:logicController];
    }
    if (toolView) {
        [addAtTargets addObject:toolView];
    }
    if (chatVC) {
        [addAtTargets addObject:chatVC];
    }
    for (id target in addAtTargets) {
        if (injectedByAddAt) {
            break;
        }
        for (NSString *selectorName in addAtSelectorNames) {
            if (injectedByAddAt) {
                break;
            }
            SEL selector = [selectorName isEqualToString:@"addAtUser:"] ? addAtLowerSelector : NSSelectorFromString(selectorName);
            for (id arg in addAtArgs) {
                if (wcpl_tryInvokeSingleArgSelector(target, selector, arg)) {
                    injectedByAddAt = YES;
                    break;
                }
            }
        }
    }

    if (!injectedByDidSelect && toolView && contact) {
        injectedByDidSelect = wcpl_tryInvokeSingleArgSelector(toolView, @selector(didSelectContact:), contact);
    }
    if (!injectedByDidSelect && chatVC && contact) {
        injectedByDidSelect = wcpl_tryInvokeSingleArgSelector(chatVC, @selector(didSelectContact:), contact);
    }
    if (!injectedByDidSelect && managerLogicController && managerLogicController != primaryLogicController && contact) {
        injectedByDidSelect = wcpl_tryInvokeSingleArgSelector(managerLogicController, @selector(didSelectContact:), contact);
    }

    BOOL syncedToSession = NO;
    id sessionMgr = WCPLGetService(objc_getClass("MMNewSessionMgr"));
    if (sessionMgr && mentionTarget && [sessionMgr respondsToSelector:@selector(addContact:AtUser:)]) {
        @try {
            ((void (*)(id, SEL, id, id))objc_msgSend)(sessionMgr, @selector(addContact:AtUser:), mentionTarget, mentionUserName);
            syncedToSession = YES;
        } @catch (__unused NSException *exceptionSessionAt) {
            syncedToSession = NO;
        }
    }

    BOOL injectedAny = (injectedByDidSelect || injectedByAddAt || syncedToSession);
    WCPLLogInfo(@"Swipe quote mention applied: scene=%@ user=%@ real=%@ contact=%d didSelect=%d addAt=%d session_sync=%d injected=%d logic_primary=%@ logic_mgr=%@ logic_vc=%@ tool=%@ has_at=%d msg=%@",
                sceneTag ?: @"swipe_quote",
                mentionUserName,
                realChatUserName ?: @"(nil)",
                contact ? 1 : 0,
                injectedByDidSelect ? 1 : 0,
                injectedByAddAt ? 1 : 0,
                syncedToSession ? 1 : 0,
                injectedAny ? 1 : 0,
                primaryLogicController ? NSStringFromClass([primaryLogicController class]) : @"(nil)",
                managerLogicController ? NSStringFromClass([managerLogicController class]) : @"(nil)",
                logicController ? NSStringFromClass([logicController class]) : @"(nil)",
                toolView ? NSStringFromClass([toolView class]) : @"(nil)",
                wcpl_quoteInputHasAtSymbol(chatVC) ? 1 : 0,
                wcpl_repeatMessageDebugInfo(msgWrap));
    return injectedAny;
}

static void wcpl_scheduleSwipeQuoteAtUserIfNeeded(CMessageWrap *msgWrap,
                                                   BaseMsgContentViewController *chatVC,
                                                   NSString *sceneTag) {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (!(config && config.swipeQuoteAtUserEnable) || !(msgWrap && chatVC)) {
        return;
    }

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.14 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        BOOL injected = wcpl_applySwipeQuoteAtUserIfNeeded(msgWrap, chatVC, sceneTag ?: @"swipe_quote");
        if (!injected) {
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.20 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                wcpl_applySwipeQuoteAtUserIfNeeded(msgWrap, chatVC, [NSString stringWithFormat:@"%@_retry", sceneTag ?: @"swipe_quote"]);
            });
        }
    });

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.42 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        if (!wcpl_quoteInputHasAtSymbol(chatVC)) {
            wcpl_applySwipeQuoteAtUserIfNeeded(msgWrap, chatVC, [NSString stringWithFormat:@"%@_retry2_no_at", sceneTag ?: @"swipe_quote"]);
        }
    });

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.68 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        if (!wcpl_quoteInputHasAtSymbol(chatVC)) {
            wcpl_applySwipeQuoteAtUserIfNeeded(msgWrap, chatVC, [NSString stringWithFormat:@"%@_retry3_no_at", sceneTag ?: @"swipe_quote"]);
        }
    });
}

static void wcpl_clearToolViewReplyingMessageIfNeeded(id toolView, NSString *scene) {
    if (!(toolView && [toolView respondsToSelector:@selector(setReplyingMessage:)])) {
        return;
    }

    id previousReply = nil;
    if ([toolView respondsToSelector:@selector(replyingMessage)]) {
        @try {
            previousReply = ((id (*)(id, SEL))objc_msgSend)(toolView, @selector(replyingMessage));
        } @catch (__unused NSException *exceptionGet) {
            previousReply = nil;
        }
    }

    @try {
        ((void (*)(id, SEL, id))objc_msgSend)(toolView, @selector(setReplyingMessage:), nil);
        if (previousReply) {
            WCPLLogDebug(@"Repeat quote context cleared: scene=%@", scene ?: @"(nil)");
        }
    } @catch (NSException *exception) {
        WCPLLogWarning(@"Repeat quote context clear failed: scene=%@ reason=%@", scene ?: @"(nil)", exception.reason ?: exception);
    }
}

static NSString *wcpl_currentSelfUserNameForRepeat(void) {
    __block NSString *selfUserName = nil;
    void (^resolveBlock)(void) = ^{
        id contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
        if (!(contactMgr && [contactMgr respondsToSelector:@selector(getSelfContact)])) {
            return;
        }
        @try {
            id selfContact = ((id (*)(id, SEL))objc_msgSend)(contactMgr, @selector(getSelfContact));
            if ([selfContact respondsToSelector:@selector(m_nsUsrName)]) {
                id value = ((id (*)(id, SEL))objc_msgSend)(selfContact, @selector(m_nsUsrName));
                if ([value isKindOfClass:[NSString class]]) {
                    NSString *trimmed = wcpl_trimTextForRepeat((NSString *)value);
                    if (trimmed.length > 0) {
                        selfUserName = [trimmed copy];
                        return;
                    }
                }
            }
            @try {
                id value = [selfContact valueForKey:@"m_nsUsrName"];
                if ([value isKindOfClass:[NSString class]]) {
                    NSString *trimmed = wcpl_trimTextForRepeat((NSString *)value);
                    if (trimmed.length > 0) {
                        selfUserName = [trimmed copy];
                    }
                }
            } @catch (__unused NSException *exception0) {
            }
        } @catch (__unused NSException *exception) {
            selfUserName = nil;
        }
    };

    if ([NSThread isMainThread]) {
        resolveBlock();
    } else {
        dispatch_sync(dispatch_get_main_queue(), resolveBlock);
    }
    return selfUserName;
}

static id wcpl_repeatContactForChatName(NSString *chatName, CMessageWrap *msgWrap) {
    id contactMgr = WCPLGetService(objc_getClass("CContactMgr"));
    if (!contactMgr) {
        return nil;
    }

    id contact = nil;
    if (chatName.length > 0) {
        if ([contactMgr respondsToSelector:@selector(getContactByName:)]) {
            @try {
                contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByName:), chatName);
            } @catch (__unused NSException *exceptionGetByName) {
                contact = nil;
            }
        }

        if (!contact && [contactMgr respondsToSelector:@selector(getContactByNameFromCache:)]) {
            @try {
                contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByNameFromCache:), chatName);
            } @catch (__unused NSException *exceptionGetFromCache) {
                contact = nil;
            }
        }
    }

    if (!contact && msgWrap && [contactMgr respondsToSelector:@selector(getMessageChatContactByMessageWrap:)]) {
        @try {
            contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getMessageChatContactByMessageWrap:), msgWrap);
        } @catch (__unused NSException *exceptionGetFromMsg) {
            contact = nil;
        }
    }

    return contact;
}

static NSString *wcpl_generateRepeatClientMsgID(NSString *selfUserName) {
    NSString *sender = wcpl_trimTextForRepeat(selfUserName);
    if (sender.length == 0) {
        sender = wcpl_trimTextForRepeat(wcpl_currentSelfUserNameForRepeat());
    }

    unsigned int now = (unsigned int)[[NSDate date] timeIntervalSince1970];
    unsigned int randomValue = arc4random();
    if (sender.length > 0) {
        return [NSString stringWithFormat:@"%@_%u_%u", sender, now, randomValue];
    }
    return [NSString stringWithFormat:@"wcpl_%u_%u", now, randomValue];
}

static void wcpl_applyClientMsgIDToSendWrap(CMessageWrap *sendWrap,
                                            NSString *clientMsgID,
                                            NSString *sceneTag) {
    if (!(sendWrap && clientMsgID.length > 0)) {
        return;
    }

    BOOL didSetClientID = NO;
    SEL setClientMsgIDSelector = NSSelectorFromString(@"setM_nsClientMsgID:");
    if (setClientMsgIDSelector && [sendWrap respondsToSelector:setClientMsgIDSelector]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, setClientMsgIDSelector, clientMsgID);
            didSetClientID = YES;
        } @catch (__unused NSException *exceptionClientIDSetter) {
        }
    }

    if (!didSetClientID) {
        @try {
            [sendWrap setValue:clientMsgID forKey:@"m_nsClientMsgID"];
            didSetClientID = YES;
        } @catch (__unused NSException *exceptionClientIDKVCUpper) {
        }
    }

    if (!didSetClientID) {
        @try {
            [sendWrap setValue:clientMsgID forKey:@"m_nsClientMsgId"];
            didSetClientID = YES;
        } @catch (__unused NSException *exceptionClientIDKVCLower) {
        }
    }

    if (didSetClientID) {
        WCPLLogDebug(@"Repeat send clientMsgID refreshed: scene=%@ clientMsgID=%@",
                     sceneTag ?: @"(nil)",
                     clientMsgID);
    }
}

static void wcpl_resetSendWrapIdentity(CMessageWrap *sendWrap) {
    if (!sendWrap) {
        return;
    }

    if ([sendWrap respondsToSelector:@selector(setM_uiMesLocalID:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiMesLocalID:), 0);
        } @catch (__unused NSException *exceptionLocalId) {
        }
    }
    @try {
        [sendWrap setValue:@(0) forKey:@"m_uiMesLocalID"];
    } @catch (__unused NSException *exceptionLocalIdKVC) {
    }

    if ([sendWrap respondsToSelector:@selector(setM_n64MesSvrID:)]) {
        @try {
            ((void (*)(id, SEL, long long))objc_msgSend)(sendWrap, @selector(setM_n64MesSvrID:), 0);
        } @catch (__unused NSException *exceptionSvrId) {
        }
    }
    @try {
        [sendWrap setValue:@((long long)0) forKey:@"m_n64MesSvrID"];
    } @catch (__unused NSException *exceptionSvrIdKVC) {
    }

    if ([sendWrap respondsToSelector:@selector(setM_uiStatus:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiStatus:), 0);
        } @catch (__unused NSException *exceptionStatus) {
        }
    }
    @try {
        [sendWrap setValue:@(0) forKey:@"m_uiStatus"];
    } @catch (__unused NSException *exceptionStatusKVC) {
    }

    unsigned int now = (unsigned int)[[NSDate date] timeIntervalSince1970];
    if ([sendWrap respondsToSelector:@selector(setM_uiCreateTime:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiCreateTime:), now);
        } @catch (__unused NSException *exceptionCreateTime) {
        }
    }

    if ([sendWrap respondsToSelector:@selector(setM_uiSendTime:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiSendTime:), now);
        } @catch (__unused NSException *exceptionSendTime) {
        }
    }
}

static void wcpl_prepareSendWrapRoute(CMessageWrap *sendWrap,
                                      NSString *chatName,
                                      NSString *selfUserName,
                                      NSString *sceneTag) {
    if (!(sendWrap && chatName.length > 0)) {
        return;
    }

    if ([sendWrap respondsToSelector:@selector(setM_nsToUsr:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsToUsr:), chatName);
        } @catch (__unused NSException *exceptionTo) {
        }
    }

    if (selfUserName.length > 0 && [sendWrap respondsToSelector:@selector(setM_nsFromUsr:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsFromUsr:), selfUserName);
        } @catch (__unused NSException *exceptionFrom) {
        }
    }

    // 设置发送者身份
    if ([sendWrap respondsToSelector:@selector(setM_uiIsSenderStatus:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiIsSenderStatus:), 1);
        } @catch (__unused NSException *exceptionSenderStatus) {
        }
    }

    // 主动发送场景 realChatUsr 保持空，避免被误判为"代他人发言"
    if ([sendWrap respondsToSelector:@selector(setM_nsRealChatUsr:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsRealChatUsr:), nil);
        } @catch (__unused NSException *exceptionReal) {
        }
    }

    NSString *clientMsgID = wcpl_generateRepeatClientMsgID(selfUserName);
    wcpl_applyClientMsgIDToSendWrap(sendWrap, clientMsgID, sceneTag);

    @try {
        [sendWrap setValue:@(sendWrap.m_uiMessageType) forKey:@"m_uiMsgType"];
    } @catch (__unused NSException *exceptionMsgType) {
    }

    WCPLLogDebug(@"Repeat send route prepared: scene=%@ msg=%@ to=%@ from=%@ senderStatus=%u",
                 sceneTag ?: @"(nil)",
                 wcpl_repeatMessageDebugInfo(sendWrap),
                 sendWrap.m_nsToUsr ?: @"(nil)",
                 sendWrap.m_nsFromUsr ?: @"(nil)",
                 sendWrap.m_uiIsSenderStatus);
}

static CMessageWrap *wcpl_buildFreshQuoteResendWrap(CMessageWrap *msgWrap,
                                                    NSString *chatName,
                                                    NSString *selfUserName,
                                                    NSString *sceneTag) {
    if (!(msgWrap && chatName.length > 0) || msgWrap.m_uiMessageType != 49) {
        return nil;
    }

    Class wrapClass = objc_getClass("CMessageWrap");
    if (!wrapClass) {
        return nil;
    }

    CMessageWrap *sendWrap = nil;
    if ([wrapClass instancesRespondToSelector:@selector(initWithMsgType:)]) {
        @try {
            id allocated = [wrapClass alloc];
            id created = ((id (*)(id, SEL, long long))objc_msgSend)(allocated,
                                                                     @selector(initWithMsgType:),
                                                                     (long long)49);
            if ([created isKindOfClass:%c(CMessageWrap)]) {
                sendWrap = (CMessageWrap *)created;
            }
        } @catch (__unused NSException *exceptionCreateWithType) {
            sendWrap = nil;
        }
    }

    if (!sendWrap) {
        @try {
            id created = [[wrapClass alloc] init];
            if ([created isKindOfClass:%c(CMessageWrap)]) {
                sendWrap = (CMessageWrap *)created;
            }
        } @catch (__unused NSException *exceptionCreatePlain) {
            sendWrap = nil;
        }
    }

    if (!sendWrap) {
        return nil;
    }

    NSString *quoteContent = [msgWrap.m_nsContent isKindOfClass:[NSString class]] ? msgWrap.m_nsContent : @"";
    if ([sendWrap respondsToSelector:@selector(setM_nsContent:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsContent:), quoteContent);
        } @catch (__unused NSException *exceptionSetContent) {
        }
    }

    if (selfUserName.length > 0 && [sendWrap respondsToSelector:@selector(setM_nsFromUsr:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsFromUsr:), selfUserName);
        } @catch (__unused NSException *exceptionFrom) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_nsToUsr:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsToUsr:), chatName);
        } @catch (__unused NSException *exceptionTo) {
        }
    }

    unsigned int now = (unsigned int)[[NSDate date] timeIntervalSince1970];
    if ([sendWrap respondsToSelector:@selector(setM_uiCreateTime:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiCreateTime:), now);
        } @catch (__unused NSException *exceptionCreateTime) {
        }
    }

    NSString *clientMsgID = wcpl_generateRepeatClientMsgID(selfUserName);
    wcpl_applyClientMsgIDToSendWrap(sendWrap, clientMsgID, sceneTag);

    if ([sendWrap respondsToSelector:@selector(setM_uiMessageType:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiMessageType:), 49);
        } @catch (__unused NSException *exceptionSetType) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiStatus:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiStatus:), 0);
        } @catch (__unused NSException *exceptionSetStatus) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiMesLocalID:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiMesLocalID:), 0);
        } @catch (__unused NSException *exceptionSetLocal) {
        }
    }
    if ([sendWrap respondsToSelector:@selector(setM_n64MesSvrID:)]) {
        @try {
            ((void (*)(id, SEL, long long))objc_msgSend)(sendWrap, @selector(setM_n64MesSvrID:), 0);
        } @catch (__unused NSException *exceptionSetSvr) {
        }
    }

    @try {
        [sendWrap setValue:@(49) forKey:@"m_uiMessageType"];
    } @catch (__unused NSException *exceptionTypeKVC) {
    }

    @try {
        [sendWrap setValue:@(49) forKey:@"m_uiMsgType"];
    } @catch (__unused NSException *exceptionMsgTypeKVC) {
    }
    @try {
        [sendWrap setValue:@(0) forKey:@"m_uiStatus"];
    } @catch (__unused NSException *exceptionStatusKVC) {
    }
    @try {
        [sendWrap setValue:@(0) forKey:@"m_uiMesLocalID"];
    } @catch (__unused NSException *exceptionLocalKVC) {
    }
    @try {
        [sendWrap setValue:@((long long)0) forKey:@"m_n64MesSvrID"];
    } @catch (__unused NSException *exceptionSvrKVC) {
    }

    BOOL hasReferMsg = (quoteContent.length > 0 &&
                        [quoteContent rangeOfString:@"<refermsg" options:NSCaseInsensitiveSearch].location != NSNotFound);
    WCPLLogDebug(@"Repeat quote fresh wrap ready: scene=%@ src=%@ dst=%@ contentLen=%lu hasRefer=%d clientMsgID=%@",
                 sceneTag ?: @"(nil)",
                 wcpl_repeatMessageDebugInfo(msgWrap),
                 wcpl_repeatMessageDebugInfo(sendWrap),
                 (unsigned long)([sendWrap.m_nsContent isKindOfClass:[NSString class]] ? sendWrap.m_nsContent.length : 0),
                 hasReferMsg ? 1 : 0,
                 clientMsgID ?: @"(nil)");
    return sendWrap;
}

static CMessageWrap *wcpl_buildDetachedSendWrap(CMessageWrap *msgWrap, NSString *sceneTag) {
    if (!msgWrap) {
        return nil;
    }

    CMessageWrap *sendWrap = nil;
    BOOL usedCopyPath = NO;

    if ([msgWrap respondsToSelector:@selector(copy)]) {
        @try {
            id copiedWrap = [msgWrap copy];
            if ([copiedWrap isKindOfClass:%c(CMessageWrap)] && copiedWrap != msgWrap) {
                sendWrap = (CMessageWrap *)copiedWrap;
                usedCopyPath = YES;
            }
        } @catch (__unused NSException *exceptionCopy) {
        }
    }

    if (!sendWrap) {
        Class wrapClass = objc_getClass("CMessageWrap");
        if (wrapClass && [wrapClass instancesRespondToSelector:@selector(initWithMsgType:)]) {
            @try {
                id allocated = [wrapClass alloc];
                id created = ((id (*)(id, SEL, long long))objc_msgSend)(allocated,
                                                                          @selector(initWithMsgType:),
                                                                          (long long)msgWrap.m_uiMessageType);
                if ([created isKindOfClass:%c(CMessageWrap)]) {
                    sendWrap = (CMessageWrap *)created;
                }
            } @catch (__unused NSException *exceptionCreate) {
                sendWrap = nil;
            }
        }

        if (sendWrap && [msgWrap respondsToSelector:@selector(copyToMsg:)]) {
            @try {
                ((void (*)(id, SEL, id))objc_msgSend)(msgWrap, @selector(copyToMsg:), sendWrap);
                usedCopyPath = YES;
            } @catch (__unused NSException *exceptionCopyTo) {
            }
        }

        if (sendWrap && !usedCopyPath) {
            if ([sendWrap respondsToSelector:@selector(setM_uiMessageType:)]) {
                @try {
                    ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiMessageType:), msgWrap.m_uiMessageType);
                } @catch (__unused NSException *exceptionType) {
                }
            }
            if ([sendWrap respondsToSelector:@selector(setM_nsContent:)]) {
                @try {
                    ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsContent:), msgWrap.m_nsContent);
                } @catch (__unused NSException *exceptionContent) {
                }
            }
            if ([sendWrap respondsToSelector:@selector(setM_nsMsgSource:)]) {
                @try {
                    ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsMsgSource:), msgWrap.m_nsMsgSource);
                } @catch (__unused NSException *exceptionSource) {
                }
            }
            if ([sendWrap respondsToSelector:@selector(setM_nsEmoticonMD5:)]) {
                @try {
                    ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsEmoticonMD5:), msgWrap.m_nsEmoticonMD5);
                } @catch (__unused NSException *exceptionMd5) {
                }
            }
        }
    }

    if (!(sendWrap && sendWrap != msgWrap)) {
        WCPLLogWarning(@"Repeat send wrap build failed: scene=%@ msg=%@ src=%p dst=%p",
                       sceneTag ?: @"(nil)",
                       wcpl_repeatMessageDebugInfo(msgWrap),
                       msgWrap,
                       sendWrap);
        return nil;
    }

    wcpl_resetSendWrapIdentity(sendWrap);
    WCPLLogDebug(@"Repeat send wrap ready: scene=%@ src=%p dst=%p srcMsg=%@ dstMsg=%@",
                 sceneTag ?: @"(nil)",
                 msgWrap,
                 sendWrap,
                 wcpl_repeatMessageDebugInfo(msgWrap),
                 wcpl_repeatMessageDebugInfo(sendWrap));
    return sendWrap;
}

static BOOL wcpl_sceneTagLooksLikeOtherMedia(NSString *sceneTag) {
    if (![sceneTag isKindOfClass:[NSString class]] || sceneTag.length == 0) {
        return NO;
    }
    return ([sceneTag rangeOfString:@"other" options:NSCaseInsensitiveSearch].location != NSNotFound);
}

static BOOL wcpl_sceneTagLooksLikeVideoOther(NSString *sceneTag) {
    if (![sceneTag isKindOfClass:[NSString class]] || sceneTag.length == 0) {
        return NO;
    }
    BOOL containsVideo = ([sceneTag rangeOfString:@"video" options:NSCaseInsensitiveSearch].location != NSNotFound);
    BOOL containsOther = ([sceneTag rangeOfString:@"other" options:NSCaseInsensitiveSearch].location != NSNotFound);
    return containsVideo && containsOther;
}

static BOOL wcpl_sceneTagLooksLikeAnyVideo(NSString *sceneTag) {
    if (![sceneTag isKindOfClass:[NSString class]] || sceneTag.length == 0) {
        return NO;
    }
    return ([sceneTag rangeOfString:@"video" options:NSCaseInsensitiveSearch].location != NSNotFound);
}

static BOOL wcpl_hasVideoIdentityCollision(CMessageWrap *originWrap, CMessageWrap *sendWrap) {
    if (!(originWrap && sendWrap) || originWrap.m_uiMessageType != 43) {
        return NO;
    }
    unsigned int originLocalID = originWrap.m_uiMesLocalID;
    long long originSvrID = originWrap.m_n64MesSvrID;
    BOOL localCollision = (originLocalID > 0 && sendWrap.m_uiMesLocalID == originLocalID);
    BOOL svrCollision = (originSvrID > 0 && sendWrap.m_n64MesSvrID == originSvrID);
    return localCollision || svrCollision;
}

static BOOL wcpl_acceptNativeResendResult(CMessageWrap *originWrap,
                                          CMessageWrap *sendWrap,
                                          NSString *sceneTag,
                                          NSString *flowTag) {
    if (!(originWrap && sendWrap)) {
        return YES;
    }

    if (originWrap.m_uiMessageType == 43 && wcpl_sceneTagLooksLikeVideoOther(sceneTag) &&
        sendWrap.m_uiMesLocalID == 0 && sendWrap.m_n64MesSvrID == 0) {
        WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=%@ origin=%@ send=%@ branch_decision=reject_native_pseudo_success error/fallback_reason=local_svr_zero_after_resend",
                       sceneTag ?: @"(nil)",
                       flowTag ?: @"(nil)",
                       wcpl_repeatMessageDebugInfo(originWrap),
                       wcpl_repeatMessageDebugInfo(sendWrap));
        return NO;
    }

    if (originWrap.m_uiMessageType == 43 && wcpl_sceneTagLooksLikeAnyVideo(sceneTag) &&
        sendWrap.m_uiMesLocalID == 0 && sendWrap.m_n64MesSvrID == 0) {
        WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=%@ origin=%@ send=%@ branch_decision=reject_video_zero_identity error/fallback_reason=local_svr_zero_after_resend",
                       sceneTag ?: @"(nil)",
                       flowTag ?: @"(nil)",
                       wcpl_repeatMessageDebugInfo(originWrap),
                       wcpl_repeatMessageDebugInfo(sendWrap));
        return NO;
    }

    BOOL isVoiceScene = (originWrap.m_uiMessageType == 34 &&
                         [sceneTag isKindOfClass:[NSString class]] &&
                         [sceneTag rangeOfString:@"voice" options:NSCaseInsensitiveSearch].location != NSNotFound);
    if (isVoiceScene && sendWrap.m_uiMesLocalID == 0 && sendWrap.m_n64MesSvrID == 0) {
        WCPLLogWarning(@"Repeat voice pseudo-success rejected: scene=%@ flow=%@ origin=%@ send=%@",
                       sceneTag ?: @"(nil)",
                       flowTag ?: @"(nil)",
                       wcpl_repeatMessageDebugInfo(originWrap),
                       wcpl_repeatMessageDebugInfo(sendWrap));
        return NO;
    }

    return YES;
}

static BOOL wcpl_probeVideoLocalAsset(CMessageWrap *msgWrap,
                                      NSString **pathOut,
                                      unsigned long long *sizeOut) {
    if (pathOut) {
        *pathOut = nil;
    }
    if (sizeOut) {
        *sizeOut = 0;
    }
    if (!msgWrap) {
        return NO;
    }

    NSMutableArray<NSString *> *candidates = [NSMutableArray array];
    void (^appendCandidate)(id) = ^(id value) {
        if ([value isKindOfClass:[NSString class]]) {
            NSString *path = wcpl_trimTextForRepeat((NSString *)value);
            if (path.length > 0 && ![candidates containsObject:path]) {
                [candidates addObject:path];
            }
        }
    };

    Class wrapClass = objc_getClass("CMessageWrap");
    NSArray<NSString *> *classSelectors = @[
        @"GetPathOfRawOrCompressVideo:",
        @"GetPathOfMesVideoWithMessageWrap:",
        @"GetPathOfRawVideoWithMessageWrap:",
        @"GetTempPathOfMesVideoWithMessageWrap:",
        @"GetTempPathOfRawVideoWithMessageWrap:"
    ];
    for (NSString *selectorName in classSelectors) {
        SEL selector = NSSelectorFromString(selectorName);
        if (!(selector && wrapClass && [wrapClass respondsToSelector:selector])) {
            continue;
        }
        @try {
            id value = ((id (*)(id, SEL, id))objc_msgSend)(wrapClass, selector, msgWrap);
            appendCandidate(value);
        } @catch (__unused NSException *exceptionClass) {
        }
    }

    NSArray<NSString *> *instanceSelectors = @[
        @"getFormatVideoPath",
        @"getTempVideoPath",
        @"GetCdnDownloadPathOfVideo",
        @"GetCdnDownloadThumbPathOfVideo"
    ];
    for (NSString *selectorName in instanceSelectors) {
        SEL selector = NSSelectorFromString(selectorName);
        if (!(selector && [msgWrap respondsToSelector:selector])) {
            continue;
        }
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(msgWrap, selector);
            appendCandidate(value);
        } @catch (__unused NSException *exceptionInstance) {
        }
    }

    NSString *bestPath = candidates.firstObject;
    unsigned long long bestSize = 0;
    for (NSString *path in candidates) {
        NSDictionary *attrs = [[NSFileManager defaultManager] attributesOfItemAtPath:path error:NULL];
        NSNumber *fileSize = [attrs isKindOfClass:[NSDictionary class]] ? attrs[NSFileSize] : nil;
        unsigned long long currentSize = fileSize ? fileSize.unsignedLongLongValue : 0;
        if (currentSize > 0) {
            bestPath = path;
            bestSize = currentSize;
            break;
        }
    }

    if (pathOut) {
        *pathOut = bestPath;
    }
    if (sizeOut) {
        *sizeOut = bestSize;
    }
    return (bestPath.length > 0 && bestSize > 0);
}

static unsigned long long wcpl_getSendMessageQueueCount(BOOL *availableOut) {
    if (availableOut) {
        *availableOut = NO;
    }

    id sendMessageMgr = WCPLGetService(objc_getClass("SendMessageMgr"));
    if (!(sendMessageMgr && [sendMessageMgr respondsToSelector:@selector(GetCountOfSendMessage)])) {
        return 0;
    }

    @try {
        unsigned long long count = ((unsigned long long (*)(id, SEL))objc_msgSend)(sendMessageMgr, @selector(GetCountOfSendMessage));
        if (availableOut) {
            *availableOut = YES;
        }
        return count;
    } @catch (__unused NSException *exceptionQueueCount) {
    }

    return 0;
}

static BOOL wcpl_repeatNativeResendWithWrap(CMessageWrap *originWrap,
                                            CMessageWrap *sendWrap,
                                            NSString *chatName,
                                            BaseMsgContentViewController *chatVC,
                                            NSString *sceneTag) {
    if (!(originWrap && sendWrap) || chatName.length == 0) {
        return NO;
    }

    NSString *scene = [sceneTag isKindOfClass:[NSString class]] ? sceneTag : @"message";

    if (originWrap.m_uiMessageType == 43 && wcpl_sceneTagLooksLikeVideoOther(scene)) {
        WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=native_resend origin=%@ branch_decision=skip_native_resend error/fallback_reason=avoid_empty_remote_video",
                       scene,
                       wcpl_repeatMessageDebugInfo(originWrap));
        return NO;
    }

    if (originWrap == sendWrap) {
        WCPLLogWarning(@"Repeat native resend blocked: scene=%@ reason=source_wrap_reused msg=%@ srcPtr=%p sendPtr=%p",
                       scene,
                       wcpl_repeatMessageDebugInfo(originWrap),
                       originWrap,
                       sendWrap);
        return NO;
    }

    if (wcpl_hasVideoIdentityCollision(originWrap, sendWrap)) {
        WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-DELETE module=repeat.video scene=%@ input=origin(local=%u svr=%lld ptr=%p) send(local=%u svr=%lld ptr=%p) branch_decision=block_native_resend error/fallback_reason=identity_collision",
                       scene,
                       originWrap.m_uiMesLocalID,
                       originWrap.m_n64MesSvrID,
                       originWrap,
                       sendWrap.m_uiMesLocalID,
                       sendWrap.m_n64MesSvrID,
                       sendWrap);
        return NO;
    }

    id messageMgr = WCPLGetService(objc_getClass("CMessageMgr"));
    BOOL preferMessageMgrFirst = (originWrap.m_uiMessageType == 49);

    BOOL (^tryResendViaMessageMgr)(void) = ^BOOL {
        if (!(messageMgr && [messageMgr respondsToSelector:@selector(ResendMsg:MsgWrap:)])) {
            return NO;
        }
        @try {
            ((void (*)(id, SEL, id, id))objc_msgSend)(messageMgr, @selector(ResendMsg:MsgWrap:), chatName, sendWrap);
            WCPLLogInfo(@"Repeat sent: flow=native_resend_messagemgr scene=%@ msg=%@ chat=%@ send=%@ srcPtr=%p sendPtr=%p",
                        scene,
                        wcpl_repeatMessageDebugInfo(originWrap),
                        chatName,
                        wcpl_repeatMessageDebugInfo(sendWrap),
                        originWrap,
                        sendWrap);
            return wcpl_acceptNativeResendResult(originWrap, sendWrap, scene, @"native_resend_messagemgr");
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Repeat native resend via messageMgr failed: scene=%@ reason=%@",
                           scene,
                           exception.reason ?: exception);
        }
        return NO;
    };

    BOOL (^tryResendViaMessageMgrLegacy)(void) = ^BOOL {
        if (!(messageMgr && [messageMgr respondsToSelector:@selector(ReSendMessage:MsgWrap:)])) {
            return NO;
        }
        @try {
            ((void (*)(id, SEL, id, id))objc_msgSend)(messageMgr, @selector(ReSendMessage:MsgWrap:), chatName, sendWrap);
            WCPLLogInfo(@"Repeat sent: flow=native_resend_resendmessage scene=%@ msg=%@ chat=%@ send=%@ srcPtr=%p sendPtr=%p",
                        scene,
                        wcpl_repeatMessageDebugInfo(originWrap),
                        chatName,
                        wcpl_repeatMessageDebugInfo(sendWrap),
                        originWrap,
                        sendWrap);
            return wcpl_acceptNativeResendResult(originWrap, sendWrap, scene, @"native_resend_resendmessage");
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Repeat native ReSendMessage failed: scene=%@ reason=%@",
                           scene,
                           exception.reason ?: exception);
        }
        return NO;
    };

    BOOL (^tryResendViaChatVC)(void) = ^BOOL {
        if (!(chatVC && [chatVC respondsToSelector:@selector(ResendMsg:MsgWrap:)])) {
            return NO;
        }
        @try {
            ((void (*)(id, SEL, id, id))objc_msgSend)(chatVC, @selector(ResendMsg:MsgWrap:), chatName, sendWrap);
            WCPLLogInfo(@"Repeat sent: flow=native_resend_chatvc scene=%@ msg=%@ chat=%@ send=%@ srcPtr=%p sendPtr=%p",
                        scene,
                        wcpl_repeatMessageDebugInfo(originWrap),
                        chatName,
                        wcpl_repeatMessageDebugInfo(sendWrap),
                        originWrap,
                        sendWrap);
            return wcpl_acceptNativeResendResult(originWrap, sendWrap, scene, @"native_resend_chatvc");
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Repeat native resend via chatVC failed: scene=%@ reason=%@",
                           scene,
                           exception.reason ?: exception);
        }
        return NO;
    };

    if (preferMessageMgrFirst) {
        if (tryResendViaMessageMgr() || tryResendViaMessageMgrLegacy() || tryResendViaChatVC()) {
            return YES;
        }
    } else {
        if (tryResendViaChatVC() || tryResendViaMessageMgr() || tryResendViaMessageMgrLegacy()) {
            return YES;
        }
    }

    return NO;
}

static BOOL wcpl_repeatNativeResendByDetachedWrap(CMessageWrap *msgWrap,
                                                  NSString *chatName,
                                                  BaseMsgContentViewController *chatVC,
                                                  NSString *sceneTag) {
    if (!msgWrap || chatName.length == 0) {
        return NO;
    }

    NSString *scene = [sceneTag isKindOfClass:[NSString class]] ? sceneTag : @"detached";
    CMessageWrap *sendWrap = wcpl_buildDetachedSendWrap(msgWrap, scene);
    if (!sendWrap) {
        WCPLLogWarning(@"Repeat detached resend skipped: scene=%@ msg=%@ reason=clone_failed",
                       scene,
                       wcpl_repeatMessageDebugInfo(msgWrap));
        return NO;
    }

    NSString *selfUserName = wcpl_currentSelfUserNameForRepeat();
    wcpl_prepareSendWrapRoute(sendWrap, chatName, selfUserName, scene);
    return wcpl_repeatNativeResendWithWrap(msgWrap, sendWrap, chatName, chatVC, scene);
}

static BOOL wcpl_repeatQuoteNativeResendFresh(CMessageWrap *msgWrap,
                                              NSString *chatName,
                                              BaseMsgContentViewController *chatVC,
                                              NSString *sceneTag) {
    if (!(msgWrap && chatName.length > 0) || msgWrap.m_uiMessageType != 49) {
        return NO;
    }

    NSString *scene = [sceneTag isKindOfClass:[NSString class]] ? sceneTag : @"quote_fresh";
    NSString *selfUserName = wcpl_currentSelfUserNameForRepeat();
    CMessageWrap *sendWrap = wcpl_buildFreshQuoteResendWrap(msgWrap, chatName, selfUserName, scene);
    if (!sendWrap) {
        WCPLLogWarning(@"Repeat quote fresh resend skipped: scene=%@ msg=%@ reason=fresh_wrap_create_failed",
                       scene,
                       wcpl_repeatMessageDebugInfo(msgWrap));
        return NO;
    }
    return wcpl_repeatNativeResendWithWrap(msgWrap, sendWrap, chatName, chatVC, scene);
}

static BOOL wcpl_repeatNativeResend(CMessageWrap *msgWrap,
                                    NSString *chatName,
                                    BaseMsgContentViewController *chatVC,
                                    NSString *sceneTag) {
    if (!msgWrap || chatName.length == 0) {
        return NO;
    }

    NSString *scene = [sceneTag isKindOfClass:[NSString class]] ? sceneTag : @"message";
    CMessageWrap *sendWrap = wcpl_buildDetachedSendWrap(msgWrap, scene);
    if (!sendWrap) {
        WCPLLogWarning(@"Repeat native resend skipped: scene=%@ msg=%@ reason=clone_failed_no_source_reuse",
                       scene,
                       wcpl_repeatMessageDebugInfo(msgWrap));
        return NO;
    }

    NSString *selfUserName = wcpl_currentSelfUserNameForRepeat();
    wcpl_prepareSendWrapRoute(sendWrap, chatName, selfUserName, scene);
    return wcpl_repeatNativeResendWithWrap(msgWrap, sendWrap, chatName, chatVC, scene);
}

static BOOL wcpl_repeatMediaBySendMessageMgr(CMessageWrap *msgWrap,
                                             NSString *chatName,
                                             NSString *sceneTag) {
    if (!msgWrap || chatName.length == 0) {
        return NO;
    }

    id sendMessageMgr = WCPLGetService(objc_getClass("SendMessageMgr"));
    if (!(sendMessageMgr && [sendMessageMgr respondsToSelector:@selector(AddMsgToSendTable:MsgWrap:)])) {
        return NO;
    }

    if (msgWrap.m_uiMessageType == 43 && wcpl_sceneTagLooksLikeVideoOther(sceneTag)) {
        WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=sendmsgmgr_media origin=%@ branch_decision=skip_sendmsgmgr error/fallback_reason=avoid_empty_remote_video",
                       sceneTag ?: @"media",
                       wcpl_repeatMessageDebugInfo(msgWrap));
        return NO;
    }

    CMessageWrap *sendWrap = wcpl_buildDetachedSendWrap(msgWrap, sceneTag ?: @"media");
    if (!sendWrap) {
        return NO;
    }

    NSString *selfUserName = wcpl_currentSelfUserNameForRepeat();
    wcpl_prepareSendWrapRoute(sendWrap, chatName, selfUserName, sceneTag ?: @"media");

    BOOL hasQueueCounter = (sendMessageMgr && [sendMessageMgr respondsToSelector:@selector(GetCountOfSendMessage)]);
    unsigned long long queueCountBefore = 0;
    if (hasQueueCounter) {
        @try {
            queueCountBefore = ((unsigned long long (*)(id, SEL))objc_msgSend)(sendMessageMgr, @selector(GetCountOfSendMessage));
        } @catch (__unused NSException *exceptionCountBefore) {
            hasQueueCounter = NO;
        }
    }

    @try {
        ((void (*)(id, SEL, id, id))objc_msgSend)(sendMessageMgr, @selector(AddMsgToSendTable:MsgWrap:), chatName, sendWrap);
        unsigned int sendLocalID = sendWrap.m_uiMesLocalID;
        long long sendSvrID = sendWrap.m_n64MesSvrID;
        unsigned int sendStatus = sendWrap.m_uiStatus;
        unsigned long long queueCountAfter = queueCountBefore;
        if (hasQueueCounter) {
            @try {
                queueCountAfter = ((unsigned long long (*)(id, SEL))objc_msgSend)(sendMessageMgr, @selector(GetCountOfSendMessage));
            } @catch (__unused NSException *exceptionCountAfter) {
                hasQueueCounter = NO;
            }
        }
        WCPLLogInfo(@"Repeat sent: flow=sendmsgmgr_media scene=%@ msg=%@ chat=%@ send=%@ srcPtr=%p sendPtr=%p",
                    sceneTag ?: @"media",
                    wcpl_repeatMessageDebugInfo(msgWrap),
                    chatName,
                    wcpl_repeatMessageDebugInfo(sendWrap),
                    msgWrap,
                    sendWrap);

        // type=49 在 AddMsgToSendTable 上经常返回“伪成功”（local/svr 仍为 0，且队列无变化）。
        // 此处严格判定为失败，交由后续 native resend 兜底，避免“点击无效”。
        if (msgWrap.m_uiMessageType == 49 && sendLocalID == 0 && sendSvrID == 0) {
            if (!hasQueueCounter || queueCountAfter <= queueCountBefore) {
                WCPLLogWarning(@"Repeat quote sendmsgmgr pseudo-success rejected: scene=%@ origin=%@ send=%@ status=%u queue_before=%llu queue_after=%llu",
                               sceneTag ?: @"media",
                               wcpl_repeatMessageDebugInfo(msgWrap),
                               wcpl_repeatMessageDebugInfo(sendWrap),
                               sendStatus,
                               queueCountBefore,
                               queueCountAfter);
                return NO;
            }
            WCPLLogWarning(@"Repeat quote sendmsgmgr accepted async: scene=%@ origin=%@ send=%@ status=%u queue_before=%llu queue_after=%llu",
                           sceneTag ?: @"media",
                           wcpl_repeatMessageDebugInfo(msgWrap),
                           wcpl_repeatMessageDebugInfo(sendWrap),
                           sendStatus,
                           queueCountBefore,
                           queueCountAfter);
            return YES;
        }

        if (wcpl_sceneTagLooksLikeAnyVideo(sceneTag) && sendLocalID == 0 && sendSvrID == 0) {
            if (!hasQueueCounter) {
                WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=sendmsgmgr_media origin=%@ send=%@ status=%u branch_decision=reject_sendmsg_async error/fallback_reason=local_svr_zero_and_queue_metric_unavailable",
                               sceneTag ?: @"media",
                               wcpl_repeatMessageDebugInfo(msgWrap),
                               wcpl_repeatMessageDebugInfo(sendWrap),
                               sendStatus);
                return NO;
            }
            if (hasQueueCounter && queueCountAfter <= queueCountBefore) {
                WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=sendmsgmgr_media origin=%@ send=%@ status=%u queue_before=%llu queue_after=%llu branch_decision=reject_sendmsg_async error/fallback_reason=local_svr_zero_and_queue_unchanged",
                               sceneTag ?: @"media",
                               wcpl_repeatMessageDebugInfo(msgWrap),
                               wcpl_repeatMessageDebugInfo(sendWrap),
                               sendStatus,
                               queueCountBefore,
                               queueCountAfter);
                return NO;
            }
            WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=sendmsgmgr_media origin=%@ send=%@ status=%u branch_decision=accept_sendmsg_async error/fallback_reason=local_svr_zero_wait_upload",
                           sceneTag ?: @"media",
                           wcpl_repeatMessageDebugInfo(msgWrap),
                           wcpl_repeatMessageDebugInfo(sendWrap),
                           sendStatus);
            return YES;
        }

        if (wcpl_sceneTagLooksLikeOtherMedia(sceneTag) && sendLocalID == 0 && sendSvrID == 0) {
            WCPLLogWarning(@"Repeat media queued without local id: scene=%@ msg=%@ send=%@ status=%u; treat as failed and fallback",
                           sceneTag ?: @"media",
                           wcpl_repeatMessageDebugInfo(msgWrap),
                           wcpl_repeatMessageDebugInfo(sendWrap),
                           sendStatus);
            return NO;
        }

        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"Repeat media via SendMessageMgr failed: scene=%@ msg=%@ chat=%@ reason=%@",
                       sceneTag ?: @"media",
                       wcpl_repeatMessageDebugInfo(msgWrap),
                       chatName,
                       exception.reason ?: exception);
    }

    return NO;
}

static BOOL wcpl_repeatTextBySendMessageMgrFresh(CMessageWrap *msgWrap,
                                                 NSString *chatName,
                                                 NSString *sceneTag) {
    if (!(msgWrap && chatName.length > 0) || msgWrap.m_uiMessageType != 1) {
        return NO;
    }

    NSString *repeatText = wcpl_repeatTextForMessageWrap(msgWrap);
    if (repeatText.length == 0) {
        return NO;
    }

    id sendMessageMgr = WCPLGetService(objc_getClass("SendMessageMgr"));
    if (!(sendMessageMgr && [sendMessageMgr respondsToSelector:@selector(AddMsgToSendTable:MsgWrap:)])) {
        return NO;
    }

    CMessageWrap *sendWrap = nil;
    @try {
        sendWrap = [[objc_getClass("CMessageWrap") alloc] initWithMsgType:1];
    } @catch (__unused NSException *exceptionInitTextWrap) {
        sendWrap = nil;
    }
    if (!sendWrap) {
        return NO;
    }

    sendWrap.m_uiMessageType = 1;
    sendWrap.m_nsContent = repeatText;
    NSString *selfUserName = wcpl_currentSelfUserNameForRepeat();
    wcpl_prepareSendWrapRoute(sendWrap, chatName, selfUserName, sceneTag ?: @"text_sendmsgmgr_fresh");

    BOOL queueCountAvailable = NO;
    unsigned long long queueBefore = wcpl_getSendMessageQueueCount(&queueCountAvailable);

    @try {
        ((void (*)(id, SEL, id, id))objc_msgSend)(sendMessageMgr,
                                                   @selector(AddMsgToSendTable:MsgWrap:),
                                                   chatName,
                                                   sendWrap);
        unsigned int sendStatus = sendWrap.m_uiStatus;
        unsigned int sendLocalID = sendWrap.m_uiMesLocalID;
        long long sendSvrID = sendWrap.m_n64MesSvrID;
        BOOL queueAfterAvailable = NO;
        unsigned long long queueAfter = wcpl_getSendMessageQueueCount(&queueAfterAvailable);
        BOOL queueIncreased = (queueCountAvailable && queueAfterAvailable && queueAfter > queueBefore);

        if (sendStatus == 5) {
            WCPLLogWarning(@"Repeat text sendmgr rejected: scene=%@ status=5 msg=%@",
                           sceneTag ?: @"text_sendmsgmgr_fresh",
                           wcpl_repeatMessageDebugInfo(msgWrap));
            return NO;
        }

        if (sendLocalID > 0 || sendSvrID > 0 || queueIncreased) {
            WCPLLogInfo(@"Repeat sent: flow=text_sendmsgmgr_fresh scene=%@ msg=%@ chat=%@ send=%@ status=%u queue_before=%llu queue_after=%llu",
                        sceneTag ?: @"text_sendmsgmgr_fresh",
                        wcpl_repeatMessageDebugInfo(msgWrap),
                        chatName ?: @"(nil)",
                        wcpl_repeatMessageDebugInfo(sendWrap),
                        sendStatus,
                        queueBefore,
                        queueAfter);
            return YES;
        }

        WCPLLogWarning(@"Repeat text sendmgr pseudo-success rejected: scene=%@ msg=%@ send=%@ status=%u queue_before=%llu queue_after=%llu",
                       sceneTag ?: @"text_sendmsgmgr_fresh",
                       wcpl_repeatMessageDebugInfo(msgWrap),
                       wcpl_repeatMessageDebugInfo(sendWrap),
                       sendStatus,
                       queueBefore,
                       queueAfter);
    } @catch (NSException *exception) {
        WCPLLogWarning(@"Repeat text via SendMessageMgr failed: scene=%@ reason=%@",
                       sceneTag ?: @"text_sendmsgmgr_fresh",
                       exception.reason ?: exception);
    }

    return NO;
}

static BOOL wcpl_repeatTextByLogicController(CMessageWrap *msgWrap,
                                             NSString *repeatText,
                                             id logicController,
                                             BaseMsgContentViewController *chatVC,
                                             NSString *sceneTag) {
    NSString *text = wcpl_trimTextForRepeat(repeatText);
    if (!(msgWrap && text.length > 0)) {
        return NO;
    }

    NSString *scene = [sceneTag isKindOfClass:[NSString class]] ? sceneTag : @"text_logic";

    NSMutableArray *targets = [NSMutableArray arrayWithCapacity:3];
    if (logicController) {
        [targets addObject:logicController];
    }
    id managerLogic = wcpl_quoteCurrentLogicControllerFromManager();
    if (managerLogic && managerLogic != logicController) {
        [targets addObject:managerLogic];
    }
    if (chatVC) {
        [targets addObject:chatVC];
    }

    for (id target in targets) {
        if (!target) {
            continue;
        }

        if ([target respondsToSelector:@selector(SendTextMessage:)]) {
            @try {
                ((void (*)(id, SEL, id))objc_msgSend)(target, @selector(SendTextMessage:), text);
                WCPLLogInfo(@"Repeat sent: flow=text_logiccontroller scene=%@ msg=%@ target=%@",
                            scene,
                            wcpl_repeatMessageDebugInfo(msgWrap),
                            NSStringFromClass([target class]));
                return YES;
            } @catch (NSException *exception) {
                WCPLLogWarning(@"Repeat text via SendTextMessage failed: scene=%@ target=%@ reason=%@",
                               scene,
                               NSStringFromClass([target class]),
                               exception.reason ?: exception);
            }
        }

        SEL externSelector = @selector(SendTextMessage:externInfo:);
        if ([target respondsToSelector:externSelector]) {
            @try {
                ((void (*)(id, SEL, id, id))objc_msgSend)(target, externSelector, text, nil);
                WCPLLogInfo(@"Repeat sent: flow=text_logiccontroller_extern scene=%@ msg=%@ target=%@",
                            scene,
                            wcpl_repeatMessageDebugInfo(msgWrap),
                            NSStringFromClass([target class]));
                return YES;
            } @catch (NSException *exception) {
                WCPLLogWarning(@"Repeat text via SendTextMessage:externInfo: failed: scene=%@ target=%@ reason=%@",
                               scene,
                               NSStringFromClass([target class]),
                               exception.reason ?: exception);
            }
        }
    }

    return NO;
}

static CMessageWrap *wcpl_extractForwardGeneratedWrap(id generated) {
    if (!generated) {
        return nil;
    }

    if ([generated isKindOfClass:%c(CMessageWrap)]) {
        return (CMessageWrap *)generated;
    }

    if ([generated respondsToSelector:@selector(msgWrap)]) {
        @try {
            id nested = ((id (*)(id, SEL))objc_msgSend)(generated, @selector(msgWrap));
            if ([nested isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)nested;
            }
        } @catch (__unused NSException *exceptionNestedWrap) {
        }
    }

    if ([generated isKindOfClass:[NSArray class]]) {
        NSArray *list = (NSArray *)generated;
        for (id item in list) {
            if ([item isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)item;
            }
            if ([item respondsToSelector:@selector(msgWrap)]) {
                @try {
                    id nested = ((id (*)(id, SEL))objc_msgSend)(item, @selector(msgWrap));
                    if ([nested isKindOfClass:%c(CMessageWrap)]) {
                        return (CMessageWrap *)nested;
                    }
                } @catch (__unused NSException *exceptionNestedListWrap) {
                }
            }
        }
    }

    if ([generated isKindOfClass:[NSDictionary class]]) {
        NSDictionary *dict = (NSDictionary *)generated;
        id nested = dict[@"msgWrap"];
        if ([nested isKindOfClass:%c(CMessageWrap)]) {
            return (CMessageWrap *)nested;
        }
    }

    return nil;
}

static BOOL wcpl_acceptVideoForwardResult(id sendResult,
                                          CMessageWrap *originWrap,
                                          BOOL hasQueueMetric,
                                          BOOL queueIncreased) {
    if (hasQueueMetric && queueIncreased) {
        return YES;
    }

    CMessageWrap *resultWrap = wcpl_extractForwardGeneratedWrap(sendResult);
    if (!resultWrap) {
        return NO;
    }

    if (wcpl_hasVideoIdentityCollision(originWrap, resultWrap)) {
        return NO;
    }

    BOOL hasLocalAsset = NO;
    if (resultWrap.m_uiMessageType == 43) {
        hasLocalAsset = wcpl_probeVideoLocalAsset(resultWrap, nil, nil);
        if (hasQueueMetric && !queueIncreased && !hasLocalAsset) {
            return NO;
        }
    }

    if (resultWrap.m_uiMesLocalID > 0 || resultWrap.m_n64MesSvrID > 0) {
        return YES;
    }

    return hasLocalAsset;
}

static BOOL wcpl_repeatVideoByCaptureInfo(id videoInfo,
                                          NSString *chatName,
                                          NSString *sceneTag,
                                          CMessageWrap *originWrap) {
    if (!videoInfo || chatName.length == 0) {
        return NO;
    }

    NSString *scene = ([sceneTag isKindOfClass:[NSString class]] && sceneTag.length > 0) ? sceneTag : @"video_forward";
    Class captureVideoInfoClass = objc_getClass("CaptureVideoInfo");
    NSString *videoInfoClassName = NSStringFromClass([videoInfo class]) ?: @"(nil)";
    BOOL classMatched = (captureVideoInfoClass && [videoInfo isKindOfClass:captureVideoInfoClass]);
    if (!classMatched) {
        WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_capture_videoinfo origin=%@ videoinfo_class=%@ branch_decision=compat_loose_class_match error/fallback_reason=capture_class_symbol_mismatch",
                       scene,
                       wcpl_repeatMessageDebugInfo(originWrap),
                       videoInfoClassName);
    }

    id messageMgr = WCPLGetService(objc_getClass("CMessageMgr"));
    if (!messageMgr) {
        WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_capture_videoinfo origin=%@ branch_decision=reject_capture_forward error/fallback_reason=message_mgr_unavailable",
                       scene,
                       wcpl_repeatMessageDebugInfo(originWrap));
        return NO;
    }

    NSString *selfUserName = wcpl_currentSelfUserNameForRepeat();
    NSString *fromUser = selfUserName.length > 0 ? selfUserName : chatName;

    BOOL hasQueueMetric = NO;
    unsigned long long queueBefore = wcpl_getSendMessageQueueCount(&hasQueueMetric);

    NSArray<NSString *> *selectorCandidates = @[
        @"AddVideoMsg:ToUsr:VideoInfo:MsgType:",
        @"AddVideoMsg:ToUsr:VideoInfo:",
        @"AddShortVideoMsg:ToUsr:VideoInfo:"
    ];

    for (NSString *selectorName in selectorCandidates) {
        SEL selector = NSSelectorFromString(selectorName);
        if (!(selector && [messageMgr respondsToSelector:selector])) {
            continue;
        }

        @try {
            id sendResult = nil;
            if ([selectorName isEqualToString:@"AddVideoMsg:ToUsr:VideoInfo:MsgType:"]) {
                sendResult = ((id (*)(id, SEL, id, id, id, unsigned int))objc_msgSend)(messageMgr,
                                                                                         selector,
                                                                                         fromUser,
                                                                                         chatName,
                                                                                         videoInfo,
                                                                                         (unsigned int)43);
            } else {
                sendResult = ((id (*)(id, SEL, id, id, id))objc_msgSend)(messageMgr,
                                                                          selector,
                                                                          fromUser,
                                                                          chatName,
                                                                          videoInfo);
            }

            BOOL hasQueueAfter = NO;
            unsigned long long queueAfter = wcpl_getSendMessageQueueCount(&hasQueueAfter);
            BOOL queueIncreased = (hasQueueMetric && hasQueueAfter && queueAfter > queueBefore);
            BOOL acceptResult = wcpl_acceptVideoForwardResult(sendResult,
                                                              originWrap,
                                                              (hasQueueMetric && hasQueueAfter),
                                                              queueIncreased);
            if (acceptResult) {
                CMessageWrap *sendWrap = [sendResult isKindOfClass:%c(CMessageWrap)] ? (CMessageWrap *)sendResult : nil;
                WCPLLogInfo(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_capture_videoinfo origin=%@ selector=%@ result_class=%@ queue_before=%llu queue_after=%llu send=%@ branch_decision=accept_capture_forward error/fallback_reason=none",
                            scene,
                            wcpl_repeatMessageDebugInfo(originWrap),
                            selectorName,
                            NSStringFromClass([sendResult class]) ?: @"(nil)",
                            queueBefore,
                            queueAfter,
                            sendWrap ? wcpl_repeatMessageDebugInfo(sendWrap) : @"(non_wrap)");
                return YES;
            }

            WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_capture_videoinfo origin=%@ selector=%@ result_class=%@ queue_before=%llu queue_after=%llu branch_decision=reject_capture_forward error/fallback_reason=empty_result_and_queue_unchanged",
                           scene,
                           wcpl_repeatMessageDebugInfo(originWrap),
                           selectorName,
                           NSStringFromClass([sendResult class]) ?: @"(nil)",
                           queueBefore,
                           queueAfter);
        } @catch (NSException *exceptionCapture) {
            WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_capture_videoinfo origin=%@ selector=%@ branch_decision=reject_capture_forward error/fallback_reason=%@",
                           scene,
                           wcpl_repeatMessageDebugInfo(originWrap),
                           selectorName,
                           exceptionCapture.reason ?: @"exception");
        }
    }

    return NO;
}


static BOOL wcpl_repeatVideoByForwardDispatch(CMessageWrap *msgWrap,
                                              NSString *chatName,
                                              NSString *sceneTag) {
    if (!msgWrap || chatName.length == 0) {
        return NO;
    }

    Class forwardUtilClass = objc_getClass("ForwardMsgUtil");
    if (!forwardUtilClass) {
        return NO;
    }

    NSString *scene = ([sceneTag isKindOfClass:[NSString class]] && sceneTag.length > 0) ? sceneTag : @"video_forward";
    id contact = wcpl_repeatContactForChatName(chatName, msgWrap);
    if (!contact) {
        WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_dispatch origin=%@ chat=%@ branch_decision=reject_forward_dispatch error/fallback_reason=contact_unavailable",
                       scene,
                       wcpl_repeatMessageDebugInfo(msgWrap),
                       chatName ?: @"(nil)");
        return NO;
    }

    BOOL hasQueueMetric = NO;
    unsigned long long queueBefore = wcpl_getSendMessageQueueCount(&hasQueueMetric);

    SEL sendMsgSelector = @selector(SendMsgWithOriMsg:Contact:ForwardType:EditImageAttr:);
    if ([forwardUtilClass respondsToSelector:sendMsgSelector]) {
        @try {
            id result = ((id (*)(id, SEL, id, id, unsigned int, id))objc_msgSend)(forwardUtilClass,
                                                                                   sendMsgSelector,
                                                                                   msgWrap,
                                                                                   contact,
                                                                                   (unsigned int)0,
                                                                                   nil);
            BOOL hasQueueAfter = NO;
            unsigned long long queueAfter = wcpl_getSendMessageQueueCount(&hasQueueAfter);
            BOOL queueIncreased = (hasQueueMetric && hasQueueAfter && queueAfter > queueBefore);
            BOOL acceptResult = wcpl_acceptVideoForwardResult(result,
                                                              msgWrap,
                                                              (hasQueueMetric && hasQueueAfter),
                                                              queueIncreased);
            if (!acceptResult) {
                WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_dispatch origin=%@ result_class=%@ queue_before=%llu queue_after=%llu branch_decision=reject_forward_dispatch_sendmsg error/fallback_reason=empty_result_and_queue_unchanged",
                               scene,
                               wcpl_repeatMessageDebugInfo(msgWrap),
                               NSStringFromClass([result class]) ?: @"(nil)",
                               queueBefore,
                               queueAfter);
                return NO;
            }
            WCPLLogInfo(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_dispatch origin=%@ result_class=%@ queue_before=%llu queue_after=%llu branch_decision=accept_forward_dispatch_sendmsg error/fallback_reason=none",
                        scene,
                        wcpl_repeatMessageDebugInfo(msgWrap),
                        NSStringFromClass([result class]) ?: @"(nil)",
                        queueBefore,
                        queueAfter);
            return YES;
        } @catch (NSException *exceptionSendMsg) {
            WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_dispatch origin=%@ branch_decision=reject_forward_dispatch_sendmsg error/fallback_reason=%@",
                           scene,
                           wcpl_repeatMessageDebugInfo(msgWrap),
                           exceptionSendMsg.reason ?: @"exception");
        }
    }

    SEL forward4Selector = @selector(ForwardMsg:ToContact:Scene:forwardType:);
    if ([forwardUtilClass respondsToSelector:forward4Selector]) {
        @try {
            ((void (*)(id, SEL, id, id, unsigned int, unsigned int))objc_msgSend)(forwardUtilClass,
                                                                                   forward4Selector,
                                                                                   msgWrap,
                                                                                   contact,
                                                                                   (unsigned int)0,
                                                                                   (unsigned int)0);
            BOOL hasQueueAfter = NO;
            unsigned long long queueAfter = wcpl_getSendMessageQueueCount(&hasQueueAfter);
            BOOL queueIncreased = (hasQueueMetric && hasQueueAfter && queueAfter > queueBefore);
            BOOL acceptResult = wcpl_acceptVideoForwardResult(nil,
                                                              msgWrap,
                                                              (hasQueueMetric && hasQueueAfter),
                                                              queueIncreased);
            if (!acceptResult) {
                WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_dispatch origin=%@ branch_decision=reject_forward_dispatch_api4 error/fallback_reason=queue_unchanged",
                               scene,
                               wcpl_repeatMessageDebugInfo(msgWrap));
                return NO;
            }
            WCPLLogInfo(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_dispatch origin=%@ branch_decision=accept_forward_dispatch_api4 error/fallback_reason=none",
                        scene,
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        } @catch (NSException *exceptionForward4) {
            WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_dispatch origin=%@ branch_decision=reject_forward_dispatch_api4 error/fallback_reason=%@",
                           scene,
                           wcpl_repeatMessageDebugInfo(msgWrap),
                           exceptionForward4.reason ?: @"exception");
        }
    }

    SEL forward3Selector = @selector(ForwardMsg:ToContact:Scene:);
    if ([forwardUtilClass respondsToSelector:forward3Selector]) {
        @try {
            ((void (*)(id, SEL, id, id, unsigned int))objc_msgSend)(forwardUtilClass,
                                                                    forward3Selector,
                                                                    msgWrap,
                                                                    contact,
                                                                    (unsigned int)0);
            BOOL hasQueueAfter = NO;
            unsigned long long queueAfter = wcpl_getSendMessageQueueCount(&hasQueueAfter);
            BOOL queueIncreased = (hasQueueMetric && hasQueueAfter && queueAfter > queueBefore);
            BOOL acceptResult = wcpl_acceptVideoForwardResult(nil,
                                                              msgWrap,
                                                              (hasQueueMetric && hasQueueAfter),
                                                              queueIncreased);
            if (!acceptResult) {
                WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_dispatch origin=%@ branch_decision=reject_forward_dispatch_api3 error/fallback_reason=queue_unchanged",
                               scene,
                               wcpl_repeatMessageDebugInfo(msgWrap));
                return NO;
            }
            WCPLLogInfo(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_dispatch origin=%@ branch_decision=accept_forward_dispatch_api3 error/fallback_reason=none",
                        scene,
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        } @catch (NSException *exceptionForward3) {
            WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_dispatch origin=%@ branch_decision=reject_forward_dispatch_api3 error/fallback_reason=%@",
                           scene,
                           wcpl_repeatMessageDebugInfo(msgWrap),
                           exceptionForward3.reason ?: @"exception");
        }
    }

    WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_dispatch origin=%@ branch_decision=reject_forward_dispatch error/fallback_reason=no_dispatch_selector",
                   scene,
                   wcpl_repeatMessageDebugInfo(msgWrap));
    return NO;
}

static BOOL wcpl_repeatVideoByForwardUtil(CMessageWrap *msgWrap,
                                          NSString *chatName,
                                          NSString *sceneTag) {
    if (!msgWrap || chatName.length == 0) {
        return NO;
    }

    Class forwardUtilClass = objc_getClass("ForwardMsgUtil");
    NSString *scene = ([sceneTag isKindOfClass:[NSString class]] && sceneTag.length > 0) ? sceneTag : @"video_forward";
    if (!forwardUtilClass) {
        WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_util origin=%@ branch_decision=reject_forward_capability error/fallback_reason=forward_util_class_missing",
                       scene,
                       wcpl_repeatMessageDebugInfo(msgWrap));
        return NO;
    }

    SEL specificSelector = @selector(GenForwardVideoFromMsgWrap:);
    SEL genericSelector = @selector(GenForwardMsgFromMsgWrap:ToContact:);
    BOOL hasSpecificSelector = [forwardUtilClass respondsToSelector:specificSelector];
    BOOL hasGenericSelector = [forwardUtilClass respondsToSelector:genericSelector];
    if (!hasSpecificSelector && !hasGenericSelector) {
        WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_util origin=%@ branch_decision=reject_forward_capability error/fallback_reason=no_forward_selector",
                       scene,
                       wcpl_repeatMessageDebugInfo(msgWrap));
        return NO;
    }

    id generated = nil;
    CMessageWrap *sendWrap = nil;
    if (hasSpecificSelector) {
        @try {
            generated = ((id (*)(id, SEL, id))objc_msgSend)(forwardUtilClass,
                                                            specificSelector,
                                                            msgWrap);
            sendWrap = wcpl_extractForwardGeneratedWrap(generated);
            if (!sendWrap && wcpl_repeatVideoByCaptureInfo(generated, chatName, scene, msgWrap)) {
                return YES;
            }
            if (generated && !sendWrap) {
                WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_util origin=%@ generated_class=%@ branch_decision=reject_forward_wrap error/fallback_reason=specific_generate_nonwrap",
                               scene,
                               wcpl_repeatMessageDebugInfo(msgWrap),
                               NSStringFromClass([generated class]) ?: @"(nil)");
            }
        } @catch (__unused NSException *exceptionGenerateSpecific) {
            generated = nil;
            sendWrap = nil;
        }
    }

    if (!sendWrap && hasGenericSelector) {
        id contact = wcpl_repeatContactForChatName(chatName, msgWrap);
        if (contact) {
            @try {
                generated = ((id (*)(id, SEL, id, id))objc_msgSend)(forwardUtilClass,
                                                                     genericSelector,
                                                                     msgWrap,
                                                                     contact);
                sendWrap = wcpl_extractForwardGeneratedWrap(generated);
                if (!sendWrap && wcpl_repeatVideoByCaptureInfo(generated, chatName, scene, msgWrap)) {
                    return YES;
                }
                if (sendWrap) {
                    WCPLLogInfo(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_util origin=%@ branch_decision=fallback_forward_generic error/fallback_reason=specific_generate_failed",
                                scene,
                                wcpl_repeatMessageDebugInfo(msgWrap));
                } else if (generated) {
                    WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_util origin=%@ generated_class=%@ branch_decision=reject_forward_wrap error/fallback_reason=generic_generate_nonwrap",
                                   scene,
                                   wcpl_repeatMessageDebugInfo(msgWrap),
                                   NSStringFromClass([generated class]) ?: @"(nil)");
                }
            } @catch (__unused NSException *exceptionGenerateGeneric) {
                generated = nil;
                sendWrap = nil;
            }
        } else {
            WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_util origin=%@ chat=%@ branch_decision=reject_forward_wrap error/fallback_reason=forward_contact_unavailable",
                           scene,
                           wcpl_repeatMessageDebugInfo(msgWrap),
                           chatName ?: @"(nil)");
        }
    }

    if (!sendWrap) {
        if (wcpl_repeatVideoByForwardDispatch(msgWrap, chatName, scene)) {
            return YES;
        }
        WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_util origin=%@ branch_decision=reject_forward_wrap error/fallback_reason=generate_wrap_failed",
                       scene,
                       wcpl_repeatMessageDebugInfo(msgWrap));
        return NO;
    }

    if (sendWrap == msgWrap) {
        WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_util origin=%@ branch_decision=reject_forward_wrap error/fallback_reason=same_wrap_instance",
                       scene,
                       wcpl_repeatMessageDebugInfo(msgWrap));
        return NO;
    }

    NSString *selfUserName = wcpl_currentSelfUserNameForRepeat();
    if (wcpl_hasVideoIdentityCollision(msgWrap, sendWrap)) {
        WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-DELETE module=repeat.video scene=%@ input=flow=forward_video_util origin=%@ send=%@ branch_decision=reset_forward_identity error/fallback_reason=identity_collision_before_send",
                       scene,
                       wcpl_repeatMessageDebugInfo(msgWrap),
                       wcpl_repeatMessageDebugInfo(sendWrap));
        wcpl_resetSendWrapIdentity(sendWrap);
    }
    wcpl_prepareSendWrapRoute(sendWrap, chatName, selfUserName, scene);

    id sendMessageMgr = WCPLGetService(objc_getClass("SendMessageMgr"));
    if (!(sendMessageMgr && [sendMessageMgr respondsToSelector:@selector(AddMsgToSendTable:MsgWrap:)])) {
        WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_util origin=%@ branch_decision=reject_forward_send error/fallback_reason=sendmsgmgr_unavailable",
                       scene,
                       wcpl_repeatMessageDebugInfo(msgWrap));
        return NO;
    }

    BOOL hasQueueMetric = NO;
    unsigned long long queueBefore = wcpl_getSendMessageQueueCount(&hasQueueMetric);

    @try {
        ((void (*)(id, SEL, id, id))objc_msgSend)(sendMessageMgr,
                                                   @selector(AddMsgToSendTable:MsgWrap:),
                                                   chatName,
                                                   sendWrap);
        BOOL hasQueueAfter = NO;
        unsigned long long queueAfter = wcpl_getSendMessageQueueCount(&hasQueueAfter);
        BOOL queueIncreased = (hasQueueMetric && hasQueueAfter && queueAfter > queueBefore);
        BOOL acceptResult = wcpl_acceptVideoForwardResult(sendWrap,
                                                          msgWrap,
                                                          (hasQueueMetric && hasQueueAfter),
                                                          queueIncreased);
        if (!acceptResult) {
            WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_util origin=%@ send=%@ chat=%@ branch_decision=reject_forward_send error/fallback_reason=empty_result_and_queue_unchanged",
                           scene,
                           wcpl_repeatMessageDebugInfo(msgWrap),
                           wcpl_repeatMessageDebugInfo(sendWrap),
                           chatName ?: @"(nil)");
            return NO;
        }
        WCPLLogInfo(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_util origin=%@ send=%@ chat=%@ branch_decision=accept_forward_send error/fallback_reason=none",
                    scene,
                    wcpl_repeatMessageDebugInfo(msgWrap),
                    wcpl_repeatMessageDebugInfo(sendWrap),
                    chatName ?: @"(nil)");
        return YES;
    } @catch (NSException *exceptionSend) {
        WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=flow=forward_video_util origin=%@ chat=%@ branch_decision=reject_forward_send error/fallback_reason=%@",
                       scene,
                       wcpl_repeatMessageDebugInfo(msgWrap),
                       chatName ?: @"(nil)",
                       exceptionSend.reason ?: @"exception");
    }

    return NO;
}

static NSString *wcpl_repeatAudioPathForMessage(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return nil;
    }

    Class msgWrapClass = objc_getClass("CMessageWrap");
    if (!(msgWrapClass && [msgWrapClass respondsToSelector:@selector(getPathOfAudio:)])) {
        return nil;
    }

    @try {
        id value = ((id (*)(id, SEL, id))objc_msgSend)(msgWrapClass, @selector(getPathOfAudio:), msgWrap);
        if ([value isKindOfClass:[NSString class]]) {
            return (NSString *)value;
        }
    } @catch (__unused NSException *exception) {
    }

    return nil;
}

// ── 语音复读公共辅助 ──

static NSData *wcpl_loadVoiceAudioData(CMessageWrap *msgWrap, NSString **outPath) {
    if (outPath) { *outPath = nil; }
    if (!msgWrap) { return nil; }

    NSString *audioPath = wcpl_repeatAudioPathForMessage(msgWrap);
    if (outPath) { *outPath = audioPath; }
    if (audioPath.length == 0) { return nil; }

    NSData *data = [NSData dataWithContentsOfFile:audioPath];
    return (data.length > 0) ? data : nil;
}

static unsigned int wcpl_generateSendMsgTime(void) {
    id sessionMgr = WCPLGetService(objc_getClass("MMNewSessionMgr"));
    if (sessionMgr && [sessionMgr respondsToSelector:@selector(GenSendMsgTime)]) {
        @try {
            return ((unsigned int (*)(id, SEL))objc_msgSend)(sessionMgr, @selector(GenSendMsgTime));
        } @catch (__unused NSException *exceptionSendTime) {
        }
    }
    return (unsigned int)[[NSDate date] timeIntervalSince1970];
}

static unsigned int wcpl_extractVoiceAttrUInt(NSString *xml, NSString *attrName) {
    if (![xml isKindOfClass:[NSString class]] || xml.length == 0 ||
        ![attrName isKindOfClass:[NSString class]] || attrName.length == 0) {
        return 0;
    }

    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:
                                  [NSString stringWithFormat:@"%@\\s*=\\s*\\\"([0-9]{1,8})\\\"", attrName]
                                                                           options:NSRegularExpressionCaseInsensitive
                                                                             error:nil];
    if (!regex) {
        return 0;
    }

    NSTextCheckingResult *match = [regex firstMatchInString:xml options:0 range:NSMakeRange(0, xml.length)];
    if (match && match.numberOfRanges >= 2) {
        NSRange valueRange = [match rangeAtIndex:1];
        if (valueRange.location != NSNotFound && valueRange.length > 0) {
            NSString *value = [xml substringWithRange:valueRange];
            unsigned long long parsed = strtoull(value.UTF8String, NULL, 10);
            if (parsed > 0 && parsed <= UINT_MAX) {
                return (unsigned int)parsed;
            }
        }
    }

    NSString *decodedXML = wcpl_decodeBasicXMLEntities(xml);
    if (decodedXML.length > 0 && ![decodedXML isEqualToString:xml]) {
        match = [regex firstMatchInString:decodedXML options:0 range:NSMakeRange(0, decodedXML.length)];
        if (match && match.numberOfRanges >= 2) {
            NSRange valueRange = [match rangeAtIndex:1];
            if (valueRange.location != NSNotFound && valueRange.length > 0) {
                NSString *value = [decodedXML substringWithRange:valueRange];
                unsigned long long parsed = strtoull(value.UTF8String, NULL, 10);
                if (parsed > 0 && parsed <= UINT_MAX) {
                    return (unsigned int)parsed;
                }
            }
        }
    }

    return 0;
}

static unsigned int wcpl_voiceLengthMsFromWrap(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return 0;
    }

    unsigned int lengthMs = wcpl_extractVoiceAttrUInt(msgWrap.m_nsContent, @"voicelength");
    if (lengthMs > 0) {
        return lengthMs;
    }

    unsigned int duration = 0;
    if ([msgWrap respondsToSelector:@selector(m_duration)]) {
        @try {
            duration = ((unsigned int (*)(id, SEL))objc_msgSend)(msgWrap, @selector(m_duration));
        } @catch (__unused NSException *exceptionDuration) {
            duration = 0;
        }
    }
    if (duration > 0) {
        if (duration > 300) {
            return duration;
        }
        return duration * 1000;
    }

    return 0;
}

static unsigned int wcpl_voiceTimeFromWrap(CMessageWrap *msgWrap) {
    if (!msgWrap) { return 1; }
    unsigned int t = 0;
    if ([msgWrap respondsToSelector:@selector(m_uiVoiceTime)]) {
        @try { t = ((unsigned int (*)(id, SEL))objc_msgSend)(msgWrap, @selector(m_uiVoiceTime)); }
        @catch (__unused NSException *e) {}
    }
    if (t > 300) {
        t = (t + 999) / 1000;
    }

    unsigned int contentLengthMs = wcpl_voiceLengthMsFromWrap(msgWrap);
    if ((t <= 1) && contentLengthMs > 0) {
        unsigned int parsedSeconds = (contentLengthMs + 999) / 1000;
        if (parsedSeconds > t) {
            t = parsedSeconds;
        }
    }

    return (t > 0) ? t : 1;
}

static unsigned int wcpl_voiceFormatFromWrap(CMessageWrap *msgWrap) {
    if (!msgWrap) { return 4; }
    unsigned int f = 0;
    if ([msgWrap respondsToSelector:@selector(m_uiVoiceFormat)]) {
        @try { f = ((unsigned int (*)(id, SEL))objc_msgSend)(msgWrap, @selector(m_uiVoiceFormat)); }
        @catch (__unused NSException *e) {}
    }
    if (f == 0) {
        f = wcpl_extractVoiceAttrUInt(msgWrap.m_nsContent, @"voiceformat");
    }
    return (f > 0) ? f : 4;
}

static NSString *wcpl_buildMinimalVoiceContent(unsigned int voiceLengthMs, unsigned int voiceFormat) {
    unsigned int lengthMs = (voiceLengthMs > 0) ? voiceLengthMs : 1000;
    unsigned int fmt = (voiceFormat > 0) ? voiceFormat : 4;
    return [NSString stringWithFormat:@"<msg><voicemsg voicelength=\"%u\" voiceformat=\"%u\" forwardflag=\"0\" /></msg>",
            lengthMs, fmt];
}

static void wcpl_applyVoiceExtendInfoToWrap(CMessageWrap *sendWrap,
                                             NSData *audioData,
                                             unsigned int voiceTime,
                                             unsigned int voiceFormat) {
    if (!sendWrap) {
        return;
    }

    Class extendClass = objc_getClass("CExtendInfoOfVoiceMsg");
    if (!extendClass) {
        return;
    }

    id extendInfo = nil;
    @try {
        extendInfo = [[extendClass alloc] init];
    } @catch (__unused NSException *exceptionAllocExtend) {
        extendInfo = nil;
    }
    if (!extendInfo) {
        return;
    }

    if (audioData && [extendInfo respondsToSelector:@selector(setM_dtVoice:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(extendInfo, @selector(setM_dtVoice:), audioData);
        } @catch (__unused NSException *exceptionDtVoice) {
        }
    }
    if ([extendInfo respondsToSelector:@selector(setM_uiVoiceTime:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(extendInfo, @selector(setM_uiVoiceTime:), voiceTime);
        } @catch (__unused NSException *exceptionVoiceTime) {
        }
    }
    if ([extendInfo respondsToSelector:@selector(setM_uiVoiceFormat:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(extendInfo, @selector(setM_uiVoiceFormat:), voiceFormat);
        } @catch (__unused NSException *exceptionVoiceFmt) {
        }
    }
    if ([extendInfo respondsToSelector:@selector(setM_uiVoiceForwardFlag:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(extendInfo, @selector(setM_uiVoiceForwardFlag:), 0);
        } @catch (__unused NSException *exceptionVoiceForward) {
        }
    }
    if ([extendInfo respondsToSelector:@selector(setM_uiVoiceCancelFlag:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(extendInfo, @selector(setM_uiVoiceCancelFlag:), 0);
        } @catch (__unused NSException *exceptionVoiceCancel) {
        }
    }
    if ([extendInfo respondsToSelector:@selector(setM_uiVoiceEndFlag:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(extendInfo, @selector(setM_uiVoiceEndFlag:), 1);
        } @catch (__unused NSException *exceptionVoiceEnd) {
        }
    }
    if ([extendInfo respondsToSelector:@selector(setM_refMessageWrap:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(extendInfo, @selector(setM_refMessageWrap:), sendWrap);
        } @catch (__unused NSException *exceptionRefWrap) {
        }
    }

    if ([sendWrap respondsToSelector:@selector(setM_extendInfoWithMsgType:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_extendInfoWithMsgType:), extendInfo);
        } @catch (__unused NSException *exceptionSetExt) {
        }
    }
}

static void wcpl_applyVoiceFieldsToWrap(CMessageWrap *sendWrap,
                                         CMessageWrap *sourceWrap,
                                         NSData *audioData,
                                         unsigned int voiceTime,
                                         unsigned int voiceFormat) {
    if (!sendWrap) { return; }

    if ([sendWrap respondsToSelector:@selector(setM_uiMessageType:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiMessageType:), 34); }
        @catch (__unused NSException *e) {}
    }
    if (audioData && [sendWrap respondsToSelector:@selector(setM_dtVoice:)]) {
        @try { ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_dtVoice:), audioData); }
        @catch (__unused NSException *e) {}
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiVoiceEndFlag:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiVoiceEndFlag:), 1); }
        @catch (__unused NSException *e) {}
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiVoiceCancelFlag:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiVoiceCancelFlag:), 0); }
        @catch (__unused NSException *e) {}
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiVoiceForwardFlag:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiVoiceForwardFlag:), 0); }
        @catch (__unused NSException *e) {}
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiVoiceTime:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiVoiceTime:), voiceTime); }
        @catch (__unused NSException *e) {}
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiVoiceFormat:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiVoiceFormat:), voiceFormat); }
        @catch (__unused NSException *e) {}
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiIsSenderStatus:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiIsSenderStatus:), 1); }
        @catch (__unused NSException *e) {}
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiStatus:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiStatus:), 1); }
        @catch (__unused NSException *e) {}
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiDownloadStatus:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiDownloadStatus:), 9); }
        @catch (__unused NSException *e) {}
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiCreateTime:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiCreateTime:), wcpl_generateSendMsgTime()); }
        @catch (__unused NSException *e) {}
    }
    unsigned int voiceLengthMs = wcpl_voiceLengthMsFromWrap(sourceWrap);
    if (voiceLengthMs == 0) {
        voiceLengthMs = voiceTime * 1000;
    }
    NSString *voiceContent = wcpl_buildMinimalVoiceContent(voiceLengthMs, voiceFormat);
    if ([sendWrap respondsToSelector:@selector(setM_nsContent:)]) {
        @try { ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsContent:), voiceContent); }
        @catch (__unused NSException *e) {}
    }
    if ([sendWrap respondsToSelector:@selector(setM_nsPushContent:)]) {
        @try { ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsPushContent:), @""); }
        @catch (__unused NSException *e) {}
    }
    if ([sendWrap respondsToSelector:@selector(setM_nsPushTitle:)]) {
        @try { ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsPushTitle:), @""); }
        @catch (__unused NSException *e) {}
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiMesLocalID:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiMesLocalID:), 0); }
        @catch (__unused NSException *e) {}
    }
    if ([sendWrap respondsToSelector:@selector(setM_n64MesSvrID:)]) {
        @try { ((void (*)(id, SEL, long long))objc_msgSend)(sendWrap, @selector(setM_n64MesSvrID:), 0); }
        @catch (__unused NSException *e) {}
    }
    if ([sendWrap respondsToSelector:@selector(setM_nsMsgSource:)]) {
        NSString *msgSource = sourceWrap.m_nsMsgSource ?: @"";
        @try { ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsMsgSource:), msgSource); }
        @catch (__unused NSException *e) {}
    }
    if ([sendWrap respondsToSelector:@selector(setVoiceUrl:)]) {
        @try { ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setVoiceUrl:), @""); }
        @catch (__unused NSException *e) {}
    }
}

static CMessageWrap *wcpl_buildFreshVoiceSendWrap(void) {
    Class wrapClass = objc_getClass("CMessageWrap");
    if (!wrapClass) { return nil; }
    CMessageWrap *sendWrap = nil;
    if ([wrapClass instancesRespondToSelector:@selector(initWithMsgType:)]) {
        @try {
            id created = ((id (*)(id, SEL, long long))objc_msgSend)([wrapClass alloc],
                                                                      @selector(initWithMsgType:),
                                                                      (long long)34);
            if ([created isKindOfClass:%c(CMessageWrap)]) {
                sendWrap = (CMessageWrap *)created;
            }
        } @catch (__unused NSException *e) {}
    }
    if (!sendWrap) {
        @try {
            sendWrap = [[wrapClass alloc] init];
        } @catch (__unused NSException *e) {}
    }
    return sendWrap;
}

static CMessageWrap *wcpl_buildMiyouVoiceSendWrap(CMessageWrap *msgWrap,
                                                   NSString *chatName,
                                                   NSString *selfUserName,
                                                   NSData *audioData,
                                                   unsigned int voiceTime,
                                                   unsigned int voiceFormat,
                                                   NSString *sceneTag) {
    if (!(msgWrap && chatName.length > 0 && audioData.length > 0)) {
        return nil;
    }

    CMessageWrap *sendWrap = wcpl_buildFreshVoiceSendWrap();
    if (!sendWrap) {
        return nil;
    }

    wcpl_resetSendWrapIdentity(sendWrap);
    wcpl_prepareSendWrapRoute(sendWrap, chatName, selfUserName, sceneTag ?: @"voice_miyou");
    wcpl_applyVoiceFieldsToWrap(sendWrap, msgWrap, audioData, voiceTime, voiceFormat);
    wcpl_applyVoiceExtendInfoToWrap(sendWrap, audioData, voiceTime, voiceFormat);
    return sendWrap;
}

static BOOL wcpl_addLocalVoiceMsg(id messageMgr, NSString *chatName, CMessageWrap *sendWrap, NSString *sceneTag) {
    if (!(messageMgr && chatName.length > 0 && sendWrap)) {
        return NO;
    }

    @try {
        if ([messageMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:Unique:)]) {
            ((void (*)(id, SEL, id, id, BOOL, BOOL, BOOL))objc_msgSend)(messageMgr,
                                                                          @selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:Unique:),
                                                                          chatName,
                                                                          sendWrap,
                                                                          YES,
                                                                          NO,
                                                                          YES);
            WCPLLogDebug(@"Repeat voice add-local: scene=%@ localID=%u",
                         sceneTag ?: @"voice_local",
                         sendWrap.m_uiMesLocalID);
            return YES;
        }
        if ([messageMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:)]) {
            ((void (*)(id, SEL, id, id, BOOL, BOOL))objc_msgSend)(messageMgr,
                                                                   @selector(AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:),
                                                                   chatName,
                                                                   sendWrap,
                                                                   YES,
                                                                   NO);
            WCPLLogDebug(@"Repeat voice add-local: scene=%@ localID=%u",
                         sceneTag ?: @"voice_local",
                         sendWrap.m_uiMesLocalID);
            return YES;
        }
        if ([messageMgr respondsToSelector:@selector(AddLocalMsg:MsgWrap:)]) {
            ((void (*)(id, SEL, id, id))objc_msgSend)(messageMgr,
                                                       @selector(AddLocalMsg:MsgWrap:),
                                                       chatName,
                                                       sendWrap);
            WCPLLogDebug(@"Repeat voice add-local: scene=%@ localID=%u",
                         sceneTag ?: @"voice_local",
                         sendWrap.m_uiMesLocalID);
            return YES;
        }
    } @catch (NSException *exception) {
        WCPLLogWarning(@"Repeat voice add-local exception: scene=%@ reason=%@",
                       sceneTag ?: @"voice_local",
                       exception.reason ?: exception);
    }

    return NO;
}

static BOOL wcpl_tryInvokeForwardVoiceTarget(id target,
                                             CMessageWrap *sendWrap,
                                             id contact,
                                             NSString *sceneTag,
                                             NSString *targetTag) {
    SEL forwardVoiceSel = NSSelectorFromString(@"ForwardVoiceMsg:ToContact:");
    if (!(target && contact && sendWrap && [target respondsToSelector:forwardVoiceSel])) {
        return NO;
    }

    @try {
        ((void (*)(id, SEL, id, id))objc_msgSend)(target, forwardVoiceSel, sendWrap, contact);
        WCPLLogInfo(@"Repeat sent: flow=voice_forwardvoice scene=%@ target=%@ msg=%@ chat=%@ localID=%u",
                    sceneTag ?: @"voice_forwardvoice",
                    targetTag ?: NSStringFromClass([target class]),
                    wcpl_repeatMessageDebugInfo(sendWrap),
                    sendWrap.m_nsToUsr ?: @"(nil)",
                    sendWrap.m_uiMesLocalID);
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"Repeat voice ForwardVoiceMsg failed: scene=%@ target=%@ reason=%@",
                       sceneTag ?: @"voice_forwardvoice",
                       targetTag ?: NSStringFromClass([target class]),
                       exception.reason ?: exception);
    }
    return NO;
}

static BOOL wcpl_tryInvokeResendVoiceTarget(id target,
                                            id routeArg,
                                            CMessageWrap *sendWrap,
                                            NSString *sceneTag,
                                            NSString *targetTag) {
    SEL resendVoiceSel = NSSelectorFromString(@"ResendVoiceMsg:MsgWrap:");
    if (!(target && routeArg && sendWrap)) {
        WCPLLogDebug(@"Repeat voice resend skipped: scene=%@ target=%@ reason=invalid_args targetNil=%d routeNil=%d wrapNil=%d",
                     sceneTag ?: @"voice_resendvoice",
                     targetTag ?: @"(nil)",
                     target ? 0 : 1,
                     routeArg ? 0 : 1,
                     sendWrap ? 0 : 1);
        return NO;
    }
    if (![target respondsToSelector:resendVoiceSel]) {
        WCPLLogDebug(@"Repeat voice resend skipped: scene=%@ target=%@ reason=selector_unavailable",
                     sceneTag ?: @"voice_resendvoice",
                     targetTag ?: NSStringFromClass([target class]));
        return NO;
    }

    @try {
        ((void (*)(id, SEL, id, id))objc_msgSend)(target, resendVoiceSel, routeArg, sendWrap);
        WCPLLogInfo(@"Repeat sent: flow=voice_resendvoice scene=%@ target=%@ route=%@ msg=%@",
                    sceneTag ?: @"voice_resendvoice",
                    targetTag ?: NSStringFromClass([target class]),
                    [routeArg isKindOfClass:[NSString class]] ? (NSString *)routeArg : NSStringFromClass([routeArg class]),
                    wcpl_repeatMessageDebugInfo(sendWrap));
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"Repeat voice ResendVoiceMsg failed: scene=%@ target=%@ reason=%@",
                       sceneTag ?: @"voice_resendvoice",
                       targetTag ?: NSStringFromClass([target class]),
                       exception.reason ?: exception);
    }
    return NO;
}

// ── 语音复读链路 ──

static __unused BOOL wcpl_repeatVoiceByForwardDispatch(CMessageWrap *msgWrap,
                                              NSString *chatName,
                                              BaseMsgContentViewController *chatVC,
                                              id logicController) {
    if (!msgWrap || chatName.length == 0) {
        return NO;
    }

    id contact = wcpl_repeatContactForChatName(chatName, msgWrap);
    if (!contact) {
        WCPLLogWarning(@"Repeat voice forward: contact unavailable chat=%@", chatName ?: @"(nil)");
        return NO;
    }

    NSString *srcAudioPath = nil;
    NSData *audioData = wcpl_loadVoiceAudioData(msgWrap, &srcAudioPath);
    if (!audioData) {
        id messageMgr = WCPLGetService(objc_getClass("CMessageMgr"));
        if (messageMgr && [messageMgr respondsToSelector:@selector(StartDownloadByRecordMsg:)]) {
            @try {
                ((BOOL (*)(id, SEL, id))objc_msgSend)(messageMgr, @selector(StartDownloadByRecordMsg:), msgWrap);
            } @catch (__unused NSException *exceptionDownloadVoice) {
            }
        }
        WCPLLogWarning(@"Repeat voice forward: audio missing path=%@", srcAudioPath ?: @"(nil)");
        return NO;
    }

    unsigned int voiceTime = wcpl_voiceTimeFromWrap(msgWrap);
    unsigned int voiceFormat = wcpl_voiceFormatFromWrap(msgWrap);
    NSString *selfUserName = wcpl_currentSelfUserNameForRepeat();
    CMessageWrap *sendWrap = wcpl_buildMiyouVoiceSendWrap(msgWrap,
                                                           chatName,
                                                           selfUserName,
                                                           audioData,
                                                           voiceTime,
                                                           voiceFormat,
                                                           @"voice_forwardvoice");
    if (!sendWrap) {
        return NO;
    }

    id forwardMgr = WCPLGetService(objc_getClass("ForwardMessageMgr"));
    id currentForwardLogic = nil;
    if (forwardMgr && [forwardMgr respondsToSelector:@selector(currentLogicController)]) {
        @try {
            currentForwardLogic = ((id (*)(id, SEL))objc_msgSend)(forwardMgr, @selector(currentLogicController));
        } @catch (__unused NSException *exceptionCurrentLogic) {
            currentForwardLogic = nil;
        }
    }

    NSMutableArray<id> *forwardTargets = [NSMutableArray array];
    if (logicController) [forwardTargets addObject:logicController];
    if (currentForwardLogic && currentForwardLogic != logicController) [forwardTargets addObject:currentForwardLogic];
    if (forwardMgr) [forwardTargets addObject:forwardMgr];
    id messageMgr = WCPLGetService(objc_getClass("CMessageMgr"));
    if (messageMgr) [forwardTargets addObject:messageMgr];
    Class forwardUtilClass = objc_getClass("ForwardMsgUtil");
    if (forwardUtilClass) {
        id forwardUtilObj = nil;
        if ([forwardUtilClass instancesRespondToSelector:@selector(init)]) {
            @try {
                forwardUtilObj = [[forwardUtilClass alloc] init];
            } @catch (__unused NSException *exceptionForwardUtilAlloc) {
                forwardUtilObj = nil;
            }
        }
        if (forwardUtilObj) [forwardTargets addObject:forwardUtilObj];
        [forwardTargets addObject:(id)forwardUtilClass];
    }

    for (id target in forwardTargets) {
        NSString *targetTag = [target isKindOfClass:objc_getClass("NSObject")] ? NSStringFromClass([target class]) : @"(unknown)";
        if (wcpl_tryInvokeForwardVoiceTarget(target, sendWrap, contact, @"voice_forwardvoice", targetTag)) {
            return YES;
        }
    }

    // 对齐密友分流：当 ForwardVoice 专用入口失效时走 forwardMessage:fromViewController:
    if (forwardMgr) {
        SEL forwardToContactSel = NSSelectorFromString(@"forwardMessage:fromViewController:toContact:");
        if ([forwardMgr respondsToSelector:forwardToContactSel]) {
            @try {
                ((void (*)(id, SEL, id, id, id))objc_msgSend)(forwardMgr,
                                                               forwardToContactSel,
                                                               sendWrap,
                                                               chatVC,
                                                               contact);
                WCPLLogInfo(@"Repeat sent: flow=voice_forwardmgr_contact scene=voice_forwardvoice msg=%@ chat=%@",
                            wcpl_repeatMessageDebugInfo(sendWrap),
                            chatName);
                return YES;
            } @catch (NSException *exception) {
                WCPLLogWarning(@"Repeat voice forwardMessage:fromVC:toContact failed: %@", exception.reason ?: exception);
            }
        }

        SEL forwardSel = NSSelectorFromString(@"forwardMessage:fromViewController:");
        if ([forwardMgr respondsToSelector:forwardSel]) {
            @try {
                ((void (*)(id, SEL, id, id))objc_msgSend)(forwardMgr,
                                                           forwardSel,
                                                           sendWrap,
                                                           chatVC);
                WCPLLogInfo(@"Repeat sent: flow=voice_forwardmgr scene=voice_forwardvoice msg=%@ chat=%@",
                            wcpl_repeatMessageDebugInfo(sendWrap),
                            chatName);
                return YES;
            } @catch (NSException *exception) {
                WCPLLogWarning(@"Repeat voice forwardMessage:fromVC failed: %@", exception.reason ?: exception);
            }
        }
    }

    if (forwardUtilClass) {
        SEL sendMsgSelector = @selector(SendMsgWithOriMsg:Contact:ForwardType:EditImageAttr:);
        if ([forwardUtilClass respondsToSelector:sendMsgSelector]) {
            @try {
                ((id (*)(id, SEL, id, id, unsigned int, id))objc_msgSend)(forwardUtilClass,
                                                                           sendMsgSelector,
                                                                           sendWrap,
                                                                           contact,
                                                                           (unsigned int)0,
                                                                           nil);
                WCPLLogInfo(@"Repeat sent: flow=voice_forwardutil_sendmsg scene=voice_forwardvoice msg=%@ chat=%@",
                            wcpl_repeatMessageDebugInfo(sendWrap),
                            chatName);
                return YES;
            } @catch (NSException *exception) {
                WCPLLogWarning(@"Repeat voice SendMsgWithOriMsg fallback failed: %@", exception.reason ?: exception);
            }
        }

        SEL forward4Selector = @selector(ForwardMsg:ToContact:Scene:forwardType:);
        if ([forwardUtilClass respondsToSelector:forward4Selector]) {
            @try {
                ((void (*)(id, SEL, id, id, unsigned int, unsigned int))objc_msgSend)(forwardUtilClass,
                                                                                       forward4Selector,
                                                                                       sendWrap,
                                                                                       contact,
                                                                                       (unsigned int)0,
                                                                                       (unsigned int)0);
                WCPLLogInfo(@"Repeat sent: flow=voice_forwardutil_api4 scene=voice_forwardvoice msg=%@ chat=%@",
                            wcpl_repeatMessageDebugInfo(sendWrap),
                            chatName);
                return YES;
            } @catch (NSException *exception) {
                WCPLLogWarning(@"Repeat voice ForwardMsg api4 fallback failed: %@", exception.reason ?: exception);
            }
        }

        SEL forward3Selector = @selector(ForwardMsg:ToContact:Scene:);
        if ([forwardUtilClass respondsToSelector:forward3Selector]) {
            @try {
                ((void (*)(id, SEL, id, id, unsigned int))objc_msgSend)(forwardUtilClass,
                                                                         forward3Selector,
                                                                         sendWrap,
                                                                         contact,
                                                                         (unsigned int)0);
                WCPLLogInfo(@"Repeat sent: flow=voice_forwardutil_api3 scene=voice_forwardvoice msg=%@ chat=%@",
                            wcpl_repeatMessageDebugInfo(sendWrap),
                            chatName);
                return YES;
            } @catch (NSException *exception) {
                WCPLLogWarning(@"Repeat voice ForwardMsg api3 fallback failed: %@", exception.reason ?: exception);
            }
        }
    }

    return NO;
}

static BOOL wcpl_repeatVoiceByRecordMessage(CMessageWrap *msgWrap,
                                            NSString *chatName,
                                            BaseMsgContentViewController *chatVC,
                                            id logicController) {
    if (!msgWrap || chatName.length == 0) {
        return NO;
    }

    id messageMgr = WCPLGetService(objc_getClass("CMessageMgr"));
    if (!messageMgr) {
        return NO;
    }

    NSString *srcAudioPath = nil;
    NSData *audioData = wcpl_loadVoiceAudioData(msgWrap, &srcAudioPath);
    unsigned int voiceTime = wcpl_voiceTimeFromWrap(msgWrap);
    unsigned int voiceFormat = wcpl_voiceFormatFromWrap(msgWrap);
    if (!audioData) {
        if ([messageMgr respondsToSelector:@selector(StartDownloadByRecordMsg:)]) {
            @try {
                ((BOOL (*)(id, SEL, id))objc_msgSend)(messageMgr, @selector(StartDownloadByRecordMsg:), msgWrap);
            } @catch (__unused NSException *e) {}
        }
        WCPLLogWarning(@"Repeat voice audio missing: msg=%@ path=%@",
                       wcpl_repeatMessageDebugInfo(msgWrap), srcAudioPath ?: @"(nil)");
        return NO;
    }

    NSString *selfUserName = wcpl_currentSelfUserNameForRepeat();
    CMessageWrap *sendWrap = wcpl_buildMiyouVoiceSendWrap(msgWrap,
                                                           chatName,
                                                           selfUserName,
                                                           audioData,
                                                           voiceTime,
                                                           voiceFormat,
                                                           @"voice_resendvoice");
    if (!sendWrap) {
        return NO;
    }

    BOOL addLocalOK = wcpl_addLocalVoiceMsg(messageMgr, chatName, sendWrap, @"voice_resendvoice");
    (void)chatVC;
    (void)logicController;

    if (addLocalOK) {
        id audioSender = WCPLGetService(objc_getClass("AudioSender"));
        if (wcpl_tryInvokeResendVoiceTarget(audioSender,
                                            chatName,
                                            sendWrap,
                                            @"voice_resendvoice",
                                            @"AudioSender")) {
            return YES;
        }

        id uploadVoiceMgr = WCPLGetService(objc_getClass("MMNewUploadVoiceMgr"));
        if (wcpl_tryInvokeResendVoiceTarget(uploadVoiceMgr,
                                            chatName,
                                            sendWrap,
                                            @"voice_resendvoice",
                                            @"MMNewUploadVoiceMgr")) {
            return YES;
        }

        id uploadVoiceCDNMgr = WCPLGetService(objc_getClass("UploadVoiceCDNMgr"));
        if (wcpl_tryInvokeResendVoiceTarget(uploadVoiceCDNMgr,
                                            chatName,
                                            sendWrap,
                                            @"voice_resendvoice",
                                            @"UploadVoiceCDNMgr")) {
            return YES;
        }

        if ([messageMgr respondsToSelector:@selector(DelMsg:MsgWrap:)]) {
            @try {
                ((void (*)(id, SEL, id, id))objc_msgSend)(messageMgr,
                                                           @selector(DelMsg:MsgWrap:),
                                                           chatName,
                                                           sendWrap);
                WCPLLogWarning(@"Repeat voice resend failed, cleaned local msg: scene=voice_resendvoice chat=%@ localID=%u",
                               chatName ?: @"(nil)",
                               sendWrap.m_uiMesLocalID);
            } @catch (NSException *exception) {
                WCPLLogWarning(@"Repeat voice cleanup local msg failed: %@", exception.reason ?: exception);
            }
        } else {
            WCPLLogWarning(@"Repeat voice resend failed, keep local pending: scene=voice_resendvoice chat=%@ localID=%u",
                           chatName ?: @"(nil)",
                           sendWrap.m_uiMesLocalID);
        }
    }

    return NO;
}

static BOOL wcpl_repeatVoiceBySendMessageMgr(CMessageWrap *msgWrap,
                                             NSString *chatName,
                                             BaseMsgContentViewController *chatVC,
                                             id logicController) {
    (void)chatVC;
    (void)logicController;
    if (!msgWrap || chatName.length == 0) {
        return NO;
    }

    id sendMessageMgr = WCPLGetService(objc_getClass("SendMessageMgr"));
    if (!(sendMessageMgr && [sendMessageMgr respondsToSelector:@selector(AddMsgToSendTable:MsgWrap:)])) {
        return NO;
    }

    NSString *srcAudioPath = nil;
    NSData *audioData = wcpl_loadVoiceAudioData(msgWrap, &srcAudioPath);
    if (!audioData) {
        WCPLLogWarning(@"Repeat voice sendmgr: audio empty path=%@", srcAudioPath ?: @"(nil)");
        return NO;
    }
    unsigned int voiceTime = wcpl_voiceTimeFromWrap(msgWrap);
    unsigned int voiceFormat = wcpl_voiceFormatFromWrap(msgWrap);

    NSString *selfUserName = wcpl_currentSelfUserNameForRepeat();
    CMessageWrap *sendWrap = wcpl_buildMiyouVoiceSendWrap(msgWrap,
                                                           chatName,
                                                           selfUserName,
                                                           audioData,
                                                           voiceTime,
                                                           voiceFormat,
                                                           @"voice_sendmsgmgr");
    if (!sendWrap) {
        return NO;
    }

    @try {
        ((void (*)(id, SEL, id, id))objc_msgSend)(sendMessageMgr,
                                                    @selector(AddMsgToSendTable:MsgWrap:),
                                                    chatName, sendWrap);
        unsigned int sendStatus = sendWrap.m_uiStatus;
        if (sendStatus == 5) {
            WCPLLogWarning(@"Repeat voice sendmgr rejected: status=5 msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
            return NO;
        }
        if (sendWrap.m_uiMesLocalID == 0) {
            WCPLLogWarning(@"Repeat voice sendmgr no-local-id: status=%u msg=%@",
                           sendStatus,
                           wcpl_repeatMessageDebugInfo(msgWrap));
            return NO;
        }
        WCPLLogInfo(@"Repeat sent: flow=sendmsgmgr_queue scene=voice msg=%@ chat=%@ localID=%u status=%u audioLen=%lu fromOther=%d",
                    wcpl_repeatMessageDebugInfo(msgWrap), chatName,
                    sendWrap.m_uiMesLocalID, sendStatus,
                    (unsigned long)audioData.length, wcpl_isMessageFromOther(msgWrap) ? 1 : 0);
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"Repeat voice SendMessageMgr exception: msg=%@ reason=%@",
                       wcpl_repeatMessageDebugInfo(msgWrap), exception.reason ?: exception);
    }
    return NO;
}

static BOOL wcpl_repeatForceNativeOnly(void) {
    // 原生链路在文本场景存在“本地成功、远端丢失”的伪成功问题。
    // 默认关闭强制 native-only，走按类型定制的可靠发送策略。
    return NO;
}

static BOOL wcpl_repeatByNativeOnlyPipeline(CMessageWrap *msgWrap,
                                            NSString *chatName,
                                            BaseMsgContentViewController *chatVC,
                                            id toolView,
                                            id logicController) {
    if (!(msgWrap && chatName.length > 0)) {
        return NO;
    }

    unsigned int msgType = msgWrap.m_uiMessageType;
    if (msgType == 49) {
        wcpl_clearToolViewReplyingMessageIfNeeded(toolView, @"quote_native_preclear");

        if (wcpl_repeatQuoteNativeResendFresh(msgWrap, chatName, chatVC, @"quote_native_fresh_primary")) {
            WCPLLogInfo(@"Repeat sent: flow=quote_native_fresh_primary msg=%@",
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        }
        if (wcpl_repeatNativeResendByDetachedWrap(msgWrap, chatName, chatVC, @"quote_native_detached_fallback")) {
            WCPLLogInfo(@"Repeat sent: flow=quote_native_detached_fallback msg=%@",
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        }
        if (wcpl_repeatNativeResend(msgWrap, chatName, chatVC, @"quote_native_legacy_fallback")) {
            WCPLLogInfo(@"Repeat sent: flow=quote_native_legacy_fallback msg=%@",
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        }
        return NO;
    }

    if (msgType == 34) {
        if (wcpl_repeatNativeResend(msgWrap, chatName, chatVC, @"voice_native_resend")) {
            WCPLLogInfo(@"Repeat sent: flow=voice_native_resend msg=%@",
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        }
        if (wcpl_repeatVoiceByRecordMessage(msgWrap, chatName, chatVC, logicController)) {
            WCPLLogInfo(@"Repeat sent: flow=voice_native_record_fallback msg=%@",
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        }
        if (wcpl_repeatNativeResendByDetachedWrap(msgWrap, chatName, chatVC, @"voice_native_detached_retry")) {
            WCPLLogInfo(@"Repeat sent: flow=voice_native_detached_retry msg=%@",
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        }
        return NO;
    }

    if (wcpl_repeatNativeResendByDetachedWrap(msgWrap, chatName, chatVC, @"native_only_detached_primary")) {
        WCPLLogInfo(@"Repeat sent: flow=native_only_detached_primary type=%@ msg=%@",
                    wcpl_repeatTypeName(msgType),
                    wcpl_repeatMessageDebugInfo(msgWrap));
        return YES;
    }
    if (wcpl_repeatNativeResend(msgWrap, chatName, chatVC, @"native_only_legacy_fallback")) {
        WCPLLogInfo(@"Repeat sent: flow=native_only_legacy_fallback type=%@ msg=%@",
                    wcpl_repeatTypeName(msgType),
                    wcpl_repeatMessageDebugInfo(msgWrap));
        return YES;
    }
    return NO;
}

static NSString *wcpl_repeatMessageKey(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return @"nil";
    }

    long long stablePrimaryID = 0;
    if (msgWrap.m_n64MesSvrID > 0) {
        stablePrimaryID = msgWrap.m_n64MesSvrID;
    } else if (msgWrap.m_uiMesLocalID > 0) {
        stablePrimaryID = (long long)msgWrap.m_uiMesLocalID;
    } else {
        stablePrimaryID = (long long)msgWrap.m_uiCreateTime;
    }

    return [NSString stringWithFormat:@"m_%lld", stablePrimaryID];
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

static NSArray<NSString *> *wcpl_repeatIdentityTokens(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return @[];
    }

    NSMutableArray<NSString *> *tokens = [NSMutableArray arrayWithCapacity:4];
    unsigned int msgType = msgWrap.m_uiMessageType;

    if (msgWrap.m_n64MesSvrID > 0) {
        [tokens addObject:[NSString stringWithFormat:@"s:%u:%lld", msgType, msgWrap.m_n64MesSvrID]];
        [tokens addObject:[NSString stringWithFormat:@"s:*:%lld", msgWrap.m_n64MesSvrID]];
    }
    if (msgWrap.m_uiMesLocalID > 0) {
        [tokens addObject:[NSString stringWithFormat:@"l:%u:%u", msgType, msgWrap.m_uiMesLocalID]];
    }
    if (msgWrap.m_uiCreateTime > 0) {
        [tokens addObject:[NSString stringWithFormat:@"c:%u:%u", msgType, msgWrap.m_uiCreateTime]];
    }

    return tokens;
}

static long long wcpl_quoteReferServerIDFromContent(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return 0;
    }

    NSArray<NSArray<NSString *> *> *tagPairs = @[
        @[@"<svrid><![CDATA[", @"]]></svrid>"],
        @[@"<svrid>", @"</svrid>"],
        @[@"<msgsvrid><![CDATA[", @"]]></msgsvrid>"],
        @[@"<msgsvrid>", @"</msgsvrid>"]
    ];

    long long (^extractServerIDFromXML)(NSString *) = ^long long(NSString *xml) {
        if (![xml isKindOfClass:[NSString class]] || xml.length == 0) {
            return 0;
        }

        for (NSArray<NSString *> *pair in tagPairs) {
            if (pair.count != 2) {
                continue;
            }
            NSString *value = wcpl_extractXMLValue(xml, pair[0], pair[1]);
            if (![value isKindOfClass:[NSString class]] || value.length == 0) {
                continue;
            }
            long long svrID = strtoll(value.UTF8String, NULL, 10);
            if (svrID > 0) {
                return svrID;
            }
        }

        NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"<(?:msg)?svrid>(?:<!\\[CDATA\\[)?([0-9]{5,})(?:\\]\\]>)?</(?:msg)?svrid>" options:NSRegularExpressionCaseInsensitive error:nil];
        NSTextCheckingResult *match = [regex firstMatchInString:xml options:0 range:NSMakeRange(0, xml.length)];
        if (!match || match.numberOfRanges < 2 || match.range.location == NSNotFound) {
            return 0;
        }

        NSString *value = [xml substringWithRange:[match rangeAtIndex:1]];
        if (![value isKindOfClass:[NSString class]] || value.length == 0) {
            return 0;
        }

        long long svrID = strtoll(value.UTF8String, NULL, 10);
        return svrID > 0 ? svrID : 0;
    };

    NSString *referSection = wcpl_extractXMLValue(content, @"<refermsg>", @"</refermsg>");
    if (referSection.length == 0) {
        NSRegularExpression *referRegex = [NSRegularExpression regularExpressionWithPattern:@"<refermsg[^>]*>([\\s\\S]*?)</refermsg>" options:NSRegularExpressionCaseInsensitive error:nil];
        NSTextCheckingResult *referMatch = [referRegex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
        if (referMatch && referMatch.numberOfRanges >= 2 && referMatch.range.location != NSNotFound) {
            referSection = [content substringWithRange:[referMatch rangeAtIndex:1]];
        }
    }

    if (referSection.length == 0) {
        NSString *decodedContent = [[[content stringByReplacingOccurrencesOfString:@"&lt;" withString:@"<"]
                                    stringByReplacingOccurrencesOfString:@"&gt;" withString:@">"]
                                   stringByReplacingOccurrencesOfString:@"&amp;" withString:@"&"];
        if (decodedContent.length > 0 && ![decodedContent isEqualToString:content]) {
            referSection = wcpl_extractXMLValue(decodedContent, @"<refermsg>", @"</refermsg>");
            if (referSection.length == 0) {
                NSRegularExpression *referRegex = [NSRegularExpression regularExpressionWithPattern:@"<refermsg[^>]*>([\\s\\S]*?)</refermsg>" options:NSRegularExpressionCaseInsensitive error:nil];
                NSTextCheckingResult *referMatch = [referRegex firstMatchInString:decodedContent options:0 range:NSMakeRange(0, decodedContent.length)];
                if (referMatch && referMatch.numberOfRanges >= 2 && referMatch.range.location != NSNotFound) {
                    referSection = [decodedContent substringWithRange:[referMatch rangeAtIndex:1]];
                }
            }
        }
    }

    if (referSection.length > 0) {
        long long referSvrID = extractServerIDFromXML(referSection);
        if (referSvrID > 0) {
            return referSvrID;
        }

        NSString *decodedRefer = [[[referSection stringByReplacingOccurrencesOfString:@"&lt;" withString:@"<"]
                                 stringByReplacingOccurrencesOfString:@"&gt;" withString:@">"]
                                stringByReplacingOccurrencesOfString:@"&amp;" withString:@"&"];
        if (decodedRefer.length > 0 && ![decodedRefer isEqualToString:referSection]) {
            referSvrID = extractServerIDFromXML(decodedRefer);
            if (referSvrID > 0) {
                return referSvrID;
            }
        }
    }

    return 0;
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

    CGRect menuRect = CGRectZero;
    if ([cellView respondsToSelector:@selector(showRectForMenuController)]) {
        @try {
            menuRect = ((CGRect (*)(id, SEL))objc_msgSend)(cellView, @selector(showRectForMenuController));
        } @catch (__unused NSException *exception) {
            menuRect = CGRectZero;
        }
    }

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

static void wcpl_syncRepeatEngineModeIfNeeded(void) {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    BOOL v2Enabled = wcpl_shouldUseLocalCellRepeatEngine(config);

    if (!gWCPLRepeatEngineModeInitialized) {
        gWCPLRepeatEngineModeInitialized = YES;
        gWCPLRepeatEngineV2LastEnabled = v2Enabled;
        return;
    }

    if (v2Enabled == gWCPLRepeatEngineV2LastEnabled) {
        return;
    }

    gWCPLRepeatEngineV2LastEnabled = v2Enabled;
    gWCPLRepeatGlobalRefreshPending = NO;
    gWCPLRepeatRefreshScheduleToken += 1;
    gWCPLRepeatSettleRefreshPending = NO;
    gWCPLRepeatSettleRefreshFollowPending = NO;
    gWCPLRepeatLastRefreshAt = 0;
    gWCPLRepeatRefreshRoundCounter = 0;
    gWCPLRepeatNeedFullResync = YES;

    wcpl_clearRepeatOwnerMaps();

    if (v2Enabled) {
        gWCPLRepeatRefreshGateEnabled = NO;
        gWCPLRepeatResumeSuppressUntil = 0;
        WCPLLogInfo(@"Repeat button engine switched to V2(sync-cell)");
        return;
    }

    WCPLLogInfo(@"Repeat button engine switched to V1(global-refresh)");
    Class cellClass = objc_getClass("CommonMessageCellView");
    if (cellClass && [cellClass respondsToSelector:@selector(wchook_scheduleGlobalRepeatButtonRefresh)]) {
        ((void (*)(id, SEL))objc_msgSend)(cellClass, @selector(wchook_scheduleGlobalRepeatButtonRefresh));
    }
}

static void wcpl_setupRepeatLifecycleObserver(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSNotificationCenter *center = [NSNotificationCenter defaultCenter];
        void (^handleResignOrBackground)(__unused NSNotification *note) = ^(__unused NSNotification *note) {
            WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
            if (wcpl_shouldUseLocalCellRepeatEngine(config)) {
                gWCPLRepeatGlobalRefreshPending = NO;
                gWCPLRepeatRefreshScheduleToken += 1;
                gWCPLRepeatRefreshGateEnabled = NO;
                gWCPLRepeatResumeSuppressUntil = 0;
                return;
            }

            gWCPLRepeatRefreshGateEnabled = YES;
            gWCPLRepeatNeedFullResync = YES;
            gWCPLRepeatRefreshRoundCounter = 0;
            wcpl_clearRepeatOwnerMaps();
        };
        [center addObserverForName:UIApplicationWillResignActiveNotification
                            object:nil
                             queue:[NSOperationQueue mainQueue]
                        usingBlock:handleResignOrBackground];
        [center addObserverForName:UIApplicationDidEnterBackgroundNotification
                            object:nil
                             queue:[NSOperationQueue mainQueue]
                        usingBlock:handleResignOrBackground];
        [center addObserverForName:UIApplicationDidBecomeActiveNotification
                            object:nil
                             queue:[NSOperationQueue mainQueue]
                        usingBlock:^(__unused NSNotification *note) {
            WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
            if (wcpl_shouldUseLocalCellRepeatEngine(config)) {
                gWCPLRepeatGlobalRefreshPending = NO;
                gWCPLRepeatRefreshScheduleToken += 1;
                gWCPLRepeatRefreshGateEnabled = NO;
                gWCPLRepeatResumeSuppressUntil = 0;
                return;
            }

            gWCPLRepeatRefreshGateEnabled = YES;
            gWCPLRepeatResumeSuppressUntil = CACurrentMediaTime() + 0.70;
            gWCPLRepeatNeedFullResync = YES;
            gWCPLRepeatRefreshRoundCounter = 0;

            wcpl_clearRepeatOwnerMaps();

            Class cellClass = %c(CommonMessageCellView);
            if (cellClass && [cellClass respondsToSelector:@selector(wchook_scheduleGlobalRepeatButtonRefresh)]) {
                ((void (*)(id, SEL))objc_msgSend)(cellClass, @selector(wchook_scheduleGlobalRepeatButtonRefresh));
            }
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.85 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                gWCPLRepeatRefreshGateEnabled = NO;
            });
        }];
    });
}

static NSMapTable<NSString *, UIView *> *wcpl_repeatOwnerViewMap(void) {
    static NSMapTable<NSString *, UIView *> *ownerMap;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        ownerMap = [[NSMapTable alloc] initWithKeyOptions:(NSPointerFunctionsStrongMemory | NSPointerFunctionsObjectPersonality | NSPointerFunctionsCopyIn)
                                              valueOptions:(NSPointerFunctionsWeakMemory | NSPointerFunctionsObjectPersonality)
                                                  capacity:128];
    });
    return ownerMap;
}

static NSMutableDictionary<NSString *, NSNumber *> *wcpl_repeatOwnerRankMap(void) {
    static NSMutableDictionary<NSString *, NSNumber *> *rankMap;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        rankMap = [NSMutableDictionary dictionaryWithCapacity:128];
    });
    return rankMap;
}

static NSMutableDictionary<NSString *, UIButton *> *wcpl_repeatGlobalButtonMap(void) {
    static NSMutableDictionary<NSString *, UIButton *> *buttonMap;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        buttonMap = [NSMutableDictionary dictionaryWithCapacity:128];
    });
    return buttonMap;
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

static void wcpl_removeRepeatButtonFromGlobalMap(NSMutableDictionary<NSString *, UIButton *> *buttonMap, UIButton *button, NSString *messageKey) {
    if (![buttonMap isKindOfClass:[NSMutableDictionary class]] || ![button isKindOfClass:[UIButton class]]) {
        return;
    }

    NSMutableArray<NSString *> *keysToRemove = [NSMutableArray arrayWithCapacity:2];
    if ([messageKey isKindOfClass:[NSString class]] && messageKey.length > 0 && buttonMap[messageKey] == button) {
        [keysToRemove addObject:messageKey];
    }

    for (NSString *key in [buttonMap allKeys]) {
        if (buttonMap[key] != button || [keysToRemove containsObject:key]) {
            continue;
        }
        [keysToRemove addObject:key];
    }

    for (NSString *key in keysToRemove) {
        [buttonMap removeObjectForKey:key];
        wcpl_setRepeatOwnerViewForMessageKey(key, nil);
    }
}

static void wcpl_collectGlobalRepeatButtonsInView(UIView *root, NSMutableDictionary<NSString *, UIButton *> *storage) {
    if (![root isKindOfClass:[UIView class]] || !storage) {
        return;
    }

    for (UIView *subview in root.subviews) {
        if ([subview isKindOfClass:[UIButton class]] && subview.tag == kWCPLRepeatButtonTag) {
            UIButton *button = (UIButton *)subview;
            NSString *messageKey = objc_getAssociatedObject(button, kWCPLRepeatButtonMessageKey);
            if ([messageKey isKindOfClass:[NSString class]] && messageKey.length > 0 && !storage[messageKey]) {
                storage[messageKey] = button;
            }
        }
        wcpl_collectGlobalRepeatButtonsInView(subview, storage);
    }
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

static void wcpl_clearRepeatOwnerMaps(void) {
    NSMapTable<NSString *, UIView *> *ownerMap = wcpl_repeatOwnerViewMap();
    NSMutableDictionary<NSString *, NSNumber *> *rankMap = wcpl_repeatOwnerRankMap();
    NSArray<NSString *> *keys = [rankMap allKeys];
    for (NSString *key in keys) {
        [ownerMap removeObjectForKey:key];
    }
    [rankMap removeAllObjects];
}

static void wcpl_forceClearRepeatButtonsInRootView(UIView *rootView) {
    if (![rootView isKindOfClass:[UIView class]]) {
        return;
    }

    NSMutableArray<UIButton *> *buttons = [NSMutableArray array];
    wcpl_collectRepeatButtonsFromView(rootView, buttons);
    for (UIButton *button in buttons) {
        [button removeFromSuperview];
    }

    NSMutableArray<UIView *> *messageViews = [NSMutableArray array];
    wcpl_collectMessageCellViewsInView(rootView, messageViews);
    for (UIView *messageView in messageViews) {
        objc_setAssociatedObject(messageView, kWCPLRepeatButtonViewKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(messageView, kWCPLRepeatButtonMessageKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        wcpl_clearRepeatAnchorForCell(messageView);
    }
}

static void wcpl_forceClearRepeatButtonsInAllWindows(void) {
    NSMutableDictionary<NSString *, UIButton *> *globalButtonMap = wcpl_repeatGlobalButtonMap();
    for (UIButton *button in [globalButtonMap allValues]) {
        [button removeFromSuperview];
    }
    [globalButtonMap removeAllObjects];

    NSArray<UIWindow *> *windows = wcpl_applicationWindows();
    for (UIWindow *window in windows) {
        wcpl_forceClearRepeatButtonsInRootView(window);
    }
}

static BOOL wcpl_pruneGlobalRepeatButtonsMapLightweight(void) {
    NSMutableDictionary<NSString *, UIButton *> *globalButtonMap = wcpl_repeatGlobalButtonMap();
    BOOL foundMismatch = NO;

    for (NSString *messageKey in [globalButtonMap allKeys]) {
        UIButton *button = globalButtonMap[messageKey];
        BOOL shouldRemove = NO;
        if (![button isKindOfClass:[UIButton class]]) {
            shouldRemove = YES;
        } else if (!button.superview || !button.window || button.hidden || button.alpha < 0.01f) {
            shouldRemove = YES;
        } else {
            NSString *buttonMessageKey = objc_getAssociatedObject(button, kWCPLRepeatButtonMessageKey);
            if (![buttonMessageKey isKindOfClass:[NSString class]] || buttonMessageKey.length == 0 || ![buttonMessageKey isEqualToString:messageKey]) {
                shouldRemove = YES;
                foundMismatch = YES;
            }
        }

        if (shouldRemove) {
            [button removeFromSuperview];
            [globalButtonMap removeObjectForKey:messageKey];
            wcpl_setRepeatOwnerViewForMessageKey(messageKey, nil);
        }
    }

    return foundMismatch;
}

static void wcpl_resyncGlobalRepeatButtonsMap(void) {
    NSMutableDictionary<NSString *, UIButton *> *globalButtonMap = wcpl_repeatGlobalButtonMap();

    NSArray<NSString *> *existingKeys = [globalButtonMap allKeys];
    for (NSString *messageKey in existingKeys) {
        UIButton *button = globalButtonMap[messageKey];
        if (![button isKindOfClass:[UIButton class]] || !button.superview) {
            [globalButtonMap removeObjectForKey:messageKey];
        }
    }

    NSArray<UIWindow *> *windows = wcpl_applicationWindows();
    NSMutableDictionary<NSString *, UIButton *> *scannedButtons = [NSMutableDictionary dictionaryWithCapacity:64];
    for (UIWindow *window in windows) {
        wcpl_collectGlobalRepeatButtonsInView(window, scannedButtons);
    }

    for (NSString *messageKey in scannedButtons) {
        UIButton *button = scannedButtons[messageKey];
        UIButton *mapped = globalButtonMap[messageKey];
        if (![mapped isKindOfClass:[UIButton class]] || mapped != button) {
            globalButtonMap[messageKey] = button;
        }
    }

    for (NSString *messageKey in [globalButtonMap allKeys]) {
        if (scannedButtons[messageKey]) {
            continue;
        }
        UIButton *button = globalButtonMap[messageKey];
        [button removeFromSuperview];
        [globalButtonMap removeObjectForKey:messageKey];
        wcpl_setRepeatOwnerViewForMessageKey(messageKey, nil);
    }
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
    NSMutableDictionary<NSString *, NSNumber *> *rankMap = wcpl_repeatOwnerRankMap();
    if (ownerView) {
        [map setObject:ownerView forKey:messageKey];
        rankMap[messageKey] = @((uintptr_t)ownerView);
    } else {
        [map removeObjectForKey:messageKey];
        [rankMap removeObjectForKey:messageKey];
    }
}

@interface CommonMessageCellView (WCPLRepeatButton)
@property(nonatomic, strong) UITapGestureRecognizer *wchook_doubleTapGesture;
@property(nonatomic, strong) UILabel *wchook_messageTimeLabel;
+ (void)wchook_scheduleGlobalRepeatButtonRefresh;
+ (void)wchook_scheduleGlobalRepeatButtonRefreshAfterDelay:(NSTimeInterval)delay;
+ (void)wchook_scheduleGlobalRepeatButtonSettleRefresh;
+ (void)wchook_runGlobalRepeatButtonRefresh;
+ (UIButton *)wchook_globalRepeatButtonForMessageKey:(NSString *)messageKey owner:(id)owner createIfNeeded:(BOOL)createIfNeeded;
- (BOOL)wchook_isMessageSupportedForRepeat:(CMessageWrap *)msgWrap;
- (UIImpactFeedbackGenerator *)wchook_repeatTapFeedbackGenerator;
- (UIView *)wchook_repeatDisplayAnchorViewByNFQPrinciple;
- (UIView *)wchook_bubbleAnchorView;
- (void)wchook_layoutRepeatButton:(UIButton *)button withBubbleView:(UIView *)bubbleView isSelf:(BOOL)isSelf;
- (UIButton *)wchook_buildRepeatButton;
- (NSDictionary *)wchook_repeatAnchorContextForV2;
- (UIButton *)wchook_repeatButtonForV2EnsureCreate:(BOOL)createIfNeeded;
- (void)wchook_bindRepeatButtonForV2:(UIButton *)button wrap:(id)wrap messageKey:(NSString *)messageKey;
- (void)wchook_hideRepeatButtonByNFQPrinciple;
- (void)wchook_updateRepeatButtonByNFQPrinciple;
- (void)wchook_clearRepeatAnchorAndButtonLocalOnly;
- (void)wchook_clearRepeatAnchorAndButtonForCurrentEngine;
- (void)wchook_clearRepeatAnchorAndLegacyButton;
- (BOOL)wchook_reportRepeatAnchorIfNeeded;
- (void)wchook_removeRepeatButtonIfNeeded;
- (void)wchook_updateRepeatButtonIfNeeded;
- (UIView *)wchook_headImageViewForMessageTime;
- (UILabel *)wchook_messageTimeLabelEnsureCreate:(BOOL)createIfNeeded;
- (void)wchook_updateMessageTimeLabel;
- (void)wchook_hideMessageTimeLabel;
- (void)wchook_repeatMessageWrap:(CMessageWrap *)msgWrap;
- (void)wchook_setupDoubleTapGestureIfNeeded;
- (void)wchook_handleDoubleTap:(UITapGestureRecognizer *)gesture;
- (void)wchook_fireDoubleTapActionWithSource:(NSString *)source;
- (BOOL)wchook_tryFireManualDoubleTapWithSource:(NSString *)source;
- (BOOL)wchook_tryHandleDoubleTapFromTouches:(id)touches event:(id)event;
- (NSString *)wchook_actionNameForAction:(NSInteger)action;
- (void)wchook_performConfiguredAction:(NSInteger)action
                           messageWrap:(CMessageWrap *)msgWrap
                                isSelf:(BOOL)isSelf
                              sceneTag:(NSString *)sceneTag;
- (void)wchook_performForwardMessage:(CMessageWrap *)msgWrap;
- (void)wchook_performForwardMessage:(CMessageWrap *)msgWrap sceneTag:(NSString *)sceneTag;
- (BOOL)wchook_tryForwardViaMiyouPrimaryRoutes:(CMessageWrap *)msgWrap
                                         chatVC:(BaseMsgContentViewController *)chatVC
                                       sceneTag:(NSString *)sceneTag;
- (BOOL)wchook_tryForwardViaMiyouOnForward:(CMessageWrap *)msgWrap
                                      chatVC:(BaseMsgContentViewController *)chatVC
                                    sceneTag:(NSString *)sceneTag;
- (BOOL)wchook_tryForwardViaLegacyFallback:(CMessageWrap *)msgWrap
                                      chatVC:(BaseMsgContentViewController *)chatVC
                                    sceneTag:(NSString *)sceneTag;
- (UIViewController *)wchook_findTopViewController;
- (BaseMsgContentViewController *)wchook_findChatViewController;
- (CGRect)showRectForMenuController;
@end

static UITableView *wcpl_findContainingTableView(UIView *view) {
    UIView *current = view;
    while (current) {
        if ([current isKindOfClass:[UITableView class]]) {
            return (UITableView *)current;
        }
        current = current.superview;
    }
    return nil;
}

// 浅层查找任意正在拖拽的 UITableView（最多 3 层深度）
static UITableView *wcpl_findAnyScrollingTableView(void) {
    NSArray<UIWindow *> *windows = wcpl_applicationWindows();
    for (UIWindow *window in windows) {
        for (UIView *child1 in window.subviews) {
            if ([child1 isKindOfClass:[UITableView class]]) {
                UITableView *tv = (UITableView *)child1;
                if (tv.isDragging) return tv;
            }
            for (UIView *child2 in child1.subviews) {
                if ([child2 isKindOfClass:[UITableView class]]) {
                    UITableView *tv = (UITableView *)child2;
                    if (tv.isDragging) return tv;
                }
                for (UIView *child3 in child2.subviews) {
                    if ([child3 isKindOfClass:[UITableView class]]) {
                        UITableView *tv = (UITableView *)child3;
                        if (tv.isDragging) return tv;
                    }
                }
            }
        }
    }
    return nil;
}

static void wcpl_collectMessageCellViewsInView(UIView *root, NSMutableArray<UIView *> *storage) {
    if (!root || !storage) {
        return;
    }

    static Class commonMessageCellViewClass;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        commonMessageCellViewClass = NSClassFromString(@"CommonMessageCellView");
    });

    if (commonMessageCellViewClass && [root isKindOfClass:commonMessageCellViewClass]) {
        [storage addObject:root];
    }

    for (UIView *subview in root.subviews) {
        wcpl_collectMessageCellViewsInView(subview, storage);
    }
}

static BOOL wcpl_measureViewGeometryInTable(UIView *candidate,
                                            UITableView *tableView,
                                            CGFloat *maxYOut,
                                            CGFloat *visibleAreaOut) {
    if (![candidate isKindOfClass:[UIView class]] ||
        ![tableView isKindOfClass:[UITableView class]] ||
        !candidate.window ||
        candidate.hidden ||
        candidate.alpha < 0.01f) {
        return NO;
    }

    CGFloat maxY = -CGFLOAT_MAX;
    CGFloat visibleArea = 0.0f;
    BOOL hasValidGeometry = NO;
    @try {
        CGRect rectInTable = [candidate convertRect:candidate.bounds toView:tableView];
        maxY = CGRectGetMaxY(rectInTable);
        hasValidGeometry = !isnan(maxY) && !isinf(maxY);

        CGRect visibleRect = CGRectIntersection(rectInTable, tableView.bounds);
        if (!CGRectIsNull(visibleRect) && !CGRectIsEmpty(visibleRect)) {
            visibleArea = CGRectGetWidth(visibleRect) * CGRectGetHeight(visibleRect);
        }
    } @catch (__unused NSException *exception) {
        hasValidGeometry = NO;
        visibleArea = 0.0f;
    }

    if (!hasValidGeometry) {
        return NO;
    }

    if (maxYOut) {
        *maxYOut = maxY;
    }
    if (visibleAreaOut) {
        *visibleAreaOut = visibleArea;
    }
    return YES;
}

static UIView *wcpl_selectBottomMostOwnerView(NSArray<UIView *> *views, UITableView *tableView, UIView *fallback) {
    if (![views isKindOfClass:[NSArray class]] || views.count == 0 || ![tableView isKindOfClass:[UITableView class]]) {
        return fallback;
    }

    CMessageWrap *fallbackWrap = wcpl_messageWrapForCellView(fallback);
    NSString *mappedKey = wcpl_repeatMessageKey(fallbackWrap);
    NSNumber *stickyRank = nil;
    if (mappedKey.length > 0) {
        stickyRank = wcpl_repeatOwnerRankMap()[mappedKey];
    }

    UIView *ownerView = nil;
    CGFloat ownerMaxY = -CGFLOAT_MAX;
    CGFloat ownerVisibleArea = -1.0f;
    uintptr_t ownerRank = 0;

    for (UIView *candidate in views) {
        CGFloat maxY = -CGFLOAT_MAX;
        CGFloat visibleArea = 0.0f;
        if (!wcpl_measureViewGeometryInTable(candidate, tableView, &maxY, &visibleArea)) {
            continue;
        }

        uintptr_t candidateRank = (uintptr_t)candidate;
        BOOL shouldReplace = NO;
        if (!ownerView) {
            shouldReplace = YES;
        } else if (maxY > ownerMaxY + 0.5f) {
            shouldReplace = YES;
        } else if (fabs(maxY - ownerMaxY) <= 0.5f) {
            if (visibleArea > ownerVisibleArea + 0.5f) {
                shouldReplace = YES;
            } else if (fabs(visibleArea - ownerVisibleArea) <= 0.5f) {
                if (stickyRank) {
                    uintptr_t stickyValue = (uintptr_t)stickyRank.unsignedLongLongValue;
                    BOOL ownerIsSticky = (ownerRank == stickyValue);
                    BOOL candidateIsSticky = (candidateRank == stickyValue);
                    if (!ownerIsSticky && candidateIsSticky) {
                        shouldReplace = YES;
                    }
                }
                if (!shouldReplace && candidateRank < ownerRank) {
                    shouldReplace = YES;
                }
            }
        }

        if (shouldReplace) {
            ownerView = candidate;
            ownerMaxY = maxY;
            ownerVisibleArea = visibleArea;
            ownerRank = candidateRank;
        }
    }

    if (!ownerView) {
        return fallback;
    }
    return ownerView;
}

static BOOL wcpl_isBottomMostRepeatOwnerForMessageKey(UIView *cellView, NSString *messageKey) {
    if (![cellView isKindOfClass:[UIView class]] ||
        ![messageKey isKindOfClass:[NSString class]] ||
        messageKey.length == 0) {
        return YES;
    }

    UITableView *tableView = wcpl_findContainingTableView(cellView);
    if (![tableView isKindOfClass:[UITableView class]]) {
        return YES;
    }

    NSArray *visibleCells = nil;
    if ([tableView respondsToSelector:@selector(visibleCells)]) {
        @try {
            visibleCells = ((id (*)(id, SEL))objc_msgSend)(tableView, @selector(visibleCells));
        } @catch (__unused NSException *exception) {
            visibleCells = nil;
        }
    }
    if (![visibleCells isKindOfClass:[NSArray class]] || visibleCells.count == 0) {
        return YES;
    }

    UIView *resolvedOwner = cellView;
    Class commonMessageCellViewClass = NSClassFromString(@"CommonMessageCellView");
    Class msgWrapClass = objc_getClass("CMessageWrap");
    for (id cell in visibleCells) {
        if (![cell isKindOfClass:[UIView class]]) {
            continue;
        }
        UIView *candidate = (UIView *)cell;
        if (candidate == cellView) {
            continue;
        }
        if (commonMessageCellViewClass && ![candidate isKindOfClass:commonMessageCellViewClass]) {
            continue;
        }
        if (!candidate.window || candidate.hidden || candidate.alpha < 0.01f) {
            continue;
        }

        CMessageWrap *candidateWrap = wcpl_messageWrapForCellView(candidate);
        NSString *candidateKey = nil;
        if (!msgWrapClass || [candidateWrap isKindOfClass:msgWrapClass]) {
            candidateKey = wcpl_repeatMessageKey(candidateWrap);
        }
        if (![candidateKey isKindOfClass:[NSString class]] || candidateKey.length == 0) {
            candidateKey = objc_getAssociatedObject(candidate, kWCPLRepeatAnchorMessageKey);
        }
        if (![candidateKey isKindOfClass:[NSString class]] || ![candidateKey isEqualToString:messageKey]) {
            continue;
        }

        UIView *owner = wcpl_selectBottomMostOwnerView(@[resolvedOwner, candidate], tableView, resolvedOwner);
        if ([owner isKindOfClass:[UIView class]]) {
            resolvedOwner = owner;
        }
    }

    return resolvedOwner == cellView;
}

static NSDateFormatter *wcpl_messageTimeFormatter(void) {
    static NSDateFormatter *formatter = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        formatter = [[NSDateFormatter alloc] init];
        formatter.locale = [NSLocale autoupdatingCurrentLocale];
        formatter.dateFormat = @"HH:mm:ss";
    });
    return formatter;
}

static NSString *wcpl_messageTimeTextForTimestamp(unsigned int timestamp) {
    if (timestamp == 0) {
        return nil;
    }

    NSDate *date = [NSDate dateWithTimeIntervalSince1970:(NSTimeInterval)timestamp];
    if (![date isKindOfClass:[NSDate class]]) {
        return nil;
    }

    NSString *text = nil;
    @try {
        text = [wcpl_messageTimeFormatter() stringFromDate:date];
    } @catch (__unused NSException *exception) {
        text = nil;
    }
    if (![text isKindOfClass:[NSString class]] || text.length == 0) {
        return nil;
    }
    return text;
}


%hook CommonMessageCellView

+ (void)load {
    %orig;
    wcpl_setupRepeatLifecycleObserver();
    wcpl_syncRepeatEngineModeIfNeeded();
}

%property(nonatomic, strong) UIPanGestureRecognizer *wchook_swipeGesture;
%property(nonatomic, strong) UITapGestureRecognizer *wchook_doubleTapGesture;
%property(nonatomic, strong) UILabel *wchook_messageTimeLabel;
%property(nonatomic, strong) UIImpactFeedbackGenerator *wchook_feedbackGenerator;
%property(nonatomic, assign) BOOL wchook_feedbackTriggered;
%property(nonatomic, assign) NSInteger wchook_swipeTriggerStage;

%new
+ (void)wchook_runGlobalRepeatButtonRefresh {
    wcpl_syncRepeatEngineModeIfNeeded();

    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (wcpl_shouldUseLocalCellRepeatEngine(config)) {
        gWCPLRepeatGlobalRefreshPending = NO;
        return;
    }

    CFTimeInterval now = CACurrentMediaTime();
    if ((now - gWCPLRepeatLastRefreshAt) < kWCPLRepeatRefreshThrottleInterval) {
        [self wchook_scheduleGlobalRepeatButtonRefreshAfterDelay:kWCPLRepeatRefreshThrottleInterval];
        return;
    }

    gWCPLRepeatGlobalRefreshPending = NO;
    gWCPLRepeatLastRefreshAt = now;

    // 滚动拖拽期间延迟全局刷新，避免大量字典分配和视图树遍历
    UITableView *scrollingTable = wcpl_findAnyScrollingTableView();
    if (scrollingTable && scrollingTable.isDragging) {
        [self wchook_scheduleGlobalRepeatButtonRefreshAfterDelay:0.25];
        return;
    }

    if (now < gWCPLRepeatResumeSuppressUntil) {
        wcpl_forceClearRepeatButtonsInAllWindows();
        return;
    }

    BOOL gateEnabled = gWCPLRepeatRefreshGateEnabled;
    NSArray<UIWindow *> *windows = wcpl_applicationWindows();
    if (windows.count == 0) {
        return;
    }

    gWCPLRepeatRefreshRoundCounter += 1;
    BOOL needPeriodicResync = (gWCPLRepeatRefreshRoundCounter % kWCPLRepeatFullResyncInterval) == 0;
    BOOL lightweightMapMismatch = wcpl_pruneGlobalRepeatButtonsMapLightweight();
    BOOL shouldFullResync = gWCPLRepeatNeedFullResync || needPeriodicResync || lightweightMapMismatch;
    if (shouldFullResync) {
        wcpl_resyncGlobalRepeatButtonsMap();
        gWCPLRepeatNeedFullResync = NO;
    }

    NSMutableDictionary<NSString *, UIView *> *ownerByMessageKey = [NSMutableDictionary dictionary];
    NSMutableDictionary<NSString *, CMessageWrap *> *wrapByMessageKey = [NSMutableDictionary dictionary];
    NSMutableDictionary<NSString *, NSNumber *> *isSelfByMessageKey = [NSMutableDictionary dictionary];
    NSMutableDictionary<NSString *, NSNumber *> *quoteProxyByMessageKey = [NSMutableDictionary dictionary];
    NSMutableDictionary<NSString *, NSNumber *> *quoteProxyReferSvrIDByMessageKey = [NSMutableDictionary dictionary];
    NSMutableDictionary<NSString *, UIView *> *nonProxyOwnerByIdentityToken = [NSMutableDictionary dictionary];
    NSMutableDictionary<NSString *, CMessageWrap *> *nonProxyWrapByIdentityToken = [NSMutableDictionary dictionary];
    NSMutableDictionary<NSString *, NSNumber *> *nonProxyIsSelfByIdentityToken = [NSMutableDictionary dictionary];
    NSMutableDictionary<NSString *, UIView *> *visibleOwnerByIdentityToken = [NSMutableDictionary dictionary];
    NSMutableDictionary<NSString *, CMessageWrap *> *visibleWrapByIdentityToken = [NSMutableDictionary dictionary];
    NSMutableDictionary<NSString *, NSNumber *> *visibleIsSelfByIdentityToken = [NSMutableDictionary dictionary];
    NSMutableDictionary<NSString *, UIView *> *visibleNonQuoteOwnerByMessageKey = [NSMutableDictionary dictionary];
    NSMutableDictionary<NSString *, CMessageWrap *> *visibleNonQuoteWrapByMessageKey = [NSMutableDictionary dictionary];
    NSMutableDictionary<NSString *, NSNumber *> *visibleNonQuoteIsSelfByMessageKey = [NSMutableDictionary dictionary];
    NSMutableDictionary<NSString *, UIView *> *visibleAnchorOwnerByMessageKey = [NSMutableDictionary dictionary];
    NSMutableDictionary<NSString *, CMessageWrap *> *visibleAnchorWrapByMessageKey = [NSMutableDictionary dictionary];
    NSMutableDictionary<NSString *, NSNumber *> *visibleAnchorIsSelfByMessageKey = [NSMutableDictionary dictionary];
    NSMutableDictionary<NSString *, NSNumber *> *visibleAnchorQuoteProxyByMessageKey = [NSMutableDictionary dictionary];
    NSMutableSet<NSString *> *activeMessageKeys = [NSMutableSet set];
    NSMutableArray<UIView *> *staleAnchorCells = [NSMutableArray array];

    for (UIWindow *window in windows) {
        NSMutableArray<UIView *> *messageViews = [NSMutableArray array];
        wcpl_collectMessageCellViewsInView(window, messageViews);

        for (UIView *messageView in messageViews) {
            if (![messageView isKindOfClass:%c(CommonMessageCellView)]) {
                continue;
            }

            BOOL messageViewVisible = messageView.window && !messageView.hidden && messageView.alpha >= 0.01f;

            CMessageWrap *cellWrap = wcpl_messageWrapForCellView(messageView);
            if ([cellWrap isKindOfClass:objc_getClass("CMessageWrap")] && messageViewVisible) {
                BOOL cellIsSelf = !wcpl_isMessageFromOther(cellWrap);
                BOOL resolvedCellIsSelf = NO;
                if (wcpl_tryResolveIsSelfFromCellView(messageView, &resolvedCellIsSelf)) {
                    cellIsSelf = resolvedCellIsSelf;
                }
                NSArray<NSString *> *visibleTokens = wcpl_repeatIdentityTokens(cellWrap);
                for (NSString *token in visibleTokens) {
                    if (![token isKindOfClass:[NSString class]] || token.length == 0) {
                        continue;
                    }

                    UIView *existingOwner = visibleOwnerByIdentityToken[token];
                    if (existingOwner) {
                        CMessageWrap *existingWrap = visibleWrapByIdentityToken[token];
                        BOOL existingQuoteType = [existingWrap isKindOfClass:objc_getClass("CMessageWrap")] && existingWrap.m_uiMessageType == 49;
                        BOOL candidateQuoteType = cellWrap.m_uiMessageType == 49;
                        if (!(existingQuoteType && !candidateQuoteType)) {
                            continue;
                        }
                    }

                    visibleOwnerByIdentityToken[token] = messageView;
                    visibleWrapByIdentityToken[token] = cellWrap;
                    visibleIsSelfByIdentityToken[token] = @(cellIsSelf);
                }

                if (cellWrap.m_uiMessageType != 49) {
                    NSString *visibleMessageKey = wcpl_repeatMessageKey(cellWrap);
                    if ([visibleMessageKey isKindOfClass:[NSString class]] && visibleMessageKey.length > 0) {
                        UIView *existingOwner = visibleNonQuoteOwnerByMessageKey[visibleMessageKey];
                        if (!existingOwner) {
                            visibleNonQuoteOwnerByMessageKey[visibleMessageKey] = messageView;
                            visibleNonQuoteWrapByMessageKey[visibleMessageKey] = cellWrap;
                            visibleNonQuoteIsSelfByMessageKey[visibleMessageKey] = @(cellIsSelf);
                        } else {
                            UITableView *tableView = wcpl_findContainingTableView(messageView) ?: wcpl_findContainingTableView(existingOwner);
                            UIView *resolvedOwner = wcpl_selectBottomMostOwnerView(@[existingOwner, messageView], tableView, existingOwner);
                            if (resolvedOwner == messageView) {
                                visibleNonQuoteOwnerByMessageKey[visibleMessageKey] = messageView;
                                visibleNonQuoteWrapByMessageKey[visibleMessageKey] = cellWrap;
                                visibleNonQuoteIsSelfByMessageKey[visibleMessageKey] = @(cellIsSelf);
                            }
                        }
                    }
                }
            }

            NSString *anchorMessageKey = objc_getAssociatedObject(messageView, kWCPLRepeatAnchorMessageKey);
            CMessageWrap *anchorWrap = objc_getAssociatedObject(messageView, kWCPLRepeatAnchorWrapKey);
            NSNumber *anchorTimeObj = objc_getAssociatedObject(messageView, kWCPLRepeatAnchorReportTimeKey);
            NSNumber *anchorIsSelfObj = objc_getAssociatedObject(messageView, kWCPLRepeatAnchorIsSelfKey);
            NSNumber *anchorQuoteProxyObj = objc_getAssociatedObject(messageView, kWCPLRepeatAnchorQuoteProxyKey);
            NSNumber *anchorQuoteReferSvrIDObj = objc_getAssociatedObject(messageView, kWCPLRepeatAnchorQuoteReferSvrIDKey);
            CFTimeInterval anchorTime = anchorTimeObj ? anchorTimeObj.doubleValue : 0;
            BOOL anchorIsQuoteProxy = anchorQuoteProxyObj ? anchorQuoteProxyObj.boolValue : NO;

            if (![anchorMessageKey isKindOfClass:[NSString class]] || anchorMessageKey.length == 0 ||
                ![anchorWrap isKindOfClass:objc_getClass("CMessageWrap")] ||
                (!messageViewVisible && (now - anchorTime) > kWCPLRepeatAnchorStaleInterval)) {
                if ([anchorMessageKey isKindOfClass:[NSString class]] && anchorMessageKey.length > 0) {
                    [staleAnchorCells addObject:messageView];
                }
                continue;
            }

            NSString *messageKey = anchorMessageKey;
            [activeMessageKeys addObject:messageKey];

            if (messageViewVisible) {
                BOOL anchorIsSelf = [anchorIsSelfObj boolValue];
                UIView *existingVisibleAnchorOwner = visibleAnchorOwnerByMessageKey[messageKey];
                if (!existingVisibleAnchorOwner) {
                    visibleAnchorOwnerByMessageKey[messageKey] = messageView;
                    visibleAnchorWrapByMessageKey[messageKey] = anchorWrap;
                    visibleAnchorIsSelfByMessageKey[messageKey] = @(anchorIsSelf);
                    visibleAnchorQuoteProxyByMessageKey[messageKey] = @(anchorIsQuoteProxy);
                } else {
                    BOOL existingVisibleAnchorIsQuoteProxy = [visibleAnchorQuoteProxyByMessageKey[messageKey] boolValue];
                    UIView *resolvedVisibleAnchorOwner = existingVisibleAnchorOwner;
                    if (existingVisibleAnchorIsQuoteProxy != anchorIsQuoteProxy) {
                        resolvedVisibleAnchorOwner = existingVisibleAnchorIsQuoteProxy ? messageView : existingVisibleAnchorOwner;
                    } else {
                        UITableView *tableView = wcpl_findContainingTableView(messageView) ?: wcpl_findContainingTableView(existingVisibleAnchorOwner);
                        UIView *owner = wcpl_selectBottomMostOwnerView(@[existingVisibleAnchorOwner, messageView], tableView, existingVisibleAnchorOwner);
                        resolvedVisibleAnchorOwner = owner ?: existingVisibleAnchorOwner;
                    }

                    if (resolvedVisibleAnchorOwner == messageView) {
                        visibleAnchorOwnerByMessageKey[messageKey] = messageView;
                        visibleAnchorWrapByMessageKey[messageKey] = anchorWrap;
                        visibleAnchorIsSelfByMessageKey[messageKey] = @(anchorIsSelf);
                        visibleAnchorQuoteProxyByMessageKey[messageKey] = @(anchorIsQuoteProxy);
                    }
                }
            }

            if (!anchorIsQuoteProxy) {
                NSArray<NSString *> *tokens = wcpl_repeatIdentityTokens(anchorWrap);
                BOOL anchorIsSelf = [anchorIsSelfObj boolValue];
                for (NSString *token in tokens) {
                    if (![token isKindOfClass:[NSString class]] || token.length == 0 || nonProxyOwnerByIdentityToken[token]) {
                        continue;
                    }
                    nonProxyOwnerByIdentityToken[token] = messageView;
                    nonProxyWrapByIdentityToken[token] = anchorWrap;
                    nonProxyIsSelfByIdentityToken[token] = @(anchorIsSelf);
                }
            }

            UIView *existingKeeper = ownerByMessageKey[messageKey];
            if (!existingKeeper) {
                ownerByMessageKey[messageKey] = messageView;
                wrapByMessageKey[messageKey] = anchorWrap;
                isSelfByMessageKey[messageKey] = @([anchorIsSelfObj boolValue]);
                quoteProxyByMessageKey[messageKey] = @(anchorIsQuoteProxy);
                if ([anchorQuoteReferSvrIDObj isKindOfClass:[NSNumber class]]) {
                    quoteProxyReferSvrIDByMessageKey[messageKey] = anchorQuoteReferSvrIDObj;
                }
            } else {
                BOOL existingIsQuoteProxy = [quoteProxyByMessageKey[messageKey] boolValue];
                CMessageWrap *existingCellWrap = wcpl_messageWrapForCellView(existingKeeper);
                CMessageWrap *candidateCellWrap = wcpl_messageWrapForCellView(messageView);
                BOOL existingIsQuoteCell = [existingCellWrap isKindOfClass:objc_getClass("CMessageWrap")] && existingCellWrap.m_uiMessageType == 49;
                BOOL candidateIsQuoteCell = [candidateCellWrap isKindOfClass:objc_getClass("CMessageWrap")] && candidateCellWrap.m_uiMessageType == 49;

                UIView *resolvedOwner = existingKeeper;
                BOOL existingVisible = existingKeeper.window && !existingKeeper.hidden && existingKeeper.alpha >= 0.01f;
                BOOL candidateVisible = messageViewVisible;
                if (existingVisible != candidateVisible) {
                    resolvedOwner = candidateVisible ? messageView : existingKeeper;
                } else if (existingIsQuoteProxy != anchorIsQuoteProxy) {
                    resolvedOwner = existingIsQuoteProxy ? messageView : existingKeeper;
                } else if (existingIsQuoteCell != candidateIsQuoteCell) {
                    resolvedOwner = existingIsQuoteCell ? messageView : existingKeeper;
                } else {
                    UITableView *tableView = wcpl_findContainingTableView(messageView) ?: wcpl_findContainingTableView(existingKeeper);
                    UIView *owner = wcpl_selectBottomMostOwnerView(@[existingKeeper, messageView], tableView, existingKeeper);
                    resolvedOwner = owner ?: existingKeeper;
                }

                ownerByMessageKey[messageKey] = resolvedOwner;
                if (resolvedOwner == messageView) {
                    wrapByMessageKey[messageKey] = anchorWrap;
                    isSelfByMessageKey[messageKey] = @([anchorIsSelfObj boolValue]);
                    quoteProxyByMessageKey[messageKey] = @(anchorIsQuoteProxy);
                    if ([anchorQuoteReferSvrIDObj isKindOfClass:[NSNumber class]]) {
                        quoteProxyReferSvrIDByMessageKey[messageKey] = anchorQuoteReferSvrIDObj;
                    }
                }
            }
        }
    }

    for (UIView *staleCell in staleAnchorCells) {
        if ([staleCell isKindOfClass:%c(CommonMessageCellView)]) {
            [(CommonMessageCellView *)staleCell wchook_clearRepeatAnchorAndLegacyButton];
        }
    }

    NSMutableDictionary<NSString *, UIButton *> *globalButtons = wcpl_repeatGlobalButtonMap();
    BOOL detectedMapInconsistency = NO;
    for (NSString *messageKey in [globalButtons allKeys]) {
        if ([activeMessageKeys containsObject:messageKey]) {
            continue;
        }
        UIButton *button = globalButtons[messageKey];
        if ([button isKindOfClass:[UIButton class]] && button.window && !button.hidden && button.alpha >= 0.01f) {
            continue;
        }
        [button removeFromSuperview];
        [globalButtons removeObjectForKey:messageKey];
        wcpl_setRepeatOwnerViewForMessageKey(messageKey, nil);
    }

    for (NSString *messageKey in activeMessageKeys) {
        UIView *ownerView = ownerByMessageKey[messageKey];
        CMessageWrap *wrap = wrapByMessageKey[messageKey];
        BOOL isSelf = [isSelfByMessageKey[messageKey] boolValue];
        BOOL ownerIsQuoteProxy = [quoteProxyByMessageKey[messageKey] boolValue];
        long long referSvrID = [quoteProxyReferSvrIDByMessageKey[messageKey] longLongValue];
        if (ownerIsQuoteProxy &&
            [wrap isKindOfClass:objc_getClass("CMessageWrap")] &&
            wrap.m_uiMessageType == 49 &&
            referSvrID > 0 &&
            wrap.m_n64MesSvrID > 0 &&
            referSvrID == wrap.m_n64MesSvrID) {
            ownerIsQuoteProxy = NO;
            WCPLLogDebug(@"issue_id=wx-bugfix-repeat-quote-button-20260210 module=WCPLGestureHook scene=repeat_owner_proxy_guard branch_decision=force_self_owner fallback_reason=refer_svrid_equals_msg_svrid input={referSvr=%lld,msgSvr=%lld,messageKey=%@} msg=%@",
                         referSvrID,
                         wrap.m_n64MesSvrID,
                         messageKey,
                         wcpl_repeatMessageDebugInfo(wrap));
        }

        if (ownerIsQuoteProxy) {
            UIView *promotedOwner = nil;
            CMessageWrap *promotedWrap = nil;
            NSNumber *promotedIsSelfObj = nil;

            UIView *stickyOwner = wcpl_repeatOwnerViewForMessageKey(messageKey);
            if ([stickyOwner isKindOfClass:%c(CommonMessageCellView)] &&
                stickyOwner != ownerView &&
                stickyOwner.window && !stickyOwner.hidden && stickyOwner.alpha >= 0.01f) {
                CMessageWrap *stickyWrap = wcpl_messageWrapForCellView(stickyOwner);
                BOOL stickyIsQuoteCell = [stickyWrap isKindOfClass:objc_getClass("CMessageWrap")] && stickyWrap.m_uiMessageType == 49;
                if (!stickyIsQuoteCell) {
                    promotedOwner = stickyOwner;
                    promotedWrap = stickyWrap;
                    if ([stickyWrap isKindOfClass:objc_getClass("CMessageWrap")]) {
                        promotedIsSelfObj = @(!wcpl_isMessageFromOther(stickyWrap));
                    }
                }
            }

            if (!promotedOwner) {
                for (NSString *token in wcpl_repeatIdentityTokens(wrap)) {
                UIView *candidateOwner = nonProxyOwnerByIdentityToken[token];
                if (![candidateOwner isKindOfClass:%c(CommonMessageCellView)]) {
                    continue;
                }
                if (!candidateOwner.window || candidateOwner.hidden || candidateOwner.alpha < 0.01f) {
                    continue;
                }
                promotedOwner = candidateOwner;
                promotedWrap = nonProxyWrapByIdentityToken[token];
                promotedIsSelfObj = nonProxyIsSelfByIdentityToken[token];
                break;
            }
            }

            if (!promotedOwner) {
                long long referSvrID = [quoteProxyReferSvrIDByMessageKey[messageKey] longLongValue];
                if (referSvrID > 0) {
                    NSString *svrToken = [NSString stringWithFormat:@"s:*:%lld", referSvrID];
                    UIView *candidateOwner = nonProxyOwnerByIdentityToken[svrToken];
                    if ([candidateOwner isKindOfClass:%c(CommonMessageCellView)] &&
                        candidateOwner.window && !candidateOwner.hidden && candidateOwner.alpha >= 0.01f) {
                        promotedOwner = candidateOwner;
                        promotedWrap = nonProxyWrapByIdentityToken[svrToken];
                        promotedIsSelfObj = nonProxyIsSelfByIdentityToken[svrToken];
                    }
                }
            }

            if (!promotedOwner) {
                long long referSvrID = [quoteProxyReferSvrIDByMessageKey[messageKey] longLongValue];
                if (referSvrID > 0) {
                    NSString *referMessageKey = [NSString stringWithFormat:@"m_%lld", referSvrID];
                    UIView *candidateOwner = ownerByMessageKey[referMessageKey];
                    if ([candidateOwner isKindOfClass:%c(CommonMessageCellView)] &&
                        candidateOwner != ownerView &&
                        candidateOwner.window && !candidateOwner.hidden && candidateOwner.alpha >= 0.01f) {
                        promotedOwner = candidateOwner;
                        promotedWrap = wrapByMessageKey[referMessageKey];
                        promotedIsSelfObj = isSelfByMessageKey[referMessageKey];
                    }
                }
            }

            if (!promotedOwner) {
                UIView *candidateOwner = visibleNonQuoteOwnerByMessageKey[messageKey];
                if ([candidateOwner isKindOfClass:%c(CommonMessageCellView)] &&
                    candidateOwner != ownerView &&
                    candidateOwner.window && !candidateOwner.hidden && candidateOwner.alpha >= 0.01f) {
                    promotedOwner = candidateOwner;
                    promotedWrap = visibleNonQuoteWrapByMessageKey[messageKey];
                    promotedIsSelfObj = visibleNonQuoteIsSelfByMessageKey[messageKey];
                }
            }

            if (!promotedOwner) {
                long long referSvrID = [quoteProxyReferSvrIDByMessageKey[messageKey] longLongValue];
                if (referSvrID > 0) {
                    NSString *referMessageKey = [NSString stringWithFormat:@"m_%lld", referSvrID];
                    UIView *candidateOwner = visibleNonQuoteOwnerByMessageKey[referMessageKey];
                    if ([candidateOwner isKindOfClass:%c(CommonMessageCellView)] &&
                        candidateOwner != ownerView &&
                        candidateOwner.window && !candidateOwner.hidden && candidateOwner.alpha >= 0.01f) {
                        promotedOwner = candidateOwner;
                        promotedWrap = visibleNonQuoteWrapByMessageKey[referMessageKey];
                        promotedIsSelfObj = visibleNonQuoteIsSelfByMessageKey[referMessageKey];
                    }
                }
            }

            if (!promotedOwner) {
                for (NSString *token in wcpl_repeatIdentityTokens(wrap)) {
                    UIView *candidateOwner = visibleOwnerByIdentityToken[token];
                    if (![candidateOwner isKindOfClass:%c(CommonMessageCellView)]) {
                        continue;
                    }
                    if (!candidateOwner.window || candidateOwner.hidden || candidateOwner.alpha < 0.01f) {
                        continue;
                    }
                    promotedOwner = candidateOwner;
                    promotedWrap = visibleWrapByIdentityToken[token];
                    promotedIsSelfObj = visibleIsSelfByIdentityToken[token];
                    break;
                }
            }

            if (!promotedOwner) {
                long long referSvrID = [quoteProxyReferSvrIDByMessageKey[messageKey] longLongValue];
                if (referSvrID > 0) {
                    NSString *svrToken = [NSString stringWithFormat:@"s:*:%lld", referSvrID];
                    UIView *candidateOwner = visibleOwnerByIdentityToken[svrToken];
                    if ([candidateOwner isKindOfClass:%c(CommonMessageCellView)] &&
                        candidateOwner.window && !candidateOwner.hidden && candidateOwner.alpha >= 0.01f) {
                        promotedOwner = candidateOwner;
                        promotedWrap = visibleWrapByIdentityToken[svrToken];
                        promotedIsSelfObj = visibleIsSelfByIdentityToken[svrToken];
                    }
                }
            }

            if (!promotedOwner) {
                UIView *candidateOwner = visibleAnchorOwnerByMessageKey[messageKey];
                NSNumber *candidateQuoteProxyObj = visibleAnchorQuoteProxyByMessageKey[messageKey];
                if ([candidateOwner isKindOfClass:%c(CommonMessageCellView)] &&
                    candidateOwner != ownerView &&
                    candidateOwner.window && !candidateOwner.hidden && candidateOwner.alpha >= 0.01f &&
                    ![candidateQuoteProxyObj boolValue]) {
                    promotedOwner = candidateOwner;
                    promotedWrap = visibleAnchorWrapByMessageKey[messageKey];
                    promotedIsSelfObj = visibleAnchorIsSelfByMessageKey[messageKey];
                }
            }

            if (promotedOwner) {
                ownerView = promotedOwner;
                if ([promotedWrap isKindOfClass:objc_getClass("CMessageWrap")]) {
                    wrap = promotedWrap;
                }
                if ([promotedIsSelfObj isKindOfClass:[NSNumber class]]) {
                    isSelf = promotedIsSelfObj.boolValue;
                }
                ownerIsQuoteProxy = NO;
            }
        }

        if (ownerIsQuoteProxy) {
            NSArray<NSString *> *debugTokens = wcpl_repeatIdentityTokens(wrap);
            UIButton *keptButton = globalButtons[messageKey];
            BOOL hasVisibleKeptButton = [keptButton isKindOfClass:[UIButton class]] && keptButton.window && !keptButton.hidden && keptButton.alpha >= 0.01f;
            if (hasVisibleKeptButton) {
                WCPLLogDebug(@"Repeat proxy unresolved keep: key=%@ referSvr=%lld msg=%@ tokens=%@",
                             messageKey,
                             [quoteProxyReferSvrIDByMessageKey[messageKey] longLongValue],
                             wcpl_repeatMessageDebugInfo(wrap),
                             [debugTokens componentsJoinedByString:@","]);
            }

            if (!([ownerView isKindOfClass:%c(CommonMessageCellView)] && ownerView.window && !ownerView.hidden && ownerView.alpha >= 0.01f)) {
                UIView *fallbackVisibleOwner = visibleAnchorOwnerByMessageKey[messageKey];
                if ([fallbackVisibleOwner isKindOfClass:%c(CommonMessageCellView)] &&
                    fallbackVisibleOwner.window && !fallbackVisibleOwner.hidden && fallbackVisibleOwner.alpha >= 0.01f) {
                    ownerView = fallbackVisibleOwner;
                    CMessageWrap *fallbackWrap = visibleAnchorWrapByMessageKey[messageKey];
                    NSNumber *fallbackIsSelfObj = visibleAnchorIsSelfByMessageKey[messageKey];
                    NSNumber *fallbackQuoteProxyObj = visibleAnchorQuoteProxyByMessageKey[messageKey];
                    if ([fallbackWrap isKindOfClass:objc_getClass("CMessageWrap")]) {
                        wrap = fallbackWrap;
                    }
                    if ([fallbackIsSelfObj isKindOfClass:[NSNumber class]]) {
                        isSelf = fallbackIsSelfObj.boolValue;
                    }
                    ownerIsQuoteProxy = [fallbackQuoteProxyObj boolValue];
                }
            }

            if (!([ownerView isKindOfClass:%c(CommonMessageCellView)] && ownerView.window && !ownerView.hidden && ownerView.alpha >= 0.01f) && hasVisibleKeptButton) {
                UIView *keptOwner = keptButton.superview;
                if ([keptOwner isKindOfClass:%c(CommonMessageCellView)] &&
                    keptOwner.window && !keptOwner.hidden && keptOwner.alpha >= 0.01f) {
                    ownerView = keptOwner;
                    CMessageWrap *keptWrap = objc_getAssociatedObject(keptButton, kWCPLRepeatButtonWrapKey);
                    if ([keptWrap isKindOfClass:objc_getClass("CMessageWrap")]) {
                        wrap = keptWrap;
                        isSelf = !wcpl_isMessageFromOther(keptWrap);
                    }
                }
            }

            if ([ownerView isKindOfClass:%c(CommonMessageCellView)] && ownerView.window && !ownerView.hidden && ownerView.alpha >= 0.01f) {
                BOOL fallbackOwnerIsQuoteProxy = ownerIsQuoteProxy;
                WCPLLogWarning(@"Repeat proxy unresolved fallback-owner: key=%@ referSvr=%lld msg=%@ tokens=%@ fallbackProxy=%d kept=%d",
                               messageKey,
                               [quoteProxyReferSvrIDByMessageKey[messageKey] longLongValue],
                               wcpl_repeatMessageDebugInfo(wrap),
                               [debugTokens componentsJoinedByString:@","],
                               fallbackOwnerIsQuoteProxy ? 1 : 0,
                               hasVisibleKeptButton ? 1 : 0);
                ownerIsQuoteProxy = NO;
            } else {
                WCPLLogWarning(@"Repeat proxy unresolved no-button: key=%@ referSvr=%lld msg=%@ tokens=%@",
                               messageKey,
                               [quoteProxyReferSvrIDByMessageKey[messageKey] longLongValue],
                               wcpl_repeatMessageDebugInfo(wrap),
                               [debugTokens componentsJoinedByString:@","]);
                continue;
            }
        }

        if (![ownerView isKindOfClass:%c(CommonMessageCellView)] || !ownerView.window || ownerView.hidden || ownerView.alpha < 0.01f) {
            UIButton *keptButton = globalButtons[messageKey];
            if ([keptButton isKindOfClass:[UIButton class]] && keptButton.window && !keptButton.hidden && keptButton.alpha >= 0.01f) {
                continue;
            }
            UIButton *staleButton = globalButtons[messageKey];
            [staleButton removeFromSuperview];
            [globalButtons removeObjectForKey:messageKey];
            wcpl_setRepeatOwnerViewForMessageKey(messageKey, nil);
            continue;
        }

        CommonMessageCellView *ownerCell = (CommonMessageCellView *)ownerView;
        if (gateEnabled) {
            UIButton *gateButton = globalButtons[messageKey];
            if (gateButton && gateButton.superview != ownerView) {
                [gateButton removeFromSuperview];
                wcpl_removeRepeatButtonFromGlobalMap(globalButtons, gateButton, messageKey);
                detectedMapInconsistency = YES;
                gateButton = nil;
            }
            if (gateButton && gateButton.window && gateButton.window != ownerView.window) {
                [gateButton removeFromSuperview];
                wcpl_removeRepeatButtonFromGlobalMap(globalButtons, gateButton, messageKey);
                detectedMapInconsistency = YES;
                gateButton = nil;
            }
            objc_setAssociatedObject(ownerCell, kWCPLRepeatButtonViewKey, gateButton, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            objc_setAssociatedObject(ownerCell, kWCPLRepeatButtonMessageKey, messageKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
            wcpl_setRepeatOwnerViewForMessageKey(messageKey, ownerView);
        }

        UIButton *button = [self wchook_globalRepeatButtonForMessageKey:messageKey owner:ownerCell createIfNeeded:YES];
        if (![button isKindOfClass:[UIButton class]]) {
            continue;
        }

        UIButton *mappedButton = globalButtons[messageKey];
        if (mappedButton && mappedButton != button) {
            [mappedButton removeFromSuperview];
            wcpl_removeRepeatButtonFromGlobalMap(globalButtons, mappedButton, messageKey);
            detectedMapInconsistency = YES;
            globalButtons[messageKey] = button;
        }

        NSString *buttonMessageKey = objc_getAssociatedObject(button, kWCPLRepeatButtonMessageKey);
        if ([buttonMessageKey isKindOfClass:[NSString class]] && buttonMessageKey.length > 0 && ![buttonMessageKey isEqualToString:messageKey]) {
            wcpl_removeRepeatButtonFromGlobalMap(globalButtons, button, buttonMessageKey);
            detectedMapInconsistency = YES;
            globalButtons[messageKey] = button;
        }

        if (button.superview != ownerView) {
            [button removeFromSuperview];
            [ownerView addSubview:button];
        }

        objc_setAssociatedObject(button, kWCPLRepeatButtonWrapKey, wrap, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(button, kWCPLRepeatButtonMessageKey, messageKey, OBJC_ASSOCIATION_COPY_NONATOMIC);

        UIView *bubbleView = [ownerCell wchook_bubbleAnchorView];
        if (!bubbleView) {
            bubbleView = ownerView;
        }

        [ownerCell wchook_layoutRepeatButton:button withBubbleView:bubbleView isSelf:isSelf];
        button.layer.cornerRadius = CGRectGetHeight(button.bounds) * 0.5f;
        CGFloat titleSize = MIN(14.0f, MAX(10.0f, CGRectGetHeight(button.bounds) * 0.55f));
        button.titleLabel.font = [UIFont systemFontOfSize:titleSize weight:UIFontWeightSemibold];

        objc_setAssociatedObject(ownerCell, kWCPLRepeatButtonViewKey, button, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(ownerCell, kWCPLRepeatButtonMessageKey, messageKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
        wcpl_setRepeatOwnerViewForMessageKey(messageKey, ownerView);
    }

    if (detectedMapInconsistency) {
        gWCPLRepeatNeedFullResync = YES;
    }

}

%new
+ (void)wchook_scheduleGlobalRepeatButtonRefresh {
    [self wchook_scheduleGlobalRepeatButtonRefreshAfterDelay:0];
}

%new
+ (void)wchook_scheduleGlobalRepeatButtonRefreshAfterDelay:(NSTimeInterval)delay {
    wcpl_syncRepeatEngineModeIfNeeded();

    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (wcpl_shouldUseLocalCellRepeatEngine(config)) {
        gWCPLRepeatGlobalRefreshPending = NO;
        gWCPLRepeatRefreshScheduleToken += 1;
        return;
    }

    if (delay < 0) {
        delay = 0;
    }

    CFTimeInterval now = CACurrentMediaTime();
    NSTimeInterval minDelay = kWCPLRepeatRefreshThrottleInterval - (now - gWCPLRepeatLastRefreshAt);
    if (minDelay < 0) {
        minDelay = 0;
    }
    NSTimeInterval finalDelay = MAX(delay, minDelay);

    if (gWCPLRepeatGlobalRefreshPending && finalDelay <= 0) {
        return;
    }

    gWCPLRepeatRefreshScheduleToken += 1;
    NSUInteger token = gWCPLRepeatRefreshScheduleToken;
    gWCPLRepeatGlobalRefreshPending = YES;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(finalDelay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        if (token != gWCPLRepeatRefreshScheduleToken) {
            return;
        }
        [self wchook_runGlobalRepeatButtonRefresh];
    });
}

%new
+ (void)wchook_scheduleGlobalRepeatButtonSettleRefresh {
    if (gWCPLRepeatSettleRefreshPending) {
        return;
    }

    gWCPLRepeatSettleRefreshPending = YES;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(kWCPLRepeatSettleRefreshDelay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        gWCPLRepeatSettleRefreshPending = NO;
        [self wchook_scheduleGlobalRepeatButtonRefresh];

        if (gWCPLRepeatSettleRefreshFollowPending) {
            return;
        }
        gWCPLRepeatSettleRefreshFollowPending = YES;
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(kWCPLRepeatSettleRefreshFollowDelay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            gWCPLRepeatSettleRefreshFollowPending = NO;
            [self wchook_scheduleGlobalRepeatButtonRefresh];
        });
    });
}

%new
+ (UIButton *)wchook_globalRepeatButtonForMessageKey:(NSString *)messageKey owner:(id)owner createIfNeeded:(BOOL)createIfNeeded {
    if (![messageKey isKindOfClass:[NSString class]] || messageKey.length == 0) {
        return nil;
    }

    NSMutableDictionary<NSString *, UIButton *> *buttonMap = wcpl_repeatGlobalButtonMap();
    UIButton *button = buttonMap[messageKey];
    if (![button isKindOfClass:[UIButton class]]) {
        button = nil;
    }

    if (!button && createIfNeeded && [owner isKindOfClass:%c(CommonMessageCellView)]) {
        button = [(CommonMessageCellView *)owner wchook_buildRepeatButton];
        if (button) {
            buttonMap[messageKey] = button;
        }
    }

    if (button && owner) {
        wcpl_bindRepeatButtonTargetsToOwner(button, owner);
    }
    return button;
}

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
- (UIButton *)wchook_buildRepeatButton {
    CGFloat buttonSize = wcpl_repeatButtonSizeFromConfig();

    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.tag = kWCPLRepeatButtonTag;
    button.exclusiveTouch = YES;
    button.adjustsImageWhenHighlighted = NO;
    button.backgroundColor = [UIColor colorWithWhite:1.0f alpha:0.96f];
    button.layer.cornerRadius = buttonSize * 0.5f;
    button.layer.borderWidth = 0.5f;
    button.layer.borderColor = [UIColor colorWithWhite:0.0f alpha:0.12f].CGColor;
    button.layer.shadowColor = [UIColor blackColor].CGColor;
    button.layer.shadowOffset = CGSizeMake(0.0f, 1.0f);
    button.layer.shadowRadius = 2.5f;
    button.layer.shadowOpacity = 0.10f;
    button.layer.shouldRasterize = YES;
    button.layer.rasterizationScale = [UIScreen mainScreen].scale;
    [button setTitle:@"+1" forState:UIControlStateNormal];
    [button setTitleColor:[UIColor colorWithRed:0.03f green:0.68f blue:0.36f alpha:1.0f] forState:UIControlStateNormal];
    CGFloat titleSize = MIN(14.0f, MAX(10.0f, buttonSize * 0.55f));
    button.titleLabel.font = [UIFont systemFontOfSize:titleSize weight:UIFontWeightSemibold];
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
    button.layer.cornerRadius = CGRectGetHeight(button.bounds) * 0.5f;
    CGFloat titleSize = MIN(14.0f, MAX(10.0f, CGRectGetHeight(button.bounds) * 0.55f));
    button.titleLabel.font = [UIFont systemFontOfSize:titleSize weight:UIFontWeightSemibold];

    if (button.superview != self) {
        [button removeFromSuperview];
        [self addSubview:button];
    }
    [self bringSubviewToFront:button];
}

%new
- (void)wchook_removeRepeatButtonIfNeeded {
    NSMutableDictionary<NSString *, UIButton *> *globalButtons = wcpl_repeatGlobalButtonMap();
    NSString *anchorMessageKey = objc_getAssociatedObject(self, kWCPLRepeatAnchorMessageKey);
    if ([anchorMessageKey isKindOfClass:[NSString class]] && anchorMessageKey.length > 0) {
        UIButton *anchorButton = globalButtons[anchorMessageKey];
        if ([anchorButton isKindOfClass:[UIButton class]] && anchorButton.superview == self) {
            [anchorButton removeFromSuperview];
            wcpl_removeRepeatButtonFromGlobalMap(globalButtons, anchorButton, anchorMessageKey);
        }
    }

    UIButton *cachedButton = objc_getAssociatedObject(self, kWCPLRepeatButtonViewKey);
    NSString *cachedMessageKey = objc_getAssociatedObject(self, kWCPLRepeatButtonMessageKey);

    if ([cachedButton isKindOfClass:[UIButton class]] && cachedButton.superview == self) {
        NSString *buttonMessageKey = objc_getAssociatedObject(cachedButton, kWCPLRepeatButtonMessageKey);
        NSString *messageKey = ([buttonMessageKey isKindOfClass:[NSString class]] && buttonMessageKey.length > 0)
            ? buttonMessageKey
            : cachedMessageKey;
        [cachedButton removeFromSuperview];
        wcpl_removeRepeatButtonFromGlobalMap(globalButtons, cachedButton, messageKey);
    }

    NSMutableArray<UIButton *> *directButtons = [NSMutableArray array];
    for (UIView *subview in self.subviews) {
        if ([subview isKindOfClass:[UIButton class]] && subview.tag == kWCPLRepeatButtonTag) {
            UIButton *button = (UIButton *)subview;
            [directButtons addObject:button];
        }
    }
    for (UIButton *button in directButtons) {
        NSString *buttonMessageKey = objc_getAssociatedObject(button, kWCPLRepeatButtonMessageKey);
        [button removeFromSuperview];
        wcpl_removeRepeatButtonFromGlobalMap(globalButtons, button, buttonMessageKey);
    }

    NSMutableArray<UIButton *> *legacyButtons = [NSMutableArray array];
    if (directButtons.count == 0 && cachedButton == nil && anchorMessageKey.length == 0) {
        wcpl_collectRepeatButtonsFromView(self, legacyButtons);
        for (UIButton *button in legacyButtons) {
            if (button.superview == self) {
                continue;
            }
            NSString *buttonMessageKey = objc_getAssociatedObject(button, kWCPLRepeatButtonMessageKey);
            [button removeFromSuperview];
            wcpl_removeRepeatButtonFromGlobalMap(globalButtons, button, buttonMessageKey);
        }
    }

    if ([cachedMessageKey isKindOfClass:[NSString class]] && cachedMessageKey.length > 0) {
        UIView *owner = wcpl_repeatOwnerViewForMessageKey(cachedMessageKey);
        if (!owner || owner == self) {
            wcpl_setRepeatOwnerViewForMessageKey(cachedMessageKey, nil);
        }
    }

    objc_setAssociatedObject(self, kWCPLRepeatButtonViewKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, kWCPLRepeatButtonMessageKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    NSUInteger legacyFallbackCount = legacyButtons.count;
    if (legacyFallbackCount > 0) {
        gWCPLRepeatNeedFullResync = YES;
    }
    if (directButtons.count > 1) {
        gWCPLRepeatNeedFullResync = YES;
    }
    if (legacyFallbackCount > 1) {
        WCPLLogDebug(@"Repeat button remove cleanup(legacy-fallback): class=%@ count=%lu", NSStringFromClass([self class]), (unsigned long)legacyFallbackCount);
    }
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
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (wcpl_shouldUseLocalCellRepeatEngine(config)) {
        [self wchook_clearRepeatAnchorAndButtonLocalOnly];
    } else {
        [self wchook_clearRepeatAnchorAndLegacyButton];
    }
}

%new
- (void)wchook_clearRepeatAnchorAndLegacyButton {
    NSString *anchorMessageKey = objc_getAssociatedObject(self, kWCPLRepeatAnchorMessageKey);
    wcpl_clearRepeatAnchorForCell(self);

    if ([anchorMessageKey isKindOfClass:[NSString class]] && anchorMessageKey.length > 0) {
        UIView *owner = wcpl_repeatOwnerViewForMessageKey(anchorMessageKey);
        if (owner == self) {
            wcpl_setRepeatOwnerViewForMessageKey(anchorMessageKey, nil);
        }
    }

    [self wchook_removeRepeatButtonIfNeeded];
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

    CGRect bubbleRectForDirection = CGRectZero;
    BOOL bubbleRectForDirectionValid = NO;
    if ([bubbleView isKindOfClass:[UIView class]]) {
        bubbleRectForDirection = [self convertRect:bubbleView.bounds fromView:bubbleView];
        if (CGRectIsEmpty(bubbleRectForDirection) || CGRectGetWidth(bubbleRectForDirection) <= 0.0f || CGRectGetHeight(bubbleRectForDirection) <= 0.0f) {
            UIView *sourceSuperview = bubbleView.superview;
            if (sourceSuperview) {
                bubbleRectForDirection = [self convertRect:bubbleView.frame fromView:sourceSuperview];
            } else if (bubbleView == self) {
                bubbleRectForDirection = self.bounds;
            }
        }
        bubbleRectForDirectionValid = !CGRectIsEmpty(bubbleRectForDirection) &&
                                      !CGRectIsNull(bubbleRectForDirection) &&
                                      !CGRectIsInfinite(bubbleRectForDirection) &&
                                      CGRectGetWidth(bubbleRectForDirection) > 8.0f &&
                                      CGRectGetHeight(bubbleRectForDirection) > 8.0f &&
                                      CGRectIntersectsRect(bubbleRectForDirection, self.bounds);
    }

    CGRect menuRectForDirection = CGRectZero;
    BOOL menuRectForDirectionValid = NO;
    if ([self respondsToSelector:@selector(showRectForMenuController)]) {
        @try {
            menuRectForDirection = ((CGRect (*)(id, SEL))objc_msgSend)(self, @selector(showRectForMenuController));
        } @catch (__unused NSException *exception) {
            menuRectForDirection = CGRectZero;
        }
        menuRectForDirectionValid = !CGRectIsEmpty(menuRectForDirection) &&
                                    !CGRectIsNull(menuRectForDirection) &&
                                    !CGRectIsInfinite(menuRectForDirection) &&
                                    CGRectGetWidth(menuRectForDirection) > 8.0f &&
                                    CGRectGetHeight(menuRectForDirection) > 8.0f &&
                                    CGRectIntersectsRect(menuRectForDirection, self.bounds);
    }

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
            } @catch (__unused NSException *exception) {
            }
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
            } @catch (__unused NSException *exception) {
            }
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
    if (CGRectIsEmpty(headRect) || CGRectGetWidth(headRect) <= 0.0f || CGRectGetHeight(headRect) <= 0.0f) {
        UIView *container = headView.superview;
        if (container) {
            headRect = [self convertRect:headView.frame fromView:container];
        }
    }

    if (CGRectIsEmpty(headRect) ||
        CGRectIsNull(headRect) ||
        CGRectIsInfinite(headRect) ||
        CGRectGetWidth(headRect) < 16.0f ||
        CGRectGetHeight(headRect) < 16.0f) {
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
    wcpl_syncRepeatEngineModeIfNeeded();
    [self wchook_updateRepeatButtonIfNeeded];
}

- (void)onAppear {
    %orig;

    [self wchook_updateMessageTimeLabel];
    wcpl_syncRepeatEngineModeIfNeeded();
    [self wchook_updateRepeatButtonIfNeeded];
}

- (void)layoutInternal {
    %orig;

    [self wchook_updateMessageTimeLabel];
    wcpl_syncRepeatEngineModeIfNeeded();
    [self wchook_updateRepeatButtonIfNeeded];
}

- (void)updateNodeStatus {
    %orig;

    [self wchook_updateMessageTimeLabel];
    wcpl_syncRepeatEngineModeIfNeeded();
    [self wchook_updateRepeatButtonIfNeeded];
}

- (void)layoutSubviews {
    %orig;

    wcpl_syncRepeatEngineModeIfNeeded();
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (self.window && config.doubleTapGestureEnable) {
        [self wchook_setupDoubleTapGestureIfNeeded];
    }
    [self wchook_updateMessageTimeLabel];
    CFTimeInterval now = CACurrentMediaTime();
    if (now < gWCPLRepeatResumeSuppressUntil) {
        [self wchook_hideRepeatButtonByNFQPrinciple];
        return;
    }
    [self wchook_updateRepeatButtonIfNeeded];
}

- (void)didMoveToWindow {
    %orig;

    wcpl_syncRepeatEngineModeIfNeeded();
    if (!self.window) {
        [self wchook_hideMessageTimeLabel];
        [self wchook_hideRepeatButtonByNFQPrinciple];
    }

    // 说明：避免在 didMoveToWindow 同步触发按钮更新（内部会扫描 visibleCells 并做跨视图清理），
    // 该时机容易与 UIKit 视图迁移/布局递归重入，导致崩溃。
    // 按钮更新统一由 layoutSubviews 驱动。

    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
        [self wchook_setupDoubleTapGestureIfNeeded];
        [self wchook_updateMessageTimeLabel];
        [self wchook_updateRepeatButtonIfNeeded];
    } else {
        [self wchook_hideMessageTimeLabel];
        if (self.wchook_doubleTapGesture) {
            self.wchook_doubleTapGesture.enabled = NO;
        }
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
    wcpl_syncRepeatEngineModeIfNeeded();
    [self wchook_hideRepeatButtonByNFQPrinciple];
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
            [self wchook_repeatMessageWrap:msgWrap];
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

    if (wcpl_repeatForceNativeOnly()) {
        WCPLLogInfo(@"Repeat strategy: force native-only type=%@ msg=%@",
                    wcpl_repeatTypeName(msgType),
                    wcpl_repeatMessageDebugInfo(msgWrap));
        if (wcpl_repeatByNativeOnlyPipeline(msgWrap, chatName, chatVC, toolView, logicController)) {
            return;
        }
        WCPLLogError(@"Repeat native-only failed: type=%@ msg=%@ chat=%@",
                     wcpl_repeatTypeName(msgType),
                     wcpl_repeatMessageDebugInfo(msgWrap),
                     chatName ?: @"(nil)");
        return;
    }

    if (msgType == 49) {
        WCPLLogInfo(@"Repeat quote strategy: native-only msg=%@",
                    wcpl_repeatMessageDebugInfo(msgWrap));
        wcpl_clearToolViewReplyingMessageIfNeeded(toolView, @"quote_native_preclear");

        if (wcpl_repeatQuoteNativeResendFresh(msgWrap, chatName, chatVC, @"quote_native_fresh_primary")) {
            WCPLLogInfo(@"Repeat sent: flow=quote_native_fresh_primary msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
            return;
        }
        if (wcpl_repeatNativeResendByDetachedWrap(msgWrap, chatName, chatVC, @"quote_native_detached_fallback")) {
            WCPLLogInfo(@"Repeat sent: flow=quote_native_detached_fallback msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
            return;
        }
        if (wcpl_repeatNativeResend(msgWrap, chatName, chatVC, @"quote_native_legacy_fallback")) {
            WCPLLogInfo(@"Repeat sent: flow=quote_native_legacy_fallback msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
            return;
        }
        WCPLLogError(@"Repeat quote native-only failed: msg=%@ chat=%@",
                     wcpl_repeatMessageDebugInfo(msgWrap),
                     chatName ?: @"(nil)");
        return;
    }

    if (msgType == 47) {
        BOOL isFromOtherEmoticon = wcpl_isMessageFromOther(msgWrap);
        WCPLLogDebug(@"Repeat media strategy: scene=emoticon msg=%@ isFromOther=%d", wcpl_repeatMessageDebugInfo(msgWrap), isFromOtherEmoticon ? 1 : 0);

        NSString *nativeEmoticonScene = isFromOtherEmoticon ? @"emoticon_other_native_first" : @"emoticon_native_first";
        if (wcpl_repeatNativeResendByDetachedWrap(msgWrap, chatName, chatVC, nativeEmoticonScene)) {
            WCPLLogInfo(@"Repeat sent: flow=alltype_native_detached scene=%@ msg=%@",
                        nativeEmoticonScene,
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return;
        }
        NSString *sendMgrEmoticonScene = isFromOtherEmoticon ? @"emoticon_other_sendmsgmgr_first" : @"emoticon_sendmsgmgr_first";
        if (wcpl_repeatMediaBySendMessageMgr(msgWrap, chatName, sendMgrEmoticonScene)) {
            WCPLLogInfo(@"Repeat sent: flow=alltype_sendmsgmgr scene=%@ msg=%@",
                        sendMgrEmoticonScene,
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return;
        }

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
                NSString *selfUserName = wcpl_currentSelfUserNameForRepeat();
                NSString *sceneTag = isFromOtherEmoticon ? @"emoticon_other_msgmgr" : @"emoticon_msgmgr";
                CMessageWrap *newWrap = wcpl_buildDetachedSendWrap(msgWrap, sceneTag);
                if (!newWrap) {
                    newWrap = [[objc_getClass("CMessageWrap") alloc] init];
                }

                newWrap.m_uiMessageType = 47;
                newWrap.m_nsToUsr = chatName;

                NSString *fromUser = selfUserName.length > 0 ? selfUserName : wcpl_trimTextForRepeat(msgWrap.m_nsFromUsr);
                if (fromUser.length > 0) {
                    newWrap.m_nsFromUsr = fromUser;
                }

                if ([chatName rangeOfString:@"@chatroom"].location != NSNotFound && selfUserName.length > 0 && [newWrap respondsToSelector:@selector(setM_nsRealChatUsr:)]) {
                    @try {
                        ((void (*)(id, SEL, id))objc_msgSend)(newWrap, @selector(setM_nsRealChatUsr:), selfUserName);
                    } @catch (__unused NSException *exceptionSetReal) {
                    }
                }

                newWrap.m_nsContent = msgWrap.m_nsContent ?: @"";
                if (emoticonMD5.length == 32) {
                    newWrap.m_nsEmoticonMD5 = emoticonMD5;
                }

                wcpl_resetSendWrapIdentity(newWrap);
                ((void (*)(id, SEL, id, id))objc_msgSend)(messageMgr, @selector(AddEmoticonMsg:MsgWrap:), chatName, newWrap);
                WCPLLogInfo(@"Repeat sent: flow=messageMgr_emoticon msg=%@ md5=%@ chat=%@ send=%@ from=%@ to=%@ real=%@",
                            wcpl_repeatMessageDebugInfo(msgWrap),
                            emoticonMD5 ?: @"(nil)",
                            chatName ?: @"(nil)",
                            wcpl_repeatMessageDebugInfo(newWrap),
                            newWrap.m_nsFromUsr ?: @"(nil)",
                            newWrap.m_nsToUsr ?: @"(nil)",
                            newWrap.m_nsRealChatUsr ?: @"(nil)");
                return;
            } @catch (NSException *exception) {
                WCPLLogWarning(@"Repeat emoticon via messageMgr failed: %@", exception.reason ?: exception);
            }
        }

        if (isFromOtherEmoticon && wcpl_repeatNativeResendByDetachedWrap(msgWrap, chatName, chatVC, @"emoticon_other_native_fallback")) {
            return;
        }

        NSString *emoticonSendScene = isFromOtherEmoticon ? @"emoticon_other_sendmsgmgr_fallback" : @"emoticon_self_fallback";
        if (wcpl_repeatMediaBySendMessageMgr(msgWrap, chatName, emoticonSendScene)) {
            return;
        }

        WCPLLogWarning(@"Repeat emoticon fallback to text: msg=%@ md5=%@", wcpl_repeatMessageDebugInfo(msgWrap), emoticonMD5 ?: @"(nil)");
    }

    if (msgType == 3) {
        BOOL isFromOtherMedia = wcpl_isMessageFromOther(msgWrap);
        WCPLLogDebug(@"Repeat media strategy: scene=image msg=%@ isFromOther=%d", wcpl_repeatMessageDebugInfo(msgWrap), isFromOtherMedia ? 1 : 0);

        if (isFromOtherMedia) {
            if (wcpl_repeatNativeResendByDetachedWrap(msgWrap, chatName, chatVC, @"image_other_native")) {
                return;
            }
            if (wcpl_repeatMediaBySendMessageMgr(msgWrap, chatName, @"image_other_sendmsgmgr")) {
                return;
            }
            if (wcpl_repeatNativeResend(msgWrap, chatName, chatVC, @"image_other_legacy")) {
                return;
            }
            WCPLLogWarning(@"Repeat image other-message send failed on all channels: msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
        }

        if (!isFromOtherMedia && wcpl_repeatNativeResend(msgWrap, chatName, chatVC, @"image")) {
            return;
        }

        if (!isFromOtherMedia && wcpl_repeatMediaBySendMessageMgr(msgWrap, chatName, @"image_self_fallback")) {
            return;
        }

        WCPLLogWarning(@"Repeat image fallback to text: native/sendmsg unavailable msg=%@ chat=%@", wcpl_repeatMessageDebugInfo(msgWrap), chatName ?: @"(nil)");
    }

    if (msgType == 43) {
        BOOL isFromOtherVideo = wcpl_isMessageFromOther(msgWrap);
        NSString *videoAssetPath = nil;
        unsigned long long videoAssetSize = 0;
        BOOL hasVideoAsset = wcpl_probeVideoLocalAsset(msgWrap, &videoAssetPath, &videoAssetSize);
        WCPLLogInfo(@"issue_id=WXBUG-VIDEO-REPEAT-DELETE module=repeat.video scene=video_pipeline input=msg(local=%u svr=%lld fromOther=%d hasAsset=%d size=%llu) branch_decision=forward_first_skip_native error/fallback_reason=none",
                    msgWrap.m_uiMesLocalID,
                    msgWrap.m_n64MesSvrID,
                    isFromOtherVideo ? 1 : 0,
                    hasVideoAsset ? 1 : 0,
                    videoAssetSize);
        WCPLLogDebug(@"Repeat media strategy: scene=video msg=%@ isFromOther=%d hasAsset=%d size=%llu path=%@",
                     wcpl_repeatMessageDebugInfo(msgWrap),
                     isFromOtherVideo ? 1 : 0,
                     hasVideoAsset ? 1 : 0,
                     videoAssetSize,
                     videoAssetPath ?: @"(nil)");

        NSString *forwardScene = isFromOtherVideo ? @"video_other_forward" : @"video_self_forward";
        NSString *sendmgrScene = isFromOtherVideo ? @"video_other_sendmsgmgr" : @"video_self_sendmsgmgr";

        if (wcpl_repeatVideoByForwardUtil(msgWrap, chatName, forwardScene)) {
            return;
        }

        if (isFromOtherVideo) {
            WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=msg(local=%u svr=%lld hasAsset=%d size=%llu) branch_decision=abort_other_without_unsafe_fallback error/fallback_reason=forward_failed",
                           sendmgrScene,
                           msgWrap.m_uiMesLocalID,
                           msgWrap.m_n64MesSvrID,
                           hasVideoAsset ? 1 : 0,
                           videoAssetSize);
            return;
        }

        if (hasVideoAsset && wcpl_repeatMediaBySendMessageMgr(msgWrap, chatName, sendmgrScene)) {
            return;
        }

        if (hasVideoAsset && wcpl_repeatNativeResend(msgWrap, chatName, chatVC, @"video_self_native_fallback")) {
            return;
        }

        NSString *retryScene = @"video_self_sendmsgmgr_retry";
        if (hasVideoAsset && wcpl_repeatMediaBySendMessageMgr(msgWrap, chatName, retryScene)) {
            return;
        }

        WCPLLogWarning(@"issue_id=WXBUG-VIDEO-REPEAT-EMPTY module=repeat.video scene=%@ input=msg(local=%u svr=%lld hasAsset=%d size=%llu) branch_decision=abort_without_native_fallback error/fallback_reason=forward_and_sendmsg_failed",
                       sendmgrScene,
                       msgWrap.m_uiMesLocalID,
                       msgWrap.m_n64MesSvrID,
                       hasVideoAsset ? 1 : 0,
                       videoAssetSize);
        WCPLLogWarning(@"Repeat video send aborted without native fallback: msg=%@ chat=%@",
                       wcpl_repeatMessageDebugInfo(msgWrap),
                       chatName ?: @"(nil)");
        return;
    }

    if (msgType == 34) {
        // 语音复读：仅发当前会话（不走转发链）→ native resend(主) → Record+Resend(次) → SendMessageMgr(兜底)
        if (wcpl_repeatNativeResend(msgWrap, chatName, chatVC, @"voice_native_resend")) {
            return;
        }
        if (wcpl_repeatVoiceByRecordMessage(msgWrap, chatName, chatVC, logicController)) {
            return;
        }
        if (wcpl_repeatVoiceBySendMessageMgr(msgWrap, chatName, chatVC, logicController)) {
            return;
        }
        WCPLLogError(@"Repeat voice failed: all channels exhausted msg=%@ chat=%@",
                     wcpl_repeatMessageDebugInfo(msgWrap), chatName ?: @"(nil)");
        return;
    }

    if (repeatText.length == 0) {
        WCPLLogWarning(@"Repeat failed: empty repeat text type=%@ msg=%@", wcpl_repeatTypeName(msgType), wcpl_repeatMessageDebugInfo(msgWrap));
        return;
    }

    if (msgType == 1) {
        if (wcpl_repeatTextByLogicController(msgWrap,
                                             repeatText,
                                             logicController,
                                             chatVC,
                                             @"text_logiccontroller_primary")) {
            return;
        }
        if (wcpl_repeatTextBySendMessageMgrFresh(msgWrap, chatName, @"text_sendmsgmgr_fresh")) {
            return;
        }
        if (wcpl_repeatTextBySendMessageMgrFresh(msgWrap, chatName, @"text_sendmsgmgr_fresh_retry")) {
            return;
        }
        WCPLLogError(@"Repeat text failed: sendmsgmgr rejected msg=%@ chat=%@",
                     wcpl_repeatMessageDebugInfo(msgWrap),
                     chatName ?: @"(nil)");
        return;
    }

    if (wcpl_repeatNativeResendByDetachedWrap(msgWrap, chatName, chatVC, @"alltype_native_detached")) {
        WCPLLogInfo(@"Repeat sent: flow=alltype_native_detached msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
        return;
    }

    if (wcpl_repeatNativeResend(msgWrap, chatName, chatVC, @"alltype_native_legacy")) {
        WCPLLogInfo(@"Repeat sent: flow=alltype_native_legacy msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
        return;
    }

    if (wcpl_repeatMediaBySendMessageMgr(msgWrap, chatName, @"alltype_sendmsgmgr")) {
        WCPLLogInfo(@"Repeat sent: flow=alltype_sendmsgmgr msg=%@", wcpl_repeatMessageDebugInfo(msgWrap));
        return;
    }

    WCPLLogError(@"Repeat failed(native-only): type=%@ msg=%@", wcpl_repeatTypeName(msgType), wcpl_repeatMessageDebugInfo(msgWrap));
}

%new
- (void)wchook_onRepeatButtonTapped:(UIButton *)sender {
    CFTimeInterval now = CACurrentMediaTime();
    NSNumber *lastTapObj = objc_getAssociatedObject(sender, kWCPLRepeatButtonLastTapTimeKey);
    if ([lastTapObj isKindOfClass:[NSNumber class]] &&
        (now - lastTapObj.doubleValue) < kWCPLRepeatButtonTapDebounceInterval) {
        WCPLLogDebug(@"Repeat click ignored by debounce: class=%@ cell=%p delta=%.3f",
                     NSStringFromClass([self class]),
                     self,
                     now - lastTapObj.doubleValue);
        return;
    }
    objc_setAssociatedObject(sender, kWCPLRepeatButtonLastTapTimeKey, @(now), OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    CMessageWrap *msgWrap = objc_getAssociatedObject(sender, kWCPLRepeatButtonWrapKey);

    NSString *buttonMessageKey = objc_getAssociatedObject(sender, kWCPLRepeatButtonMessageKey);
    CMessageWrap *cellWrap = wcpl_messageWrapForCellView(self);
    NSString *cellMessageKey = wcpl_repeatMessageKey(cellWrap);

    if (cellWrap && buttonMessageKey.length > 0 && ![buttonMessageKey isEqualToString:cellMessageKey]) {
        WCPLLogWarning(@"Repeat click stale binding fixed: class=%@ cell=%p buttonMsg=%@ cellMsg=%@",
                       NSStringFromClass([self class]),
                       self,
                       buttonMessageKey,
                       cellMessageKey);
        msgWrap = cellWrap;
    }

    if (msgWrap && cellWrap && msgWrap != cellWrap) {
        WCPLLogWarning(@"Repeat click wrap mismatch fixed: class=%@ cell=%p buttonWrap=%@ cellWrap=%@",
                       NSStringFromClass([self class]),
                       self,
                       wcpl_repeatMessageDebugInfo(msgWrap),
                       wcpl_repeatMessageDebugInfo(cellWrap));
        msgWrap = cellWrap;
    }

    if (!msgWrap && cellWrap) {
        msgWrap = cellWrap;
    }

    if (!msgWrap) {
        WCPLLogWarning(@"Repeat click ignored: class=%@ cell=%p reason=noMessageWrap", NSStringFromClass([self class]), self);
        return;
    }

    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (config.repeatButtonHapticEnable) {
        UIImpactFeedbackGenerator *feedback = [self wchook_repeatTapFeedbackGenerator];
        [feedback prepare];
        if ([feedback respondsToSelector:@selector(impactOccurredWithIntensity:)]) {
            [feedback impactOccurredWithIntensity:0.55f];
        } else {
            [feedback impactOccurred];
        }
    }

    BOOL hasQuote = (wcpl_quoteTargetFromMessageWrap(msgWrap) != nil) || (msgWrap && msgWrap.m_uiMessageType == 49);
    WCPLLogInfo(@"Repeat click: class=%@ cell=%p msg=%@ hasQuote=%d key=%@",
                NSStringFromClass([self class]),
                self,
                wcpl_repeatMessageDebugInfo(msgWrap),
                hasQuote ? 1 : 0,
                buttonMessageKey ?: @"(nil)");

    // 快速连点时串行排队发送，避免远端只收到部分消息。
    CFTimeInterval nextAllowed = gWCPLRepeatLastQueuedSendAt + kWCPLRepeatBurstSendMinInterval;
    CFTimeInterval scheduledAt = now;
    if (nextAllowed > scheduledAt) {
        scheduledAt = nextAllowed;
    }
    gWCPLRepeatLastQueuedSendAt = scheduledAt;

    NSTimeInterval delay = scheduledAt - now;
    if (delay > 0.01) {
        WCPLLogInfo(@"Repeat click queued: class=%@ cell=%p delay=%.3f msg=%@",
                    NSStringFromClass([self class]),
                    self,
                    delay,
                    wcpl_repeatMessageDebugInfo(msgWrap));
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{
            [self wchook_repeatMessageWrap:msgWrap];
        });
        return;
    }

    [self wchook_repeatMessageWrap:msgWrap];
}

%new
- (void)wchook_onRepeatButtonTouchDown:(UIButton *)sender {
    [UIView animateWithDuration:0.12 animations:^{
        sender.transform = CGAffineTransformMakeScale(0.92f, 0.92f);
        sender.alpha = 0.86f;
    }];
    WCPLLogDebug(@"Repeat touch down: class=%@ cell=%p", NSStringFromClass([self class]), self);
}

%new
- (void)wchook_onRepeatButtonTouchUp:(UIButton *)sender {
    [UIView animateWithDuration:0.12 animations:^{
        sender.transform = CGAffineTransformIdentity;
        sender.alpha = 1.0f;
    }];
    WCPLLogDebug(@"Repeat touch end: class=%@ cell=%p", NSStringFromClass([self class]), self);
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
- (void)wchook_performForwardMessage:(CMessageWrap *)msgWrap {
    [self wchook_performForwardMessage:msgWrap sceneTag:@"手势"];
}

%new
- (BOOL)wchook_tryForwardViaMiyouPrimaryRoutes:(CMessageWrap *)msgWrap
                                         chatVC:(BaseMsgContentViewController *)chatVC
                                       sceneTag:(NSString *)sceneTag {
    if (!msgWrap) {
        return NO;
    }

    NSString *routeScene = ([sceneTag isKindOfClass:[NSString class]] && sceneTag.length > 0) ? sceneTag : @"手势";
    NSString *chatName = wcpl_chatNameForMessage(msgWrap, chatVC);
    id contact = wcpl_repeatContactForChatName(chatName, msgWrap);
    UIViewController *fromVC = chatVC ?: [self wchook_findTopViewController];

    id forwardMgr = WCPLGetService(objc_getClass("ForwardMessageMgr"));
    if (forwardMgr && fromVC) {
        SEL forwardToContactSel = NSSelectorFromString(@"forwardMessage:fromViewController:toContact:");
        if (contact && [forwardMgr respondsToSelector:forwardToContactSel]) {
            @try {
                ((void (*)(id, SEL, id, id, id))objc_msgSend)(forwardMgr,
                                                               forwardToContactSel,
                                                               msgWrap,
                                                               fromVC,
                                                               contact);
                WCPLLogInfo(@"Gesture forward route=ForwardMessageMgr.toContact scene=%@ msg=%@",
                            routeScene,
                            wcpl_repeatMessageDebugInfo(msgWrap));
                return YES;
            } @catch (NSException *exception) {
                WCPLLogWarning(@"Gesture forward route=ForwardMessageMgr.toContact failed scene=%@ reason=%@",
                               routeScene,
                               exception.reason ?: exception);
            }
        }

        SEL forwardSel = NSSelectorFromString(@"forwardMessage:fromViewController:");
        if ([forwardMgr respondsToSelector:forwardSel]) {
            @try {
                ((void (*)(id, SEL, id, id))objc_msgSend)(forwardMgr,
                                                           forwardSel,
                                                           msgWrap,
                                                           fromVC);
                WCPLLogInfo(@"Gesture forward route=ForwardMessageMgr.default scene=%@ msg=%@",
                            routeScene,
                            wcpl_repeatMessageDebugInfo(msgWrap));
                return YES;
            } @catch (NSException *exception) {
                WCPLLogWarning(@"Gesture forward route=ForwardMessageMgr.default failed scene=%@ reason=%@",
                               routeScene,
                               exception.reason ?: exception);
            }
        }
    }

    Class forwardUtilClass = objc_getClass("ForwardMsgUtil");
    if (forwardUtilClass && contact) {
        SEL sendMsgSelector = @selector(SendMsgWithOriMsg:Contact:ForwardType:EditImageAttr:);
        if ([forwardUtilClass respondsToSelector:sendMsgSelector]) {
            @try {
                ((id (*)(id, SEL, id, id, unsigned int, id))objc_msgSend)(forwardUtilClass,
                                                                           sendMsgSelector,
                                                                           msgWrap,
                                                                           contact,
                                                                           (unsigned int)0,
                                                                           nil);
                WCPLLogInfo(@"Gesture forward route=ForwardMsgUtil.SendMsg scene=%@ msg=%@",
                            routeScene,
                            wcpl_repeatMessageDebugInfo(msgWrap));
                return YES;
            } @catch (NSException *exception) {
                WCPLLogWarning(@"Gesture forward route=ForwardMsgUtil.SendMsg failed scene=%@ reason=%@",
                               routeScene,
                               exception.reason ?: exception);
            }
        }

        SEL forward4Selector = @selector(ForwardMsg:ToContact:Scene:forwardType:);
        if ([forwardUtilClass respondsToSelector:forward4Selector]) {
            @try {
                ((void (*)(id, SEL, id, id, unsigned int, unsigned int))objc_msgSend)(forwardUtilClass,
                                                                                       forward4Selector,
                                                                                       msgWrap,
                                                                                       contact,
                                                                                       (unsigned int)0,
                                                                                       (unsigned int)0);
                WCPLLogInfo(@"Gesture forward route=ForwardMsgUtil.ForwardMsg4 scene=%@ msg=%@",
                            routeScene,
                            wcpl_repeatMessageDebugInfo(msgWrap));
                return YES;
            } @catch (NSException *exception) {
                WCPLLogWarning(@"Gesture forward route=ForwardMsgUtil.ForwardMsg4 failed scene=%@ reason=%@",
                               routeScene,
                               exception.reason ?: exception);
            }
        }

        SEL forward3Selector = @selector(ForwardMsg:ToContact:Scene:);
        if ([forwardUtilClass respondsToSelector:forward3Selector]) {
            @try {
                ((void (*)(id, SEL, id, id, unsigned int))objc_msgSend)(forwardUtilClass,
                                                                         forward3Selector,
                                                                         msgWrap,
                                                                         contact,
                                                                         (unsigned int)0);
                WCPLLogInfo(@"Gesture forward route=ForwardMsgUtil.ForwardMsg3 scene=%@ msg=%@",
                            routeScene,
                            wcpl_repeatMessageDebugInfo(msgWrap));
                return YES;
            } @catch (NSException *exception) {
                WCPLLogWarning(@"Gesture forward route=ForwardMsgUtil.ForwardMsg3 failed scene=%@ reason=%@",
                               routeScene,
                               exception.reason ?: exception);
            }
        }
    }

    Class lmUtilsClass = objc_getClass("LMUtils");
    if (lmUtilsClass && contact) {
        SEL lmForwardSelector = @selector(ForwardMsg:ToContact:);
        if ([lmUtilsClass respondsToSelector:lmForwardSelector]) {
            @try {
                ((void (*)(id, SEL, id, id))objc_msgSend)(lmUtilsClass,
                                                           lmForwardSelector,
                                                           msgWrap,
                                                           contact);
                WCPLLogInfo(@"Gesture forward route=LMUtils.class scene=%@ msg=%@",
                            routeScene,
                            wcpl_repeatMessageDebugInfo(msgWrap));
                return YES;
            } @catch (NSException *exception) {
                WCPLLogWarning(@"Gesture forward route=LMUtils.class failed scene=%@ reason=%@",
                               routeScene,
                               exception.reason ?: exception);
            }
        }

        id lmUtilsInstance = nil;
        if ([lmUtilsClass instancesRespondToSelector:@selector(init)]) {
            @try {
                lmUtilsInstance = [[lmUtilsClass alloc] init];
            } @catch (__unused NSException *exceptionLMUtilsAlloc) {
                lmUtilsInstance = nil;
            }
        }
        if (lmUtilsInstance && [lmUtilsInstance respondsToSelector:lmForwardSelector]) {
            @try {
                ((void (*)(id, SEL, id, id))objc_msgSend)(lmUtilsInstance,
                                                           lmForwardSelector,
                                                           msgWrap,
                                                           contact);
                WCPLLogInfo(@"Gesture forward route=LMUtils.instance scene=%@ msg=%@",
                            routeScene,
                            wcpl_repeatMessageDebugInfo(msgWrap));
                return YES;
            } @catch (NSException *exception) {
                WCPLLogWarning(@"Gesture forward route=LMUtils.instance failed scene=%@ reason=%@",
                               routeScene,
                               exception.reason ?: exception);
            }
        }
    }

    return NO;
}

%new
- (BOOL)wchook_tryForwardViaMiyouOnForward:(CMessageWrap *)msgWrap
                                      chatVC:(BaseMsgContentViewController *)chatVC
                                    sceneTag:(NSString *)sceneTag {
    if (!msgWrap) {
        return NO;
    }

    NSString *routeScene = ([sceneTag isKindOfClass:[NSString class]] && sceneTag.length > 0) ? sceneTag : @"手势";
    BOOL isFileApp = wcpl_isFileAppMessage(msgWrap);

    if ([self respondsToSelector:@selector(onForward:)]) {
        @try {
            id payload = isFileApp ? (id)self : (id)msgWrap;
            ((void (*)(id, SEL, id))objc_msgSend)(self, @selector(onForward:), payload);
            WCPLLogInfo(@"Gesture forward route=%@ scene=%@ msg=%@",
                        isFileApp ? @"MiYou.onForwardSender.self" : @"MiYou.onForwardMsgWrap.self",
                        routeScene,
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Gesture forward route=%@ failed scene=%@ reason=%@",
                           isFileApp ? @"MiYou.onForwardSender.self" : @"MiYou.onForwardMsgWrap.self",
                           routeScene,
                           exception.reason ?: exception);
        }
    }

    if (chatVC && [chatVC respondsToSelector:@selector(onForward:)]) {
        @try {
            id payload = isFileApp ? (id)self : (id)msgWrap;
            ((void (*)(id, SEL, id))objc_msgSend)(chatVC, @selector(onForward:), payload);
            WCPLLogInfo(@"Gesture forward route=%@ scene=%@ msg=%@",
                        isFileApp ? @"MiYou.onForwardSender.chatVC" : @"MiYou.onForwardMsgWrap.chatVC",
                        routeScene,
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Gesture forward route=%@ failed scene=%@ reason=%@",
                           isFileApp ? @"MiYou.onForwardSender.chatVC" : @"MiYou.onForwardMsgWrap.chatVC",
                           routeScene,
                           exception.reason ?: exception);
        }
    }

    return NO;
}

%new
- (BOOL)wchook_tryForwardViaLegacyFallback:(CMessageWrap *)msgWrap
                                      chatVC:(BaseMsgContentViewController *)chatVC
                                    sceneTag:(NSString *)sceneTag {
    if (!msgWrap) {
        return NO;
    }

    NSString *routeScene = ([sceneTag isKindOfClass:[NSString class]] && sceneTag.length > 0) ? sceneTag : @"手势";
    BOOL isFileApp = wcpl_isFileAppMessage(msgWrap);

    if (isFileApp && [self respondsToSelector:@selector(doForward)]) {
        @try {
            ((void (*)(id, SEL))objc_msgSend)(self, @selector(doForward));
            WCPLLogInfo(@"Gesture forward route=file.legacy.doForward.first scene=%@ msg=%@",
                        routeScene,
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Gesture forward route=file.legacy.doForward.first failed scene=%@ reason=%@",
                           routeScene,
                           exception.reason ?: exception);
        }
    }

    if ([self respondsToSelector:@selector(onForward:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(self, @selector(onForward:), self);
            WCPLLogInfo(@"Gesture forward route=legacy.onForward scene=%@ msg=%@",
                        routeScene,
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Gesture forward route=legacy.onForward failed scene=%@ reason=%@",
                           routeScene,
                           exception.reason ?: exception);
        }
    }

    if ([self respondsToSelector:@selector(doForward)]) {
        @try {
            ((void (*)(id, SEL))objc_msgSend)(self, @selector(doForward));
            WCPLLogInfo(@"Gesture forward route=legacy.doForward scene=%@ msg=%@",
                        routeScene,
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Gesture forward route=legacy.doForward failed scene=%@ reason=%@",
                           routeScene,
                           exception.reason ?: exception);
        }
    }

    if (chatVC && [chatVC respondsToSelector:@selector(onForward:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(chatVC, @selector(onForward:), self);
            WCPLLogInfo(@"Gesture forward route=legacy.chatVC.onForward scene=%@ msg=%@",
                        routeScene,
                        wcpl_repeatMessageDebugInfo(msgWrap));
            return YES;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Gesture forward route=legacy.chatVC.onForward failed scene=%@ reason=%@",
                           routeScene,
                           exception.reason ?: exception);
        }
    }

    return NO;
}

%new
- (void)wchook_performForwardMessage:(CMessageWrap *)msgWrap sceneTag:(NSString *)sceneTag {
    if (!msgWrap) {
        return;
    }

    NSString *routeScene = ([sceneTag isKindOfClass:[NSString class]] && sceneTag.length > 0) ? sceneTag : @"手势";
    @try {
        if (msgWrap.m_uiMessageType == 34 && [self respondsToSelector:@selector(wcpl_handleVoiceForwardMenuItem:)]) {
            @try {
                ((void (*)(id, SEL, id))objc_msgSend)(self, @selector(wcpl_handleVoiceForwardMenuItem:), self);
                WCPLLogInfo(@"Gesture forward route=miyou.voiceMenu scene=%@ msg=%@",
                            routeScene,
                            wcpl_repeatMessageDebugInfo(msgWrap));
                return;
            } @catch (NSException *voiceException) {
                WCPLLogWarning(@"Gesture forward route=miyou.voiceMenu failed scene=%@ reason=%@",
                               routeScene,
                               voiceException.reason ?: voiceException);
            }
        }

        BaseMsgContentViewController *chatVC = [self wchook_findChatViewController];
        BOOL isFromOther = wcpl_isMessageFromOther(msgWrap);
        BOOL isFileApp = wcpl_isFileAppMessage(msgWrap);
        WCPLLogInfo(@"Gesture forward dispatch: scene=%@ isFromOther=%d class=%@ msg=%@",
                    routeScene,
                    isFromOther ? 1 : 0,
                    NSStringFromClass([self class]),
                    wcpl_repeatMessageDebugInfo(msgWrap));
        if (isFileApp) {
            // 文件消息优先原生菜单链路（onForward/doForward），避免 msgWrap 路由“假成功不弹窗”。
            if ([self wchook_tryForwardViaLegacyFallback:msgWrap chatVC:chatVC sceneTag:routeScene]) {
                return;
            }
            if ([self wchook_tryForwardViaMiyouOnForward:msgWrap chatVC:chatVC sceneTag:routeScene]) {
                return;
            }
            if ([self wchook_tryForwardViaMiyouPrimaryRoutes:msgWrap chatVC:chatVC sceneTag:routeScene]) {
                return;
            }
            WCPLLogWarning(@"Gesture forward file route=none scene=%@ class=%@ msg=%@",
                           routeScene,
                           NSStringFromClass([self class]),
                           wcpl_repeatMessageDebugInfo(msgWrap));
            return;
        }

        if (isFromOther) {
            // 对方消息优先走可见菜单链路（与密友体验一致），再降级到静默转发链路。
            if ([self wchook_tryForwardViaLegacyFallback:msgWrap chatVC:chatVC sceneTag:routeScene]) {
                return;
            }
            if ([self wchook_tryForwardViaMiyouOnForward:msgWrap chatVC:chatVC sceneTag:routeScene]) {
                return;
            }
            if ([self wchook_tryForwardViaMiyouPrimaryRoutes:msgWrap chatVC:chatVC sceneTag:routeScene]) {
                return;
            }
        } else {
            if ([self wchook_tryForwardViaMiyouOnForward:msgWrap chatVC:chatVC sceneTag:routeScene]) {
                return;
            }
            if ([self wchook_tryForwardViaMiyouPrimaryRoutes:msgWrap chatVC:chatVC sceneTag:routeScene]) {
                return;
            }
            if ([self wchook_tryForwardViaLegacyFallback:msgWrap chatVC:chatVC sceneTag:routeScene]) {
                return;
            }
        }

        WCPLLogWarning(@"Gesture forward route=none scene=%@ class=%@ msg=%@",
                       routeScene,
                       NSStringFromClass([self class]),
                       wcpl_repeatMessageDebugInfo(msgWrap));
    } @catch (NSException *exception) {
        WCPLLogError(@"Forward message failed: scene=%@ reason=%@", routeScene, exception.reason ?: exception);
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

- (void)onLongTouch {
    if (wcpl_shouldSuppressLongPressForCell(self, @"onLongTouch")) {
        return;
    }
    %orig;
}

- (void)onLongTouch:(CGPoint)point {
    if (wcpl_shouldSuppressLongPressForCell(self, @"onLongTouch:")) {
        return;
    }
    %orig(point);
}

- (void)LongPressEvents {
    if (wcpl_shouldSuppressLongPressForCell(self, @"LongPressEvents")) {
        return;
    }
    %orig;
}

- (void)triggerLongPressFor3DTouchAtLocation:(CGPoint)location inCoordinateView:(id)coordinateView {
    if (wcpl_shouldSuppressLongPressForCell(self, @"triggerLongPressFor3DTouch")) {
        return;
    }
    %orig(location, coordinateView);
}

- (void)onShowOperationMenu {
    if (wcpl_shouldSuppressLongPressForCell(self, @"onShowOperationMenu")) {
        return;
    }
    %orig;
}

- (void)showOperationMenu {
    if (wcpl_shouldSuppressLongPressForCell(self, @"showOperationMenu")) {
        return;
    }
    %orig;
}

- (void)onTouchUpInside {
    if (wcpl_shouldSuppressTapForCell(self, @"onTouchUpInside")) {
        return;
    }
    if ([WCHookMessageNavigator tryJumpFromRevokeTipCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig;
}

- (void)onTouchEnded {
    if (wcpl_shouldSuppressTapForCell(self, @"onTouchEnded")) {
        return;
    }
    if ([WCHookMessageNavigator tryJumpFromRevokeTipCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig;
}

- (void)touchesEnded:(id)touches withEvent:(id)event {
    if ([self wchook_tryHandleDoubleTapFromTouches:touches event:event]) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"touchesEnded:withEvent:")) {
        return;
    }
    %orig(touches, event);
}

- (void)onDelayedTouchUpInside {
    if (wcpl_shouldSuppressTapForCell(self, @"onDelayedTouchUpInside")) {
        return;
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
            WCPLLogDebug(@"Swipe begin blocked: feature disabled cell=%p", self);
            return NO;
        }
        UIPanGestureRecognizer *pan = (UIPanGestureRecognizer *)gestureRecognizer;
        CGPoint velocity = [pan velocityInView:self];
        // 使用双向速度检测
        if (![WCHookSwipeUtilities isVelocityEligibleBidirectional:velocity]) {
            WCPLLogDebug(@"Swipe begin blocked: velocity ineligible cell=%p vx=%.2f vy=%.2f",
                         self,
                         velocity.x,
                         velocity.y);
            return NO;
        }
        // 检查滑动方向是否启用
        if (velocity.x < 0 && !config.swipeQuoteEnable) {
            // 左滑但左滑功能未启用
            WCPLLogDebug(@"Swipe begin blocked: left disabled cell=%p vx=%.2f vy=%.2f",
                         self,
                         velocity.x,
                         velocity.y);
            return NO;
        }
        if (velocity.x > 0 && !config.swipeRightEnable) {
            // 右滑但右滑功能未启用
            WCPLLogDebug(@"Swipe begin blocked: right disabled cell=%p vx=%.2f vy=%.2f",
                         self,
                         velocity.x,
                         velocity.y);
            return NO;
        }
        WCPLLogDebug(@"Swipe begin candidate: cell=%p vx=%.2f vy=%.2f", self, velocity.x, velocity.y);
    } else if (gestureRecognizer == self.wchook_doubleTapGesture) {
        WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
        if (!config.doubleTapGestureEnable) {
            WCPLLogDebug(@"Double tap begin blocked: feature disabled cell=%p", self);
            return NO;
        }
        CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
        if (!msgWrap) {
            WCPLLogDebug(@"Double tap begin blocked: message wrap unavailable cell=%p", self);
            return NO;
        }
        WCPLLogDebug(@"Double tap begin forced allow: cell=%p msg=%@", self, wcpl_repeatMessageDebugInfo(msgWrap));
        return YES;
    }

    BOOL result = %orig;
    if (gestureRecognizer == self.wchook_swipeGesture) {
        UIPanGestureRecognizer *pan = (UIPanGestureRecognizer *)gestureRecognizer;
        CGPoint velocity = [pan velocityInView:self];
        WCPLLogDebug(@"Swipe begin result: cell=%p allow=%d vx=%.2f vy=%.2f",
                     self,
                     result ? 1 : 0,
                     velocity.x,
                     velocity.y);
    } else if (gestureRecognizer == self.wchook_doubleTapGesture) {
        CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
        WCPLLogDebug(@"Double tap begin result: cell=%p allow=%d msg=%@",
                     self,
                     result ? 1 : 0,
                     wcpl_repeatMessageDebugInfo(msgWrap));
    }
    return result;
}

- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldReceiveTouch:(UITouch *)touch {
    if (gestureRecognizer == self.wchook_doubleTapGesture) {
        WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
        if (!config.doubleTapGestureEnable) {
            WCPLLogDebug(@"Double tap receive blocked: feature disabled cell=%p", self);
            return NO;
        }
        CMessageWrap *msgWrap = wcpl_messageWrapForCellView(self);
        if (!msgWrap) {
            WCPLLogDebug(@"Double tap receive blocked: message wrap unavailable cell=%p touchClass=%@",
                         self,
                         NSStringFromClass([touch.view class]));
            return NO;
        }
        if (!wcpl_isTouchInMessageBubbleArea(self, touch, @"gesture_shouldReceive_scope")) {
            WCPLLogDebug(@"Double tap receive blocked: outside bubble cell=%p touchClass=%@",
                         self,
                         NSStringFromClass([touch.view class]));
            return NO;
        }
        WCPLLogDebug(@"Double tap receive allow: cell=%p touchClass=%@ tapCount=%ld msg=%@",
                     self,
                     NSStringFromClass([touch.view class]),
                     (long)touch.tapCount,
                     wcpl_repeatMessageDebugInfo(msgWrap));
        return YES;
    }
    return YES;
}

- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer {
    if (gestureRecognizer == self.wchook_swipeGesture) {
        return NO;
    }
    if (gestureRecognizer == self.wchook_doubleTapGesture) {
        return YES;
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

- (void)handleDoubleTapFrom:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTap(self, sender, @"CommonMessageCellView.handleDoubleTapFrom")) {
        return;
    }
    %orig(sender);
}

- (void)onHeadImageDoubleClick:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTap(self, sender, @"CommonMessageCellView.onHeadImageDoubleClick")) {
        return;
    }
    %orig(sender);
}

%end

%hook BaseMessageCellView

- (BOOL)supportDoubleTap {
    BOOL original = %orig;
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (config.doubleTapGestureEnable) {
        return NO;
    }
    return original;
}

- (void)handleDoubleTapFrom:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTap(self, sender, @"BaseMessageCellView.handleDoubleTapFrom")) {
        return;
    }
    %orig(sender);
}

- (void)onTouchUpInside {
    if ([WCHookMessageNavigator tryJumpFromRevokeTipCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig;
}

- (void)onTouchEnded {
    if ([WCHookMessageNavigator tryJumpFromRevokeTipCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig;
}

- (void)touchesEnded:(id)touches withEvent:(id)event {
    if ([WCHookMessageNavigator tryJumpFromRevokeTipCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig(touches, event);
}

%end

%hook SystemMessageCellView

- (void)onTouchUpInside {
    if ([WCHookMessageNavigator tryJumpFromRevokeTipCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig;
}

- (void)onTouchEnded {
    if ([WCHookMessageNavigator tryJumpFromRevokeTipCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig;
}

- (void)touchesEnded:(id)touches withEvent:(id)event {
    if ([WCHookMessageNavigator tryJumpFromRevokeTipCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig(touches, event);
}

- (void)onTap {
    if ([WCHookMessageNavigator tryJumpFromRevokeTipCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig;
}

- (void)onClick {
    if ([WCHookMessageNavigator tryJumpFromRevokeTipCell:(CommonMessageCellView *)self]) {
        return;
    }
    %orig;
}

%end

%hook TextMessageCellView

- (BOOL)supportDoubleTap {
    BOOL original = %orig;
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (config.doubleTapGestureEnable) {
        return NO;
    }
    return original;
}

- (void)showFloatPreviewForContentText {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (config.doubleTapGestureEnable) {
        WCPLLogInfo(@"Native double tap blocked: scope=TextMessageCellView.showFloatPreviewForContentText class=%@",
                    NSStringFromClass([(id)self class]));
        return;
    }
    %orig;
}

- (void)showFloatPreviewWithForceUseOriginText:(BOOL)forceUseOriginText {
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (config.doubleTapGestureEnable) {
        WCPLLogInfo(@"Native double tap blocked: scope=TextMessageCellView.showFloatPreviewWithForce class=%@ force=%d",
                    NSStringFromClass([(id)self class]),
                    forceUseOriginText ? 1 : 0);
        return;
    }
    %orig(forceUseOriginText);
}

- (void)onTouchUpInside {
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"TextMessageCellView.onTouchUpInside.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"TextMessageCellView.onTouchUpInside")) {
        return;
    }
    %orig;
}

- (void)onTouchEnded {
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"TextMessageCellView.onTouchEnded.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"TextMessageCellView.onTouchEnded")) {
        return;
    }
    %orig;
}

- (void)touchesEnded:(id)touches withEvent:(id)event {
    if ([(id)self respondsToSelector:@selector(wchook_tryHandleDoubleTapFromTouches:event:)]) {
        BOOL handled = NO;
        @try {
            handled = ((BOOL (*)(id, SEL, id, id))objc_msgSend)((id)self,
                                                                  @selector(wchook_tryHandleDoubleTapFromTouches:event:),
                                                                  touches,
                                                                  event);
        } @catch (__unused NSException *exceptionTextTriple) {
            handled = NO;
        }
        if (handled) {
            return;
        }
    }
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"TextMessageCellView.touchesEnded.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"TextMessageCellView.touchesEnded")) {
        return;
    }
    %orig(touches, event);
}

- (void)onDoubleTapTranslateView:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTap(self, sender, @"TextMessageCellView.onDoubleTapTranslateView")) {
        return;
    }
    %orig(sender);
}

%end

%hook VoiceMessageCellView

- (BOOL)supportDoubleTap {
    BOOL original = %orig;
    WCPLGestureConfig *config = [WCPLConfigCenter shared].gesture;
    if (config.doubleTapGestureEnable) {
        return NO;
    }
    return original;
}

- (void)onDoubleTapTranslateView:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTap(self, sender, @"VoiceMessageCellView.onDoubleTapTranslateView")) {
        return;
    }
    %orig(sender);
}

- (void)onDoubleTapTextTranslateView:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTap(self, sender, @"VoiceMessageCellView.onDoubleTapTextTranslateView")) {
        return;
    }
    %orig(sender);
}

%end

%hook WCPayBaseMessageCellView

- (void)onTouchUpInside {
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"WCPayBaseMessageCellView.onTouchUpInside.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"WCPayBaseMessageCellView.onTouchUpInside")) {
        return;
    }
    %orig;
}

- (void)touchesEnded:(id)touches withEvent:(id)event {
    if ([(id)self respondsToSelector:@selector(wchook_tryHandleDoubleTapFromTouches:event:)]) {
        BOOL handled = NO;
        @try {
            handled = ((BOOL (*)(id, SEL, id, id))objc_msgSend)((id)self,
                                                                  @selector(wchook_tryHandleDoubleTapFromTouches:event:),
                                                                  touches,
                                                                  event);
        } @catch (__unused NSException *exceptionPayBaseTriple) {
            handled = NO;
        }
        if (handled) {
            return;
        }
    }
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"WCPayBaseMessageCellView.touchesEnded.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"WCPayBaseMessageCellView.touchesEnded")) {
        return;
    }
    %orig(touches, event);
}

%end

%hook WCPayC2CMessageCellView

- (void)onTouchUpInside {
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"WCPayC2CMessageCellView.onTouchUpInside.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"WCPayC2CMessageCellView.onTouchUpInside")) {
        return;
    }
    %orig;
}

%end

%hook WCPayThirdC2CMessageCellView

- (void)onTouchUpInside {
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"WCPayThirdC2CMessageCellView.onTouchUpInside.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"WCPayThirdC2CMessageCellView.onTouchUpInside")) {
        return;
    }
    %orig;
}

%end

%hook MMRichTextCoverView

- (void)onDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"MMRichTextCoverView.onDoubleTap")) {
        return;
    }
    %orig(sender);
}

- (BOOL)onClickPreViewWithPoint:(CGPoint)point DoubleClick:(BOOL)doubleClick {
    if (doubleClick && wcpl_shouldBlockNativeDoubleTapForView(self, nil, @"MMRichTextCoverView.onClickPreView")) {
        return NO;
    }
    return %orig(point, doubleClick);
}

%end

%hook MMContentScrollView

- (void)onDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"MMContentScrollView.onDoubleTap")) {
        return;
    }
    %orig(sender);
}

%end

%hook WCImageScrollView

- (void)onDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"WCImageScrollView.onDoubleTap")) {
        return;
    }
    %orig(sender);
}

%end

%hook ImageScrollView

- (void)onDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"ImageScrollView.onDoubleTap")) {
        return;
    }
    %orig(sender);
}

%end

%hook MultiImageScrollView

- (void)onDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"MultiImageScrollView.onDoubleTap")) {
        return;
    }
    %orig(sender);
}

%end

%hook MsgImgFullScreenContainer

- (void)onDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"MsgImgFullScreenContainer.onDoubleTap")) {
        return;
    }
    %orig(sender);
}

%end

%hook WCBizMultiImageBrowseViewContainer

- (void)onDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"WCBizMultiImageBrowseViewContainer.onDoubleTap")) {
        return;
    }
    %orig(sender);
}

%end

%hook MMImageBrowseView

- (void)onDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"MMImageBrowseView.onDoubleTap")) {
        return;
    }
    %orig(sender);
}

%end

%hook MMImageScrollViewHelper

- (void)onDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"MMImageScrollViewHelper.onDoubleTap")) {
        return;
    }
    %orig(sender);
}

%end

%hook MMUILongPressImageView

- (void)handleDoubleTap:(id)sender {
    if (wcpl_shouldBlockNativeDoubleTapForView(self, sender, @"MMUILongPressImageView.handleDoubleTap")) {
        return;
    }
    %orig(sender);
}

- (void)tapGestureRecognizerBegan:(id)recognizer tapCount:(unsigned long long)tapCount {
    if (tapCount >= 2 && wcpl_shouldBlockNativeDoubleTapForView(self, recognizer, @"MMUILongPressImageView.tapGestureRecognizerBegan")) {
        return;
    }
    %orig(recognizer, tapCount);
}

- (void)touchesEnded:(id)touches withEvent:(id)event {
    UIView *cellView = wcpl_findMessageCellAncestorView((UIView *)self);
    if (cellView && [cellView respondsToSelector:@selector(wchook_tryHandleDoubleTapFromTouches:event:)]) {
        BOOL handled = NO;
        @try {
            handled = ((BOOL (*)(id, SEL, id, id))objc_msgSend)(cellView,
                                                                  @selector(wchook_tryHandleDoubleTapFromTouches:event:),
                                                                  touches,
                                                                  event);
        } @catch (__unused NSException *exceptionTripleFromImageView) {
            handled = NO;
        }
        if (handled) {
            return;
        }
    }
    %orig(touches, event);
}

%end

%hook ImageMessageCellView

- (void)onTouchEnded {
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"ImageMessageCellView.onTouchEnded.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"ImageMessageCellView.onTouchEnded")) {
        return;
    }
    %orig;
}

- (void)onTouchUpInside {
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"ImageMessageCellView.onTouchUpInside.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"ImageMessageCellView.onTouchUpInside")) {
        return;
    }
    %orig;
}

- (void)touchesEnded:(id)touches withEvent:(id)event {
    if ([self respondsToSelector:@selector(wchook_tryHandleDoubleTapFromTouches:event:)]) {
        BOOL handled = NO;
        @try {
            handled = ((BOOL (*)(id, SEL, id, id))objc_msgSend)(self,
                                                                  @selector(wchook_tryHandleDoubleTapFromTouches:event:),
                                                                  touches,
                                                                  event);
        } @catch (__unused NSException *exceptionImageTriple) {
            handled = NO;
        }
        if (handled) {
            return;
        }
    }
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"ImageMessageCellView.touchesEnded.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"ImageMessageCellView.touchesEnded")) {
        return;
    }
    %orig(touches, event);
}

- (void)showImage {
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"ImageMessageCellView.showImage.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"ImageMessageCellView.showImage")) {
        return;
    }
    %orig;
}

- (void)showImageNeedEdit:(BOOL)needEdit {
    if (wcpl_shouldSuppressTapForTripleSequence(self, @"ImageMessageCellView.showImageNeedEdit.triple")) {
        return;
    }
    if (wcpl_shouldSuppressTapForCell(self, @"ImageMessageCellView.showImageNeedEdit")) {
        return;
    }
    %orig(needEdit);
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
