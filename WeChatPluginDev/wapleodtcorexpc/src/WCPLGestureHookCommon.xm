#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "WCPLWeChatContactHeaders.h"
#import "WCPLWeChatMessageHeaders.h"
#import "WCPLConfigCenter.h"
#import "WCHookSwipeUtilities.h"
#import "WCHookMessageNavigator.h"
#import "WCPLServiceCenter.h"
#import "WCPLCrashReporter.h"
#import "WCPLDispatchUtils.h"
#import "WCPLMessagePersistenceAdapter.h"
#import "WCPLLogger.h"
#import "WCPLRepeatButtonEngine.h"
#import "WCPLRepeatButtonAssetManager.h"
#import "WCPLViewTraversalHelpers.h"
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

typedef NS_ENUM(NSInteger, WCPLTapHitZone) {
    WCPLTapHitZoneOutside = 0,
    WCPLTapHitZoneBubbleBlank = 1,
    WCPLTapHitZoneTextBody = 2,
    WCPLTapHitZoneMediaBody = 3,
};

static NSString *wcpl_repeatMessageDebugInfo(CMessageWrap *msgWrap);
static NSString *wcpl_repeatTextForMessageWrap(CMessageWrap *msgWrap);
static NSString *wcpl_currentSelfUserNameForRepeat(void);
static void wcpl_scheduleSwipeQuoteAtUserIfNeeded(CMessageWrap *msgWrap,
                                                   BaseMsgContentViewController *chatVC,
                                                   NSString *sceneTag);
static CMessageWrap *wcpl_quoteTargetFromMessageWrap(CMessageWrap *msgWrap);
static BOOL wcpl_isRepeatTypeEnabledByConfig(WCPLGestureConfig *config, CMessageWrap *msgWrap);
static BOOL wcpl_isMediaBubbleRepeatMessage(CMessageWrap *msgWrap);
static BOOL wcpl_isQuoteReplyAppMessage(CMessageWrap *msgWrap);
static BOOL wcpl_isFileAppMessage(CMessageWrap *msgWrap);
static BOOL wcpl_isAppEmoticonMessage(CMessageWrap *msgWrap);
static BOOL wcpl_isMessageFromOther(CMessageWrap *msgWrap);
static BOOL wcpl_isMessageSettledForRepeat(CMessageWrap *msgWrap);
static CMessageWrap *wcpl_messageWrapForCellView(id cell);
static NSString *wcpl_repeatTypeName(unsigned int msgType);
static CGFloat wcpl_repeatAlignToPixel(CGFloat value);
static BOOL wcpl_repeatRectAlmostEqual(CGRect left, CGRect right);
static CGFloat wcpl_repeatButtonSizeFromConfig(void);
static void wcpl_setupRepeatLifecycleObserver(void);
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
static BOOL wcpl_messageUsesTripleTapPolicy(id cell, CMessageWrap *msgWrap);
static NSInteger wcpl_configuredTapCountForCell(id cell, CMessageWrap *msgWrap);
static NSString *wcpl_configuredTapSceneTagForCell(id cell, CMessageWrap *msgWrap);
static NSString *wcpl_tapHitZoneName(WCPLTapHitZone zone);
static WCPLTapHitZone wcpl_tapGestureHitZoneForPoint(id cell, CGPoint pointInCell, NSString *scopeTag);
static BOOL wcpl_shouldAllowCustomTapForZone(id cell, CMessageWrap *msgWrap, WCPLTapHitZone zone);
static CGPoint wcpl_resolveTapPointInCellFromOwnerAndSender(UIView *cellView, id ownerView, id sender, BOOL *resolvedOut);
static BOOL wcpl_shouldBlockNativeDoubleTapForResolvedZone(id cell,
                                                           CMessageWrap *msgWrap,
                                                           WCPLTapHitZone zone,
                                                           BOOL zoneResolved,
                                                           NSString *scopeTag);
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

    if (wcpl_instanceMethodExists(source, repeatSel)) {
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
            if (!wcpl_instanceMethodExists(ancestor, repeatSel)) {
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
    if (!wcpl_messageUsesTripleTapPolicy(cell, msgWrap)) {
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
    CMessageWrap *msgWrap = wcpl_messageWrapForCellView(cell);
    WCPLTapHitZone zone = wcpl_tapGestureHitZoneForPoint(cell, pointInCell, scopeTag);
    return wcpl_shouldAllowCustomTapForZone(cell, msgWrap, zone);
}

static __attribute__((unused)) BOOL wcpl_isTouchInMessageBubbleArea(id cell, UITouch *touch, NSString *scopeTag) {
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

    NSMutableArray<id> *candidates = [NSMutableArray arrayWithObject:richTextObj];
    SEL delegateViewSelector = @selector(delegateView);
    if ([richTextObj respondsToSelector:delegateViewSelector]) {
        @try {
            id delegateView = ((id (*)(id, SEL))objc_msgSend)(richTextObj, delegateViewSelector);
            if (delegateView) {
                [candidates addObject:delegateView];
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    SEL coverViewSelector = @selector(richTextCoverView);
    if ([richTextObj respondsToSelector:coverViewSelector]) {
        @try {
            id coverView = ((id (*)(id, SEL))objc_msgSend)(richTextObj, coverViewSelector);
            if (coverView) {
                [candidates addObject:coverView];
            }
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }

    NSArray<NSString *> *keys = @[@"linkDelegate", @"layoutDelegate", @"delegate", @"textSelectEventDelegate", @"menuResponder"];
    for (NSString *key in keys) {
        id candidate = nil;
        @try {
            candidate = [richTextObj valueForKey:key];
        } @catch (__unused NSException *exception) {
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

static BOOL wcpl_viewIsReferJumpArea(UIView *view) {
    for (UIView *cursor = view; cursor; cursor = cursor.superview) {
        if ([WCHookMessageNavigator senderLooksLikeReferView:cursor]) {
            return YES;
        }
    }
    return NO;
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
    BOOL pointResolved = NO;
    CGPoint pointInCell = wcpl_resolveTapPointInCellFromOwnerAndSender(cellView, ownerView, sender, &pointResolved);
    WCPLTapHitZone zone = pointResolved
        ? wcpl_tapGestureHitZoneForPoint(cellView, pointInCell, [scopeTag stringByAppendingString:@"_native"])
        : WCPLTapHitZoneOutside;
    if (!wcpl_shouldBlockNativeDoubleTapForResolvedZone(cellView, msgWrap, zone, pointResolved, scopeTag)) {
        return NO;
    }

    NSString *scope = ([scopeTag isKindOfClass:[NSString class]] && scopeTag.length > 0) ? scopeTag : @"unknown";
    NSString *senderClass = sender ? NSStringFromClass([sender class]) : @"(nil)";
    NSString *gestureTag = wcpl_configuredTapSceneTagForCell(cellView, msgWrap);
    NSString *zoneName = pointResolved ? wcpl_tapHitZoneName(zone) : @"unresolved";
    WCPLLogInfo(@"Native double tap blocked: scope=%@ gesture=%@ zone=%@ resolved=%d class=%@ sender=%@ msg=%@",
                scope,
                gestureTag,
                zoneName,
                pointResolved ? 1 : 0,
                NSStringFromClass([cellView class]),
                senderClass,
                wcpl_repeatMessageDebugInfo(msgWrap));
    return YES;
}

static void wcpl_enforceTripleTapPriorityForViewTree(UIView *root, UITapGestureRecognizer *tripleTap, id ownerCell) {
    if (!root || !tripleTap) {
        return;
    }

    BOOL usesTriplePolicy = tripleTap.numberOfTapsRequired >= 3;

    NSMutableArray<UIView *> *stack = [NSMutableArray arrayWithObject:root];
    while (stack.count > 0) {
        UIView *view = stack.lastObject;
        [stack removeLastObject];
        BOOL viewIsReferJumpArea = wcpl_viewIsReferJumpArea(view);

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
                NSNumber *didDisable = objc_getAssociatedObject(tap, kWCPLNativeDoubleTapRecognizerDisabledKey);
                BOOL disabledByWCPL = [didDisable isKindOfClass:[NSNumber class]] && didDisable.boolValue;
                if (usesTriplePolicy) {
                    if (tap.enabled) {
                        tap.enabled = NO;
                        if (!disabledByWCPL) {
                            WCPLLogInfo(@"Native double tap recognizer disabled: cell=%p owner=%@ view=%@ recognizer=%@",
                                        ownerCell,
                                        ownerCell ? NSStringFromClass([ownerCell class]) : @"(nil)",
                                        NSStringFromClass([view class]),
                                        NSStringFromClass([tap class]));
                            objc_setAssociatedObject(tap,
                                                     kWCPLNativeDoubleTapRecognizerDisabledKey,
                                                     @(YES),
                                                     OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                        }
                    }
                } else if (disabledByWCPL && !tap.enabled) {
                    tap.enabled = YES;
                    objc_setAssociatedObject(tap,
                                             kWCPLNativeDoubleTapRecognizerDisabledKey,
                                             nil,
                                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                    WCPLLogInfo(@"Native double tap recognizer restored: cell=%p owner=%@ view=%@ recognizer=%@",
                                ownerCell,
                                ownerCell ? NSStringFromClass([ownerCell class]) : @"(nil)",
                                NSStringFromClass([view class]),
                                NSStringFromClass([tap class]));
                }
                continue;
            }

            if (viewIsReferJumpArea && tap.numberOfTapsRequired == 1) {
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
            } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
        }
    }
    return nil;
}

static id wcpl_quoteContactForUserName(NSString *userName) {
    return WCPLContactAdapterFindContactByUserName(userName);
}

static id wcpl_quoteContactFromMessage(CMessageWrap *msgWrap, NSString *expectedUserName) {
    if (!msgWrap) {
        return nil;
    }

    id contact = WCPLContactAdapterMessageChatContact(msgWrap);
    if (!contact || expectedUserName.length == 0) {
        return contact;
    }

    NSString *contactUserName = WCPLContactAdapterSafeUserName(contact);
    if (contactUserName.length > 0 && ![contactUserName isEqualToString:expectedUserName]) {
        WCPLLogDebug(@"Swipe quote mention contact mismatch(fromMessage): expect=%@ got=%@",
                     expectedUserName ?: @"(nil)",
                     contactUserName ?: @"(nil)");
    }

    return contact;
}

static BOOL wcpl_quoteContactMatchesUserName(id contact, NSString *expectedUserName) {
    return WCPLContactAdapterContactMatchesUserName(contact, expectedUserName);
}

static id wcpl_quoteContactFromChatVC(BaseMsgContentViewController *chatVC,
                                      CMessageWrap *msgWrap,
                                      NSString *expectedUserName) {
    if (!(chatVC && msgWrap)) {
        return nil;
    }

    id contact = WCPLContactAdapterMessageChatContactFromController(chatVC, msgWrap);
    if (contact && expectedUserName.length > 0 && !wcpl_quoteContactMatchesUserName(contact, expectedUserName)) {
        WCPLLogDebug(@"Swipe quote mention contact mismatch(fromChatVC): expect=%@",
                     expectedUserName ?: @"(nil)");
    }

    return contact;
}

static id wcpl_quoteLogicControllerForChatVC(BaseMsgContentViewController *chatVC) {
    return WCPLMessageAdapterLogicController(chatVC);
}

static id wcpl_quoteToolViewForChatVC(BaseMsgContentViewController *chatVC) {
    return WCPLMessageAdapterToolView(chatVC);
}

static id wcpl_quoteCurrentLogicControllerFromManager(void) {
    return WCPLMessageAdapterCurrentLogicController();
}


static BOOL wcpl_quoteInputHasAtSymbol(BaseMsgContentViewController *chatVC) {
    id toolView = wcpl_quoteToolViewForChatVC(chatVC);
    NSString *inputText = WCPLMessageAdapterInputTextFromToolView(toolView);
    if (inputText.length == 0) {
        return NO;
    }
    return ([inputText rangeOfString:@"@"].location != NSNotFound);
}

static NSString *wcpl_quoteUserNameFromContact(id contact) {
    return WCPLContactAdapterSafeUserName(contact);
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
    id sessionMgr = WCPLServiceCenterAdapterGetServiceNamed(@"MMNewSessionMgr");
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
        selfUserName = [WCPLContactAdapterCurrentSelfUserName() copy];
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
    id contact = nil;
    if (chatName.length > 0) {
        contact = WCPLContactAdapterFindContactByUserName(chatName);
    }
    if (!contact) {
        contact = WCPLContactAdapterMessageChatContact(msgWrap);
    }
    return contact;
}

static NSString *wcpl_generateRepeatClientMsgID(NSString *selfUserName) {
    NSString *sender = wcpl_trimTextForRepeat(selfUserName);
    if (sender.length == 0) {
        sender = wcpl_currentSelfUserNameForRepeat();
    }
    return WCPLGenerateClientMsgID(sender);
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
        } @catch (__unused NSException *exceptionClientIDSetter) { WCPLCatchLog(exceptionClientIDSetter); }
    }

    if (!didSetClientID) {
        @try {
            [sendWrap setValue:clientMsgID forKey:@"m_nsClientMsgID"];
            didSetClientID = YES;
        } @catch (__unused NSException *exceptionClientIDKVCUpper) { WCPLCatchLog(exceptionClientIDKVCUpper); }
    }

    if (!didSetClientID) {
        @try {
            [sendWrap setValue:clientMsgID forKey:@"m_nsClientMsgId"];
            didSetClientID = YES;
        } @catch (__unused NSException *exceptionClientIDKVCLower) { WCPLCatchLog(exceptionClientIDKVCLower); }
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
        } @catch (__unused NSException *exceptionLocalId) { WCPLCatchLog(exceptionLocalId); }
    }
    @try {
        [sendWrap setValue:@(0) forKey:@"m_uiMesLocalID"];
    } @catch (__unused NSException *exceptionLocalIdKVC) { WCPLCatchLog(exceptionLocalIdKVC); }

    if ([sendWrap respondsToSelector:@selector(setM_n64MesSvrID:)]) {
        @try {
            ((void (*)(id, SEL, long long))objc_msgSend)(sendWrap, @selector(setM_n64MesSvrID:), 0);
        } @catch (__unused NSException *exceptionSvrId) { WCPLCatchLog(exceptionSvrId); }
    }
    @try {
        [sendWrap setValue:@((long long)0) forKey:@"m_n64MesSvrID"];
    } @catch (__unused NSException *exceptionSvrIdKVC) { WCPLCatchLog(exceptionSvrIdKVC); }

    if ([sendWrap respondsToSelector:@selector(setM_uiStatus:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiStatus:), 0);
        } @catch (__unused NSException *exceptionStatus) { WCPLCatchLog(exceptionStatus); }
    }
    @try {
        [sendWrap setValue:@(0) forKey:@"m_uiStatus"];
    } @catch (__unused NSException *exceptionStatusKVC) { WCPLCatchLog(exceptionStatusKVC); }

    unsigned int now = (unsigned int)[[NSDate date] timeIntervalSince1970];
    if ([sendWrap respondsToSelector:@selector(setM_uiCreateTime:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiCreateTime:), now);
        } @catch (__unused NSException *exceptionCreateTime) { WCPLCatchLog(exceptionCreateTime); }
    }

    if ([sendWrap respondsToSelector:@selector(setM_uiSendTime:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiSendTime:), now);
        } @catch (__unused NSException *exceptionSendTime) { WCPLCatchLog(exceptionSendTime); }
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
        } @catch (__unused NSException *exceptionTo) { WCPLCatchLog(exceptionTo); }
    }

    if (selfUserName.length > 0 && [sendWrap respondsToSelector:@selector(setM_nsFromUsr:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsFromUsr:), selfUserName);
        } @catch (__unused NSException *exceptionFrom) { WCPLCatchLog(exceptionFrom); }
    }

    // 设置发送者身份
    if ([sendWrap respondsToSelector:@selector(setM_uiIsSenderStatus:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiIsSenderStatus:), 1);
        } @catch (__unused NSException *exceptionSenderStatus) { WCPLCatchLog(exceptionSenderStatus); }
    }

    // 主动发送场景 realChatUsr 保持空，避免被误判为"代他人发言"
    if ([sendWrap respondsToSelector:@selector(setM_nsRealChatUsr:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsRealChatUsr:), nil);
        } @catch (__unused NSException *exceptionReal) { WCPLCatchLog(exceptionReal); }
    }

    NSString *clientMsgID = wcpl_generateRepeatClientMsgID(selfUserName);
    wcpl_applyClientMsgIDToSendWrap(sendWrap, clientMsgID, sceneTag);

    @try {
        [sendWrap setValue:@(sendWrap.m_uiMessageType) forKey:@"m_uiMsgType"];
    } @catch (__unused NSException *exceptionMsgType) { WCPLCatchLog(exceptionMsgType); }

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
        } @catch (__unused NSException *exceptionSetContent) { WCPLCatchLog(exceptionSetContent); }
    }

    if (selfUserName.length > 0 && [sendWrap respondsToSelector:@selector(setM_nsFromUsr:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsFromUsr:), selfUserName);
        } @catch (__unused NSException *exceptionFrom) { WCPLCatchLog(exceptionFrom); }
    }
    if ([sendWrap respondsToSelector:@selector(setM_nsToUsr:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsToUsr:), chatName);
        } @catch (__unused NSException *exceptionTo) { WCPLCatchLog(exceptionTo); }
    }

    unsigned int now = (unsigned int)[[NSDate date] timeIntervalSince1970];
    if ([sendWrap respondsToSelector:@selector(setM_uiCreateTime:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiCreateTime:), now);
        } @catch (__unused NSException *exceptionCreateTime) { WCPLCatchLog(exceptionCreateTime); }
    }

    NSString *clientMsgID = wcpl_generateRepeatClientMsgID(selfUserName);
    wcpl_applyClientMsgIDToSendWrap(sendWrap, clientMsgID, sceneTag);

    if ([sendWrap respondsToSelector:@selector(setM_uiMessageType:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiMessageType:), 49);
        } @catch (__unused NSException *exceptionSetType) { WCPLCatchLog(exceptionSetType); }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiStatus:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiStatus:), 0);
        } @catch (__unused NSException *exceptionSetStatus) { WCPLCatchLog(exceptionSetStatus); }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiMesLocalID:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiMesLocalID:), 0);
        } @catch (__unused NSException *exceptionSetLocal) { WCPLCatchLog(exceptionSetLocal); }
    }
    if ([sendWrap respondsToSelector:@selector(setM_n64MesSvrID:)]) {
        @try {
            ((void (*)(id, SEL, long long))objc_msgSend)(sendWrap, @selector(setM_n64MesSvrID:), 0);
        } @catch (__unused NSException *exceptionSetSvr) { WCPLCatchLog(exceptionSetSvr); }
    }

    @try {
        [sendWrap setValue:@(49) forKey:@"m_uiMessageType"];
    } @catch (__unused NSException *exceptionTypeKVC) { WCPLCatchLog(exceptionTypeKVC); }

    @try {
        [sendWrap setValue:@(49) forKey:@"m_uiMsgType"];
    } @catch (__unused NSException *exceptionMsgTypeKVC) { WCPLCatchLog(exceptionMsgTypeKVC); }
    @try {
        [sendWrap setValue:@(0) forKey:@"m_uiStatus"];
    } @catch (__unused NSException *exceptionStatusKVC) { WCPLCatchLog(exceptionStatusKVC); }
    @try {
        [sendWrap setValue:@(0) forKey:@"m_uiMesLocalID"];
    } @catch (__unused NSException *exceptionLocalKVC) { WCPLCatchLog(exceptionLocalKVC); }
    @try {
        [sendWrap setValue:@((long long)0) forKey:@"m_n64MesSvrID"];
    } @catch (__unused NSException *exceptionSvrKVC) { WCPLCatchLog(exceptionSvrKVC); }

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
        } @catch (__unused NSException *exceptionCopy) { WCPLCatchLog(exceptionCopy); }
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
            } @catch (__unused NSException *exceptionCopyTo) { WCPLCatchLog(exceptionCopyTo); }
        }

        if (sendWrap && !usedCopyPath) {
            if ([sendWrap respondsToSelector:@selector(setM_uiMessageType:)]) {
                @try {
                    ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiMessageType:), msgWrap.m_uiMessageType);
                } @catch (__unused NSException *exceptionType) { WCPLCatchLog(exceptionType); }
            }
            if ([sendWrap respondsToSelector:@selector(setM_nsContent:)]) {
                @try {
                    ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsContent:), msgWrap.m_nsContent);
                } @catch (__unused NSException *exceptionContent) { WCPLCatchLog(exceptionContent); }
            }
            if ([sendWrap respondsToSelector:@selector(setM_nsMsgSource:)]) {
                @try {
                    ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsMsgSource:), msgWrap.m_nsMsgSource);
                } @catch (__unused NSException *exceptionSource) { WCPLCatchLog(exceptionSource); }
            }
            if ([sendWrap respondsToSelector:@selector(setM_nsEmoticonMD5:)]) {
                @try {
                    ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsEmoticonMD5:), msgWrap.m_nsEmoticonMD5);
                } @catch (__unused NSException *exceptionMd5) { WCPLCatchLog(exceptionMd5); }
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
        } @catch (__unused NSException *exceptionClass) { WCPLCatchLog(exceptionClass); }
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
        } @catch (__unused NSException *exceptionInstance) { WCPLCatchLog(exceptionInstance); }
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

    id sendMessageMgr = WCPLMessageActionAdapterSendMessageManager();
    if (!(sendMessageMgr && [sendMessageMgr respondsToSelector:@selector(GetCountOfSendMessage)])) {
        return 0;
    }

    @try {
        unsigned long long count = ((unsigned long long (*)(id, SEL))objc_msgSend)(sendMessageMgr, @selector(GetCountOfSendMessage));
        if (availableOut) {
            *availableOut = YES;
        }
        return count;
    } @catch (__unused NSException *exceptionQueueCount) { WCPLCatchLog(exceptionQueueCount); }

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

    id messageMgr = WCPLMessageActionAdapterMessageManager();
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

    id sendMessageMgr = WCPLMessageActionAdapterSendMessageManager();
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

    id sendMessageMgr = WCPLMessageActionAdapterSendMessageManager();
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
        } @catch (__unused NSException *exceptionNestedWrap) { WCPLCatchLog(exceptionNestedWrap); }
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
                } @catch (__unused NSException *exceptionNestedListWrap) { WCPLCatchLog(exceptionNestedListWrap); }
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

    id messageMgr = WCPLMessageActionAdapterMessageManager();
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

    id sendMessageMgr = WCPLMessageActionAdapterSendMessageManager();
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
    } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }

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
    id sessionMgr = WCPLServiceCenterAdapterGetServiceNamed(@"MMNewSessionMgr");
    if (sessionMgr && [sessionMgr respondsToSelector:@selector(GenSendMsgTime)]) {
        @try {
            return ((unsigned int (*)(id, SEL))objc_msgSend)(sessionMgr, @selector(GenSendMsgTime));
        } @catch (__unused NSException *exceptionSendTime) { WCPLCatchLog(exceptionSendTime); }
    }
    return (unsigned int)[[NSDate date] timeIntervalSince1970];
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
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
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
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
    }
    if (f == 0) {
        f = wcpl_extractVoiceAttrUInt(msgWrap.m_nsContent, @"voiceformat");
    }
    return (f > 0) ? f : 4;
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
        } @catch (__unused NSException *exceptionDtVoice) { WCPLCatchLog(exceptionDtVoice); }
    }
    if ([extendInfo respondsToSelector:@selector(setM_uiVoiceTime:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(extendInfo, @selector(setM_uiVoiceTime:), voiceTime);
        } @catch (__unused NSException *exceptionVoiceTime) { WCPLCatchLog(exceptionVoiceTime); }
    }
    if ([extendInfo respondsToSelector:@selector(setM_uiVoiceFormat:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(extendInfo, @selector(setM_uiVoiceFormat:), voiceFormat);
        } @catch (__unused NSException *exceptionVoiceFmt) { WCPLCatchLog(exceptionVoiceFmt); }
    }
    if ([extendInfo respondsToSelector:@selector(setM_uiVoiceForwardFlag:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(extendInfo, @selector(setM_uiVoiceForwardFlag:), 0);
        } @catch (__unused NSException *exceptionVoiceForward) { WCPLCatchLog(exceptionVoiceForward); }
    }
    if ([extendInfo respondsToSelector:@selector(setM_uiVoiceCancelFlag:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(extendInfo, @selector(setM_uiVoiceCancelFlag:), 0);
        } @catch (__unused NSException *exceptionVoiceCancel) { WCPLCatchLog(exceptionVoiceCancel); }
    }
    if ([extendInfo respondsToSelector:@selector(setM_uiVoiceEndFlag:)]) {
        @try {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(extendInfo, @selector(setM_uiVoiceEndFlag:), 1);
        } @catch (__unused NSException *exceptionVoiceEnd) { WCPLCatchLog(exceptionVoiceEnd); }
    }
    if ([extendInfo respondsToSelector:@selector(setM_refMessageWrap:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(extendInfo, @selector(setM_refMessageWrap:), sendWrap);
        } @catch (__unused NSException *exceptionRefWrap) { WCPLCatchLog(exceptionRefWrap); }
    }

    if ([sendWrap respondsToSelector:@selector(setM_extendInfoWithMsgType:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_extendInfoWithMsgType:), extendInfo);
        } @catch (__unused NSException *exceptionSetExt) { WCPLCatchLog(exceptionSetExt); }
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
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
    }
    if (audioData && [sendWrap respondsToSelector:@selector(setM_dtVoice:)]) {
        @try { ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_dtVoice:), audioData); }
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiVoiceEndFlag:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiVoiceEndFlag:), 1); }
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiVoiceCancelFlag:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiVoiceCancelFlag:), 0); }
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiVoiceForwardFlag:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiVoiceForwardFlag:), 0); }
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiVoiceTime:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiVoiceTime:), voiceTime); }
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiVoiceFormat:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiVoiceFormat:), voiceFormat); }
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiIsSenderStatus:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiIsSenderStatus:), 1); }
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiStatus:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiStatus:), 1); }
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiDownloadStatus:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiDownloadStatus:), 9); }
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiCreateTime:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiCreateTime:), wcpl_generateSendMsgTime()); }
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
    }
    unsigned int voiceLengthMs = wcpl_voiceLengthMsFromWrap(sourceWrap);
    if (voiceLengthMs == 0) {
        voiceLengthMs = voiceTime * 1000;
    }
    NSString *voiceContent = wcpl_buildMinimalVoiceContent(voiceLengthMs, voiceFormat);
    if ([sendWrap respondsToSelector:@selector(setM_nsContent:)]) {
        @try { ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsContent:), voiceContent); }
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
    }
    if ([sendWrap respondsToSelector:@selector(setM_nsPushContent:)]) {
        @try { ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsPushContent:), @""); }
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
    }
    if ([sendWrap respondsToSelector:@selector(setM_nsPushTitle:)]) {
        @try { ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsPushTitle:), @""); }
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
    }
    if ([sendWrap respondsToSelector:@selector(setM_uiMesLocalID:)]) {
        @try { ((void (*)(id, SEL, unsigned int))objc_msgSend)(sendWrap, @selector(setM_uiMesLocalID:), 0); }
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
    }
    if ([sendWrap respondsToSelector:@selector(setM_n64MesSvrID:)]) {
        @try { ((void (*)(id, SEL, long long))objc_msgSend)(sendWrap, @selector(setM_n64MesSvrID:), 0); }
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
    }
    if ([sendWrap respondsToSelector:@selector(setM_nsMsgSource:)]) {
        NSString *msgSource = sourceWrap.m_nsMsgSource ?: @"";
        @try { ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setM_nsMsgSource:), msgSource); }
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
    }
    if ([sendWrap respondsToSelector:@selector(setVoiceUrl:)]) {
        @try { ((void (*)(id, SEL, id))objc_msgSend)(sendWrap, @selector(setVoiceUrl:), @""); }
        @catch (__unused NSException *e) { WCPLCatchLog(e); }
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
        } @catch (__unused NSException *e) { WCPLCatchLog(e); }
    }
    if (!sendWrap) {
        @try {
            sendWrap = [[wrapClass alloc] init];
        } @catch (__unused NSException *e) { WCPLCatchLog(e); }
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

    WCPLAddLocalMsgInsertPath insertPath = WCPLAddLocalMsgInsertPathNone;
    BOOL inserted = WCPLAddLocalMsgInsert((WCPLAddLocalMsgInsertRequest){
                                              .messageMgr = messageMgr,
                                              .sessionUserName = chatName,
                                              .msgWrap = sendWrap,
                                              .fixTime = YES,
                                              .notify = NO,
                                              .unique = YES,
                                          },
                                          &insertPath);
    if (inserted) {
        WCPLLogDebug(@"Repeat voice add-local: scene=%@ path=%@ localID=%u",
                     sceneTag ?: @"voice_local",
                     WCPLAddLocalMsgInsertPathDescription(insertPath),
                     sendWrap.m_uiMesLocalID);
    } else {
        WCPLLogWarning(@"Repeat voice add-local failed: scene=%@ path=%@",
                       sceneTag ?: @"voice_local",
                       WCPLAddLocalMsgInsertPathDescription(insertPath));
    }
    return inserted;
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

    id messageMgr = WCPLMessageActionAdapterMessageManager();
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
            } @catch (__unused NSException *e) { WCPLCatchLog(e); }
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
        id audioSender = WCPLServiceCenterAdapterGetServiceNamed(@"AudioSender");
        if (wcpl_tryInvokeResendVoiceTarget(audioSender,
                                            chatName,
                                            sendWrap,
                                            @"voice_resendvoice",
                                            @"AudioSender")) {
            return YES;
        }

        id uploadVoiceMgr = WCPLServiceCenterAdapterGetServiceNamed(@"MMNewUploadVoiceMgr");
        if (wcpl_tryInvokeResendVoiceTarget(uploadVoiceMgr,
                                            chatName,
                                            sendWrap,
                                            @"voice_resendvoice",
                                            @"MMNewUploadVoiceMgr")) {
            return YES;
        }

        id uploadVoiceCDNMgr = WCPLServiceCenterAdapterGetServiceNamed(@"UploadVoiceCDNMgr");
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

    id sendMessageMgr = WCPLMessageActionAdapterSendMessageManager();
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
- (BOOL)wchook_tryFireManualBlankDoubleTapWithSource:(NSString *)source;
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
    return WCPLFindContainingTableView(view);
}

static void wcpl_collectMessageCellViewsInView(UIView *root, NSMutableArray<UIView *> *storage) {
    if (![root isKindOfClass:[UIView class]] || ![storage isKindOfClass:[NSMutableArray class]]) {
        return;
    }

    static Class commonMessageCellViewClass;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        commonMessageCellViewClass = NSClassFromString(@"CommonMessageCellView");
    });
    WCPLCollectViewsOfClassOrAllIfNil(root, commonMessageCellViewClass, storage);
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
