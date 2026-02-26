#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "WeChatRedEnvelop.h"
#import "WCPLConfigCenter.h"
#import "WCHookSwipeUtilities.h"
#import "WCHookMessageNavigator.h"
#import "WCPLServiceCenter.h"
#import "WCPLCrashReporter.h"
#import "WCPLDispatchUtils.h"
#import "WCPLLogger.h"
#import "WCPLRepeatButtonEngine.h"
#import "WCPLRepeatButtonAssetManager.h"
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
static const void *kWCPLRepeatButtonStyleStampKey = &kWCPLRepeatButtonStyleStampKey;
static const void *kWCPLRepeatButtonAppearanceTokenKey = &kWCPLRepeatButtonAppearanceTokenKey;
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
static const NSTimeInterval kWCPLRepeatButtonTapDebounceInterval = 0.08;
static const NSTimeInterval kWCPLDoubleTapTriggerDebounceInterval = 0.22;
static const CGFloat kWCPLMessageTimeLabelMinWidth = 36.0f;
static const CGFloat kWCPLMessageTimeLabelMaxWidth = 86.0f;
static const CGFloat kWCPLMessageTimeLabelTopInset = -3.0f;
static const CGFloat kWCPLMessageTimeLabelMinHeight = 12.0f;
static NSString *const kWCPLIssueIdLongPressMenu = @"wx-bugfix-longpress-menu-20260207";

static CFTimeInterval gWCPLQuoteLongPressSuppressUntil = 0;
static uintptr_t gWCPLQuoteLongPressSuppressCellAddr = 0;
static unsigned int gWCPLQuoteLongPressSuppressMsgType = 0;

static NSString *wcpl_repeatMessageDebugInfo(CMessageWrap *msgWrap);
static NSString *wcpl_repeatTextForMessageWrap(CMessageWrap *msgWrap);
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
static void wcpl_clearRepeatAnchorForCell(UIView *cellView);
static void wcpl_collectMessageCellViewsInView(UIView *root, NSMutableArray<UIView *> *storage);
static UITableView *wcpl_findContainingTableView(UIView *view);
static UIView *wcpl_selectBottomMostOwnerView(NSArray<UIView *> *views, UITableView *tableView, UIView *fallback);
static BOOL wcpl_isBottomMostRepeatOwnerForMessageKey(UIView *cellView, NSString *messageKey);
static void wcpl_bindRepeatButtonTargetsToOwner(UIButton *button, id owner);
static NSString *wcpl_repeatAnchorSignatureForCell(UIView *cellView, NSString *messageKey, BOOL isSelf, UIView *bubbleView);
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
static void wcpl_updateRepeatButtonVisualShape(UIButton *button);

static BOOL wcpl_dispatchRepeatMessageWrapSafely(id source,
                                                 CMessageWrap *msgWrap,
                                                 NSString *sceneTag) {
    if (!source || !msgWrap) {
        return NO;
    }

    NSString *scene = ([sceneTag isKindOfClass:[NSString class]] && sceneTag.length > 0)
        ? sceneTag
        : @"repeat_dispatch";
    SEL repeatSel = @selector(wchook_repeatMessageWrap:);

    if ([source respondsToSelector:repeatSel]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(source, repeatSel, msgWrap);
            return YES;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"Repeat dispatch failed(%@): class=%@ reason=%@",
                           scene,
                           NSStringFromClass([source class]),
                           exception.reason ?: @"unknown");
        }
    }

    if ([source isKindOfClass:[UIView class]]) {
        UIView *ancestor = (UIView *)source;
        while ([ancestor isKindOfClass:[UIView class]]) {
            ancestor = ancestor.superview;
            if (![ancestor isKindOfClass:[UIView class]]) {
                break;
            }
            if (![ancestor respondsToSelector:repeatSel]) {
                continue;
            }
            @try {
                ((void (*)(id, SEL, id))objc_msgSend)(ancestor, repeatSel, msgWrap);
                WCPLLogInfo(@"Repeat dispatch rerouted(%@): from=%@ to=%@",
                            scene,
                            NSStringFromClass([source class]),
                            NSStringFromClass([ancestor class]));
                return YES;
            } @catch (NSException *exception) {
                WCPLLogWarning(@"Repeat dispatch reroute failed(%@): from=%@ to=%@ reason=%@",
                               scene,
                               NSStringFromClass([source class]),
                               NSStringFromClass([ancestor class]),
                               exception.reason ?: @"unknown");
                break;
            }
        }
    }

    WCPLLogError(@"Repeat dispatch dropped(%@): class=%@ msg=%@",
                 scene,
                 NSStringFromClass([source class]),
                 wcpl_repeatMessageDebugInfo(msgWrap));
    return NO;
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

static NSArray<id> *wcpl_revokeCandidatesFromRichTextObject(id richTextObj) {
    if (!richTextObj) {
        return @[];
    }

    NSMutableArray<id> *candidates = [NSMutableArray array];
    [candidates addObject:richTextObj];

    SEL selDelegateView = @selector(delegateView);
    if ([richTextObj respondsToSelector:selDelegateView]) {
        @try {
            id delegateView = ((id (*)(id, SEL))objc_msgSend)(richTextObj, selDelegateView);
            if (delegateView) {
                [candidates addObject:delegateView];
            }
        } @catch (__unused NSException *exception) {
        }
    }

    SEL selCoverView = @selector(richTextCoverView);
    if ([richTextObj respondsToSelector:selCoverView]) {
        @try {
            id coverView = ((id (*)(id, SEL))objc_msgSend)(richTextObj, selCoverView);
            if (coverView) {
                [candidates addObject:coverView];
            }
        } @catch (__unused NSException *exception) {
        }
    }

    NSArray<NSString *> *keys = @[@"linkDelegate", @"layoutDelegate", @"delegate", @"textSelectEventDelegate", @"menuResponder"];
    for (NSString *key in keys) {
        id candidate = nil;
        @try {
            candidate = [richTextObj valueForKey:key];
        } @catch (__unused NSException *exceptionKVC) {
            candidate = nil;
        }
        if (candidate) {
            [candidates addObject:candidate];
        }
    }

    NSMutableArray<id> *unique = [NSMutableArray arrayWithCapacity:candidates.count];
    for (id candidate in candidates) {
        if (!candidate) {
            continue;
        }
        BOOL exists = NO;
        for (id existing in unique) {
            if (existing == candidate) {
                exists = YES;
                break;
            }
        }
        if (!exists) {
            [unique addObject:candidate];
        }
    }
    return unique;
}

static BOOL wcpl_tryOpenQuitMemberProfileByRichTextObject(id richTextObj, NSString *scene) {
    NSArray<id> *candidates = wcpl_revokeCandidatesFromRichTextObject(richTextObj);
    for (id candidate in candidates) {
        UIView *cellView = nil;
        if ([candidate isKindOfClass:[UIView class]]) {
            cellView = wcpl_findMessageCellAncestorView((UIView *)candidate);
            if (!cellView) {
                cellView = (UIView *)candidate;
            }
        }
        if (!cellView) {
            continue;
        }
        if ([WCHookMessageNavigator tryJumpFromRevokeTipCell:(CommonMessageCellView *)cellView]) {
            WCPLLogInfo(@"Revoke tip jump handled by rich text: scene=%@ cell=%@",
                        scene ?: @"unknown",
                        NSStringFromClass([cellView class]));
            return YES;
        }
        if ([WCHookMessageNavigator tryOpenQuitMemberProfileFromCell:(CommonMessageCellView *)cellView]) {
            WCPLLogInfo(@"Quit monitor profile open handled by rich text: scene=%@ cell=%@",
                        scene ?: @"unknown",
                        NSStringFromClass([cellView class]));
            return YES;
        }
    }
    return NO;
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
        BOOL didFinish = WCPLDispatchMainSyncWithTimeout(2.0, resolveBlock);
        if (!didFinish) {
            WCPLLogWarning(@"[复读] 获取 selfUserName 超时，已放弃");
            return nil;
        }
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

static BOOL wcpl_repeatNativeResendDetachedCommon(CMessageWrap *msgWrap,
                                                  NSString *chatName,
                                                  BaseMsgContentViewController *chatVC,
                                                  NSString *sceneTag,
                                                  NSString *defaultScene,
                                                  NSString *skipReason) {
    if (!msgWrap || chatName.length == 0) {
        return NO;
    }

    NSString *scene = [sceneTag isKindOfClass:[NSString class]] ? sceneTag : defaultScene;
    CMessageWrap *sendWrap = wcpl_buildDetachedSendWrap(msgWrap, scene);
    if (!sendWrap) {
        WCPLLogWarning(@"Repeat native resend skipped: scene=%@ msg=%@ reason=%@",
                       scene,
                       wcpl_repeatMessageDebugInfo(msgWrap),
                       skipReason ?: @"clone_failed_no_source_reuse");
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
    return wcpl_repeatNativeResendDetachedCommon(msgWrap,
                                                 chatName,
                                                 chatVC,
                                                 sceneTag,
                                                 @"message",
                                                 @"clone_failed_no_source_reuse");
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

    NSError *readError = nil;
    NSData *data = [NSData dataWithContentsOfFile:audioPath
                                          options:NSDataReadingMappedIfSafe
                                            error:&readError];
    if (data.length == 0) {
        return nil;
    }

    // 防止异常大文件导致内存暴涨甚至 OOM；语音通常很小，超过阈值直接拒绝。
    static const NSUInteger kWCPLVoiceAudioMaxBytes = 20 * 1024 * 1024; // 20MB
    if (data.length > kWCPLVoiceAudioMaxBytes) {
        WCPLLogWarning(@"[语音复读] 音频文件过大，已跳过: size=%lu path=%@ err=%@",
                       (unsigned long)data.length,
                       audioPath ?: @"",
                       readError.localizedDescription ?: @"");
        return nil;
    }

    return data;
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

static inline NSString *wcpl_repeatCachedDebugInfo(CMessageWrap *msgWrap, NSString **cache) {
    if (!cache) {
        return wcpl_repeatMessageDebugInfo(msgWrap);
    }
    if (!*cache) {
        *cache = wcpl_repeatMessageDebugInfo(msgWrap);
    }
    return *cache;
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
                    } @catch (__unused NSException *exception) {
                    }
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

@interface CommonMessageCellView (WCPLRepeatButton)
@property(nonatomic, strong) UITapGestureRecognizer *wchook_doubleTapGesture;
@property(nonatomic, strong) UILabel *wchook_messageTimeLabel;
- (BOOL)wchook_isMessageSupportedForRepeat:(CMessageWrap *)msgWrap;
- (UIImpactFeedbackGenerator *)wchook_repeatTapFeedbackGenerator;
- (UIView *)wchook_repeatDisplayAnchorViewByNFQPrinciple;
- (UIView *)wchook_bubbleAnchorView;
- (void)wchook_layoutRepeatButton:(UIButton *)button withBubbleView:(UIView *)bubbleView isSelf:(BOOL)isSelf;
- (UIButton *)wchook_buildRepeatButton;
- (NSInteger)wchook_repeatButtonStyleStampForCurrentTrait;
- (void)wchook_applyThemeStyleForRepeatButton:(UIButton *)button force:(BOOL)force;
- (NSDictionary *)wchook_repeatAnchorContextForV2;
- (UIButton *)wchook_repeatButtonForV2EnsureCreate:(BOOL)createIfNeeded;
- (void)wchook_bindRepeatButtonForV2:(UIButton *)button wrap:(id)wrap messageKey:(NSString *)messageKey;
- (void)wchook_hideRepeatButtonByNFQPrinciple;
- (void)wchook_updateRepeatButtonByNFQPrinciple;
- (void)wchook_clearRepeatAnchorAndButtonLocalOnly;
- (void)wchook_clearRepeatAnchorAndButtonForCurrentEngine;
- (BOOL)wchook_reportRepeatAnchorIfNeeded;
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
                if (candidateRank < ownerRank) {
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
