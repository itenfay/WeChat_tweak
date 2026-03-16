// Merged from: WCPLMessageSearchCoreA.xm + CoreB.xm + CoreC.xm

#import "WCPLCrashReporter.h"

%group WCPLMessageSearchCoreGroup

static const void *kWCPLChatSearchNavButtonKey = &kWCPLChatSearchNavButtonKey;
static const void *kWCPLChatSearchNavButtonTagKey = &kWCPLChatSearchNavButtonTagKey;
static const void *kWCPLChatSearchAutoPopOnCancelKey = &kWCPLChatSearchAutoPopOnCancelKey;
static const void *kWCPLChatSearchTransitioningKey = &kWCPLChatSearchTransitioningKey;
static const void *kWCPLChatSearchInjectedFlowKey = &kWCPLChatSearchInjectedFlowKey;
static const void *kWCPLChatSearchEnhanceRetryKey = &kWCPLChatSearchEnhanceRetryKey;
static const void *kWCPLChatSearchBridgePendingKey = &kWCPLChatSearchBridgePendingKey;
static const void *kWCPLChatSearchBridgeAutoPopKey = &kWCPLChatSearchBridgeAutoPopKey;
static const void *kWCPLChatSearchBridgeSourceControllerKey = &kWCPLChatSearchBridgeSourceControllerKey;
static const void *kWCPLChatSearchCancellingKey = &kWCPLChatSearchCancellingKey;
static const void *kWCPLChatSearchExitCleanupEpochKey = &kWCPLChatSearchExitCleanupEpochKey;
static const void *kWCPLChatSearchForceFullModeKey = &kWCPLChatSearchForceFullModeKey;
static const void *kWCPLChatSearchForceDelayedRepairKey = &kWCPLChatSearchForceDelayedRepairKey;
static const void *kWCPLChatSearchButtonRepairEpochKey = &kWCPLChatSearchButtonRepairEpochKey;
static const void *kWCPLChatSearchCachedUserNameKey = &kWCPLChatSearchCachedUserNameKey;
static const void *kWCPLSearchBarContainerOriginalYKey = &kWCPLSearchBarContainerOriginalYKey;
static const NSUInteger kWCPLSearchTreeMaxDepth = 16;
static id wcpl_msgSearchHelperFromController(id controller);
static id wcpl_specialMsgSearchHelperFromController(id controller);
static unsigned int wcpl_msgSearchBusinessType(id controller);
static BOOL wcpl_tryFinalizeSpecialSearchHelper(id controller, NSString *stage);
static void wcpl_logSearchHelperSnapshot(id controller, NSString *stage);
static NSUInteger wcpl_nextExitCleanupEpoch(id controller);
static void wcpl_logSearchTouchProbe(id viewController, NSString *stage);
static void wcpl_resetSearchHelperRuntimeState(id helper, NSString *stage);
static NSUInteger wcpl_searchEnhanceRetryCount(id controller);
static BOOL wcpl_consumeSearchEnhanceRetryBudget(id controller, NSUInteger maxRetry);
static void wcpl_markForceFullSearchMode(id controller, BOOL enable);
static BOOL wcpl_shouldForceFullSearchMode(id controller);
static BOOL wcpl_activateInPageSearchState(id controller);
static BOOL wcpl_isInjectedChatSearchFlow(id controller);
static BOOL wcpl_isControllerShowingSearchUI(id viewController);
static BOOL wcpl_classNameContainsSearchToken(NSString *className);
static BOOL wcpl_classNameContainsToken(NSString *className, NSString *token);
static BOOL wcpl_viewTreeHasSearchLikeNode(UIView *view, NSUInteger depth);
static UIView *wcpl_safeViewIfLoaded(UIViewController *viewController);
static BOOL wcpl_objectLooksLikeSearchController(id obj);
static id wcpl_searchControllerFromHelper(id helper);
static BOOL wcpl_viewControllerLooksSearchPresentation(UIViewController *viewController);
static BOOL wcpl_restoreSearchLikeNodesInTree(UIView *view, NSUInteger depth, NSUInteger *restoredCount);
static BOOL wcpl_forceDismissSearchPresentationController(id controller, NSString *stage);
static BOOL wcpl_forceDisableSearchPresentationOverlay(id controller, NSString *stage);
static void wcpl_repairExitSearchNavState(id controller, NSString *stage, BOOL allowReloadWholePage);
static BOOL wcpl_isTargetChatForSearchButton(id viewController);
static BOOL wcpl_navTitleViewLooksSearchLike(id viewController);
static BOOL wcpl_navBarHasSearchResidue(id viewController);
static BOOL wcpl_controllerRootHasSearchResidue(id viewController);
static BOOL wcpl_restoreSearchPresentationOnActivation(id controller, NSString *stage);
static NSString *wcpl_barButtonActionName(UIBarButtonItem *item);
static BOOL wcpl_barButtonItemLooksLikeMoreEntry(UIBarButtonItem *item);
static BOOL wcpl_controllerHasInjectedChatSearchButton(id viewController);
static void wcpl_scheduleChatSearchButtonRepair(id controller, NSString *stage);
static NSUInteger wcpl_nextChatSearchButtonRepairEpoch(id controller);
static id wcpl_serviceByClass(Class serviceClass);
static BOOL wcpl_softDisableSearchOverlayInTree(UIView *view,
                                                UIView *excludedRoot,
                                                UIView *scanRoot,
                                                NSString *stage,
                                                NSUInteger depth,
                                                NSUInteger *disabledCount);
static BOOL wcpl_miyouPushSearchController(id controller);
static BOOL wcpl_pushSearchSceneFallback(id contact, UINavigationController *navigationController);
static void wcpl_markBridgePending(id controller, BOOL enable);
static BOOL wcpl_isBridgePending(id controller);
static void wcpl_markBridgeAutoPop(id controller, BOOL enable);
static BOOL wcpl_isBridgeAutoPop(id controller);

static UIView *wcpl_safeViewIfLoaded(UIViewController *viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return nil;
    }
    if (![viewController isViewLoaded]) {
        return nil;
    }
    UIView *view = viewController.view;
    return [view isKindOfClass:[UIView class]] ? view : nil;
}

static CGFloat wcpl_viewOriginY(UIView *view) {
    if (![view isKindOfClass:[UIView class]]) {
        return 0.0f;
    }
    if ([view respondsToSelector:@selector(y)]) {
        @try {
            return ((CGFloat (*)(id, SEL))objc_msgSend)(view, @selector(y));
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }
    return view.frame.origin.y;
}

static void wcpl_setViewOriginY(UIView *view, CGFloat y) {
    if (![view isKindOfClass:[UIView class]]) {
        return;
    }
    if ([view respondsToSelector:@selector(setY:)]) {
        @try {
            ((void (*)(id, SEL, CGFloat))objc_msgSend)(view, @selector(setY:), y);
            return;
        } @catch (__unused NSException *exception) { WCPLCatchLog(exception); }
    }
    CGRect frame = view.frame;
    frame.origin.y = y;
    view.frame = frame;
}

@interface CommonMessageCellView (WCHookSwipeEntry)
- (void)wchook_setupSwipeGestureIfNeeded;
- (void)wchook_resetSwipeAnimated:(BOOL)animated;
@end


#include "WCPLMessageSearchStateStore.xm"
#include "WCPLMessageSearchResidualCleanup.xm"
#include "WCPLMessageSearchNavButtonHelpers.xm"
#include "WCPLMessageSearchPresentationBridge.xm"

%end

%ctor {
    if (WCPL_ENABLE_MESSAGE_SEARCH_HOOK) {
        %init(WCPLMessageSearchCoreGroup);
    }
}
