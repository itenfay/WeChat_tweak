#import "WeChatRedEnvelop.h"
#import "WCPLConfigCenter.h"
#import "WCPLFuncService.h"
#import "WCPLAVManager.h"
#import "WCPLLogger.h"
#import "RichTextView.h"
#import <dispatch/dispatch.h>
#import <objc/runtime.h>
#import <objc/message.h>

@interface TextMessageCellView (WCPLLocalReplace)
- (void)wcpl_applyLocalReplaceIfNeeded;
- (void)wcpl_handleLocalReplaceMenuItem:(id)sender;
@end

static void wcpl_applyMenuItemIcon(id menuItem, UIImage *icon);

@interface MMMenuItem : NSObject
- (instancetype)initWithTitle:(id)title target:(id)target action:(SEL)action;
- (instancetype)initWithTitle:(id)title icon:(UIImage *)icon target:(id)target action:(SEL)action;
- (instancetype)initWithTitle:(id)title svgName:(id)svgName target:(id)target action:(SEL)action;
- (SEL)action;
- (void)setIconImage:(UIImage *)iconImage;
@property(retain, nonatomic) UIImage *iconImage;
@end

static NSString *wcpl_trimString(NSString *text) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return nil;
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *wcpl_safeUserNameFromObject(id obj) {
    if (!obj) return nil;
    if ([obj isKindOfClass:[NSString class]]) {
        return wcpl_trimString((NSString *)obj);
    }

    Class contactClass = objc_getClass("CContact");
    if (contactClass && [obj isKindOfClass:contactClass]) {
        @try {
            return wcpl_trimString(((CContact *)obj).m_nsUsrName);
        } @catch (__unused NSException *exception) {
        }
    }

    if ([obj respondsToSelector:@selector(m_nsUsrName)]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(obj, @selector(m_nsUsrName));
            if ([value isKindOfClass:[NSString class]]) {
                return wcpl_trimString((NSString *)value);
            }
        } @catch (__unused NSException *exception) {
        }
    }

    @try {
        id value = [obj valueForKey:@"m_nsUsrName"];
        if ([value isKindOfClass:[NSString class]]) {
            return wcpl_trimString((NSString *)value);
        }
    } @catch (__unused NSException *exception) {
    }

    return nil;
}

static id wcpl_safeObjectIvar(id obj, const char *name) {
    if (!obj || !name) return nil;
    Class cls = object_getClass(obj);
    if (!cls) return nil;
    Ivar ivar = class_getInstanceVariable(cls, name);
    if (!ivar) return nil;
    const char *typeEncoding = ivar_getTypeEncoding(ivar);
    if (!typeEncoding || typeEncoding[0] != '@') return nil;
    return object_getIvar(obj, ivar);
}

// ==================== 本地文本替换（仅显示） ====================
static const void *kWCPLLocalReplaceMapKey = &kWCPLLocalReplaceMapKey;
static const void *kWCPLLocalReplaceOriginKey = &kWCPLLocalReplaceOriginKey;
static const void *kWCPLLocalReplaceLayoutingKey = &kWCPLLocalReplaceLayoutingKey;
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
static BOOL wcpl_classNameContainsSearchToken(NSString *className);
static BOOL wcpl_viewTreeHasSearchLikeNode(UIView *view, NSUInteger depth);
static BOOL wcpl_softDisableSearchOverlayInTree(UIView *view,
                                                UIView *excludedRoot,
                                                UIView *scanRoot,
                                                NSString *stage,
                                                NSUInteger depth,
                                                NSUInteger *disabledCount);

@interface CommonMessageCellView (WCHookSwipeEntry)
- (void)wchook_setupSwipeGestureIfNeeded;
- (void)wchook_resetSwipeAnimated:(BOOL)animated;
@end

static BOOL wcpl_isTargetChatForSearchButton(id viewController) {
    if (!viewController || ![viewController respondsToSelector:@selector(GetContact)]) {
        return NO;
    }

    id contact = nil;
    @try {
        contact = [viewController GetContact];
    } @catch (__unused NSException *exception) {
        contact = nil;
    }

    NSString *usrName = wcpl_safeUserNameFromObject(contact);
    if (usrName.length == 0) {
        return NO;
    }

    return YES;
}

static UIImage *wcpl_chatSearchButtonIconImage(void) {
    static UIImage *icon = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        UIImage *searchIcon = nil;
        if ([UIImage respondsToSelector:@selector(systemImageNamed:withConfiguration:)]) {
            UIImageSymbolConfiguration *config = [UIImageSymbolConfiguration configurationWithPointSize:17 weight:UIImageSymbolWeightRegular scale:UIImageSymbolScaleMedium];
            searchIcon = [UIImage systemImageNamed:@"magnifyingglass" withConfiguration:config];
        }
        if (!searchIcon && [UIImage respondsToSelector:@selector(systemImageNamed:)]) {
            searchIcon = [UIImage systemImageNamed:@"magnifyingglass"];
        }
        if (searchIcon && [searchIcon respondsToSelector:@selector(imageWithRenderingMode:)]) {
            searchIcon = [searchIcon imageWithRenderingMode:UIImageRenderingModeAlwaysTemplate];
        }
        icon = searchIcon;
    });
    return icon;
}

static BOOL wcpl_isInjectedChatSearchButtonItem(UIBarButtonItem *item) {
    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        return NO;
    }
    id marker = objc_getAssociatedObject(item, kWCPLChatSearchNavButtonTagKey);
    if ([marker respondsToSelector:@selector(boolValue)] && [marker boolValue]) {
        return YES;
    }
    return item.action == @selector(wcpl_onTapChatSearchButton:);
}

static BOOL wcpl_stringContainsAnyToken(NSString *value, NSArray<NSString *> *tokens) {
    if (![value isKindOfClass:[NSString class]] || value.length == 0) {
        return NO;
    }
    NSString *lower = value.lowercaseString ?: @"";
    if (lower.length == 0) {
        return NO;
    }
    for (NSString *token in tokens) {
        if (![token isKindOfClass:[NSString class]] || token.length == 0) {
            continue;
        }
        if ([lower rangeOfString:token].location != NSNotFound) {
            return YES;
        }
    }
    return NO;
}

static NSString *wcpl_barButtonActionName(UIBarButtonItem *item) {
    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        return @"";
    }
    SEL action = item.action;
    if (!action) {
        return @"";
    }
    NSString *selName = NSStringFromSelector(action);
    return [selName isKindOfClass:[NSString class]] ? selName : @"";
}

static BOOL wcpl_barButtonItemLooksLikeSearchOrDateEntry(UIBarButtonItem *item) {
    if (![item isKindOfClass:[UIBarButtonItem class]] || wcpl_isInjectedChatSearchButtonItem(item)) {
        return NO;
    }

    static NSArray<NSString *> *enTokens = nil;
    static NSArray<NSString *> *zhTokens = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        enTokens = @[@"search", @"msgsearch", @"date", @"calendar", @"time"];
        zhTokens = @[@"搜索", @"查找", @"日期", @"时间"];
    });

    NSString *title = [item.title isKindOfClass:[NSString class]] ? item.title : @"";
    NSString *label = [item.accessibilityLabel isKindOfClass:[NSString class]] ? item.accessibilityLabel : @"";
    NSString *hint = [item.accessibilityHint isKindOfClass:[NSString class]] ? item.accessibilityHint : @"";
    NSString *actionName = wcpl_barButtonActionName(item);
    if (wcpl_stringContainsAnyToken(actionName, enTokens) ||
        wcpl_stringContainsAnyToken(title, enTokens) ||
        wcpl_stringContainsAnyToken(label, enTokens) ||
        wcpl_stringContainsAnyToken(hint, enTokens) ||
        wcpl_stringContainsAnyToken(title, zhTokens) ||
        wcpl_stringContainsAnyToken(label, zhTokens) ||
        wcpl_stringContainsAnyToken(hint, zhTokens)) {
        return YES;
    }

    UIView *customView = item.customView;
    NSString *customClass = [customView isKindOfClass:[UIView class]] ? (NSStringFromClass([customView class]) ?: @"") : @"";
    if (wcpl_stringContainsAnyToken(customClass, enTokens) || wcpl_classNameContainsSearchToken(customClass)) {
        return YES;
    }
    if ([customView isKindOfClass:[UIView class]] && wcpl_viewTreeHasSearchLikeNode(customView, 0)) {
        return YES;
    }

    return NO;
}

static BOOL wcpl_barButtonItemLooksLikeMoreEntry(UIBarButtonItem *item) {
    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        return NO;
    }

    static NSArray<NSString *> *tokens = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        tokens = @[@"more", @"menu", @"right", @"setting", @"chatroom", @"更多", @"菜单", @"设置"];
    });

    NSString *title = [item.title isKindOfClass:[NSString class]] ? item.title : @"";
    NSString *label = [item.accessibilityLabel isKindOfClass:[NSString class]] ? item.accessibilityLabel : @"";
    NSString *hint = [item.accessibilityHint isKindOfClass:[NSString class]] ? item.accessibilityHint : @"";
    NSString *actionName = wcpl_barButtonActionName(item);
    if (wcpl_stringContainsAnyToken(actionName, tokens) ||
        wcpl_stringContainsAnyToken(title, tokens) ||
        wcpl_stringContainsAnyToken(label, tokens) ||
        wcpl_stringContainsAnyToken(hint, tokens)) {
        return YES;
    }

    UIView *customView = item.customView;
    NSString *customClass = [customView isKindOfClass:[UIView class]] ? (NSStringFromClass([customView class]) ?: @"") : @"";
    if (wcpl_stringContainsAnyToken(customClass, tokens)) {
        return YES;
    }

    return NO;
}

static UIBarButtonItem *wcpl_chatSearchNavButtonItem(id viewController) {
    if (!viewController) {
        return nil;
    }

    UIBarButtonItem *item = objc_getAssociatedObject(viewController, kWCPLChatSearchNavButtonKey);
    if ([item isKindOfClass:[UIBarButtonItem class]]) {
        return item;
    }

    UIImage *icon = wcpl_chatSearchButtonIconImage();
    if (icon) {
        item = [[UIBarButtonItem alloc] initWithImage:icon style:UIBarButtonItemStylePlain target:viewController action:@selector(wcpl_onTapChatSearchButton:)];
    } else {
        item = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemSearch target:viewController action:@selector(wcpl_onTapChatSearchButton:)];
    }

    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        return nil;
    }

    item.accessibilityLabel = @"查找聊天内容";
    objc_setAssociatedObject(item, kWCPLChatSearchNavButtonTagKey, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(viewController, kWCPLChatSearchNavButtonKey, item, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return item;
}

static BOOL wcpl_isControllerShowingSearchUI(id viewController) {
    if (!viewController) {
        return NO;
    }

    SEL isShowSel = @selector(isShowMsgSearch);
    if ([viewController respondsToSelector:isShowSel]) {
        return ((BOOL (*)(id, SEL))objc_msgSend)(viewController, isShowSel);
    }

    @try {
        id value = [viewController valueForKey:@"isShowMsgSearch"];
        if ([value respondsToSelector:@selector(boolValue)]) {
            return [value boolValue];
        }
    } @catch (__unused NSException *exception) {
    }

    return NO;
}

static BOOL wcpl_classNameContainsSearchToken(NSString *className) {
    if (![className isKindOfClass:[NSString class]] || className.length == 0) {
        return NO;
    }

    return [className rangeOfString:@"search" options:NSCaseInsensitiveSearch].location != NSNotFound;
}

static BOOL wcpl_classNameContainsToken(NSString *className, NSString *token) {
    if (![className isKindOfClass:[NSString class]] || className.length == 0) {
        return NO;
    }
    if (![token isKindOfClass:[NSString class]] || token.length == 0) {
        return NO;
    }
    return [className rangeOfString:token options:NSCaseInsensitiveSearch].location != NSNotFound;
}

static BOOL wcpl_viewIsEffectivelyVisible(UIView *view) {
    if (![view isKindOfClass:[UIView class]]) {
        return NO;
    }

    UIView *current = view;
    while ([current isKindOfClass:[UIView class]]) {
        if (current.hidden || current.alpha <= 0.01f) {
            return NO;
        }
        current = current.superview;
    }

    return YES;
}

static BOOL wcpl_viewLooksSearchLike(UIView *view) {
    if (![view isKindOfClass:[UIView class]]) {
        return NO;
    }

    if ([view isKindOfClass:[UITextField class]] || [view isKindOfClass:[UISearchBar class]]) {
        return YES;
    }

    NSString *className = NSStringFromClass([view class]);
    return wcpl_classNameContainsSearchToken(className);
}

static BOOL wcpl_viewLooksRootSearchResidualCandidate(UIView *view) {
    if (![view isKindOfClass:[UIView class]]) {
        return NO;
    }

    if (!wcpl_viewIsEffectivelyVisible(view)) {
        return NO;
    }

    if ([view isKindOfClass:[UISearchBar class]]) {
        return YES;
    }

    NSString *className = NSStringFromClass([view class]) ?: @"";
    if (!wcpl_classNameContainsSearchToken(className)) {
        return NO;
    }

    if (wcpl_classNameContainsToken(className, @"msgsearch") ||
        wcpl_classNameContainsToken(className, @"wcsearch") ||
        wcpl_classNameContainsToken(className, @"mmsearch") ||
        wcpl_classNameContainsToken(className, @"searchcontroller") ||
        wcpl_classNameContainsToken(className, @"searchbar") ||
        wcpl_classNameContainsToken(className, @"searchfield") ||
        wcpl_classNameContainsToken(className, @"searchinput") ||
        wcpl_classNameContainsToken(className, @"searchresult")) {
        return YES;
    }

    Class searchTextFieldClass = objc_getClass("UISearchTextField");
    if (searchTextFieldClass && [view isKindOfClass:searchTextFieldClass]) {
        return YES;
    }

    return NO;
}

static BOOL wcpl_viewHasSearchInputNode(UIView *view, NSUInteger depth) {
    if (![view isKindOfClass:[UIView class]]) {
        return NO;
    }
    if (depth >= kWCPLSearchTreeMaxDepth) {
        return NO;
    }

    if ([view isKindOfClass:[UITextField class]] || [view isKindOfClass:[UISearchBar class]]) {
        return YES;
    }
    Class searchTextFieldClass = objc_getClass("UISearchTextField");
    if (searchTextFieldClass && [view isKindOfClass:searchTextFieldClass]) {
        return YES;
    }

    NSArray *subviews = view.subviews;
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return NO;
    }
    for (id subview in subviews) {
        if (![subview isKindOfClass:[UIView class]]) {
            continue;
        }
        if (wcpl_viewHasSearchInputNode((UIView *)subview, depth + 1)) {
            return YES;
        }
    }
    return NO;
}

static BOOL wcpl_viewLooksSafeRootSearchClearTarget(UIView *view, UIView *parentView) {
    if (![view isKindOfClass:[UIView class]]) {
        return NO;
    }
    if (!wcpl_viewLooksRootSearchResidualCandidate(view)) {
        return NO;
    }

    NSString *className = NSStringFromClass([view class]) ?: @"";
    BOOL strongClass = wcpl_classNameContainsToken(className, @"msgsearch") ||
                       wcpl_classNameContainsToken(className, @"wcsearch") ||
                       wcpl_classNameContainsToken(className, @"mmsearch") ||
                       wcpl_classNameContainsToken(className, @"searchcontroller") ||
                       wcpl_classNameContainsToken(className, @"searchbar") ||
                       wcpl_classNameContainsToken(className, @"searchfield") ||
                       wcpl_classNameContainsToken(className, @"searchinput");
    BOOL hasInputNode = wcpl_viewHasSearchInputNode(view, 0);

    if (!strongClass && !hasInputNode) {
        return NO;
    }

    if ([parentView isKindOfClass:[UIView class]]) {
        CGRect frame = view.frame;
        CGRect bounds = parentView.bounds;
        BOOL parentReady = bounds.size.width > 0.0f && bounds.size.height > 0.0f;
        BOOL nearFullScreen = parentReady &&
                              frame.size.width >= bounds.size.width * 0.95f &&
                              frame.size.height >= bounds.size.height * 0.95f;
        if (nearFullScreen && view.subviews.count > 6 && !strongClass) {
            return NO;
        }
    }

    return YES;
}

static BOOL wcpl_viewIsDescendantOrSelfOfView(UIView *view, UIView *ancestor) {
    if (![view isKindOfClass:[UIView class]] || ![ancestor isKindOfClass:[UIView class]]) {
        return NO;
    }

    UIView *current = view;
    while ([current isKindOfClass:[UIView class]]) {
        if (current == ancestor) {
            return YES;
        }
        current = current.superview;
    }
    return NO;
}

static BOOL wcpl_viewTreeHasSearchLikeNode(UIView *view, NSUInteger depth) {
    if (![view isKindOfClass:[UIView class]]) {
        return NO;
    }

    if (wcpl_viewLooksSearchLike(view)) {
        return YES;
    }

    if (depth >= kWCPLSearchTreeMaxDepth) {
        return NO;
    }

    NSArray *subviews = view.subviews;
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return NO;
    }

    for (id subview in subviews) {
        if ([subview isKindOfClass:[UIView class]] && wcpl_viewTreeHasSearchLikeNode((UIView *)subview, depth + 1)) {
            return YES;
        }
    }

    return NO;
}

static NSUInteger wcpl_rootSearchResidualNodeCountInTree(UIView *view, UIView *excludedRoot, NSUInteger depth) {
    if (![view isKindOfClass:[UIView class]]) {
        return 0;
    }

    if (depth >= kWCPLSearchTreeMaxDepth) {
        return 0;
    }

    if ([excludedRoot isKindOfClass:[UIView class]] && wcpl_viewIsDescendantOrSelfOfView(view, excludedRoot)) {
        return 0;
    }

    NSUInteger count = wcpl_viewLooksRootSearchResidualCandidate(view) ? 1 : 0;
    NSArray *subviews = view.subviews;
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return count;
    }

    for (id subview in subviews) {
        if (![subview isKindOfClass:[UIView class]]) {
            continue;
        }
        count += wcpl_rootSearchResidualNodeCountInTree((UIView *)subview, excludedRoot, depth + 1);
    }

    return count;
}

static void wcpl_collectRootSearchResidualNodesInTree(UIView *view, UIView *excludedRoot, NSUInteger depth, NSMutableArray<UIView *> *outNodes, NSUInteger maxNodes) {
    if (![view isKindOfClass:[UIView class]] || ![outNodes isKindOfClass:[NSMutableArray class]]) {
        return;
    }
    if (depth >= kWCPLSearchTreeMaxDepth || outNodes.count >= maxNodes) {
        return;
    }
    if ([excludedRoot isKindOfClass:[UIView class]] && wcpl_viewIsDescendantOrSelfOfView(view, excludedRoot)) {
        return;
    }

    if (wcpl_viewLooksRootSearchResidualCandidate(view)) {
        [outNodes addObject:view];
        if (outNodes.count >= maxNodes) {
            return;
        }
    }

    NSArray *subviews = view.subviews;
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return;
    }
    for (id subview in subviews) {
        if (![subview isKindOfClass:[UIView class]]) {
            continue;
        }
        wcpl_collectRootSearchResidualNodesInTree((UIView *)subview, excludedRoot, depth + 1, outNodes, maxNodes);
        if (outNodes.count >= maxNodes) {
            return;
        }
    }
}

static NSString *wcpl_navTitleViewClassName(id viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return @"nil";
    }

    UINavigationItem *navigationItem = ((UIViewController *)viewController).navigationItem;
    if (![navigationItem isKindOfClass:[UINavigationItem class]]) {
        return @"nil";
    }

    UIView *titleView = navigationItem.titleView;
    if (![titleView isKindOfClass:[UIView class]]) {
        return @"nil";
    }

    return NSStringFromClass([titleView class]) ?: @"nil";
}

static BOOL wcpl_navTitleViewHasSearchResidue(id viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    UINavigationItem *navigationItem = ((UIViewController *)viewController).navigationItem;
    if (![navigationItem isKindOfClass:[UINavigationItem class]]) {
        return NO;
    }

    UIView *titleView = navigationItem.titleView;
    if (![titleView isKindOfClass:[UIView class]]) {
        return NO;
    }

    return wcpl_viewTreeHasSearchLikeNode(titleView, 0);
}

static BOOL wcpl_navTitleViewHasInputResidual(id viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    UINavigationItem *navigationItem = ((UIViewController *)viewController).navigationItem;
    if (![navigationItem isKindOfClass:[UINavigationItem class]]) {
        return NO;
    }

    UIView *titleView = navigationItem.titleView;
    if (![titleView isKindOfClass:[UIView class]]) {
        return NO;
    }

    return wcpl_viewHasSearchInputNode(titleView, 0);
}

static BOOL wcpl_navTitleViewLooksSearchLike(id viewController) {
    NSString *titleViewClass = wcpl_navTitleViewClassName(viewController);
    if (wcpl_classNameContainsSearchToken(titleViewClass)) {
        return YES;
    }

    if (wcpl_navTitleViewHasSearchResidue(viewController)) {
        return YES;
    }

    return wcpl_navTitleViewHasInputResidual(viewController);
}

static UINavigationBar *wcpl_navigationBarFromController(id viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return nil;
    }

    UINavigationController *navigationController = ((UIViewController *)viewController).navigationController;
    if (![navigationController isKindOfClass:[UINavigationController class]]) {
        return nil;
    }

    UINavigationBar *navigationBar = navigationController.navigationBar;
    return [navigationBar isKindOfClass:[UINavigationBar class]] ? navigationBar : nil;
}

static NSUInteger wcpl_navBarSearchResidualNodeCount(id viewController) {
    UINavigationBar *navigationBar = wcpl_navigationBarFromController(viewController);
    if (![navigationBar isKindOfClass:[UINavigationBar class]]) {
        return 0;
    }

    NSArray *subviews = navigationBar.subviews;
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return 0;
    }

    NSUInteger count = 0;
    for (id subview in subviews) {
        if (![subview isKindOfClass:[UIView class]]) {
            continue;
        }

        UIView *view = (UIView *)subview;
        if (wcpl_viewLooksSearchLike(view) || wcpl_viewTreeHasSearchLikeNode(view, 0)) {
            count++;
        }
    }

    return count;
}

static BOOL wcpl_navBarHasSearchResidue(id viewController) {
    return wcpl_navBarSearchResidualNodeCount(viewController) > 0;
}

static BOOL wcpl_removeSearchLikeNodesFromViewTree(UIView *view, NSUInteger depth) {
    if (![view isKindOfClass:[UIView class]] || depth >= kWCPLSearchTreeMaxDepth) {
        return NO;
    }

    NSArray *subviews = [view.subviews copy];
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return NO;
    }

    BOOL removed = NO;
    for (id subview in subviews) {
        if (![subview isKindOfClass:[UIView class]]) {
            continue;
        }

        UIView *child = (UIView *)subview;
        if (wcpl_viewLooksSearchLike(child)) {
            [child removeFromSuperview];
            removed = YES;
            continue;
        }

        if (wcpl_removeSearchLikeNodesFromViewTree(child, depth + 1)) {
            removed = YES;
        }
    }

    return removed;
}

static NSUInteger wcpl_navRightItemsCount(id viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return 0;
    }

    UINavigationItem *navigationItem = ((UIViewController *)viewController).navigationItem;
    if (![navigationItem isKindOfClass:[UINavigationItem class]]) {
        return 0;
    }

    if ([navigationItem.rightBarButtonItems isKindOfClass:[NSArray class]]) {
        return navigationItem.rightBarButtonItems.count;
    }

    return [navigationItem.rightBarButtonItem isKindOfClass:[UIBarButtonItem class]] ? 1 : 0;
}

static UIView *wcpl_safeViewIfLoaded(UIViewController *viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return nil;
    }

    if ([viewController respondsToSelector:@selector(isViewLoaded)] &&
        !((BOOL (*)(id, SEL))objc_msgSend)(viewController, @selector(isViewLoaded))) {
        return nil;
    }

    UIView *view = viewController.view;
    return [view isKindOfClass:[UIView class]] ? view : nil;
}

static NSUInteger wcpl_controllerRootSearchResidualNodeCount(id viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return 0;
    }

    UIViewController *controller = (UIViewController *)viewController;
    NSUInteger count = 0;
    UINavigationBar *navBar = wcpl_navigationBarFromController(viewController);

    UIView *controllerView = wcpl_safeViewIfLoaded(controller);
    if (controllerView) {
        count += wcpl_rootSearchResidualNodeCountInTree(controllerView, navBar, 0);
    }

    UINavigationController *navigationController = controller.navigationController;
    if ([navigationController isKindOfClass:[UINavigationController class]]) {
        UIView *navRootView = wcpl_safeViewIfLoaded(navigationController);
        if (navRootView) {
            count += wcpl_rootSearchResidualNodeCountInTree(navRootView, navBar, 0);
        }
    }

    return count;
}

static NSString *wcpl_searchResidualNodeChain(UIView *view, NSUInteger depthLimit) {
    if (![view isKindOfClass:[UIView class]]) {
        return @"unknown";
    }

    NSMutableArray<NSString *> *parts = [NSMutableArray array];
    UIView *current = view;
    NSUInteger depth = 0;
    while ([current isKindOfClass:[UIView class]] && depth < depthLimit) {
        NSString *name = NSStringFromClass([current class]) ?: @"UIView";
        [parts addObject:name];
        current = current.superview;
        depth++;
    }
    return parts.count > 0 ? [parts componentsJoinedByString:@"<-"] : @"unknown";
}

static void wcpl_logRootResidualNodeDetails(id viewController, NSString *stage, NSUInteger maxNodes) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return;
    }

    UIViewController *controller = (UIViewController *)viewController;
    UINavigationBar *navBar = wcpl_navigationBarFromController(viewController);
    NSMutableArray<UIView *> *nodes = [NSMutableArray arrayWithCapacity:maxNodes];

    UIView *controllerView = wcpl_safeViewIfLoaded(controller);
    if (controllerView) {
        wcpl_collectRootSearchResidualNodesInTree(controllerView, navBar, 0, nodes, maxNodes);
    }

    UINavigationController *navigationController = controller.navigationController;
    if ([navigationController isKindOfClass:[UINavigationController class]] && nodes.count < maxNodes) {
        UIView *navRootView = wcpl_safeViewIfLoaded(navigationController);
        if (navRootView) {
            wcpl_collectRootSearchResidualNodesInTree(navRootView, navBar, 0, nodes, maxNodes);
        }
    }

    for (NSUInteger i = 0; i < nodes.count; i++) {
        UIView *node = nodes[i];
        CGRect frame = node.frame;
        NSString *className = NSStringFromClass([node class]) ?: @"UIView";
        NSString *chain = wcpl_searchResidualNodeChain(node, 8);
        WCPLLogInfo(@"[搜索] %@ rootNode[%lu] class=%@ hidden=%@ alpha=%.2f frame=(%.1f,%.1f,%.1f,%.1f) chain=%@",
                    stage ?: @"snapshot",
                    (unsigned long)i,
                    className,
                    node.hidden ? @"YES" : @"NO",
                    node.alpha,
                    frame.origin.x, frame.origin.y, frame.size.width, frame.size.height,
                    chain);
    }
}

static BOOL wcpl_shouldLogRootResidualDetails(NSString *stage) {
    if (![stage isKindOfClass:[NSString class]] || stage.length == 0) {
        return NO;
    }
    if ([stage rangeOfString:@"0ms"].location != NSNotFound) {
        return YES;
    }
    if ([stage rangeOfString:@"2000ms"].location != NSNotFound) {
        return YES;
    }
    return [stage rangeOfString:@"viewDidAppear"].location != NSNotFound;
}

static BOOL wcpl_shouldLogSearchTouchProbe(NSString *stage) {
    if (![stage isKindOfClass:[NSString class]] || stage.length == 0) {
        return NO;
    }
    if ([stage rangeOfString:@"0ms"].location != NSNotFound) {
        return YES;
    }
    if ([stage rangeOfString:@"500ms"].location != NSNotFound) {
        return YES;
    }
    return [stage rangeOfString:@"viewDidAppear"].location != NSNotFound;
}

static UIWindow *wcpl_bestWindowForController(id viewController) {
    if ([viewController isKindOfClass:[UIViewController class]]) {
        UIViewController *controller = (UIViewController *)viewController;
        UIView *controllerView = wcpl_safeViewIfLoaded(controller);
        if ([controllerView isKindOfClass:[UIView class]] && [controllerView.window isKindOfClass:[UIWindow class]]) {
            return controllerView.window;
        }

        UINavigationController *navigationController = controller.navigationController;
        if ([navigationController isKindOfClass:[UINavigationController class]]) {
            UIView *navView = wcpl_safeViewIfLoaded(navigationController);
            if ([navView isKindOfClass:[UIView class]] && [navView.window isKindOfClass:[UIWindow class]]) {
                return navView.window;
            }
        }
    }

    UIApplication *application = [UIApplication sharedApplication];
    if ([application respondsToSelector:@selector(connectedScenes)]) {
        NSSet *connectedScenes = application.connectedScenes;
        for (id scene in connectedScenes) {
            if (![scene isKindOfClass:[UIWindowScene class]]) {
                continue;
            }
            UIWindowScene *windowScene = (UIWindowScene *)scene;
            if (windowScene.activationState != UISceneActivationStateForegroundActive &&
                windowScene.activationState != UISceneActivationStateForegroundInactive) {
                continue;
            }
            for (UIWindow *window in windowScene.windows) {
                if ([window isKindOfClass:[UIWindow class]] && window.isKeyWindow) {
                    return window;
                }
            }
        }
        for (id scene in connectedScenes) {
            if (![scene isKindOfClass:[UIWindowScene class]]) {
                continue;
            }
            UIWindowScene *windowScene = (UIWindowScene *)scene;
            for (UIWindow *window in windowScene.windows) {
                if ([window isKindOfClass:[UIWindow class]]) {
                    return window;
                }
            }
        }
    }

    return nil;
}

static void wcpl_logWindowTopSubviews(UIWindow *window, NSString *stage) {
    if (![window isKindOfClass:[UIWindow class]]) {
        return;
    }

    NSArray *subviews = window.subviews;
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        WCPLLogInfo(@"[搜索] %@ windowSubViews=0", stage ?: @"snapshot");
        return;
    }

    NSUInteger total = subviews.count;
    NSUInteger start = total > 8 ? total - 8 : 0;
    for (NSUInteger idx = start; idx < total; idx++) {
        id obj = subviews[idx];
        if (![obj isKindOfClass:[UIView class]]) {
            continue;
        }
        UIView *view = (UIView *)obj;
        CGRect frame = view.frame;
        NSString *className = NSStringFromClass([view class]) ?: @"UIView";
        WCPLLogInfo(@"[搜索] %@ windowSub[%lu/%lu]=%@ hidden=%@ alpha=%.2f userInteraction=%@ frame=(%.1f,%.1f,%.1f,%.1f)",
                    stage ?: @"snapshot",
                    (unsigned long)idx,
                    (unsigned long)(total - 1),
                    className,
                    view.hidden ? @"YES" : @"NO",
                    view.alpha,
                    view.userInteractionEnabled ? @"YES" : @"NO",
                    frame.origin.x, frame.origin.y, frame.size.width, frame.size.height);
    }
}

static void wcpl_logSearchTouchProbe(id viewController, NSString *stage) {
    UIWindow *window = wcpl_bestWindowForController(viewController);
    if (![window isKindOfClass:[UIWindow class]]) {
        WCPLLogInfo(@"[搜索] %@ touchProbe window=nil", stage ?: @"snapshot");
        return;
    }

    if ([stage isKindOfClass:[NSString class]] &&
        ([stage rangeOfString:@"preflight"].location != NSNotFound ||
         [stage rangeOfString:@"post-active"].location != NSNotFound ||
         [stage rangeOfString:@"500ms"].location != NSNotFound ||
         [stage rangeOfString:@"卡住"].location != NSNotFound)) {
        wcpl_logWindowTopSubviews(window, stage ?: @"snapshot");
    }

    CGRect bounds = window.bounds;
    CGPoint point = CGPointMake(CGRectGetMidX(bounds), CGRectGetMidY(bounds));
    UIView *hitView = [window hitTest:point withEvent:nil];
    NSString *hitClass = hitView ? (NSStringFromClass([hitView class]) ?: @"UIView") : @"nil";
    NSString *hitChain = [hitView isKindOfClass:[UIView class]] ? wcpl_searchResidualNodeChain(hitView, 8) : @"nil";
    WCPLLogInfo(@"[搜索] %@ touchProbe windowLevel=%.2f hit=%@ hidden=%@ alpha=%.2f userInteraction=%@ point=(%.1f,%.1f) chain=%@",
                stage ?: @"snapshot",
                window.windowLevel,
                hitClass,
                hitView.hidden ? @"YES" : @"NO",
                hitView.alpha,
                hitView.userInteractionEnabled ? @"YES" : @"NO",
                point.x, point.y,
                hitChain);

    NSArray<UIGestureRecognizer *> *windowGestures = window.gestureRecognizers;
    if ([windowGestures isKindOfClass:[NSArray class]]) {
        for (UIGestureRecognizer *gesture in windowGestures) {
            if (![gesture isKindOfClass:[UIGestureRecognizer class]]) {
                continue;
            }
            UIGestureRecognizerState state = gesture.state;
            if (state == UIGestureRecognizerStateBegan || state == UIGestureRecognizerStateChanged) {
                WCPLLogInfo(@"[搜索] %@ touchProbe activeWindowGesture=%@ state=%ld cancels=%@ delaysBegan=%@ delaysEnded=%@",
                            stage ?: @"snapshot",
                            NSStringFromClass([gesture class]) ?: @"UIGestureRecognizer",
                            (long)state,
                            gesture.cancelsTouchesInView ? @"YES" : @"NO",
                            gesture.delaysTouchesBegan ? @"YES" : @"NO",
                            gesture.delaysTouchesEnded ? @"YES" : @"NO");
            }
        }
    }
}

static BOOL wcpl_controllerRootHasSearchResidue(id viewController) {
    return wcpl_controllerRootSearchResidualNodeCount(viewController) > 0;
}

static void wcpl_logSearchNavSnapshot(id viewController, NSString *stage) {
    NSString *titleViewClass = wcpl_navTitleViewClassName(viewController);
    NSUInteger rightCount = wcpl_navRightItemsCount(viewController);
    BOOL showingSearch = wcpl_isControllerShowingSearchUI(viewController);
    BOOL titleResidue = wcpl_navTitleViewHasSearchResidue(viewController);
    BOOL navResidue = wcpl_navBarHasSearchResidue(viewController);
    NSUInteger navResidualNodes = wcpl_navBarSearchResidualNodeCount(viewController);
    NSUInteger rootResidualNodes = wcpl_controllerRootSearchResidualNodeCount(viewController);
    BOOL rootResidue = rootResidualNodes > 0;
    WCPLLogInfo(@"[搜索] %@ isShow=%@ titleView=%@ titleResidue=%@ rightItems=%lu navResidue=%@ navNodes=%lu",
                stage ?: @"snapshot",
                showingSearch ? @"YES" : @"NO",
                titleViewClass,
                titleResidue ? @"YES" : @"NO",
                (unsigned long)rightCount,
                navResidue ? @"YES" : @"NO",
                (unsigned long)navResidualNodes);
    if (rootResidue) {
        WCPLLogInfo(@"[搜索] %@ rootResidue=YES rootNodes=%lu", stage ?: @"snapshot", (unsigned long)rootResidualNodes);
        if (wcpl_shouldLogRootResidualDetails(stage ?: @"snapshot")) {
            wcpl_logRootResidualNodeDetails(viewController, stage ?: @"snapshot", 6);
        }
        if (wcpl_shouldLogSearchTouchProbe(stage ?: @"snapshot")) {
            wcpl_logSearchTouchProbe(viewController, stage ?: @"snapshot");
        }
    }
}

static BOOL wcpl_forceClearTitleViewIfSearchResidual(id controller, NSString *stage) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    UIViewController *viewController = (UIViewController *)controller;
    UINavigationItem *navigationItem = viewController.navigationItem;
    if (![navigationItem isKindOfClass:[UINavigationItem class]]) {
        return NO;
    }

    if (!wcpl_navTitleViewLooksSearchLike(controller)) {
        return NO;
    }

    @try {
        navigationItem.titleView = nil;
        WCPLLogInfo(@"[搜索] %@ 强制清空 titleView", stage ?: @"repair");
        return YES;
    } @catch (NSException *exception) {
        WCPLLogInfo(@"[搜索] %@ 强制清空 titleView 异常: %@", stage ?: @"repair", exception.reason ?: @"unknown");
        return NO;
    }
}

static BOOL wcpl_forceClearNavBarSearchResidual(id controller, NSString *stage) {
    UINavigationBar *navigationBar = wcpl_navigationBarFromController(controller);
    if (![navigationBar isKindOfClass:[UINavigationBar class]]) {
        return NO;
    }

    if (!wcpl_navBarHasSearchResidue(controller)) {
        return NO;
    }

    BOOL removed = NO;
    @try {
        removed = wcpl_removeSearchLikeNodesFromViewTree(navigationBar, 0);
    } @catch (NSException *exception) {
        WCPLLogInfo(@"[搜索] %@ 清理 navBar 搜索节点异常: %@", stage ?: @"repair", exception.reason ?: @"unknown");
        return NO;
    }

    [navigationBar setNeedsLayout];
    [navigationBar layoutIfNeeded];

    BOOL stillResidue = wcpl_navBarHasSearchResidue(controller);
    if (removed || !stillResidue) {
        WCPLLogInfo(@"[搜索] %@ 清理 navBar 搜索节点 removed=%@ stillResidue=%@",
                    stage ?: @"repair",
                    removed ? @"YES" : @"NO",
                    stillResidue ? @"YES" : @"NO");
    }

    return removed || !stillResidue;
}

static NSUInteger wcpl_collapseEmptySearchTransitionAncestors(UIView *searchRoot) {
    (void)searchRoot;
    // 触控稳定性优先：禁止沿祖先链路改写 Transition 容器，避免误伤主页面触控层。
    return 0;
}

static BOOL wcpl_recoverTransitionContainerInteractionInTree(UIView *view, NSUInteger depth, NSUInteger *recoveredCount) {
    if (![view isKindOfClass:[UIView class]] || depth >= kWCPLSearchTreeMaxDepth) {
        return NO;
    }

    BOOL changed = NO;
    NSString *className = NSStringFromClass([view class]) ?: @"";
    BOOL transitionLike = wcpl_classNameContainsToken(className, @"transitionview") ||
                          wcpl_classNameContainsToken(className, @"wrapperview") ||
                          wcpl_classNameContainsToken(className, @"navigationtransitionview");
    BOOL likelyMainLayer = transitionLike &&
                           !view.hidden &&
                           view.alpha > 0.01f &&
                           !wcpl_classNameContainsSearchToken(className);
    if (likelyMainLayer && !view.userInteractionEnabled) {
        view.userInteractionEnabled = YES;
        changed = YES;
        if (recoveredCount) {
            (*recoveredCount)++;
        }
    }

    NSArray *subviews = [view.subviews copy];
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return changed;
    }

    for (id subview in subviews) {
        if (![subview isKindOfClass:[UIView class]]) {
            continue;
        }
        if (wcpl_recoverTransitionContainerInteractionInTree((UIView *)subview, depth + 1, recoveredCount)) {
            changed = YES;
        }
    }
    return changed;
}

static BOOL wcpl_softHideRootSearchResidualNodesFromTree(UIView *view, UIView *excludedRoot, NSUInteger depth, NSUInteger *hiddenCount) {
    if (![view isKindOfClass:[UIView class]] || depth >= kWCPLSearchTreeMaxDepth) {
        return NO;
    }

    if ([excludedRoot isKindOfClass:[UIView class]] && wcpl_viewIsDescendantOrSelfOfView(view, excludedRoot)) {
        return NO;
    }

    NSArray *subviews = [view.subviews copy];
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return NO;
    }

    BOOL changed = NO;
    for (id subview in subviews) {
        if (![subview isKindOfClass:[UIView class]]) {
            continue;
        }

        UIView *child = (UIView *)subview;
        if ([excludedRoot isKindOfClass:[UIView class]] && wcpl_viewIsDescendantOrSelfOfView(child, excludedRoot)) {
            continue;
        }

        if (wcpl_viewLooksSafeRootSearchClearTarget(child, view)) {
            BOOL nodeChanged = NO;
            NSString *childClass = NSStringFromClass([child class]) ?: @"";
            BOOL searchControllerRoot = wcpl_classNameContainsToken(childClass, @"searchcontroller");
            if (!child.hidden) {
                child.hidden = YES;
                nodeChanged = YES;
            }
            if (child.alpha > 0.01f) {
                child.alpha = 0.0f;
                nodeChanged = YES;
            }
            if (child.userInteractionEnabled) {
                child.userInteractionEnabled = NO;
                nodeChanged = YES;
            }
            if (searchControllerRoot) {
                (void)wcpl_collapseEmptySearchTransitionAncestors(child);
            }
            if (nodeChanged && hiddenCount) {
                (*hiddenCount)++;
            }
            changed = changed || nodeChanged;
            continue;
        }

        if (wcpl_softHideRootSearchResidualNodesFromTree(child, excludedRoot, depth + 1, hiddenCount)) {
            changed = YES;
        }
    }

    return changed;
}

static BOOL wcpl_forceClearRootSearchResidual(id controller, NSString *stage) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    NSUInteger beforeCount = wcpl_controllerRootSearchResidualNodeCount(controller);
    if (beforeCount == 0) {
        return NO;
    }

    UIViewController *viewController = (UIViewController *)controller;
    UINavigationBar *navBar = wcpl_navigationBarFromController(controller);
    NSUInteger hiddenCount = 0;
    BOOL changed = NO;

    UIView *controllerView = wcpl_safeViewIfLoaded(viewController);
    if (controllerView) {
        changed |= wcpl_softHideRootSearchResidualNodesFromTree(controllerView, navBar, 0, &hiddenCount);
        [controllerView setNeedsLayout];
        [controllerView layoutIfNeeded];
    }

    UINavigationController *navigationController = viewController.navigationController;
    if ([navigationController isKindOfClass:[UINavigationController class]]) {
        UIView *navRootView = wcpl_safeViewIfLoaded(navigationController);
        if (navRootView) {
            changed |= wcpl_softHideRootSearchResidualNodesFromTree(navRootView, navBar, 0, &hiddenCount);
            [navRootView setNeedsLayout];
            [navRootView layoutIfNeeded];
        }
    }

    NSUInteger afterCount = wcpl_controllerRootSearchResidualNodeCount(controller);
    if (changed || afterCount < beforeCount) {
        WCPLLogInfo(@"[搜索] %@ 软清理 root 搜索节点 hiddenCount=%lu before=%lu after=%lu",
                    stage ?: @"repair",
                    (unsigned long)hiddenCount,
                    (unsigned long)beforeCount,
                    (unsigned long)afterCount);
    }

    return changed || afterCount < beforeCount || afterCount == 0;
}

static BOOL wcpl_objectLooksLikeSearchController(id obj) {
    if (!obj) {
        return NO;
    }

    NSString *className = NSStringFromClass([obj class]) ?: @"";
    if (wcpl_classNameContainsToken(className, @"searchcontroller")) {
        return YES;
    }

    if ([obj respondsToSelector:@selector(setActive:)] && [obj respondsToSelector:@selector(isActive)]) {
        return YES;
    }

    return NO;
}

static id wcpl_searchControllerFromHelper(id helper) {
    if (!helper) {
        return nil;
    }

    SEL getterSel = @selector(searchController);
    if ([helper respondsToSelector:getterSel]) {
        id value = ((id (*)(id, SEL))objc_msgSend)(helper, getterSel);
        if (wcpl_objectLooksLikeSearchController(value)) {
            return value;
        }
    }

    NSArray<NSString *> *keys = @[@"searchController", @"m_searchController", @"searcher", @"m_searcher"];
    for (NSString *key in keys) {
        id value = nil;
        @try {
            value = [helper valueForKey:key];
        } @catch (__unused NSException *exception) {
            value = nil;
        }
        if (wcpl_objectLooksLikeSearchController(value)) {
            return value;
        }
    }

    return nil;
}

static BOOL wcpl_viewControllerLooksSearchPresentation(UIViewController *viewController) {
    if (![viewController isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    NSString *className = NSStringFromClass([viewController class]) ?: @"";
    if (wcpl_classNameContainsSearchToken(className)) {
        return YES;
    }

    UIView *view = wcpl_safeViewIfLoaded(viewController);
    if ([view isKindOfClass:[UIView class]] && wcpl_viewTreeHasSearchLikeNode(view, 0)) {
        return YES;
    }

    return NO;
}

static BOOL wcpl_preHideSearchPresentationOnCancel(id controller, NSString *stage) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    BOOL changed = NO;
    UIViewController *viewController = (UIViewController *)controller;

    id helper = wcpl_msgSearchHelperFromController(controller);
    id searchController = wcpl_searchControllerFromHelper(helper);
    if (wcpl_objectLooksLikeSearchController(searchController) && [searchController respondsToSelector:@selector(view)]) {
        UIView *searchView = nil;
        @try {
            searchView = ((id (*)(id, SEL))objc_msgSend)(searchController, @selector(view));
        } @catch (__unused NSException *exception) {
            searchView = nil;
        }
        if ([searchView isKindOfClass:[UIView class]]) {
            if (!searchView.hidden) {
                searchView.hidden = YES;
                changed = YES;
            }
            if (searchView.alpha > 0.01f) {
                searchView.alpha = 0.0f;
                changed = YES;
            }
            if (searchView.userInteractionEnabled) {
                searchView.userInteractionEnabled = NO;
                changed = YES;
            }
        }
    }

    UIViewController *presentedBySelf = viewController.presentedViewController;
    if ([presentedBySelf isKindOfClass:[UIViewController class]] &&
        wcpl_viewControllerLooksSearchPresentation(presentedBySelf)) {
        UIView *presentedView = wcpl_safeViewIfLoaded(presentedBySelf);
        if ([presentedView isKindOfClass:[UIView class]]) {
            if (!presentedView.hidden) {
                presentedView.hidden = YES;
                changed = YES;
            }
            if (presentedView.alpha > 0.01f) {
                presentedView.alpha = 0.0f;
                changed = YES;
            }
            if (presentedView.userInteractionEnabled) {
                presentedView.userInteractionEnabled = NO;
                changed = YES;
            }
        }
    }

    UINavigationController *navigationController = viewController.navigationController;
    UIViewController *presentedByNav = [navigationController isKindOfClass:[UINavigationController class]] ? navigationController.presentedViewController : nil;
    if ([presentedByNav isKindOfClass:[UIViewController class]] &&
        wcpl_viewControllerLooksSearchPresentation(presentedByNav)) {
        UIView *presentedView = wcpl_safeViewIfLoaded(presentedByNav);
        if ([presentedView isKindOfClass:[UIView class]]) {
            if (!presentedView.hidden) {
                presentedView.hidden = YES;
                changed = YES;
            }
            if (presentedView.alpha > 0.01f) {
                presentedView.alpha = 0.0f;
                changed = YES;
            }
            if (presentedView.userInteractionEnabled) {
                presentedView.userInteractionEnabled = NO;
                changed = YES;
            }
        }
    }

    UINavigationBar *navigationBar = wcpl_navigationBarFromController(controller);
    NSUInteger disabledCount = 0;
    UIView *controllerView = wcpl_safeViewIfLoaded(viewController);
    if ([controllerView isKindOfClass:[UIView class]]) {
        if (wcpl_softDisableSearchOverlayInTree(controllerView, navigationBar, controllerView, stage, 0, &disabledCount)) {
            changed = YES;
        }
    }
    UIView *navView = [navigationController isKindOfClass:[UINavigationController class]] ? wcpl_safeViewIfLoaded(navigationController) : nil;
    if ([navView isKindOfClass:[UIView class]] && navView != controllerView) {
        if (wcpl_softDisableSearchOverlayInTree(navView, navigationBar, navView, stage, 0, &disabledCount)) {
            changed = YES;
        }
    }
    UIWindow *window = [controllerView isKindOfClass:[UIView class]] ? controllerView.window : nil;
    if (![window isKindOfClass:[UIWindow class]] && [navView isKindOfClass:[UIView class]]) {
        window = navView.window;
    }
    if ([window isKindOfClass:[UIWindow class]] && window != controllerView && window != navView) {
        if (wcpl_softDisableSearchOverlayInTree(window, navigationBar, window, stage, 0, &disabledCount)) {
            changed = YES;
        }
    }

    if (changed) {
        WCPLLogInfo(@"[搜索] %@ 取消前硬隐藏搜索层 disabled=%lu", stage ?: @"cancel-pre-hide", (unsigned long)disabledCount);
    }

    return changed;
}

static BOOL wcpl_restoreSearchLikeNodesInTree(UIView *view, NSUInteger depth, NSUInteger *restoredCount) {
    if (![view isKindOfClass:[UIView class]] || depth >= kWCPLSearchTreeMaxDepth) {
        return NO;
    }

    NSString *className = NSStringFromClass([view class]) ?: @"";
    BOOL searchLike = wcpl_classNameContainsSearchToken(className) ||
                      wcpl_classNameContainsToken(className, @"searchbarcontainerview") ||
                      wcpl_classNameContainsToken(className, @"mmuisearchbar") ||
                      wcpl_classNameContainsToken(className, @"dimming") ||
                      wcpl_classNameContainsToken(className, @"searcherbackground") ||
                      wcpl_classNameContainsToken(className, @"searchbackground");
    BOOL changed = NO;

    if (searchLike) {
        BOOL nodeChanged = NO;
        if (view.hidden) {
            view.hidden = NO;
            nodeChanged = YES;
        }
        if (view.alpha < 0.99f) {
            view.alpha = 1.0f;
            nodeChanged = YES;
        }
        if (!view.userInteractionEnabled) {
            view.userInteractionEnabled = YES;
            nodeChanged = YES;
        }
        if (nodeChanged && restoredCount) {
            (*restoredCount)++;
        }
        changed = changed || nodeChanged;
    }

    NSArray *subviews = [view.subviews copy];
    if ([subviews isKindOfClass:[NSArray class]] && subviews.count > 0) {
        for (id subview in subviews) {
            if (![subview isKindOfClass:[UIView class]]) {
                continue;
            }
            if (wcpl_restoreSearchLikeNodesInTree((UIView *)subview, depth + 1, restoredCount)) {
                changed = YES;
            }
        }
    }

    return changed;
}

static BOOL wcpl_restoreSearchPresentationOnActivation(id controller, NSString *stage) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    BOOL changed = NO;
    NSUInteger restoredCount = 0;
    UIViewController *viewController = (UIViewController *)controller;
    UINavigationController *navigationController = viewController.navigationController;

    id helper = wcpl_msgSearchHelperFromController(controller);
    id searchController = wcpl_searchControllerFromHelper(helper);
    if (wcpl_objectLooksLikeSearchController(searchController) && [searchController respondsToSelector:@selector(view)]) {
        UIView *searchView = nil;
        @try {
            searchView = ((id (*)(id, SEL))objc_msgSend)(searchController, @selector(view));
        } @catch (__unused NSException *exception) {
            searchView = nil;
        }
        if ([searchView isKindOfClass:[UIView class]]) {
            BOOL nodeChanged = NO;
            if (searchView.hidden) {
                searchView.hidden = NO;
                nodeChanged = YES;
            }
            if (searchView.alpha < 0.99f) {
                searchView.alpha = 1.0f;
                nodeChanged = YES;
            }
            if (!searchView.userInteractionEnabled) {
                searchView.userInteractionEnabled = YES;
                nodeChanged = YES;
            }
            if (wcpl_restoreSearchLikeNodesInTree(searchView, 0, &restoredCount)) {
                nodeChanged = YES;
            }
            if (nodeChanged) {
                restoredCount++;
                changed = YES;
            }
        }
    }

    UIViewController *presentedBySelf = viewController.presentedViewController;
    if ([presentedBySelf isKindOfClass:[UIViewController class]] &&
        wcpl_viewControllerLooksSearchPresentation(presentedBySelf)) {
        UIView *presentedView = wcpl_safeViewIfLoaded(presentedBySelf);
        if ([presentedView isKindOfClass:[UIView class]]) {
            BOOL nodeChanged = NO;
            if (presentedView.hidden) {
                presentedView.hidden = NO;
                nodeChanged = YES;
            }
            if (presentedView.alpha < 0.99f) {
                presentedView.alpha = 1.0f;
                nodeChanged = YES;
            }
            if (!presentedView.userInteractionEnabled) {
                presentedView.userInteractionEnabled = YES;
                nodeChanged = YES;
            }
            if (wcpl_restoreSearchLikeNodesInTree(presentedView, 0, &restoredCount)) {
                nodeChanged = YES;
            }
            if (nodeChanged) {
                restoredCount++;
                changed = YES;
            }
        }
    }

    UIViewController *presentedByNav = [navigationController isKindOfClass:[UINavigationController class]] ? navigationController.presentedViewController : nil;
    if ([presentedByNav isKindOfClass:[UIViewController class]] &&
        wcpl_viewControllerLooksSearchPresentation(presentedByNav)) {
        UIView *presentedView = wcpl_safeViewIfLoaded(presentedByNav);
        if ([presentedView isKindOfClass:[UIView class]]) {
            BOOL nodeChanged = NO;
            if (presentedView.hidden) {
                presentedView.hidden = NO;
                nodeChanged = YES;
            }
            if (presentedView.alpha < 0.99f) {
                presentedView.alpha = 1.0f;
                nodeChanged = YES;
            }
            if (!presentedView.userInteractionEnabled) {
                presentedView.userInteractionEnabled = YES;
                nodeChanged = YES;
            }
            if (wcpl_restoreSearchLikeNodesInTree(presentedView, 0, &restoredCount)) {
                nodeChanged = YES;
            }
            if (nodeChanged) {
                restoredCount++;
                changed = YES;
            }
        }
    }

    if (changed) {
        WCPLLogInfo(@"[搜索] %@ 激活恢复搜索层 visibleCount=%lu", stage ?: @"activate-restore", (unsigned long)restoredCount);
    }

    return changed;
}

static BOOL wcpl_forceDismissSearchPresentationController(id controller, NSString *stage) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    UIViewController *viewController = (UIViewController *)controller;
    BOOL changed = NO;

    id helper = wcpl_msgSearchHelperFromController(controller);
    id searchController = wcpl_searchControllerFromHelper(helper);
    if (wcpl_objectLooksLikeSearchController(searchController) && [searchController respondsToSelector:@selector(setActive:)]) {
        BOOL shouldDeactivate = YES;
        if ([searchController respondsToSelector:@selector(isActive)]) {
            shouldDeactivate = ((BOOL (*)(id, SEL))objc_msgSend)(searchController, @selector(isActive));
        }
        if (shouldDeactivate) {
            @try {
                ((void (*)(id, SEL, BOOL))objc_msgSend)(searchController, @selector(setActive:), NO);
                changed = YES;
                WCPLLogInfo(@"[搜索] %@ 强制 setActive:NO class=%@",
                            stage ?: @"repair",
                            NSStringFromClass([searchController class]) ?: @"unknown");
            } @catch (NSException *exception) {
                WCPLLogInfo(@"[搜索] %@ setActive:NO 异常: %@", stage ?: @"repair", exception.reason ?: @"unknown");
            }
        }
    }

    UIViewController *presentedBySelf = viewController.presentedViewController;
    if ([presentedBySelf isKindOfClass:[UIViewController class]] &&
        wcpl_viewControllerLooksSearchPresentation(presentedBySelf)) {
        [viewController dismissViewControllerAnimated:NO completion:nil];
        changed = YES;
        WCPLLogInfo(@"[搜索] %@ dismiss self.presentedViewController=%@",
                    stage ?: @"repair",
                    NSStringFromClass([presentedBySelf class]) ?: @"UIViewController");
    }

    UINavigationController *navigationController = viewController.navigationController;
    UIViewController *presentedByNav = [navigationController isKindOfClass:[UINavigationController class]] ? navigationController.presentedViewController : nil;
    if ([presentedByNav isKindOfClass:[UIViewController class]] &&
        wcpl_viewControllerLooksSearchPresentation(presentedByNav)) {
        [navigationController dismissViewControllerAnimated:NO completion:nil];
        changed = YES;
        WCPLLogInfo(@"[搜索] %@ dismiss nav.presentedViewController=%@",
                    stage ?: @"repair",
                    NSStringFromClass([presentedByNav class]) ?: @"UIViewController");
    }

    return changed;
}

static BOOL wcpl_immediateHardCleanupAfterCancel(id controller, NSString *stage) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    NSString *prefix = ([stage isKindOfClass:[NSString class]] && stage.length > 0) ? stage : @"[搜索] cancel 即时硬清理";
    BOOL preHidden = wcpl_preHideSearchPresentationOnCancel(controller, [NSString stringWithFormat:@"%@/preHide", prefix]);
    BOOL dismissed = wcpl_forceDismissSearchPresentationController(controller, [NSString stringWithFormat:@"%@/dismiss", prefix]);
    BOOL clearedTitle = wcpl_forceClearTitleViewIfSearchResidual(controller, [NSString stringWithFormat:@"%@/title", prefix]);
    BOOL clearedNav = wcpl_forceClearNavBarSearchResidual(controller, [NSString stringWithFormat:@"%@/navBar", prefix]);
    BOOL clearedRoot = wcpl_forceClearRootSearchResidual(controller, [NSString stringWithFormat:@"%@/root", prefix]);
    BOOL changed = preHidden || dismissed || clearedTitle || clearedNav || clearedRoot;

    if (changed) {
        UIView *controllerView = wcpl_safeViewIfLoaded((UIViewController *)controller);
        if ([controllerView isKindOfClass:[UIView class]]) {
            [controllerView setNeedsLayout];
            [controllerView layoutIfNeeded];
        }
        UINavigationController *navigationController = ((UIViewController *)controller).navigationController;
        UIView *navView = [navigationController isKindOfClass:[UINavigationController class]] ? wcpl_safeViewIfLoaded(navigationController) : nil;
        if ([navView isKindOfClass:[UIView class]]) {
            [navView setNeedsLayout];
            [navView layoutIfNeeded];
        }
        WCPLLogInfo(@"[搜索] %@ 命中 changed(preHide=%@ dismiss=%@ title=%@ nav=%@ root=%@)",
                    prefix,
                    preHidden ? @"YES" : @"NO",
                    dismissed ? @"YES" : @"NO",
                    clearedTitle ? @"YES" : @"NO",
                    clearedNav ? @"YES" : @"NO",
                    clearedRoot ? @"YES" : @"NO");
    }

    return changed;
}

static BOOL wcpl_viewIsNearFullscreenInRoot(UIView *view, UIView *rootView) {
    if (![view isKindOfClass:[UIView class]] || ![rootView isKindOfClass:[UIView class]]) {
        return NO;
    }
    CGRect rootBounds = rootView.bounds;
    if (rootBounds.size.width < 1.0f || rootBounds.size.height < 1.0f) {
        return NO;
    }
    CGRect frameInRoot = [view convertRect:view.bounds toView:rootView];
    return frameInRoot.size.width >= rootBounds.size.width * 0.90f &&
           frameInRoot.size.height >= rootBounds.size.height * 0.80f;
}

static __attribute__((unused)) BOOL wcpl_softDisableSearchOverlayInTree(UIView *view,
                                                UIView *excludedRoot,
                                                UIView *scanRoot,
                                                NSString *stage,
                                                NSUInteger depth,
                                                NSUInteger *disabledCount) {
    if (![view isKindOfClass:[UIView class]] || depth >= kWCPLSearchTreeMaxDepth) {
        return NO;
    }
    if ([excludedRoot isKindOfClass:[UIView class]] && wcpl_viewIsDescendantOrSelfOfView(view, excludedRoot)) {
        return NO;
    }

    NSString *className = NSStringFromClass([view class]) ?: @"";
    BOOL isSearchControllerRoot = wcpl_classNameContainsToken(className, @"searchcontrollerview");
    BOOL isDetachedSearchBar = wcpl_classNameContainsToken(className, @"mmuisearchbar") ||
                               wcpl_classNameContainsToken(className, @"searchbarcontainerview");
    BOOL isDimmingOverlay = wcpl_classNameContainsToken(className, @"dimming") ||
                            wcpl_classNameContainsToken(className, @"searcherbackground") ||
                            wcpl_classNameContainsToken(className, @"searchbackground");
    BOOL nearFullscreen = wcpl_viewIsNearFullscreenInRoot(view, scanRoot ?: view);
    BOOL shouldDisable = depth > 0 &&
                         (isSearchControllerRoot ||
                          isDetachedSearchBar ||
                          (isDimmingOverlay && nearFullscreen));
    BOOL changed = NO;

    if (shouldDisable) {
        if (!view.hidden) {
            if (isSearchControllerRoot || isDetachedSearchBar || isDimmingOverlay) {
                view.hidden = YES;
                changed = YES;
            }
        }
        if (view.alpha > 0.01f) {
            if (isSearchControllerRoot || isDetachedSearchBar || isDimmingOverlay) {
                view.alpha = 0.0f;
                changed = YES;
            }
        }
        if (view.userInteractionEnabled) {
            view.userInteractionEnabled = NO;
            changed = YES;
        }

        if (changed) {
            NSString *chain = wcpl_searchResidualNodeChain(view, 8);
            WCPLLogInfo(@"[搜索] %@ 预清理拦截层 class=%@ nearFullscreen=%@ alpha=%.2f hidden=%@ chain=%@",
                        stage ?: @"repair",
                        className,
                        nearFullscreen ? @"YES" : @"NO",
                        view.alpha,
                        view.hidden ? @"YES" : @"NO",
                        chain);
        }

        if (changed && disabledCount) {
            (*disabledCount)++;
        }

        if (isSearchControllerRoot) {
            (void)wcpl_collapseEmptySearchTransitionAncestors(view);
        }
    }

    NSArray *subviews = [view.subviews copy];
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return changed;
    }

    for (id subview in subviews) {
        if (![subview isKindOfClass:[UIView class]]) {
            continue;
        }
        if (wcpl_softDisableSearchOverlayInTree((UIView *)subview, excludedRoot, scanRoot, stage, depth + 1, disabledCount)) {
            changed = YES;
        }
    }

    return changed;
}

static BOOL wcpl_forceDisableSearchPresentationOverlay(id controller, NSString *stage) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        return NO;
    }

    // 触控稳定性优先的 fail-safe：
    // 不再主动禁用任何 overlay 交互，只做可见容器交互恢复，避免“二次点击后页面失去触控”。
    UIViewController *viewController = (UIViewController *)controller;
    UIView *controllerView = wcpl_safeViewIfLoaded(viewController);
    UINavigationController *navigationController = viewController.navigationController;
    UIView *navView = [navigationController isKindOfClass:[UINavigationController class]] ? wcpl_safeViewIfLoaded(navigationController) : nil;
    UIWindow *window = [controllerView isKindOfClass:[UIView class]] ? controllerView.window : nil;
    if (![window isKindOfClass:[UIWindow class]] && [navView isKindOfClass:[UIView class]]) {
        window = navView.window;
    }

    BOOL changed = NO;
    NSUInteger recoveredCount = 0;

    if ([controllerView isKindOfClass:[UIView class]]) {
        if (!controllerView.userInteractionEnabled) {
            controllerView.userInteractionEnabled = YES;
            changed = YES;
            recoveredCount++;
        }
        changed |= wcpl_recoverTransitionContainerInteractionInTree(controllerView, 0, &recoveredCount);
    }
    if ([navView isKindOfClass:[UIView class]] && navView != controllerView) {
        if (!navView.userInteractionEnabled) {
            navView.userInteractionEnabled = YES;
            changed = YES;
            recoveredCount++;
        }
        changed |= wcpl_recoverTransitionContainerInteractionInTree(navView, 0, &recoveredCount);
    }
    if ([window isKindOfClass:[UIWindow class]] && window != controllerView && window != navView) {
        if (!window.userInteractionEnabled) {
            window.userInteractionEnabled = YES;
            changed = YES;
            recoveredCount++;
        }
        changed |= wcpl_recoverTransitionContainerInteractionInTree(window, 0, &recoveredCount);
    }

    if (changed) {
        WCPLLogInfo(@"[搜索] %@ 触控恢复 fail-safe recoveredCount=%lu",
                    stage ?: @"repair",
                    (unsigned long)recoveredCount);
        if ([controllerView isKindOfClass:[UIView class]]) {
            [controllerView setNeedsLayout];
            [controllerView layoutIfNeeded];
        }
        if ([navView isKindOfClass:[UIView class]]) {
            [navView setNeedsLayout];
            [navView layoutIfNeeded];
        }
    }

    return changed;
}

static void wcpl_preflightRepairBeforeSearchActivation(id controller) {
    if (!controller) {
        return;
    }

    NSUInteger epoch = wcpl_nextExitCleanupEpoch(controller);
    WCPLLogInfo(@"[搜索] [搜索] preflight 开始，切换 cleanupEpoch=%lu", (unsigned long)epoch);
    wcpl_logSearchTouchProbe(controller, @"[搜索] preflight(before)");
    wcpl_forceDismissSearchPresentationController(controller, @"[搜索] preflight");
    wcpl_tryFinalizeSpecialSearchHelper(controller, @"[搜索] preflight");
    wcpl_forceDisableSearchPresentationOverlay(controller, @"[搜索] preflight");
    wcpl_logSearchTouchProbe(controller, @"[搜索] preflight(after)");
}

static BOOL wcpl_shouldRunRootCleanupForStage(NSString *stage, BOOL allowReloadWholePage) {
    if (!allowReloadWholePage) {
        return NO;
    }
    if (![stage isKindOfClass:[NSString class]] || stage.length == 0) {
        return NO;
    }

    // 只在退出搜索后的延时收口阶段启用 root 清理，避免影响搜索激活中的触控链。
    if ([stage rangeOfString:@"500ms"].location != NSNotFound ||
        [stage rangeOfString:@"1200ms"].location != NSNotFound ||
        [stage rangeOfString:@"/retry"].location != NSNotFound ||
        [stage rangeOfString:@"延迟收口"].location != NSNotFound ||
        [stage rangeOfString:@"残留兜底"].location != NSNotFound) {
        return YES;
    }

    return NO;
}

static BOOL wcpl_shouldRunHeavySearchStateSyncForStage(NSString *stage) {
    if (![stage isKindOfClass:[NSString class]] || stage.length == 0) {
        return YES;
    }
    if ([stage rangeOfString:@"500ms"].location != NSNotFound) {
        return NO;
    }
    if ([stage rangeOfString:@"1200ms"].location != NSNotFound) {
        return NO;
    }
    if ([stage rangeOfString:@"/retry"].location != NSNotFound) {
        return NO;
    }
    return YES;
}

static void wcpl_repairExitSearchNavState(id controller, NSString *stage, BOOL allowReloadWholePage) {
    if (!controller) {
        return;
    }

    wcpl_tryFinalizeSpecialSearchHelper(controller, stage ?: @"repair");
    BOOL shouldRunHeavySync = wcpl_shouldRunHeavySearchStateSyncForStage(stage ?: @"");
    SEL setShowSel = @selector(setIsShowMsgSearch:);
    if (shouldRunHeavySync && [controller respondsToSelector:setShowSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(controller, setShowSel, NO);
    }

    SEL initShowSel = @selector(initIsShowMsgSearch);
    if (shouldRunHeavySync && [controller respondsToSelector:initShowSel]) {
        ((void (*)(id, SEL))objc_msgSend)(controller, initShowSel);
    }

    SEL resetRightSel = @selector(resetRihgButton);
    if (shouldRunHeavySync && [controller respondsToSelector:resetRightSel]) {
        ((void (*)(id, SEL))objc_msgSend)(controller, resetRightSel);
    }

    SEL rightBarSel = @selector(handleMsgUpdateRightBar);
    if (shouldRunHeavySync && [controller respondsToSelector:rightBarSel]) {
        ((void (*)(id, SEL))objc_msgSend)(controller, rightBarSel);
    }

    BOOL dismissedSearchPresentation = wcpl_forceDismissSearchPresentationController(controller, stage);
    BOOL disabledSearchOverlay = wcpl_forceDisableSearchPresentationOverlay(controller, stage);
    BOOL clearedTitleView = wcpl_forceClearTitleViewIfSearchResidual(controller, stage);
    BOOL clearedNavBarSearch = wcpl_forceClearNavBarSearchResidual(controller, stage);
    BOOL shouldClearRootSearch = wcpl_shouldRunRootCleanupForStage(stage ?: @"", allowReloadWholePage);
    BOOL clearedRootSearch = shouldClearRootSearch ? wcpl_forceClearRootSearchResidual(controller, stage) : NO;
    if (!shouldClearRootSearch && wcpl_controllerRootHasSearchResidue(controller)) {
        WCPLLogInfo(@"[搜索] %@ root cleanup disabled for diagnosis", stage ?: @"repair");
    }
    if ((dismissedSearchPresentation || disabledSearchOverlay || clearedTitleView || clearedNavBarSearch || clearedRootSearch) &&
        [controller respondsToSelector:rightBarSel]) {
        ((void (*)(id, SEL))objc_msgSend)(controller, rightBarSel);
    }

    BOOL titleStillSearchLike = wcpl_navTitleViewLooksSearchLike(controller);
    BOOL navStillSearchLike = wcpl_navBarHasSearchResidue(controller);
    BOOL rootStillSearchLike = wcpl_controllerRootHasSearchResidue(controller);
    if (allowReloadWholePage && (titleStillSearchLike || navStillSearchLike || rootStillSearchLike)) {
        wcpl_forceDismissSearchPresentationController(controller, [NSString stringWithFormat:@"%@/retry", stage ?: @"repair"]);
        wcpl_forceDisableSearchPresentationOverlay(controller, [NSString stringWithFormat:@"%@/retry", stage ?: @"repair"]);
        wcpl_forceClearTitleViewIfSearchResidual(controller, [NSString stringWithFormat:@"%@/retry", stage ?: @"repair"]);
        wcpl_forceClearNavBarSearchResidual(controller, [NSString stringWithFormat:@"%@/retry", stage ?: @"repair"]);
        if (wcpl_shouldRunRootCleanupForStage([NSString stringWithFormat:@"%@/retry", stage ?: @"repair"], YES)) {
            wcpl_forceClearRootSearchResidual(controller, [NSString stringWithFormat:@"%@/retry", stage ?: @"repair"]);
        }
        if (shouldRunHeavySync && [controller respondsToSelector:resetRightSel]) {
            ((void (*)(id, SEL))objc_msgSend)(controller, resetRightSel);
        }
        if (shouldRunHeavySync && [controller respondsToSelector:rightBarSel]) {
            ((void (*)(id, SEL))objc_msgSend)(controller, rightBarSel);
        }
    }

    wcpl_logSearchNavSnapshot(controller, stage ?: @"repair");
}

static void wcpl_updateChatSearchButtonForViewController(id viewController) {
    if (!viewController || ![viewController isKindOfClass:[UIViewController class]]) {
        return;
    }

    UINavigationItem *navigationItem = ((UIViewController *)viewController).navigationItem;
    if (![navigationItem isKindOfClass:[UINavigationItem class]]) {
        return;
    }

    NSMutableArray<UIBarButtonItem *> *rightItems = nil;
    if ([navigationItem.rightBarButtonItems isKindOfClass:[NSArray class]] && navigationItem.rightBarButtonItems.count > 0) {
        rightItems = [navigationItem.rightBarButtonItems mutableCopy];
    } else if ([navigationItem.rightBarButtonItem isKindOfClass:[UIBarButtonItem class]]) {
        rightItems = [NSMutableArray arrayWithObject:navigationItem.rightBarButtonItem];
    } else {
        return;
    }

    NSMutableArray<UIBarButtonItem *> *filteredItems = [NSMutableArray arrayWithCapacity:rightItems.count];
    for (UIBarButtonItem *item in rightItems) {
        if (!wcpl_isInjectedChatSearchButtonItem(item)) {
            [filteredItems addObject:item];
        }
    }

    BOOL targetChat = wcpl_isTargetChatForSearchButton(viewController);
    BOOL showingSearch = wcpl_isControllerShowingSearchUI(viewController);
    if (!targetChat || showingSearch) {
        navigationItem.rightBarButtonItems = filteredItems;
        return;
    }

    BOOL removedNativeSearchOrDate = NO;
    NSMutableArray<UIBarButtonItem *> *stableItems = [NSMutableArray arrayWithCapacity:filteredItems.count];
    for (UIBarButtonItem *item in filteredItems) {
        if (wcpl_barButtonItemLooksLikeSearchOrDateEntry(item)) {
            removedNativeSearchOrDate = YES;
            WCPLLogInfo(@"[搜索] 替换原生搜索入口 class=%@ action=%@ title=%@",
                        NSStringFromClass([item class]) ?: @"UIBarButtonItem",
                        wcpl_barButtonActionName(item),
                        [item.title isKindOfClass:[NSString class]] ? item.title : @"");
            continue;
        }
        [stableItems addObject:item];
    }

    // 防御性兜底：当原生入口无法通过 token 命中且右侧是两按钮结构时，移除非“更多”项，
    // 强制保持“更多 + 插件搜索”稳定组合，避免退回日期类搜索。
    if (!removedNativeSearchOrDate && stableItems.count >= 2) {
        UIBarButtonItem *first = stableItems.firstObject;
        UIBarButtonItem *second = stableItems[1];
        BOOL firstMore = wcpl_barButtonItemLooksLikeMoreEntry(first);
        BOOL secondMore = wcpl_barButtonItemLooksLikeMoreEntry(second);
        NSUInteger removeIndex = NSNotFound;
        if (firstMore && !secondMore) {
            removeIndex = 1;
        } else if (!firstMore && secondMore) {
            removeIndex = 0;
        } else {
            removeIndex = 1;
        }
        if (removeIndex < stableItems.count) {
            UIBarButtonItem *removedItem = stableItems[removeIndex];
            WCPLLogInfo(@"[搜索] 兜底移除原生次按钮 class=%@ action=%@ title=%@",
                        NSStringFromClass([removedItem class]) ?: @"UIBarButtonItem",
                        wcpl_barButtonActionName(removedItem),
                        [removedItem.title isKindOfClass:[NSString class]] ? removedItem.title : @"");
            [stableItems removeObjectAtIndex:removeIndex];
        }
    }

    UIBarButtonItem *searchButtonItem = wcpl_chatSearchNavButtonItem(viewController);
    if (![searchButtonItem isKindOfClass:[UIBarButtonItem class]]) {
        navigationItem.rightBarButtonItems = stableItems;
        return;
    }

    if (stableItems.count > 0) {
        UIBarButtonItem *anchor = stableItems.firstObject;
        if ([anchor isKindOfClass:[UIBarButtonItem class]] && anchor.tintColor) {
            searchButtonItem.tintColor = anchor.tintColor;
        }
    }

    NSUInteger insertIndex = stableItems.count > 0 ? 1 : 0;
    if (insertIndex > stableItems.count) {
        insertIndex = stableItems.count;
    }
    [stableItems insertObject:searchButtonItem atIndex:insertIndex];
    navigationItem.rightBarButtonItems = stableItems;
}

static BOOL wcpl_pushSearchSceneFallback(id contact, UINavigationController *navigationController) {
    if (!contact || ![navigationController isKindOfClass:[UINavigationController class]]) {
        return NO;
    }

    Class serviceCenterClass = objc_getClass("MMServiceCenter");
    Class msgLogicManagerClass = objc_getClass("MMMsgLogicManager");
    if (!serviceCenterClass || !msgLogicManagerClass) {
        WCPLLogInfo(@"[搜索] 回退失败：MMServiceCenter 或 MMMsgLogicManager 缺失");
        return NO;
    }

    id serviceCenter = ((id (*)(id, SEL))objc_msgSend)(serviceCenterClass, @selector(defaultCenter));
    id msgLogicManager = serviceCenter ? ((id (*)(id, SEL, Class))objc_msgSend)(serviceCenter, @selector(getService:), msgLogicManagerClass) : nil;
    if (!msgLogicManager) {
        WCPLLogInfo(@"[搜索] 回退失败：MMMsgLogicManager 获取失败");
        return NO;
    }

    SEL pushSearchToolBarSel = @selector(PushSearchLogicControllerWithToolBarByContact:navigationController:ForMessageWrap:ForKeywordList:animated:);
    if ([msgLogicManager respondsToSelector:pushSearchToolBarSel]) {
        ((void (*)(id, SEL, id, id, id, id, BOOL))objc_msgSend)(
            msgLogicManager, pushSearchToolBarSel, contact, navigationController, nil, nil, YES);
        WCPLLogInfo(@"[搜索] 回退成功：PushSearchLogicControllerWithToolBar");
        return YES;
    }

    SEL pushSearchSel = @selector(PushSearchLogicControllerByContact:navigationController:ForMessageWrap:animated:fromeScene:);
    if ([msgLogicManager respondsToSelector:pushSearchSel]) {
        ((void (*)(id, SEL, id, id, id, BOOL, unsigned long long))objc_msgSend)(
            msgLogicManager, pushSearchSel, contact, navigationController, nil, YES, (unsigned long long)2);
        WCPLLogInfo(@"[搜索] 回退成功：PushSearchLogicController fromeScene=2");
        return YES;
    }

    SEL pushOtherSel = @selector(PushOtherBaseMsgControllerByContact:navigationController:animated:searchScene:);
    if ([msgLogicManager respondsToSelector:pushOtherSel]) {
        ((void (*)(id, SEL, id, id, BOOL, unsigned long long))objc_msgSend)(
            msgLogicManager, pushOtherSel, contact, navigationController, NO, (unsigned long long)2);
        WCPLLogInfo(@"[搜索] 回退成功：PushOtherBaseMsgController searchScene=2");
        return YES;
    }

    WCPLLogInfo(@"[搜索] 回退失败：Search/Other 入口均不可用");
    return NO;
}

static void wcpl_markBridgePending(id controller, BOOL enable) {
    if (!controller) {
        return;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchBridgePendingKey, @(enable), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static BOOL wcpl_isBridgePending(id controller) {
    if (!controller) {
        return NO;
    }

    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchBridgePendingKey);
    return [marker respondsToSelector:@selector(boolValue)] ? [marker boolValue] : NO;
}

static void wcpl_markBridgeAutoPop(id controller, BOOL enable) {
    if (!controller) {
        return;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchBridgeAutoPopKey, @(enable), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static BOOL wcpl_isBridgeAutoPop(id controller) {
    if (!controller) {
        return NO;
    }

    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchBridgeAutoPopKey);
    return [marker respondsToSelector:@selector(boolValue)] ? [marker boolValue] : NO;
}

static __attribute__((unused)) BOOL wcpl_tryTriggerChatInfoBridgeSearch(id sourceController, id contact, UINavigationController *nav) {
    if (!sourceController || !contact || ![nav isKindOfClass:[UINavigationController class]]) {
        return NO;
    }

    if (wcpl_isBridgePending(sourceController)) {
        return YES;
    }

    SEL openChatInfoSel = @selector(openChatInfo:);
    if (![sourceController respondsToSelector:openChatInfoSel]) {
        WCPLLogInfo(@"[搜索] bridge失败：openChatInfo: 不可用");
        return NO;
    }

    wcpl_markBridgePending(sourceController, YES);

    ((void (*)(id, SEL, id))objc_msgSend)(sourceController, openChatInfoSel, nil);
    WCPLLogInfo(@"[搜索] bridge: 已触发 openChatInfo:nil");

    __weak id weakSource = sourceController;
    __weak UINavigationController *weakNav = nav;

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.08 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        id strongSource = weakSource;
        UINavigationController *strongNav = weakNav;
        if (!strongSource || ![strongNav isKindOfClass:[UINavigationController class]]) {
            return;
        }

        UIViewController *top = strongNav.topViewController;
        if (!top) {
            wcpl_markBridgePending(strongSource, NO);
            return;
        }

        if (![NSStringFromClass([top class]) isEqualToString:@"ChatRoomInfoViewController"]) {
            wcpl_markBridgePending(strongSource, NO);
            WCPLLogInfo(@"[搜索] bridge失败：top=%@ 非 ChatRoomInfoViewController", NSStringFromClass([top class]));
            return;
        }

        SEL editSearchSel = @selector(onEditAndSearch);
        if ([top respondsToSelector:editSearchSel]) {
            objc_setAssociatedObject(top, kWCPLChatSearchBridgeSourceControllerKey, strongSource, OBJC_ASSOCIATION_ASSIGN);
            wcpl_markBridgeAutoPop(top, YES);
            ((void (*)(id, SEL))objc_msgSend)(top, editSearchSel);
            WCPLLogInfo(@"[搜索] bridge成功：ChatRoomInfoViewController onEditAndSearch");
        } else {
            wcpl_markBridgeAutoPop(top, NO);
            WCPLLogInfo(@"[搜索] bridge失败：onEditAndSearch 不可用");
        }

        wcpl_markBridgePending(strongSource, NO);
    });

    return YES;
}

static id wcpl_msgSearchHelperFromController(id controller) {
    if (!controller) {
        return nil;
    }

    id helper = wcpl_safeObjectIvar(controller, "m_oMsgSearchHelper");
    if (helper) {
        return helper;
    }

    @try {
        helper = [controller valueForKey:@"m_oMsgSearchHelper"];
    } @catch (__unused NSException *exception) {
        helper = nil;
    }
    if (helper) {
        return helper;
    }

    @try {
        helper = [controller valueForKey:@"m_specialMsgSearchHelper"];
    } @catch (__unused NSException *exception) {
        helper = nil;
    }

    return helper;
}

static id wcpl_specialMsgSearchHelperFromController(id controller) {
    if (!controller) {
        return nil;
    }

    id helper = wcpl_safeObjectIvar(controller, "m_specialMsgSearchHelper");
    if (helper) {
        return helper;
    }

    @try {
        helper = [controller valueForKey:@"m_specialMsgSearchHelper"];
    } @catch (__unused NSException *exception) {
        helper = nil;
    }

    return helper;
}

static BOOL wcpl_isSpecialMsgSearchHelper(id helper) {
    if (!helper) {
        return NO;
    }

    Class specialHelperClass = objc_getClass("MMSpecialMsgSearchHelper");
    if (specialHelperClass && [helper isKindOfClass:specialHelperClass]) {
        return YES;
    }

    NSString *className = NSStringFromClass([helper class]) ?: @"";
    return wcpl_classNameContainsToken(className, @"specialmsgsearchhelper");
}

static BOOL wcpl_isFullMsgSearchHelper(id helper) {
    if (!helper) {
        return NO;
    }

    NSString *className = NSStringFromClass([helper class]) ?: @"";
    if (className.length == 0) {
        return NO;
    }
    if (wcpl_classNameContainsToken(className, @"special") || wcpl_classNameContainsToken(className, @"date")) {
        return NO;
    }
    if ([className isEqualToString:@"MsgSearchHelper"]) {
        return YES;
    }
    return wcpl_classNameContainsToken(className, @"msgsearchhelper");
}

static void wcpl_forceSetSearchBusinessTypeToNormal(id controller, NSString *stage) {
    if (!controller) {
        return;
    }

    SEL setBizSel = @selector(setM_eMsgSearchBusinessType:);
    if ([controller respondsToSelector:setBizSel]) {
        ((void (*)(id, SEL, int))objc_msgSend)(controller, setBizSel, 0);
        WCPLLogInfo(@"[搜索] %@ 强制业务类型=0(setM_eMsgSearchBusinessType)", stage ?: @"activate");
        return;
    }

    SEL setBizAltSel = @selector(setMsgSearchBusinessType:);
    if ([controller respondsToSelector:setBizAltSel]) {
        ((void (*)(id, SEL, int))objc_msgSend)(controller, setBizAltSel, 0);
        WCPLLogInfo(@"[搜索] %@ 强制业务类型=0(setMsgSearchBusinessType)", stage ?: @"activate");
        return;
    }

    @try {
        [controller setValue:@0 forKey:@"m_eMsgSearchBusinessType"];
        WCPLLogInfo(@"[搜索] %@ 强制业务类型=0(KVC)", stage ?: @"activate");
    } @catch (__unused NSException *exception) {
    }
}

static BOOL wcpl_tryFinalizeSpecialSearchHelper(id controller, NSString *stage) {
    id specialHelper = wcpl_specialMsgSearchHelperFromController(controller);
    if (!specialHelper) {
        return NO;
    }

    BOOL touched = NO;
    SEL cancelSel = @selector(cancelSearch);
    if ([specialHelper respondsToSelector:cancelSel]) {
        @try {
            ((void (*)(id, SEL))objc_msgSend)(specialHelper, cancelSel);
            touched = YES;
            WCPLLogInfo(@"[搜索] %@ special helper cancelSearch", stage ?: @"repair");
        } @catch (NSException *exception) {
            WCPLLogInfo(@"[搜索] %@ special helper cancelSearch 异常: %@",
                        stage ?: @"repair",
                        exception.reason ?: @"unknown");
        }
    }

    return touched;
}

static BOOL wcpl_resetSpecialHelperForNativeFullSearch(id controller, NSString *stage) {
    if (!controller) {
        return NO;
    }

    id helper = wcpl_msgSearchHelperFromController(controller);
    id specialHelper = wcpl_specialMsgSearchHelperFromController(controller);
    NSString *helperClass = helper ? (NSStringFromClass([helper class]) ?: @"unknown") : @"nil";
    NSString *specialClass = specialHelper ? (NSStringFromClass([specialHelper class]) ?: @"unknown") : @"nil";
    BOOL helperIncompatible = (helper != nil) && !wcpl_isFullMsgSearchHelper(helper);
    BOOL shouldReset = helperIncompatible || wcpl_isSpecialMsgSearchHelper(specialHelper);
    if (!shouldReset) {
        return NO;
    }

    wcpl_tryFinalizeSpecialSearchHelper(controller, stage ?: @"[搜索] native-preflight");

    BOOL touched = NO;
    SEL setMainHelperSel = @selector(setM_oMsgSearchHelper:);
    if ([controller respondsToSelector:setMainHelperSel]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(controller, setMainHelperSel, nil);
            touched = YES;
        } @catch (__unused NSException *exception) {
        }
    }

    SEL setSpecialHelperSel = @selector(setM_specialMsgSearchHelper:);
    if ([controller respondsToSelector:setSpecialHelperSel]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(controller, setSpecialHelperSel, nil);
            touched = YES;
        } @catch (__unused NSException *exception) {
        }
    }

    @try {
        [controller setValue:nil forKey:@"m_oMsgSearchHelper"];
        touched = YES;
    } @catch (__unused NSException *exception) {
    }
    @try {
        [controller setValue:nil forKey:@"m_specialMsgSearchHelper"];
        touched = YES;
    } @catch (__unused NSException *exception) {
    }

    WCPLLogInfo(@"[搜索] %@ clean-slate 重置 helper=%@ special=%@ touched=%@",
                stage ?: @"[搜索] native-preflight",
                helperClass,
                specialClass,
                touched ? @"YES" : @"NO");
    return touched;
}

static void wcpl_logSearchHelperSnapshot(id controller, NSString *stage) {
    if (!controller) {
        return;
    }

    id helper = wcpl_msgSearchHelperFromController(controller);
    id specialHelper = wcpl_specialMsgSearchHelperFromController(controller);
    unsigned int businessType = wcpl_msgSearchBusinessType(controller);
    NSString *helperClass = helper ? (NSStringFromClass([helper class]) ?: @"unknown") : @"nil";
    NSString *specialClass = specialHelper ? (NSStringFromClass([specialHelper class]) ?: @"unknown") : @"nil";

    UIViewController *viewController = [controller isKindOfClass:[UIViewController class]] ? (UIViewController *)controller : nil;
    UIViewController *presented = viewController.presentedViewController;
    NSString *presentedClass = presented ? (NSStringFromClass([presented class]) ?: @"unknown") : @"nil";

    id searchController = wcpl_searchControllerFromHelper(helper);
    BOOL scActive = NO;
    BOOL scViewHidden = NO;
    BOOL scViewInteractive = NO;
    CGFloat scViewAlpha = -1.0f;
    if (searchController && [searchController respondsToSelector:@selector(isActive)]) {
        scActive = ((BOOL (*)(id, SEL))objc_msgSend)(searchController, @selector(isActive));
    }
    if (searchController && [searchController respondsToSelector:@selector(view)]) {
        UIView *searchView = nil;
        @try {
            searchView = ((id (*)(id, SEL))objc_msgSend)(searchController, @selector(view));
        } @catch (__unused NSException *exception) {
            searchView = nil;
        }
        if ([searchView isKindOfClass:[UIView class]]) {
            scViewHidden = searchView.hidden;
            scViewInteractive = searchView.userInteractionEnabled;
            scViewAlpha = searchView.alpha;
        }
    }

    WCPLLogInfo(@"[搜索] %@ helper=%@ specialHelper=%@ businessType=%u presented=%@ scActive=%@ scHidden=%@ scAlpha=%.2f scUI=%@",
                stage ?: @"snapshot",
                helperClass,
                specialClass,
                businessType,
                presentedClass,
                scActive ? @"YES" : @"NO",
                scViewHidden ? @"YES" : @"NO",
                scViewAlpha,
                scViewInteractive ? @"YES" : @"NO");
}

static unsigned int wcpl_msgSearchBusinessType(id controller) {
    if (!controller) {
        return 0;
    }

    SEL businessSel = @selector(getMsgSearchBusinessType);
    if ([controller respondsToSelector:businessSel]) {
        return ((unsigned int (*)(id, SEL))objc_msgSend)(controller, businessSel);
    }

    return 0;
}

static void wcpl_enableFullSearchButtonsForHelper(id helper) {
    if (!helper) {
        return;
    }

    SEL setShowNameSel = @selector(setM_bShowSearchByName:);
    if ([helper respondsToSelector:setShowNameSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(helper, setShowNameSel, YES);
    } else {
        @try {
            [helper setValue:@YES forKey:@"m_bShowSearchByName"];
        } @catch (__unused NSException *exception) {
        }
    }

    SEL setShowTimeSel = @selector(setM_bShowSearchByTime:);
    if ([helper respondsToSelector:setShowTimeSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(helper, setShowTimeSel, YES);
    } else {
        @try {
            [helper setValue:@YES forKey:@"m_bShowSearchByTime"];
        } @catch (__unused NSException *exception) {
        }
    }
}

static BOOL wcpl_startSearchHelperSafely(id helper) {
    if (!helper) {
        return NO;
    }

    SEL startSearchSel = @selector(startSearch);
    if ([helper respondsToSelector:startSearchSel]) {
        ((void (*)(id, SEL))objc_msgSend)(helper, startSearchSel);
        return YES;
    }

    SEL startSearchArgSel = @selector(startSearch:);
    if ([helper respondsToSelector:startSearchArgSel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(helper, startSearchArgSel, nil);
        return YES;
    }

    id searcher = nil;
    @try {
        searcher = [helper valueForKey:@"searcher"];
    } @catch (__unused NSException *exception) {
        searcher = nil;
    }

    BOOL started = NO;
    SEL willPresentSel = @selector(wcsWillPresentSearch:);
    if ([helper respondsToSelector:willPresentSel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(helper, willPresentSel, searcher ?: helper);
        started = YES;
    }

    SEL didPresentSel = @selector(wcsDidPresentSearch:);
    if ([helper respondsToSelector:didPresentSel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(helper, didPresentSel, searcher ?: helper);
        started = YES;
    }

    return started;
}

static BOOL wcpl_searchControllerIsActive(id searchController) {
    if (!searchController || ![searchController respondsToSelector:@selector(isActive)]) {
        return NO;
    }
    return ((BOOL (*)(id, SEL))objc_msgSend)(searchController, @selector(isActive));
}

static BOOL wcpl_setSearchControllerActiveState(id searchController, BOOL active, NSString *stage) {
    if (!searchController || ![searchController respondsToSelector:@selector(setActive:)]) {
        return NO;
    }

    @try {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(searchController, @selector(setActive:), active);
        WCPLLogInfo(@"[搜索] %@ 强制 setActive=%@ class=%@",
                    stage ?: @"repair",
                    active ? @"YES" : @"NO",
                    NSStringFromClass([searchController class]) ?: @"unknown");
        return YES;
    } @catch (NSException *exception) {
        WCPLLogInfo(@"[搜索] %@ setActive=%@ 异常: %@",
                    stage ?: @"repair",
                    active ? @"YES" : @"NO",
                    exception.reason ?: @"unknown");
    }
    return NO;
}

static UIViewController *wcpl_presentedControllerCandidateFromController(id controller) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        return nil;
    }

    UIViewController *viewController = (UIViewController *)controller;
    UIViewController *candidate = viewController.presentedViewController;
    if ([candidate isKindOfClass:[UIViewController class]]) {
        return candidate;
    }

    UINavigationController *navigationController = viewController.navigationController;
    if ([navigationController isKindOfClass:[UINavigationController class]]) {
        candidate = navigationController.presentedViewController;
        if ([candidate isKindOfClass:[UIViewController class]]) {
            return candidate;
        }

        UIViewController *topViewController = navigationController.topViewController;
        if ([topViewController isKindOfClass:[UIViewController class]]) {
            candidate = topViewController.presentedViewController;
            if ([candidate isKindOfClass:[UIViewController class]]) {
                return candidate;
            }
        }
    }

    return nil;
}

static id wcpl_resolvePresentedSearchControllerFromController(id controller) {
    UIViewController *candidate = wcpl_presentedControllerCandidateFromController(controller);
    if (![candidate isKindOfClass:[UIViewController class]]) {
        return nil;
    }

    UIViewController *cursor = candidate;
    for (NSUInteger depth = 0; depth < 4 && [cursor isKindOfClass:[UIViewController class]]; depth++) {
        NSString *className = NSStringFromClass([cursor class]) ?: @"";
        BOOL searchLike = wcpl_classNameContainsToken(className, @"searchcontroller") ||
                          wcpl_viewControllerLooksSearchPresentation(cursor) ||
                          [cursor respondsToSelector:@selector(setActive:)] ||
                          [cursor respondsToSelector:@selector(searchBar)];
        if (searchLike) {
            return cursor;
        }
        cursor = cursor.presentedViewController;
    }

    return candidate;
}

static BOOL wcpl_focusSearchBarFromController(id searchController, NSString *stage) {
    if (!searchController || ![searchController respondsToSelector:@selector(searchBar)]) {
        return NO;
    }

    id searchBar = nil;
    @try {
        searchBar = ((id (*)(id, SEL))objc_msgSend)(searchController, @selector(searchBar));
    } @catch (__unused NSException *exception) {
        searchBar = nil;
    }
    if (!searchBar || ![searchBar respondsToSelector:@selector(becomeFirstResponder)]) {
        return NO;
    }

    BOOL isFirstResponder = [searchBar respondsToSelector:@selector(isFirstResponder)] ?
        ((BOOL (*)(id, SEL))objc_msgSend)(searchBar, @selector(isFirstResponder)) : NO;
    if (isFirstResponder) {
        return NO;
    }

    @try {
        BOOL focused = ((BOOL (*)(id, SEL))objc_msgSend)(searchBar, @selector(becomeFirstResponder));
        WCPLLogInfo(@"[搜索] %@ 尝试聚焦 searchBar result=%@ class=%@",
                    stage ?: @"repair",
                    focused ? @"YES" : @"NO",
                    NSStringFromClass([searchBar class]) ?: @"unknown");
        return focused;
    } @catch (NSException *exception) {
        WCPLLogInfo(@"[搜索] %@ 聚焦 searchBar 异常: %@",
                    stage ?: @"repair",
                    exception.reason ?: @"unknown");
    }
    return NO;
}

static void wcpl_forceActivateSearchControllerIfNeeded(id controller, id helper, NSString *stage) {
    if (!controller) {
        return;
    }

    id fallbackSearchController = wcpl_searchControllerFromHelper(helper);
    id weakController = controller;
    const NSTimeInterval delays[] = {0.00, 0.05, 0.12, 0.24, 0.40};
    const size_t count = sizeof(delays) / sizeof(delays[0]);

    for (size_t idx = 0; idx < count; idx++) {
        NSTimeInterval delay = delays[idx];
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            if (!weakController) {
                return;
            }

            id targetSearchController = wcpl_resolvePresentedSearchControllerFromController(weakController);
            if (!wcpl_objectLooksLikeSearchController(targetSearchController) &&
                wcpl_objectLooksLikeSearchController(fallbackSearchController)) {
                targetSearchController = fallbackSearchController;
            }

            NSString *targetClass = targetSearchController ? (NSStringFromClass([targetSearchController class]) ?: @"unknown") : @"nil";
            BOOL activeBefore = wcpl_searchControllerIsActive(targetSearchController);
            BOOL canSetActive = [targetSearchController respondsToSelector:@selector(setActive:)];
            NSString *attemptStage = [NSString stringWithFormat:@"%@ %.0fms",
                                      stage ?: @"[搜索] [Fix] 激活补偿",
                                      delay * 1000.0];

            WCPLLogInfo(@"[搜索] [Fix] %@ target=%@ canSetActive=%@ activeBefore=%@",
                        attemptStage,
                        targetClass,
                        canSetActive ? @"YES" : @"NO",
                        activeBefore ? @"YES" : @"NO");

            if (!targetSearchController) {
                return;
            }

            if ([targetSearchController respondsToSelector:@selector(view)]) {
                UIView *targetView = nil;
                @try {
                    targetView = ((id (*)(id, SEL))objc_msgSend)(targetSearchController, @selector(view));
                } @catch (__unused NSException *exception) {
                    targetView = nil;
                }
                if ([targetView isKindOfClass:[UIView class]]) {
                    if (targetView.hidden) {
                        targetView.hidden = NO;
                    }
                    if (targetView.alpha < 0.99f) {
                        targetView.alpha = 1.0f;
                    }
                    if (!targetView.userInteractionEnabled) {
                        targetView.userInteractionEnabled = YES;
                    }
                    (void)wcpl_restoreSearchLikeNodesInTree(targetView, 0, NULL);
                }
            }

            if (canSetActive && !activeBefore) {
                wcpl_setSearchControllerActiveState(targetSearchController, YES, [NSString stringWithFormat:@"%@ setActive", attemptStage]);
            }

            BOOL activeAfter = wcpl_searchControllerIsActive(targetSearchController);
            if (!activeAfter) {
                wcpl_focusSearchBarFromController(targetSearchController, [NSString stringWithFormat:@"%@ focus", attemptStage]);
            }
        });
    }
}

static BOOL wcpl_presentedSearchControllerStateFromController(id controller,
                                                              UIViewController **outController,
                                                              BOOL *outActive) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        if (outController) {
            *outController = nil;
        }
        if (outActive) {
            *outActive = NO;
        }
        return NO;
    }

    id candidate = wcpl_resolvePresentedSearchControllerFromController(controller);
    if (![candidate isKindOfClass:[UIViewController class]]) {
        if (outController) {
            *outController = nil;
        }
        if (outActive) {
            *outActive = NO;
        }
        return NO;
    }

    NSString *className = NSStringFromClass([candidate class]) ?: @"";
    BOOL isSearchPresentation = wcpl_classNameContainsToken(className, @"searchcontroller") ||
                                wcpl_viewControllerLooksSearchPresentation((UIViewController *)candidate) ||
                                [candidate isKindOfClass:[UISearchController class]];
    if (!isSearchPresentation) {
        if (outController) {
            *outController = nil;
        }
        if (outActive) {
            *outActive = NO;
        }
        return NO;
    }

    if (outController) {
        *outController = (UIViewController *)candidate;
    }
    if (outActive) {
        *outActive = wcpl_searchControllerIsActive(candidate);
    }
    return YES;
}

static void wcpl_scheduleNativeFallbackIfSearchStuck(id controller) {
    if (!controller) {
        return;
    }

    id weakController = controller;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.40 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        if (!weakController || !wcpl_isControllerShowingSearchUI(weakController)) {
            return;
        }

        if (wcpl_searchEnhanceRetryCount(weakController) > 0) {
            WCPLLogInfo(@"[搜索] [FixFallback] 跳过：已执行过回退");
            return;
        }

        UIViewController *presentedSearchController = nil;
        BOOL active = NO;
        BOOL hasPresentedSearch = wcpl_presentedSearchControllerStateFromController(weakController,
                                                                                     &presentedSearchController,
                                                                                     &active);
        WCPLLogInfo(@"[搜索] [FixFallback] 400ms hasPresentedSearch=%@ active=%@ class=%@",
                    hasPresentedSearch ? @"YES" : @"NO",
                    active ? @"YES" : @"NO",
                    presentedSearchController ? (NSStringFromClass([presentedSearchController class]) ?: @"unknown") : @"nil");
        if (!hasPresentedSearch || active) {
            return;
        }

        if (!wcpl_consumeSearchEnhanceRetryBudget(weakController, 1)) {
            return;
        }

        WCPLLogInfo(@"[搜索] [FixFallback] 检测到卡死态，执行 dismiss + 原生 onSearchButton");
        UIViewController *owner = (UIViewController *)weakController;
        UINavigationController *nav = owner.navigationController;
        id helper = wcpl_msgSearchHelperFromController(weakController);
        wcpl_resetSearchHelperRuntimeState(helper, @"[搜索] [FixFallback]");

        void (^retryNative)(void) = ^{
            if (![weakController respondsToSelector:@selector(onSearchButton:)]) {
                WCPLLogInfo(@"[搜索] [FixFallback] onSearchButton: 不可用");
                return;
            }
            wcpl_markForceFullSearchMode(weakController, YES);
            wcpl_forceSetSearchBusinessTypeToNormal(weakController, @"[搜索] [FixFallback] native前");
            wcpl_resetSpecialHelperForNativeFullSearch(weakController, @"[搜索] [FixFallback] native前");
            ((void (*)(id, SEL, id))objc_msgSend)(weakController, @selector(onSearchButton:), nil);
            WCPLLogInfo(@"[搜索] [FixFallback] 已触发原生 onSearchButton:");
        };

        if (owner.presentedViewController == presentedSearchController) {
            [owner dismissViewControllerAnimated:NO completion:retryNative];
            return;
        }
        if ([nav isKindOfClass:[UINavigationController class]] && nav.presentedViewController == presentedSearchController) {
            [nav dismissViewControllerAnimated:NO completion:retryNative];
            return;
        }

        [presentedSearchController dismissViewControllerAnimated:NO completion:retryNative];
    });
}

static void wcpl_resetSearchHelperRuntimeState(id helper, NSString *stage) {
    if (!helper) {
        return;
    }

    BOOL touched = NO;
    SEL setSearchingSel = @selector(setIsSearching:);
    if ([helper respondsToSelector:setSearchingSel]) {
        @try {
            ((void (*)(id, SEL, BOOL))objc_msgSend)(helper, setSearchingSel, NO);
            touched = YES;
        } @catch (__unused NSException *exception) {
        }
    }

    SEL setSearchingAltSel = @selector(setSearching:);
    if ([helper respondsToSelector:setSearchingAltSel]) {
        @try {
            ((void (*)(id, SEL, BOOL))objc_msgSend)(helper, setSearchingAltSel, NO);
            touched = YES;
        } @catch (__unused NSException *exception) {
        }
    }

    SEL setMSearchingSel = @selector(setM_bSearching:);
    if ([helper respondsToSelector:setMSearchingSel]) {
        @try {
            ((void (*)(id, SEL, BOOL))objc_msgSend)(helper, setMSearchingSel, NO);
            touched = YES;
        } @catch (__unused NSException *exception) {
        }
    }

    NSArray<NSString *> *keys = @[@"isSearching", @"m_bSearching"];
    for (NSString *key in keys) {
        @try {
            [helper setValue:@NO forKey:key];
            touched = YES;
        } @catch (__unused NSException *exception) {
        }
    }

    if (touched) {
        WCPLLogInfo(@"[搜索] %@ helper 运行态已重置为非搜索中 class=%@",
                    stage ?: @"repair",
                    NSStringFromClass([helper class]) ?: @"unknown");
    }
}

static void wcpl_schedulePostActivationTouchProbes(id controller) {
    if (!controller) {
        return;
    }

    const NSTimeInterval delays[] = {0.05, 0.15, 0.30, 0.60};
    const size_t count = sizeof(delays) / sizeof(delays[0]);
    id probeController = controller;
    for (size_t idx = 0; idx < count; idx++) {
        NSTimeInterval delay = delays[idx];
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            if (!probeController) {
                return;
            }
            NSString *stage = [NSString stringWithFormat:@"[搜索] post-active(%.0fms)", delay * 1000.0];
            wcpl_logSearchTouchProbe(probeController, stage);
            wcpl_logSearchHelperSnapshot(probeController, stage);
        });
    }
}

static BOOL wcpl_activateInPageSearchState(id controller) {
    if (!controller) {
        return NO;
    }

    SEL defineContextSel = @selector(setDefinesPresentationContext:);
    if ([controller respondsToSelector:defineContextSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(controller, defineContextSel, YES);
    }
    SEL provideContextSel = @selector(setProvidesPresentationContextTransitionStyle:);
    if ([controller respondsToSelector:provideContextSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(controller, provideContextSel, YES);
    }

    BOOL activated = NO;
    unsigned int businessType = wcpl_msgSearchBusinessType(controller);
    wcpl_logSearchHelperSnapshot(controller, @"[搜索] 激活前");
    if (businessType != 0) {
        WCPLLogInfo(@"[搜索] 激活前 businessType=%u，改写为0以走完整搜索", businessType);
    }
    businessType = 0;
    wcpl_forceSetSearchBusinessTypeToNormal(controller, @"[搜索] 激活前");

    SEL initSearchSel = @selector(initMsgSearchHelper:);
    if ([controller respondsToSelector:initSearchSel]) {
        ((void (*)(id, SEL, int))objc_msgSend)(controller, initSearchSel, (int)businessType);
        activated = YES;
    }

    id helper = wcpl_msgSearchHelperFromController(controller);
    if (!helper) {
        WCPLLogInfo(@"[搜索] helper 为空，businessType=%u", businessType);
        return activated;
    }

    if (wcpl_isSpecialMsgSearchHelper(helper)) {
        WCPLLogInfo(@"[搜索] 检测到 special helper=%@，执行标准 helper 重建",
                    NSStringFromClass([helper class]) ?: @"unknown");
        wcpl_tryFinalizeSpecialSearchHelper(controller, @"[搜索] 激活前收口");
        wcpl_forceSetSearchBusinessTypeToNormal(controller, @"[搜索] special->normal");
        if ([controller respondsToSelector:initSearchSel]) {
            ((void (*)(id, SEL, int))objc_msgSend)(controller, initSearchSel, 0);
        }
        helper = wcpl_msgSearchHelperFromController(controller);
        if (!helper || wcpl_isSpecialMsgSearchHelper(helper)) {
            WCPLLogInfo(@"[搜索] special helper 重建失败，helper=%@",
                        helper ? (NSStringFromClass([helper class]) ?: @"unknown") : @"nil");
            wcpl_logSearchHelperSnapshot(controller, @"[搜索] 激活失败快照");
            return NO;
        }
    }

    wcpl_enableFullSearchButtonsForHelper(helper);

    SEL setShowSel = @selector(setIsShowMsgSearch:);
    if ([controller respondsToSelector:setShowSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(controller, setShowSel, YES);
        activated = YES;
    }

    SEL loadSel = @selector(handleMsgViewSearchDidLoad);
    if ([controller respondsToSelector:loadSel]) {
        ((void (*)(id, SEL))objc_msgSend)(controller, loadSel);
        activated = YES;
    }

    BOOL helperStarted = wcpl_startSearchHelperSafely(helper);
    if (helperStarted) {
        activated = YES;
    }

    if (helperStarted || wcpl_isControllerShowingSearchUI(controller)) {
        wcpl_restoreSearchPresentationOnActivation(controller, @"[搜索] 激活后恢复");
    }
    wcpl_forceActivateSearchControllerIfNeeded(controller, helper, @"[搜索] 激活补偿");

    WCPLLogInfo(@"[搜索] 同页激活 businessType=%u helper=%@ started=%@",
                businessType,
                NSStringFromClass([helper class]),
                helperStarted ? @"YES" : @"NO");
    wcpl_logSearchHelperSnapshot(controller, @"[搜索] 激活后");
    if (activated) {
        wcpl_schedulePostActivationTouchProbes(controller);
        wcpl_scheduleNativeFallbackIfSearchStuck(controller);
    }

    return activated;
}

static BOOL wcpl_beginChatSearchTransition(id controller) {
    if (!controller) {
        return NO;
    }

    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchTransitioningKey);
    BOOL isTransitioning = [marker respondsToSelector:@selector(boolValue)] ? [marker boolValue] : NO;
    if (isTransitioning) {
        return NO;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchTransitioningKey, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return YES;
}

static void wcpl_endChatSearchTransition(id controller) {
    if (!controller) {
        return;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchTransitioningKey, @NO, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static BOOL wcpl_beginCancelTransition(id controller) {
    if (!controller) {
        return NO;
    }

    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchCancellingKey);
    BOOL isCancelling = [marker respondsToSelector:@selector(boolValue)] ? [marker boolValue] : NO;
    if (isCancelling) {
        return NO;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchCancellingKey, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return YES;
}

static void wcpl_endCancelTransition(id controller) {
    if (!controller) {
        return;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchCancellingKey, @NO, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static void wcpl_markForceDelayedExitRepair(id controller, BOOL enable) {
    if (!controller) {
        return;
    }
    objc_setAssociatedObject(controller, kWCPLChatSearchForceDelayedRepairKey, @(enable), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static BOOL wcpl_shouldForceDelayedExitRepair(id controller) {
    if (!controller) {
        return NO;
    }
    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchForceDelayedRepairKey);
    return [marker respondsToSelector:@selector(boolValue)] ? [marker boolValue] : NO;
}

static void wcpl_markInjectedChatSearchFlow(id controller, BOOL enable) {
    if (!controller) {
        return;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchInjectedFlowKey, @(enable), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static BOOL wcpl_isInjectedChatSearchFlow(id controller) {
    if (!controller) {
        return NO;
    }

    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchInjectedFlowKey);
    return [marker respondsToSelector:@selector(boolValue)] ? [marker boolValue] : NO;
}

static void wcpl_markForceFullSearchMode(id controller, BOOL enable) {
    if (!controller) {
        return;
    }
    objc_setAssociatedObject(controller, kWCPLChatSearchForceFullModeKey, @(enable), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static BOOL wcpl_shouldForceFullSearchMode(id controller) {
    if (!controller) {
        return NO;
    }
    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchForceFullModeKey);
    BOOL enabled = [marker respondsToSelector:@selector(boolValue)] ? [marker boolValue] : NO;
    if (!enabled) {
        return NO;
    }
    return wcpl_isTargetChatForSearchButton(controller);
}

static void wcpl_clearSearchEnhanceRetry(id controller) {
    if (!controller) {
        return;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchEnhanceRetryKey, @0, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static NSUInteger wcpl_searchEnhanceRetryCount(id controller) {
    if (!controller) {
        return 0;
    }

    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchEnhanceRetryKey);
    return [marker respondsToSelector:@selector(unsignedIntegerValue)] ? [marker unsignedIntegerValue] : 0;
}

static BOOL wcpl_consumeSearchEnhanceRetryBudget(id controller, NSUInteger maxRetry) {
    if (!controller) {
        return NO;
    }

    NSUInteger current = wcpl_searchEnhanceRetryCount(controller);
    if (current >= maxRetry) {
        return NO;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchEnhanceRetryKey, @(current + 1), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return YES;
}

static NSUInteger wcpl_nextExitCleanupEpoch(id controller) {
    if (!controller) {
        return 0;
    }

    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchExitCleanupEpochKey);
    NSUInteger epoch = [marker respondsToSelector:@selector(unsignedIntegerValue)] ? [marker unsignedIntegerValue] : 0;
    epoch += 1;
    objc_setAssociatedObject(controller, kWCPLChatSearchExitCleanupEpochKey, @(epoch), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return epoch;
}

static NSUInteger wcpl_currentExitCleanupEpoch(id controller) {
    if (!controller) {
        return 0;
    }
    id marker = objc_getAssociatedObject(controller, kWCPLChatSearchExitCleanupEpochKey);
    return [marker respondsToSelector:@selector(unsignedIntegerValue)] ? [marker unsignedIntegerValue] : 0;
}

static BOOL wcpl_shouldScheduleDelayedExitRepair(id controller) {
    if (!controller) {
        return NO;
    }
    if (wcpl_shouldForceDelayedExitRepair(controller)) {
        return YES;
    }
    if (wcpl_isControllerShowingSearchUI(controller)) {
        return YES;
    }
    if (wcpl_navTitleViewLooksSearchLike(controller)) {
        return YES;
    }
    if (wcpl_navBarHasSearchResidue(controller)) {
        return YES;
    }
    if (wcpl_controllerRootHasSearchResidue(controller)) {
        return YES;
    }
    return NO;
}

static void wcpl_scheduleExitSearchSnapshots(id controller, NSString *stagePrefix) {
    if (!controller) {
        return;
    }

    NSUInteger epoch = wcpl_nextExitCleanupEpoch(controller);
    NSString *prefix = [stagePrefix isKindOfClass:[NSString class]] && stagePrefix.length > 0 ? stagePrefix : @"[搜索] exit 收口快照";
    void (^runExitSnapshotNow)(void) = ^{
        if (wcpl_currentExitCleanupEpoch(controller) != epoch) {
            WCPLLogInfo(@"[搜索] %@(%@) 跳过：epoch 已过期(current=%lu, expect=%lu)",
                        prefix, @"0ms",
                        (unsigned long)wcpl_currentExitCleanupEpoch(controller),
                        (unsigned long)epoch);
            return;
        }
        wcpl_repairExitSearchNavState(controller, [NSString stringWithFormat:@"%@(%@)", prefix, @"0ms"], NO);

        if (!wcpl_shouldScheduleDelayedExitRepair(controller)) {
            WCPLLogInfo(@"[搜索] %@(%@) 跳过：0ms 已收口完成", prefix, @"500ms");
            wcpl_markForceDelayedExitRepair(controller, NO);
            return;
        }

        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.18 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            if (wcpl_currentExitCleanupEpoch(controller) != epoch) {
                WCPLLogInfo(@"[搜索] %@(%@) 跳过：epoch 已过期(current=%lu, expect=%lu)",
                            prefix, @"500ms",
                            (unsigned long)wcpl_currentExitCleanupEpoch(controller),
                            (unsigned long)epoch);
                return;
            }
            if (wcpl_isControllerShowingSearchUI(controller)) {
                WCPLLogInfo(@"[搜索] %@(%@) 跳过：已进入新搜索会话", prefix, @"500ms");
                return;
            }
            wcpl_repairExitSearchNavState(controller, [NSString stringWithFormat:@"%@(%@)", prefix, @"500ms"], YES);

            if (!wcpl_shouldScheduleDelayedExitRepair(controller)) {
                WCPLLogInfo(@"[搜索] %@(%@) 跳过：500ms 已收口完成", prefix, @"1200ms");
                return;
            }

            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.70 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                if (wcpl_currentExitCleanupEpoch(controller) != epoch) {
                    WCPLLogInfo(@"[搜索] %@(%@) 跳过：epoch 已过期(current=%lu, expect=%lu)",
                                prefix, @"1200ms",
                                (unsigned long)wcpl_currentExitCleanupEpoch(controller),
                                (unsigned long)epoch);
                    return;
                }
                if (wcpl_isControllerShowingSearchUI(controller)) {
                    WCPLLogInfo(@"[搜索] %@(%@) 跳过：已进入新搜索会话", prefix, @"1200ms");
                    return;
                }
                wcpl_repairExitSearchNavState(controller, [NSString stringWithFormat:@"%@(%@)", prefix, @"1200ms"], YES);
                wcpl_markForceDelayedExitRepair(controller, NO);
            });
        });
    };
    if ([NSThread isMainThread]) {
        runExitSnapshotNow();
    } else {
        dispatch_async(dispatch_get_main_queue(), runExitSnapshotNow);
    }
}

static void wcpl_finalizeExitSearchUIIfNeeded(id controller, NSString *stagePrefix) {
    if (!controller) {
        return;
    }

    SEL setShowSel = @selector(setIsShowMsgSearch:);
    if ([controller respondsToSelector:setShowSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(controller, setShowSel, NO);
    }

    id helper = wcpl_msgSearchHelperFromController(controller);
    wcpl_resetSearchHelperRuntimeState(helper, stagePrefix ?: @"[搜索] 退出收口");

    // `%orig` 的取消链路已经负责搜索 helper 的生命周期收口。
    // 这里若再主动调用 doExit/removeSearchVC/cancelSearch，容易触发重复销毁导致闪退。
    // 当前只做导航状态修复与延时兜底，不再强行驱动 helper 退出。

    wcpl_scheduleExitSearchSnapshots(controller, stagePrefix);
}

static BOOL wcpl_shouldFinalizeSearchDismiss(id controller) {
    if (!controller) {
        return NO;
    }

    if (wcpl_isInjectedChatSearchFlow(controller)) {
        return YES;
    }

    if (wcpl_isControllerShowingSearchUI(controller)) {
        return YES;
    }

    if (wcpl_navTitleViewLooksSearchLike(controller) || wcpl_navBarHasSearchResidue(controller)) {
        return YES;
    }

    return wcpl_controllerRootHasSearchResidue(controller);
}

static void wcpl_markChatSearchAutoPopOnCancel(id controller, BOOL enable) {
    if (!controller) {
        return;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchAutoPopOnCancelKey, @(enable), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static void wcpl_tryAutoPopAfterSearchCancel(id controller) {
    id marker = controller ? objc_getAssociatedObject(controller, kWCPLChatSearchAutoPopOnCancelKey) : nil;
    BOOL shouldPop = [marker respondsToSelector:@selector(boolValue)] ? [marker boolValue] : NO;
    if (!shouldPop) {
        return;
    }

    wcpl_markChatSearchAutoPopOnCancel(controller, NO);

    UINavigationController *navigationController = nil;
    if ([controller isKindOfClass:[UIViewController class]]) {
        navigationController = ((UIViewController *)controller).navigationController;
    }

    if (![navigationController isKindOfClass:[UINavigationController class]]) {
        return;
    }

    if (navigationController.topViewController == controller) {
        [navigationController popViewControllerAnimated:NO];
        WCPLLogInfo(@"[搜索] msgSearchBarCancel 后自动返回聊天页");
    }
}


static UIImage *wcpl_clownMenuIconImage(void) {

    static UIImage *icon = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSString *svg =
            @"<svg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 24 24'>"
            "<path d='M5 9.2c1.9-3 4.2-4.6 7-4.6s5.1 1.6 7 4.6' fill='none' stroke='#ECECF0' stroke-width='1.4' stroke-linecap='round'/>"
            "<circle cx='5' cy='9.3' r='1.15' fill='none' stroke='#ECECF0' stroke-width='1.1'/>"
            "<circle cx='19' cy='9.3' r='1.15' fill='none' stroke='#ECECF0' stroke-width='1.1'/>"
            "<path d='M8 10.5h8v2.2c0 2.5-1.8 4.5-4 4.5s-4-2-4-4.5z' fill='none' stroke='#ECECF0' stroke-width='1.2'/>"
            "<circle cx='10.2' cy='13' r='0.8' fill='#ECECF0'/>"
            "<circle cx='13.8' cy='13' r='0.8' fill='#ECECF0'/>"
            "<path d='M9.8 15.2c.6.6 1.4.9 2.2.9s1.6-.3 2.2-.9' fill='none' stroke='#ECECF0' stroke-width='1.1' stroke-linecap='round'/>"
            "</svg>";
        NSData *data = [svg dataUsingEncoding:NSUTF8StringEncoding];
        id image = nil;
        Class themeProxyClass = objc_getClass("WAThemeProxy");
        SEL svgFromDataSel = @selector(svgImageFromData:);
        if (themeProxyClass && [themeProxyClass respondsToSelector:svgFromDataSel]) {
            @try {
                image = ((id (*)(id, SEL, id))objc_msgSend)(themeProxyClass, svgFromDataSel, data);
            } @catch (__unused NSException *exception) {
                image = nil;
            }
        }
        if ([image isKindOfClass:[UIImage class]]) {
            icon = (UIImage *)image;
        }

        if (!icon && [UIImage respondsToSelector:@selector(systemImageNamed:)]) {
            UIImage *symbol = nil;
            if ([UIImage respondsToSelector:@selector(systemImageNamed:withConfiguration:)]) {
                UIImageSymbolConfiguration *config = [UIImageSymbolConfiguration configurationWithPointSize:16 weight:UIImageSymbolWeightRegular scale:UIImageSymbolScaleMedium];
                symbol = [UIImage systemImageNamed:@"theatermasks" withConfiguration:config];
            }
            if (!symbol && [UIImage respondsToSelector:@selector(systemImageNamed:)]) {
                symbol = [UIImage systemImageNamed:@"theatermasks"];
            }
            if (!symbol && [UIImage respondsToSelector:@selector(systemImageNamed:)]) {
                symbol = [UIImage systemImageNamed:@"face.smiling"];
            }
            if (symbol) {
                icon = symbol;
            }
        }

        if (!icon) {
            CGSize size = CGSizeMake(20.0, 20.0);
            UIGraphicsBeginImageContextWithOptions(size, NO, 0);
            [@"🤡" drawInRect:CGRectMake(0, 0, size.width, size.height)
                withAttributes:@{ NSFontAttributeName : [UIFont systemFontOfSize:17.0] }];
            UIImage *fallback = UIGraphicsGetImageFromCurrentImageContext();
            UIGraphicsEndImageContext();
            if ([fallback isKindOfClass:[UIImage class]]) {
                icon = fallback;
            }
        }

        if (icon && [icon respondsToSelector:@selector(imageWithRenderingMode:)]) {
            if ([icon respondsToSelector:@selector(imageWithTintColor:)]) {
                @try {
                    icon = [icon imageWithTintColor:[UIColor colorWithWhite:0.92 alpha:1.0]];
                } @catch (__unused NSException *exception) {
                }
            }
            icon = [icon imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
        }
    });
    return icon;
}

static id wcpl_createClownMenuItem(Class menuItemClass, id cell, SEL action) {
    if (!menuItemClass || !cell || !action) {
        return nil;
    }

    NSString *title = @"小丑";
    UIImage *icon = wcpl_clownMenuIconImage();
    id menuItem = nil;

    if (icon && [menuItemClass instancesRespondToSelector:@selector(initWithTitle:icon:target:action:)]) {
        @try {
            menuItem = [[menuItemClass alloc] initWithTitle:title icon:icon target:cell action:action];
        } @catch (__unused NSException *exception) {
            menuItem = nil;
        }
    }

    if (!menuItem && [menuItemClass instancesRespondToSelector:@selector(initWithTitle:target:action:)]) {
        @try {
            menuItem = [[menuItemClass alloc] initWithTitle:title target:cell action:action];
        } @catch (__unused NSException *exception) {
            menuItem = nil;
        }
    }

    if (menuItem && icon) {
        wcpl_applyMenuItemIcon(menuItem, icon);
    }

    return menuItem;
}

static NSMutableDictionary<NSString *, NSString *> *wcpl_localReplaceMapForController(id controller, BOOL createIfNeeded) {
    if (!controller) return nil;
    NSMutableDictionary *map = objc_getAssociatedObject(controller, kWCPLLocalReplaceMapKey);
    if (!map && createIfNeeded) {
        map = [NSMutableDictionary dictionary];
        objc_setAssociatedObject(controller, kWCPLLocalReplaceMapKey, map, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return map;
}

static NSString *wcpl_messageKey(CMessageWrap *msgWrap) {
    if (!msgWrap) return nil;
    NSString *fromUser = msgWrap.m_nsFromUsr ?: @"";
    NSString *toUser = msgWrap.m_nsToUsr ?: @"";
    unsigned int localId = msgWrap.m_uiMesLocalID;
    long long svrId = msgWrap.m_n64MesSvrID;
    if (localId == 0 && svrId == 0) {
        return [NSString stringWithFormat:@"%@|%@|%p", fromUser, toUser, msgWrap];
    }
    return [NSString stringWithFormat:@"%@|%@|%u|%lld", fromUser, toUser, localId, svrId];
}

static BOOL wcpl_isPlainTextMessage(CMessageWrap *msgWrap) {
    return (msgWrap && msgWrap.m_uiMessageType == 1);
}

static BOOL wcpl_isQuoteReplyMessage(CMessageWrap *msgWrap) {
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

static BOOL wcpl_isTransferMessage(CMessageWrap *msgWrap) {
    if (!msgWrap || msgWrap.m_uiMessageType != 49) {
        return NO;
    }

    NSString *content = msgWrap.m_nsContent;
    BOOL hasWCPayInfoXML = [content isKindOfClass:[NSString class]] &&
        [content rangeOfString:@"<wcpayinfo" options:NSCaseInsensitiveSearch].location != NSNotFound;

    BOOL hasTransferSubtype = NO;
    BOOL hasTransferId = NO;
    if (hasWCPayInfoXML) {
        hasTransferSubtype =
            ([content rangeOfString:@"<paysubtype>3</paysubtype>" options:NSCaseInsensitiveSearch].location != NSNotFound) ||
            ([content rangeOfString:@"<paysubtype>4</paysubtype>" options:NSCaseInsensitiveSearch].location != NSNotFound) ||
            ([content rangeOfString:@"<paysubtype><![CDATA[3]]></paysubtype>" options:NSCaseInsensitiveSearch].location != NSNotFound) ||
            ([content rangeOfString:@"<paysubtype><![CDATA[4]]></paysubtype>" options:NSCaseInsensitiveSearch].location != NSNotFound);
        hasTransferId = [content rangeOfString:@"<transferid" options:NSCaseInsensitiveSearch].location != NSNotFound;
    }

    @try {
        if ([msgWrap respondsToSelector:@selector(parseWCPayInfoItemIfNeed)]) {
            [msgWrap parseWCPayInfoItemIfNeed];
        }
        id payInfo = nil;
        if ([msgWrap respondsToSelector:@selector(m_oWCPayInfoItem)]) {
            payInfo = msgWrap.m_oWCPayInfoItem;
        }
        if (payInfo) {
            NSInteger subType = 0;
            @try {
                id value = [payInfo valueForKey:@"m_uiPaySubType"];
                if ([value respondsToSelector:@selector(integerValue)]) {
                    subType = [value integerValue];
                }
            } @catch (__unused NSException *exception) {
            }

            if (subType == 3 || subType == 4) {
                hasTransferSubtype = YES;
            }

            NSString *transferID = nil;
            @try {
                id value = [payInfo valueForKey:@"m_nsTransferID"];
                if ([value isKindOfClass:[NSString class]]) {
                    transferID = (NSString *)value;
                }
            } @catch (__unused NSException *exception) {
            }
            if (transferID.length > 0) {
                hasTransferId = YES;
            }
        }
    } @catch (__unused NSException *exception) {
    }

    if (hasTransferSubtype || hasTransferId) {
        return YES;
    }

    return hasWCPayInfoXML &&
           [content rangeOfString:@"<feedesc" options:NSCaseInsensitiveSearch].location != NSNotFound;
}

static NSString *wcpl_regexEscapedReplacementString(NSString *text) {
    if (![text isKindOfClass:[NSString class]]) {
        return @"";
    }
    NSString *result = [text stringByReplacingOccurrencesOfString:@"\\" withString:@"\\\\"];
    result = [result stringByReplacingOccurrencesOfString:@"$" withString:@"\\$"];
    return result;
}

static NSString *wcpl_extractTransferAmountFromXML(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return nil;
    }

    NSArray<NSString *> *patterns = @[
        @"<feedesc><!\\[CDATA\\[(.*?)\\]\\]></feedesc>",
        @"<feedesc>(.*?)</feedesc>",
    ];

    for (NSString *pattern in patterns) {
        NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:pattern
                                                                               options:NSRegularExpressionDotMatchesLineSeparators | NSRegularExpressionCaseInsensitive
                                                                                 error:nil];
        NSTextCheckingResult *result = [regex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
        if (!result || result.numberOfRanges < 2) {
            continue;
        }
        NSString *value = [content substringWithRange:[result rangeAtIndex:1]];
        NSString *trimmed = wcpl_trimString(value);
        if (trimmed.length > 0) {
            return trimmed;
        }
    }

    return nil;
}

static NSString *wcpl_normalizeTransferAmountText(NSString *text) {
    NSString *trimmed = wcpl_trimString(text);
    if (trimmed.length == 0) {
        return nil;
    }
    if ([trimmed hasPrefix:@"￥"] || [trimmed hasPrefix:@"¥"] || [trimmed hasPrefix:@"$"]) {
        return trimmed;
    }

    BOOL looksNumeric = YES;
    NSCharacterSet *allowed = [NSCharacterSet characterSetWithCharactersInString:@"0123456789.,"];
    for (NSUInteger index = 0; index < trimmed.length; index++) {
        unichar ch = [trimmed characterAtIndex:index];
        if (![allowed characterIsMember:ch]) {
            looksNumeric = NO;
            break;
        }
    }

    if (looksNumeric) {
        return [@"￥" stringByAppendingString:trimmed];
    }
    return trimmed;
}

static NSString *wcpl_transferXMLByReplacingAmount(NSString *content, NSString *amount) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return nil;
    }

    NSString *normalized = wcpl_normalizeTransferAmountText(amount);
    if (normalized.length == 0) {
        return nil;
    }

    NSString *safeCDATA = [normalized stringByReplacingOccurrencesOfString:@"]]>" withString:@"] ]>"];
    NSString *escapedCDATA = wcpl_regexEscapedReplacementString(safeCDATA);
    NSString *escapedPlain = wcpl_regexEscapedReplacementString(normalized);

    NSString *result = [content copy];
    BOOL replaced = NO;

    NSArray<NSDictionary<NSString *, NSString *> *> *rules = @[
        @{ @"pattern": @"<feedesc><!\\[CDATA\\[(.*?)\\]\\]></feedesc>", @"template": [NSString stringWithFormat:@"<feedesc><![CDATA[%@]]></feedesc>", escapedCDATA] },
        @{ @"pattern": @"<feedesc>(.*?)</feedesc>", @"template": [NSString stringWithFormat:@"<feedesc>%@</feedesc>", escapedPlain] },
        @{ @"pattern": @"<receiverdesc><!\\[CDATA\\[(.*?)\\]\\]></receiverdesc>", @"template": [NSString stringWithFormat:@"<receiverdesc><![CDATA[%@]]></receiverdesc>", escapedCDATA] },
        @{ @"pattern": @"<receiverdesc>(.*?)</receiverdesc>", @"template": [NSString stringWithFormat:@"<receiverdesc>%@</receiverdesc>", escapedPlain] },
        @{ @"pattern": @"<senderdesc><!\\[CDATA\\[(.*?)\\]\\]></senderdesc>", @"template": [NSString stringWithFormat:@"<senderdesc><![CDATA[%@]]></senderdesc>", escapedCDATA] },
        @{ @"pattern": @"<senderdesc>(.*?)</senderdesc>", @"template": [NSString stringWithFormat:@"<senderdesc>%@</senderdesc>", escapedPlain] },
    ];

    for (NSDictionary<NSString *, NSString *> *rule in rules) {
        NSString *pattern = rule[@"pattern"];
        NSString *replacementTemplate = rule[@"template"];
        NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:pattern
                                                                               options:NSRegularExpressionDotMatchesLineSeparators | NSRegularExpressionCaseInsensitive
                                                                                 error:nil];
        if (!regex) {
            continue;
        }
        NSUInteger count = [regex numberOfMatchesInString:result options:0 range:NSMakeRange(0, result.length)];
        if (count == 0) {
            continue;
        }
        replaced = YES;
        result = [regex stringByReplacingMatchesInString:result options:0 range:NSMakeRange(0, result.length) withTemplate:replacementTemplate];
    }

    return replaced ? result : nil;
}

static void wcpl_applyTransferAmountToPayInfo(CMessageWrap *msgWrap, NSString *amount) {
    if (!msgWrap) {
        return;
    }
    NSString *normalized = wcpl_normalizeTransferAmountText(amount);
    if (normalized.length == 0) {
        return;
    }

    @try {
        if ([msgWrap respondsToSelector:@selector(parseWCPayInfoItemIfNeed)]) {
            [msgWrap parseWCPayInfoItemIfNeed];
        }
        id payInfo = nil;
        if ([msgWrap respondsToSelector:@selector(m_oWCPayInfoItem)]) {
            payInfo = msgWrap.m_oWCPayInfoItem;
        }
        if (!payInfo) {
            return;
        }

        @try {
            [payInfo setValue:normalized forKey:@"m_nsFeeDesc"];
        } @catch (__unused NSException *exception) {
        }
        @try {
            [payInfo setValue:normalized forKey:@"m_receiverDesc"];
        } @catch (__unused NSException *exception) {
        }
        @try {
            [payInfo setValue:normalized forKey:@"m_senderDesc"];
        } @catch (__unused NSException *exception) {
        }
    } @catch (__unused NSException *exception) {
    }
}

static BOOL wcpl_isClownSupportedMessage(CMessageWrap *msgWrap) {
    return wcpl_isPlainTextMessage(msgWrap) || wcpl_isQuoteReplyMessage(msgWrap) || wcpl_isTransferMessage(msgWrap);
}

static NSString *wcpl_extractQuoteTitleFromXML(NSString *content) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return nil;
    }

    NSArray<NSString *> *patterns = @[
        @"<title><!\\[CDATA\\[(.*?)\\]\\]></title>",
        @"<title>(.*?)</title>"
    ];

    for (NSString *pattern in patterns) {
        NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:pattern options:NSRegularExpressionDotMatchesLineSeparators error:nil];
        NSTextCheckingResult *result = [regex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
        if (!result || result.numberOfRanges < 2) {
            continue;
        }
        NSString *title = [content substringWithRange:[result rangeAtIndex:1]];
        NSString *trimmed = wcpl_trimString(title);
        if (trimmed.length > 0) {
            return trimmed;
        }
    }

    return nil;
}

static NSString *wcpl_quoteXMLByReplacingTitle(NSString *content, NSString *title) {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) {
        return nil;
    }

    NSString *trimmed = wcpl_trimString(title);
    if (trimmed.length == 0) {
        return nil;
    }

    NSString *safeCDATA = [trimmed stringByReplacingOccurrencesOfString:@"]]>" withString:@"] ]>"];

    NSRegularExpression *cdataRegex = [NSRegularExpression regularExpressionWithPattern:@"<title><!\\[CDATA\\[(.*?)\\]\\]></title>"
                                                                                options:NSRegularExpressionDotMatchesLineSeparators
                                                                                  error:nil];
    NSTextCheckingResult *cdataMatch = [cdataRegex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (cdataMatch.numberOfRanges >= 2) {
        NSRange titleRange = [cdataMatch rangeAtIndex:1];
        if (titleRange.location != NSNotFound) {
            return [content stringByReplacingCharactersInRange:titleRange withString:safeCDATA];
        }
    }

    NSRegularExpression *plainRegex = [NSRegularExpression regularExpressionWithPattern:@"<title>(.*?)</title>"
                                                                                options:NSRegularExpressionDotMatchesLineSeparators
                                                                                  error:nil];
    NSTextCheckingResult *plainMatch = [plainRegex firstMatchInString:content options:0 range:NSMakeRange(0, content.length)];
    if (plainMatch.numberOfRanges >= 2) {
        NSRange titleRange = [plainMatch rangeAtIndex:1];
        if (titleRange.location != NSNotFound) {
            return [content stringByReplacingCharactersInRange:titleRange withString:trimmed];
        }
    }

    return nil;
}

static NSString *wcpl_displayTextForMessage(CMessageWrap *msgWrap, id cell) {
    if (!msgWrap) {
        return nil;
    }

    if (wcpl_isPlainTextMessage(msgWrap)) {
        return msgWrap.m_nsContent ?: @"";
    }

    if (wcpl_isTransferMessage(msgWrap)) {
        NSString *amount = wcpl_extractTransferAmountFromXML(msgWrap.m_nsContent);
        if (amount.length > 0) {
            return amount;
        }

        @try {
            if ([msgWrap respondsToSelector:@selector(parseWCPayInfoItemIfNeed)]) {
                [msgWrap parseWCPayInfoItemIfNeed];
            }
            id payInfo = nil;
            if ([msgWrap respondsToSelector:@selector(m_oWCPayInfoItem)]) {
                payInfo = msgWrap.m_oWCPayInfoItem;
            }
            if (payInfo && [payInfo respondsToSelector:@selector(m_nsFeeDesc)]) {
                id feeDesc = ((id (*)(id, SEL))objc_msgSend)(payInfo, @selector(m_nsFeeDesc));
                if ([feeDesc isKindOfClass:[NSString class]]) {
                    NSString *trimmed = wcpl_trimString((NSString *)feeDesc);
                    if (trimmed.length > 0) {
                        return trimmed;
                    }
                }
            }
        } @catch (__unused NSException *exception) {
        }

        return wcpl_trimString(msgWrap.m_nsContent);
    }

    if (!wcpl_isQuoteReplyMessage(msgWrap)) {
        return nil;
    }

    if (cell && [cell respondsToSelector:@selector(viewModel)]) {
        @try {
            id viewModel = [cell viewModel];
            if (viewModel && [viewModel respondsToSelector:@selector(contentText)]) {
                id text = ((id (*)(id, SEL))objc_msgSend)(viewModel, @selector(contentText));
                if ([text isKindOfClass:[NSString class]]) {
                    NSString *trimmed = wcpl_trimString((NSString *)text);
                    if (trimmed.length > 0) {
                        return trimmed;
                    }
                }
            }
        } @catch (__unused NSException *exception) {
        }
    }

    NSString *title = wcpl_extractQuoteTitleFromXML(msgWrap.m_nsContent);
    if (title.length > 0) {
        return title;
    }

    return wcpl_trimString(msgWrap.m_nsContent);
}

static void wcpl_applyMenuItemIcon(id menuItem, UIImage *icon) {
    if (!menuItem || !icon) {
        return;
    }

    UIImage *finalIcon = icon;
    if ([finalIcon respondsToSelector:@selector(imageWithTintColor:)]) {
        @try {
            finalIcon = [finalIcon imageWithTintColor:[UIColor colorWithWhite:0.92 alpha:1.0]];
        } @catch (__unused NSException *exception) {
        }
    }
    if ([finalIcon respondsToSelector:@selector(imageWithRenderingMode:)]) {
        finalIcon = [finalIcon imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    }

    if ([menuItem respondsToSelector:@selector(setIconImage:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(menuItem, @selector(setIconImage:), finalIcon);
            return;
        } @catch (__unused NSException *exception) {
        }
    }

    @try {
        [menuItem setValue:finalIcon forKey:@"iconImage"];
    } @catch (__unused NSException *exception) {
    }
}

static CMessageWrap *wcpl_messageWrapFromCell(id cell) {
    if (!cell) return nil;
    if ([cell respondsToSelector:@selector(getCurrentMessageWrap)]) {
        @try {
            id wrap = [cell getCurrentMessageWrap];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) {
        }
    }
    if ([cell respondsToSelector:@selector(getMediaWrap)]) {
        @try {
            id wrap = [cell getMediaWrap];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) {
        }
    }
    if ([cell respondsToSelector:@selector(viewModel)]) {
        id viewModel = [cell viewModel];
        if ([viewModel respondsToSelector:@selector(messageWrap)]) {
            @try {
                return [viewModel messageWrap];
            } @catch (__unused NSException *exception) {
            }
        }
        if ([viewModel respondsToSelector:@selector(msgWrap)]) {
            @try {
                id wrap = ((id (*)(id, SEL))objc_msgSend)(viewModel, @selector(msgWrap));
                if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                    return (CMessageWrap *)wrap;
                }
            } @catch (__unused NSException *exception) {
            }
        }
        @try {
            id wrap = [viewModel valueForKey:@"messageWrap"];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) {
        }
        @try {
            id wrap = [viewModel valueForKey:@"msgWrap"];
            if ([wrap isKindOfClass:%c(CMessageWrap)]) {
                return (CMessageWrap *)wrap;
            }
        } @catch (__unused NSException *exception) {
        }
    }
    return nil;
}

static void wcpl_setLocalReplaceText(id controller, CMessageWrap *msgWrap, NSString *text) {
    if (!controller || !msgWrap) return;
    NSString *key = wcpl_messageKey(msgWrap);
    if (key.length == 0) return;
    NSMutableDictionary *map = wcpl_localReplaceMapForController(controller, YES);
    if (!map) return;
    if (text.length > 0) {
        map[key] = text;
    } else {
        [map removeObjectForKey:key];
    }
}

static NSString *wcpl_localReplaceText(id controller, CMessageWrap *msgWrap) {
    if (!controller || !msgWrap) return nil;
    NSString *key = wcpl_messageKey(msgWrap);
    if (key.length == 0) return nil;
    NSDictionary *map = wcpl_localReplaceMapForController(controller, NO);
    return map[key];
}

static NSString *wcpl_originalContentForMessageWrap(CMessageWrap *msgWrap) {
    if (!msgWrap) return nil;
    id stored = objc_getAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey);
    return [stored isKindOfClass:[NSString class]] ? (NSString *)stored : nil;
}

static BOOL wcpl_syncLocalReplaceContent(id controller, CMessageWrap *msgWrap) {
    if (!controller || !msgWrap) return NO;
    if (!wcpl_isClownSupportedMessage(msgWrap)) return NO;

    NSString *replaceText = wcpl_localReplaceText(controller, msgWrap);
    NSString *originText = msgWrap.m_nsContent ?: @"";
    NSString *storedOrigin = wcpl_originalContentForMessageWrap(msgWrap);

    BOOL isPlainText = wcpl_isPlainTextMessage(msgWrap);
    BOOL isQuoteReply = wcpl_isQuoteReplyMessage(msgWrap);
    BOOL isTransfer = wcpl_isTransferMessage(msgWrap);

    if (replaceText.length > 0) {
        if (isPlainText) {
            if (!storedOrigin && ![originText isEqualToString:replaceText]) {
                objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, originText, OBJC_ASSOCIATION_COPY_NONATOMIC);
            }
            if (![originText isEqualToString:replaceText]) {
                msgWrap.m_nsContent = replaceText;
                return YES;
            }
            return NO;
        }

        if (isQuoteReply) {
            NSString *replacedContent = wcpl_quoteXMLByReplacingTitle(originText, replaceText);
            if (replacedContent.length > 0 && ![originText isEqualToString:replacedContent]) {
                if (!storedOrigin) {
                    objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, originText, OBJC_ASSOCIATION_COPY_NONATOMIC);
                }
                msgWrap.m_nsContent = replacedContent;
                return YES;
            }
        }

        if (isTransfer) {
            NSString *normalizedAmount = wcpl_normalizeTransferAmountText(replaceText);
            NSString *replacedContent = wcpl_transferXMLByReplacingAmount(originText, normalizedAmount);
            if (replacedContent.length > 0 && ![originText isEqualToString:replacedContent]) {
                if (!storedOrigin) {
                    objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, originText, OBJC_ASSOCIATION_COPY_NONATOMIC);
                }
                msgWrap.m_nsContent = replacedContent;
                wcpl_applyTransferAmountToPayInfo(msgWrap, normalizedAmount);
                return YES;
            }
            wcpl_applyTransferAmountToPayInfo(msgWrap, normalizedAmount);
        }

        return NO;
    }

    if (storedOrigin) {
        if (![originText isEqualToString:storedOrigin]) {
            msgWrap.m_nsContent = storedOrigin;
            if (isTransfer) {
                wcpl_applyTransferAmountToPayInfo(msgWrap, wcpl_extractTransferAmountFromXML(storedOrigin));
            }
        }
        objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, nil, OBJC_ASSOCIATION_ASSIGN);
        return YES;
    }
    return NO;
}

static void wcpl_clearLocalReplaceMap(id controller) {
    NSMutableDictionary *map = wcpl_localReplaceMapForController(controller, NO);
    [map removeAllObjects];
}

static UIViewController *wcpl_viewControllerFromCell(id cell) {
    if (!cell) {
        return nil;
    }

    id viewController = nil;
    if ([cell respondsToSelector:@selector(getViewController)]) {
        @try {
            viewController = [cell getViewController];
        } @catch (__unused NSException *exception) {
            viewController = nil;
        }
    }

    if (!viewController && [cell respondsToSelector:@selector(wchook_findChatViewController)]) {
        @try {
            viewController = ((id (*)(id, SEL))objc_msgSend)(cell, @selector(wchook_findChatViewController));
        } @catch (__unused NSException *exception) {
            viewController = nil;
        }
    }

    if (!viewController && [cell isKindOfClass:[UIView class]]) {
        UIResponder *responder = [(UIView *)cell nextResponder];
        while (responder) {
            if ([responder isKindOfClass:[UIViewController class]]) {
                viewController = (UIViewController *)responder;
                break;
            }
            responder = [responder nextResponder];
        }
    }

    if (![viewController isKindOfClass:[UIViewController class]]) {
        return nil;
    }
    return (UIViewController *)viewController;
}

static UIViewController *wcpl_viewControllerFromResponderChain(UIResponder *responder) {
    UIResponder *cursor = responder;
    while (cursor) {
        if ([cursor isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)cursor;
        }
        if (![cursor respondsToSelector:@selector(nextResponder)]) {
            break;
        }
        cursor = [cursor nextResponder];
    }
    return nil;
}

static BOOL wcpl_viewHasSearchLikeAncestor(UIView *view) {
    if (![view isKindOfClass:[UIView class]]) {
        return NO;
    }
    UIView *cursor = view;
    NSUInteger depth = 0;
    while ([cursor isKindOfClass:[UIView class]] && depth < kWCPLSearchTreeMaxDepth) {
        if ([cursor isKindOfClass:[UISearchBar class]] ||
            [cursor isKindOfClass:[UITextField class]] ||
            wcpl_viewLooksSearchLike(cursor)) {
            return YES;
        }
        cursor = cursor.superview;
        depth++;
    }
    return NO;
}

static NSArray *wcpl_injectClownMenuItemIfNeeded(id cell, NSArray *items) {
    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(cell);
    if (!wcpl_isClownSupportedMessage(msgWrap)) {
        return items;
    }

    Class menuItemClass = objc_getClass("MMMenuItem");
    if (!menuItemClass) {
        return items;
    }

    SEL action = @selector(wcpl_handleLocalReplaceMenuItem:);
    NSMutableArray *mutableItems = items ? [items mutableCopy] : [NSMutableArray array];
    for (id item in mutableItems) {
        if ([item isKindOfClass:menuItemClass] && [item respondsToSelector:@selector(action)]) {
            @try {
                SEL itemAction = ((SEL (*)(id, SEL))objc_msgSend)(item, @selector(action));
                if (itemAction == action) {
                    return mutableItems;
                }
            } @catch (__unused NSException *exception) {
            }
        }
    }

    id menuItem = wcpl_createClownMenuItem(menuItemClass, cell, action);
    if (menuItem) {
        [mutableItems addObject:menuItem];
        WCPLLogDebug(@"[小丑] 注入长按菜单: type=%u class=%@", msgWrap.m_uiMessageType, NSStringFromClass([cell class]));
    }

    return mutableItems;
}

static void wcpl_reloadCellAfterLocalReplace(id viewController, CMessageWrap *msgWrap, id cell) {
    if (!viewController || !msgWrap) {
        return;
    }

    if ([viewController respondsToSelector:@selector(clearNodeLayoutCache)]) {
        @try {
            [(BaseMsgContentViewController *)viewController clearNodeLayoutCache];
        } @catch (__unused NSException *exception) {
        }
    }
    if ([viewController respondsToSelector:@selector(reloadNodeWithMessageWrap:)]) {
        @try {
            [viewController reloadNodeWithMessageWrap:msgWrap];
        } @catch (__unused NSException *exception) {
        }
    }
    if ([viewController respondsToSelector:@selector(reloadVisibleNodeWithCellView:)]) {
        @try {
            [(BaseMsgContentViewController *)viewController reloadVisibleNodeWithCellView:cell];
        } @catch (__unused NSException *exception) {
        }
    }

    dispatch_async(dispatch_get_main_queue(), ^{
        if (![viewController respondsToSelector:@selector(getMsgTableView)]) return;
        UITableView *tableView = nil;
        @try {
            id tv = [(BaseMsgContentViewController *)viewController getMsgTableView];
            if ([tv isKindOfClass:[UITableView class]]) {
                tableView = (UITableView *)tv;
            }
        } @catch (__unused NSException *exception) {
            tableView = nil;
        }
        if (!tableView) return;
        [UIView performWithoutAnimation:^{
            @try {
                [tableView beginUpdates];
                [tableView endUpdates];
            } @catch (__unused NSException *exception) {
            }
        }];
    });
}

static void wcpl_presentClownEditorForCell(id cell) {
    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(cell);
    if (!wcpl_isClownSupportedMessage(msgWrap)) {
        return;
    }

    UIViewController *viewController = wcpl_viewControllerFromCell(cell);
    if (!viewController || ![viewController respondsToSelector:@selector(presentViewController:animated:completion:)]) {
        return;
    }

    BOOL isPlainText = wcpl_isPlainTextMessage(msgWrap);
    BOOL isTransfer = wcpl_isTransferMessage(msgWrap);

    NSString *originText = wcpl_displayTextForMessage(msgWrap, cell);
    if (originText.length == 0) {
        originText = msgWrap.m_nsContent ?: @"";
    }

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"小丑"
                                                                   message:@"仅在当前聊天页面生效，离开后自动恢复"
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
        textField.text = originText;
        textField.clearButtonMode = UITextFieldViewModeWhileEditing;
        if (isTransfer) {
            textField.keyboardType = UIKeyboardTypeDecimalPad;
            textField.placeholder = @"例如：88.88";
        }
    }];

    __weak id weakCell = cell;
    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];
    UIAlertAction *confirmAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *action) {
        __strong id strongCell = weakCell;
        if (!strongCell) {
            return;
        }

        NSString *input = alert.textFields.firstObject.text ?: @"";
        NSString *trimmed = [input stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (isTransfer) {
            trimmed = wcpl_normalizeTransferAmountText(trimmed) ?: @"";
        }

        if (isPlainText && trimmed.length > 0 && !wcpl_originalContentForMessageWrap(msgWrap)) {
            NSString *savedOriginText = msgWrap.m_nsContent ?: @"";
            objc_setAssociatedObject(msgWrap, kWCPLLocalReplaceOriginKey, savedOriginText, OBJC_ASSOCIATION_COPY_NONATOMIC);
        }

        wcpl_setLocalReplaceText(viewController, msgWrap, trimmed);
        if (wcpl_isClownSupportedMessage(msgWrap)) {
            wcpl_syncLocalReplaceContent(viewController, msgWrap);
        }

        WCPLLogInfo(@"[小丑] 应用替换: type=%u len=%lu", msgWrap.m_uiMessageType, (unsigned long)trimmed.length);
        wcpl_reloadCellAfterLocalReplace(viewController, msgWrap, strongCell);
    }];

    [alert addAction:cancelAction];
    [alert addAction:confirmAction];
    [viewController presentViewController:alert animated:YES completion:nil];
}

%hook SyncCmdHandler

- (_Bool)BatchAddMsg:(_Bool)arg1 ShowPush:(_Bool)arg2 {
    id handler = (id)self;
    NSMutableArray *msgList = [handler valueForKey:@"m_arrMsgList"];
    NSUInteger originCount = [msgList isKindOfClass:[NSArray class]] ? ((NSArray *)msgList).count : 0;
    NSMutableArray *msgListResult = [WCPLFuncService filtMessageFromMsgList:msgList];
    NSUInteger filteredCount = [msgListResult isKindOfClass:[NSArray class]] ? ((NSArray *)msgListResult).count : 0;
    [handler setValue:msgListResult forKey:@"m_arrMsgList"];

    BOOL showPush = arg2;
    if (originCount > 0 && filteredCount == 0) {
        showPush = NO;
    }

    return %orig(arg1, showPush);
}

%end

%hook CMessageMgr

- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 FromSequence:(unsigned int)arg6 {
    id result = %orig;

    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;

    if (!config.userIgnoreEnable) {
        return result;
    }

    if ([result isKindOfClass:[NSArray class]] || [result isKindOfClass:[NSMutableArray class]]) {
        return [WCPLFuncService filtMessageFromMsgList:(NSMutableArray *)result];
    }

    return result;
}

%end

%hook BaseMsgContentViewController

- (void)viewDidLoad {
    %orig;
    wcpl_updateChatSearchButtonForViewController(self);
}

- (void)viewWillAppear:(_Bool)arg1 {
    %orig;

    if (wcpl_isInjectedChatSearchFlow(self) || wcpl_isControllerShowingSearchUI(self)) {
        return;
    }

    BOOL dismissed = wcpl_forceDismissSearchPresentationController(self, @"[搜索] viewWillAppear 入场清理");
    BOOL disabled = wcpl_forceDisableSearchPresentationOverlay(self, @"[搜索] viewWillAppear 入场清理");
    if (dismissed || disabled) {
        WCPLLogInfo(@"[搜索] viewWillAppear 检测到僵尸搜索层 dismissed=%@ disabled=%@",
                    dismissed ? @"YES" : @"NO",
                    disabled ? @"YES" : @"NO");
        wcpl_repairExitSearchNavState(self, @"[搜索] viewWillAppear 入场收口", NO);
    }
}

- (void)viewDidAppear:(_Bool)arg1 {
    %orig;

    BOOL shouldEntryRepair = !wcpl_isInjectedChatSearchFlow(self) && !wcpl_isControllerShowingSearchUI(self);
    BOOL dismissedOnAppear = NO;
    BOOL disabledOnAppear = NO;
    if (shouldEntryRepair) {
        dismissedOnAppear = wcpl_forceDismissSearchPresentationController(self, @"[搜索] viewDidAppear 入场清理");
        disabledOnAppear = wcpl_forceDisableSearchPresentationOverlay(self, @"[搜索] viewDidAppear 入场清理");
    }

    if (!wcpl_isInjectedChatSearchFlow(self) &&
        (dismissedOnAppear ||
         disabledOnAppear ||
         wcpl_navTitleViewLooksSearchLike(self) ||
         wcpl_navBarHasSearchResidue(self) ||
         wcpl_controllerRootHasSearchResidue(self))) {
        wcpl_repairExitSearchNavState(self, @"[搜索] viewDidAppear 残留兜底", YES);
    }

    wcpl_updateChatSearchButtonForViewController(self);

    id contact = [self GetContact];
    NSString *usrName = wcpl_safeUserNameFromObject(contact);
    if (usrName.length > 0) {
        [WCPLConfigCenter shared].ignore.curUsrName = usrName;
    }

    WCPLAVConfig *config = [WCPLConfigCenter shared].av;
    if (config.thirdPartyPlaybackEnabled) {
        UIView *view = [self valueForKey:@"view"];
        [[WCPLAVManager shareManager] startCaptureInView:view];
    }
}

- (void)viewWillDisappear:(_Bool)arg1 {
    %orig;

    if (self.isMovingFromParentViewController || self.isBeingDismissed) {
        wcpl_markForceFullSearchMode(self, NO);
    }

    UINavigationController *navCon = [self valueForKey:@"navigationController"];
    if ([navCon.viewControllers indexOfObject:(UIViewController *)self] == NSNotFound) {
        [[WCPLAVManager shareManager] stop];
    }

    if (self.isMovingFromParentViewController || self.isBeingDismissed) {
        wcpl_clearLocalReplaceMap(self);
    }
}

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 {
    %orig;

    WCPLAVConfig *config = [WCPLConfigCenter shared].av;
    if (config.thirdPartyPlaybackEnabled) {
        [[WCPLAVManager shareManager] stop];
    }
}

- (void)didRotateFromInterfaceOrientation:(long long)arg1 {
    %orig;

    WCPLAVConfig *config = [WCPLConfigCenter shared].av;
    if (config.thirdPartyPlaybackEnabled) {
        UIView *view = [self valueForKey:@"view"];
        [[WCPLAVManager shareManager] startCaptureInView:view];
    }
}

- (void)reloadMessages {
    wcpl_clearLocalReplaceMap(self);
    %orig;
}

- (void)reloadWholePage {
    wcpl_clearLocalReplaceMap(self);
    %orig;
    wcpl_updateChatSearchButtonForViewController(self);
}

- (void)updateRightBar {
    %orig;
    wcpl_updateChatSearchButtonForViewController(self);
}

- (void)handleMsgUpdateRightBar {
    %orig;
    wcpl_updateChatSearchButtonForViewController(self);
}

- (unsigned int)getMsgSearchBusinessType {
    unsigned int originalType = %orig;
    if (!wcpl_shouldForceFullSearchMode(self)) {
        return originalType;
    }
    if (originalType != 0) {
        WCPLLogInfo(@"[搜索] 强制 getMsgSearchBusinessType: %u -> 0", originalType);
    }
    return 0;
}

- (void)initMsgSearchHelper:(int)type {
    int forcedType = type;
    if (wcpl_shouldForceFullSearchMode(self) && type != 0) {
        forcedType = 0;
        WCPLLogInfo(@"[搜索] 强制 initMsgSearchHelper: %d -> 0", type);
    }

    %orig(forcedType);

    if (!wcpl_shouldForceFullSearchMode(self)) {
        return;
    }

    wcpl_forceSetSearchBusinessTypeToNormal(self, @"[搜索] init后");
    id helper = wcpl_msgSearchHelperFromController(self);
    BOOL isSpecial = wcpl_isSpecialMsgSearchHelper(helper);
    if (isSpecial) {
        WCPLLogInfo(@"[搜索] init后仍为 special helper=%@，清理并等待原生重建",
                    helper ? (NSStringFromClass([helper class]) ?: @"unknown") : @"nil");
        wcpl_resetSpecialHelperForNativeFullSearch(self, @"[搜索] init后");
    } else if (helper) {
        wcpl_enableFullSearchButtonsForHelper(helper);
    }
}

- (void)msgSearchBarCancel {
    BOOL injectedFlow = wcpl_isInjectedChatSearchFlow(self);
    BOOL enterCancel = injectedFlow ? wcpl_beginCancelTransition(self) : NO;
    if (injectedFlow && !enterCancel) {
        WCPLLogInfo(@"[搜索] cancel 重入拦截 (normal)");
        return;
    }

    wcpl_logSearchHelperSnapshot(self, @"[搜索] cancel 前(normal)");
    wcpl_markForceDelayedExitRepair(self, NO);
    BOOL preHidden = wcpl_preHideSearchPresentationOnCancel(self, @"[搜索] cancel 前(normal)");
    BOOL preDismissed = wcpl_forceDismissSearchPresentationController(self, @"[搜索] cancel 前预退场(normal)");
    if (preHidden || preDismissed) {
        wcpl_markForceDelayedExitRepair(self, YES);
        WCPLLogInfo(@"[搜索] cancel 前预处理命中(normal) hidden=%@ dismissed=%@",
                    preHidden ? @"YES" : @"NO",
                    preDismissed ? @"YES" : @"NO");
    }
    %orig;

    BOOL immediateCleared = wcpl_immediateHardCleanupAfterCancel(self, @"[搜索] cancel 后即时硬清理(normal)");
    if (immediateCleared) {
        wcpl_markForceDelayedExitRepair(self, YES);
    }

    id helperAfterCancel = wcpl_msgSearchHelperFromController(self);
    id searchController = wcpl_searchControllerFromHelper(helperAfterCancel);
    if (wcpl_objectLooksLikeSearchController(searchController) && wcpl_searchControllerIsActive(searchController)) {
        wcpl_setSearchControllerActiveState(searchController, NO, @"[搜索] cancel 后强制失活");
    }

    __weak id weakSelf = self;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.45 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        id strongSelf = weakSelf;
        if (!strongSelf || wcpl_isControllerShowingSearchUI(strongSelf)) {
            return;
        }
        BOOL dismissed = wcpl_forceDismissSearchPresentationController(strongSelf, @"[搜索] cancel 延迟兜底");
        BOOL disabled = wcpl_forceDisableSearchPresentationOverlay(strongSelf, @"[搜索] cancel 延迟兜底");
        if (dismissed || disabled) {
            WCPLLogInfo(@"[搜索] cancel 延迟清理命中 dismissed=%@ disabled=%@",
                        dismissed ? @"YES" : @"NO",
                        disabled ? @"YES" : @"NO");
            wcpl_repairExitSearchNavState(strongSelf, @"[搜索] cancel 延迟收口", YES);
        }
    });

    BOOL shouldFinalize = injectedFlow || wcpl_shouldFinalizeSearchDismiss(self);
    if (shouldFinalize) {
        wcpl_finalizeExitSearchUIIfNeeded(self, @"[搜索] cancel 收口快照");
        WCPLLogInfo(@"[搜索] cancel 收口完成 (normal)");
    } else {
        wcpl_markForceDelayedExitRepair(self, NO);
    }

    wcpl_markInjectedChatSearchFlow(self, NO);
    wcpl_markForceFullSearchMode(self, NO);
    wcpl_clearSearchEnhanceRetry(self);
    wcpl_endChatSearchTransition(self);
    wcpl_tryAutoPopAfterSearchCancel(self);
    wcpl_endCancelTransition(self);
}

- (void)msgSearchBarCancelForSpecialMsg {
    BOOL injectedFlow = wcpl_isInjectedChatSearchFlow(self);
    BOOL enterCancel = injectedFlow ? wcpl_beginCancelTransition(self) : NO;
    if (injectedFlow && !enterCancel) {
        WCPLLogInfo(@"[搜索] cancel 重入拦截 (special)");
        return;
    }

    wcpl_logSearchHelperSnapshot(self, @"[搜索] cancel 前(special)");
    wcpl_markForceDelayedExitRepair(self, NO);
    BOOL preHidden = wcpl_preHideSearchPresentationOnCancel(self, @"[搜索] cancel 前(special)");
    BOOL preDismissed = wcpl_forceDismissSearchPresentationController(self, @"[搜索] cancel 前预退场(special)");
    if (preHidden || preDismissed) {
        wcpl_markForceDelayedExitRepair(self, YES);
        WCPLLogInfo(@"[搜索] cancel 前预处理命中(special) hidden=%@ dismissed=%@",
                    preHidden ? @"YES" : @"NO",
                    preDismissed ? @"YES" : @"NO");
    }
    %orig;

    BOOL immediateCleared = wcpl_immediateHardCleanupAfterCancel(self, @"[搜索] cancel 后即时硬清理(special)");
    if (immediateCleared) {
        wcpl_markForceDelayedExitRepair(self, YES);
    }

    id helperAfterCancel = wcpl_msgSearchHelperFromController(self);
    id searchController = wcpl_searchControllerFromHelper(helperAfterCancel);
    if (wcpl_objectLooksLikeSearchController(searchController) && wcpl_searchControllerIsActive(searchController)) {
        wcpl_setSearchControllerActiveState(searchController, NO, @"[搜索] special cancel 后强制失活");
    }

    __weak id weakSelf = self;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.45 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        id strongSelf = weakSelf;
        if (!strongSelf || wcpl_isControllerShowingSearchUI(strongSelf)) {
            return;
        }
        BOOL dismissed = wcpl_forceDismissSearchPresentationController(strongSelf, @"[搜索] special cancel 延迟兜底");
        BOOL disabled = wcpl_forceDisableSearchPresentationOverlay(strongSelf, @"[搜索] special cancel 延迟兜底");
        if (dismissed || disabled) {
            WCPLLogInfo(@"[搜索] special cancel 延迟清理命中 dismissed=%@ disabled=%@",
                        dismissed ? @"YES" : @"NO",
                        disabled ? @"YES" : @"NO");
            wcpl_repairExitSearchNavState(strongSelf, @"[搜索] special cancel 延迟收口", YES);
        }
    });

    BOOL shouldFinalize = injectedFlow || wcpl_shouldFinalizeSearchDismiss(self);
    if (shouldFinalize) {
        wcpl_finalizeExitSearchUIIfNeeded(self, @"[搜索] cancel 收口快照");
        WCPLLogInfo(@"[搜索] cancel 收口完成 (special)");
    } else {
        wcpl_markForceDelayedExitRepair(self, NO);
    }

    wcpl_markInjectedChatSearchFlow(self, NO);
    wcpl_markForceFullSearchMode(self, NO);
    wcpl_clearSearchEnhanceRetry(self);
    wcpl_endChatSearchTransition(self);
    wcpl_tryAutoPopAfterSearchCancel(self);
    wcpl_endCancelTransition(self);
}

- (void)msgSearchDidDismissForSpecialMsg {
    wcpl_logSearchHelperSnapshot(self, @"[搜索] dismiss 前(special)");
    %orig;

    if (wcpl_shouldFinalizeSearchDismiss(self)) {
        wcpl_finalizeExitSearchUIIfNeeded(self, @"[搜索] dismiss 收口快照");
        WCPLLogInfo(@"[搜索] dismiss 收口完成 (special)");
    }

    wcpl_markInjectedChatSearchFlow(self, NO);
    wcpl_markForceFullSearchMode(self, NO);
    wcpl_markForceDelayedExitRepair(self, NO);
    wcpl_clearSearchEnhanceRetry(self);
    wcpl_endChatSearchTransition(self);
    wcpl_endCancelTransition(self);
}

- (void)msgSearchDidDismiss {
    wcpl_logSearchHelperSnapshot(self, @"[搜索] dismiss 前(normal)");
    %orig;

    if (wcpl_shouldFinalizeSearchDismiss(self)) {
        wcpl_finalizeExitSearchUIIfNeeded(self, @"[搜索] dismiss 收口快照");
        WCPLLogInfo(@"[搜索] dismiss 收口完成 (normal)");
    }

    wcpl_markInjectedChatSearchFlow(self, NO);
    wcpl_markForceFullSearchMode(self, NO);
    wcpl_markForceDelayedExitRepair(self, NO);
    wcpl_clearSearchEnhanceRetry(self);
    wcpl_endChatSearchTransition(self);
    wcpl_endCancelTransition(self);
}

- (void)onSearchButton:(id)sender {
    // 原生入口保持原生行为，避免二次改写导致导航 titleView 残留搜索框。
    %orig;
}

%new
- (void)searchItemAction {
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{
            ((void (*)(id, SEL))objc_msgSend)(self, @selector(searchItemAction));
        });
        return;
    }

    if (!wcpl_beginChatSearchTransition(self)) {
        WCPLLogInfo(@"[搜索] 忽略重复触发，上一轮仍在执行");
        return;
    }

    // 独立链优先：避免原生 onSearchButton 在部分会话里落入 special/date 搜索。
    wcpl_markInjectedChatSearchFlow(self, NO);
    wcpl_markForceFullSearchMode(self, NO);
    wcpl_clearSearchEnhanceRetry(self);
    wcpl_preflightRepairBeforeSearchActivation(self);

    CFAbsoluteTime begin = CFAbsoluteTimeGetCurrent();
    id contact = [self GetContact];
    UINavigationController *nav = self.navigationController;

    if (!contact || !nav) {
        WCPLLogInfo(@"[搜索] contact=%@ nav=%@, 退出", contact ? @"OK" : @"nil", nav ? @"OK" : @"nil");
        wcpl_markInjectedChatSearchFlow(self, NO);
        wcpl_markForceFullSearchMode(self, NO);
        wcpl_endChatSearchTransition(self);
        return;
    }

    wcpl_markForceFullSearchMode(self, NO);
    wcpl_markInjectedChatSearchFlow(self, YES);
    wcpl_logSearchHelperSnapshot(self, @"[搜索] 点击后激活前");
    BOOL activated = wcpl_activateInPageSearchState(self);
    if (activated) {
        wcpl_markChatSearchAutoPopOnCancel(self, NO);
        WCPLLogInfo(@"[搜索] 独立链完整搜索激活成功");
        wcpl_endChatSearchTransition(self);

        double costMs = (CFAbsoluteTimeGetCurrent() - begin) * 1000.0;
        WCPLLogInfo(@"[搜索] searchItemAction 结束(独立链), cost=%.2fms", costMs);
        return;
    }

    // 禁用 ChatInfo bridge 回退：
    // 该链路会进入 ChatRoomInfoViewController，触发“群名上方搜索框”异常。
    WCPLLogInfo(@"[搜索] 独立链未激活，已跳过 bridge B 链路");

    BOOL logicFallbackStarted = wcpl_pushSearchSceneFallback(contact, nav);
    if (logicFallbackStarted) {
        WCPLLogInfo(@"[搜索] bridge 不可用，已触发 MMMsgLogic 搜索链路");
        wcpl_endChatSearchTransition(self);

        double costMs = (CFAbsoluteTimeGetCurrent() - begin) * 1000.0;
        WCPLLogInfo(@"[搜索] searchItemAction 结束(logicFallback), cost=%.2fms", costMs);
        return;
    }

    SEL nativeSel = @selector(onSearchButton:);
    if ([self respondsToSelector:nativeSel]) {
        wcpl_markForceFullSearchMode(self, YES);
        wcpl_forceSetSearchBusinessTypeToNormal(self, @"[搜索] 独立链失败后native前");
        BOOL clearedSpecial = wcpl_resetSpecialHelperForNativeFullSearch(self, @"[搜索] 独立链失败后native前");

        id preHelper = wcpl_msgSearchHelperFromController(self);
        if (preHelper && !wcpl_isSpecialMsgSearchHelper(preHelper)) {
            wcpl_enableFullSearchButtonsForHelper(preHelper);
        }
        WCPLLogInfo(@"[搜索] native前校正 complete businessType=%u helper=%@ clearedSpecial=%@",
                    wcpl_msgSearchBusinessType(self),
                    preHelper ? (NSStringFromClass([preHelper class]) ?: @"unknown") : @"nil",
                    clearedSpecial ? @"YES" : @"NO");

        WCPLLogInfo(@"[搜索] 独立链不可用，回退原生 onSearchButton:");
        ((void (*)(id, SEL, id))objc_msgSend)(self, nativeSel, nil);

        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.08 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            wcpl_forceSetSearchBusinessTypeToNormal(self, @"[搜索] native后");
            id postHelper = wcpl_msgSearchHelperFromController(self);
            BOOL isSpecial = wcpl_isSpecialMsgSearchHelper(postHelper);
            if (postHelper && !isSpecial) {
                wcpl_enableFullSearchButtonsForHelper(postHelper);
            }
            WCPLLogInfo(@"[搜索] native后校正 businessType=%u helper=%@ special=%@",
                        wcpl_msgSearchBusinessType(self),
                        postHelper ? (NSStringFromClass([postHelper class]) ?: @"unknown") : @"nil",
                        isSpecial ? @"YES" : @"NO");
        });

        wcpl_endChatSearchTransition(self);

        double costMs = (CFAbsoluteTimeGetCurrent() - begin) * 1000.0;
        WCPLLogInfo(@"[搜索] searchItemAction 结束(native兜底), cost=%.2fms", costMs);
        return;
    }

    wcpl_markInjectedChatSearchFlow(self, NO);
    wcpl_markForceFullSearchMode(self, NO);
    wcpl_endChatSearchTransition(self);

    double costMs = (CFAbsoluteTimeGetCurrent() - begin) * 1000.0;
    WCPLLogInfo(@"[搜索] searchItemAction 结束(无可用链路), cost=%.2fms", costMs);
}

%new
- (void)wcpl_onTapChatSearchButton:(id)sender {
    SEL themeBoxActionSel = @selector(searchItemAction);
    if ([self respondsToSelector:themeBoxActionSel]) {
        WCPLLogInfo(@"[搜索] 点击按钮，优先走 searchItemAction");
        ((void (*)(id, SEL))objc_msgSend)(self, themeBoxActionSel);
        return;
    }

    SEL nativeSel = @selector(onSearchButton:);
    if ([self respondsToSelector:nativeSel]) {
        WCPLLogInfo(@"[搜索] searchItemAction 不可用，回退原生 onSearchButton:");
        wcpl_markInjectedChatSearchFlow(self, YES);
        wcpl_markForceFullSearchMode(self, YES);
        wcpl_forceSetSearchBusinessTypeToNormal(self, @"[搜索] 直接native前");
        wcpl_resetSpecialHelperForNativeFullSearch(self, @"[搜索] 直接native前");
        ((void (*)(id, SEL, id))objc_msgSend)(self, nativeSel, sender);
        return;
    }

    WCPLLogInfo(@"[搜索] onSearchButton:/searchItemAction 均不可用（未使用 onSearchItem 回退）");
}

%end

%hook UIControl

- (void)sendAction:(SEL)action to:(id)target forEvent:(id)event {
    NSString *selName = action ? (NSStringFromSelector(action) ?: @"") : @"";
    NSString *selLower = selName.lowercaseString ?: @"";
    BOOL looksCancelAction = [selLower containsString:@"cancel"];
    UIViewController *postCancelCandidate = nil;
    BOOL shouldRunPostCancelHardCleanup = NO;

    if (looksCancelAction && [self isKindOfClass:[UIView class]]) {
        UIView *senderView = (UIView *)self;
        UIViewController *candidate = nil;

        if ([target isKindOfClass:[UIViewController class]]) {
            candidate = (UIViewController *)target;
        }
        if (!candidate) {
            candidate = wcpl_viewControllerFromResponderChain(senderView);
        }
        if (!candidate && [target respondsToSelector:@selector(valueForKey:)]) {
            NSArray<NSString *> *keys = @[@"m_contentsController", @"contentsController", @"viewController", @"m_msgContentVC"];
            for (NSString *key in keys) {
                id value = nil;
                @try {
                    value = [target valueForKey:key];
                } @catch (__unused NSException *exception) {
                    value = nil;
                }
                if ([value isKindOfClass:[UIViewController class]]) {
                    candidate = (UIViewController *)value;
                    break;
                }
            }
        }

        if ([candidate isKindOfClass:[UIViewController class]]) {
            BOOL senderSearchLike = wcpl_viewHasSearchLikeAncestor(senderView) ||
                                    wcpl_viewTreeHasSearchLikeNode(senderView, 0);
            BOOL sceneSearchLike = wcpl_isControllerShowingSearchUI(candidate) ||
                                   wcpl_navTitleViewLooksSearchLike(candidate) ||
                                   wcpl_navBarHasSearchResidue(candidate) ||
                                   wcpl_controllerRootHasSearchResidue(candidate);
            if (!sceneSearchLike && [candidate.navigationController isKindOfClass:[UINavigationController class]]) {
                UIViewController *top = candidate.navigationController.topViewController;
                if ([top isKindOfClass:[UIViewController class]]) {
                    sceneSearchLike = wcpl_isControllerShowingSearchUI(top) ||
                                      wcpl_navTitleViewLooksSearchLike(top) ||
                                      wcpl_navBarHasSearchResidue(top) ||
                                      wcpl_controllerRootHasSearchResidue(top);
                    if (sceneSearchLike) {
                        candidate = top;
                    }
                }
            }

            if (senderSearchLike || sceneSearchLike) {
                shouldRunPostCancelHardCleanup = YES;
                postCancelCandidate = candidate;
                BOOL preCleared = wcpl_immediateHardCleanupAfterCancel(candidate, @"[搜索] sendAction cancel 前置硬清理");
                if (preCleared) {
                    wcpl_markForceDelayedExitRepair(candidate, YES);
                    WCPLLogInfo(@"[搜索] sendAction 前置硬清理命中 action=%@ sender=%@ target=%@",
                                selName,
                                NSStringFromClass([senderView class]) ?: @"UIView",
                                target ? (NSStringFromClass([target class]) ?: @"unknown") : @"nil");
                }
            }
        }
    }

    %orig;

    if (shouldRunPostCancelHardCleanup && [postCancelCandidate isKindOfClass:[UIViewController class]]) {
        BOOL postCleared = wcpl_immediateHardCleanupAfterCancel(postCancelCandidate, @"[搜索] sendAction cancel 后置硬清理");
        if (postCleared) {
            wcpl_markForceDelayedExitRepair(postCancelCandidate, YES);
            WCPLLogInfo(@"[搜索] sendAction 后置硬清理命中 action=%@", selName);
        }
    }
}

%end

%hook ChatRoomInfoViewController

- (void)msgSearchDidPresent {
    %orig;

    if (!wcpl_isBridgeAutoPop(self)) {
        return;
    }

    id source = objc_getAssociatedObject(self, kWCPLChatSearchBridgeSourceControllerKey);
    if (source) {
        wcpl_markInjectedChatSearchFlow(source, YES);
    }

    wcpl_markBridgeAutoPop(self, NO);

    id selfObj = (id)self;
    UINavigationController *nav = nil;
    @try {
        nav = [selfObj valueForKey:@"navigationController"];
    } @catch (__unused NSException *exception) {
        nav = nil;
    }

    if ([nav isKindOfClass:[UINavigationController class]] && nav.topViewController == (UIViewController *)self) {
        [nav popViewControllerAnimated:NO];
        WCPLLogInfo(@"[搜索] bridge: msgSearchDidPresent 后自动返回聊天页");
    }
}

- (void)viewWillDisappear:(_Bool)arg1 {
    %orig;

    id source = objc_getAssociatedObject(self, kWCPLChatSearchBridgeSourceControllerKey);
    if (source) {
        wcpl_markBridgePending(source, NO);
    }
}

%end

// 保持特殊消息 Cell 的滑动手势初始化

%hook AppEmoticonMessageCellView

- (void)didMoveToWindow {
    %orig;

    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

%end

%hook EmoticonMessageCellView

- (void)didMoveToWindow {
    %orig;

    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

%end

%hook ImageMessageCellView

- (void)didMoveToWindow {
    %orig;

    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

%end

%hook VideoMessageCellView

- (void)didMoveToWindow {
    %orig;

    if (self.window) {
        [self wchook_setupSwipeGestureIfNeeded];
    } else {
        [self wchook_resetSwipeAnimated:NO];
    }
}

%end

// ==================== 临时替换显示（仅本地） ====================

%hook TextMessageCellView

- (id)operationMenuItems {
    NSArray *items = %orig;
    return wcpl_injectClownMenuItemIfNeeded(self, items);
}

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 {
    if (arg1 == @selector(wcpl_handleLocalReplaceMenuItem:)) {
        CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
        return wcpl_isClownSupportedMessage(msgWrap);
    }
    return %orig;
}

- (void)updateStatus {
    %orig;
    [self wcpl_applyLocalReplaceIfNeeded];
}

- (void)onCopy:(id)arg1 {
    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
    id viewController = nil;
    if ([self respondsToSelector:@selector(getViewController)]) {
        @try {
            viewController = [self getViewController];
        } @catch (__unused NSException *exception) {
            viewController = nil;
        }
    }
    NSString *replaceText = wcpl_localReplaceText(viewController, msgWrap);
    if (replaceText.length > 0) {
        RichTextView *richTextView = (RichTextView *)wcpl_safeObjectIvar(self, "m_richTextView");
        if (!richTextView) {
            @try {
                richTextView = [self valueForKey:@"m_richTextView"];
            } @catch (__unused NSException *exception) {
                richTextView = nil;
            }
        }
        if (richTextView && [richTextView respondsToSelector:@selector(setContent:)]) {
            NSString *originText = nil;
            if (wcpl_isPlainTextMessage(msgWrap)) {
                originText = wcpl_originalContentForMessageWrap(msgWrap);
            }
            if (originText.length == 0) {
                originText = wcpl_displayTextForMessage(msgWrap, self) ?: (msgWrap.m_nsContent ?: @"");
            }
            if (originText.length > 0) {
                [richTextView setContent:originText];
            }
            %orig;
            [self wcpl_applyLocalReplaceIfNeeded];
            return;
        }
    }
    %orig;
}

%new
- (void)wcpl_applyLocalReplaceIfNeeded {
    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
    if (!wcpl_isClownSupportedMessage(msgWrap)) return;

    id viewController = nil;
    if ([self respondsToSelector:@selector(getViewController)]) {
        @try {
            viewController = [self getViewController];
        } @catch (__unused NSException *exception) {
            viewController = nil;
        }
    }

    BOOL isPlainText = wcpl_isPlainTextMessage(msgWrap);
    BOOL didSync = NO;
    if (wcpl_isClownSupportedMessage(msgWrap) && viewController) {
        didSync = wcpl_syncLocalReplaceContent(viewController, msgWrap);
    }

    NSString *replaceText = wcpl_localReplaceText(viewController, msgWrap);
    if (replaceText.length == 0 && !didSync) {
        return;
    }

    BOOL needsLayoutRefresh = didSync || replaceText.length > 0;
    RichTextView *richTextView = (RichTextView *)wcpl_safeObjectIvar(self, "m_richTextView");
    if (!richTextView) {
        @try {
            richTextView = [self valueForKey:@"m_richTextView"];
        } @catch (__unused NSException *exception) {
            richTextView = nil;
        }
    }
    if (!richTextView || ![richTextView respondsToSelector:@selector(setContent:)]) return;

    NSString *displayText = nil;
    if (replaceText.length > 0) {
        displayText = replaceText;
    } else if (isPlainText) {
        displayText = msgWrap.m_nsContent;
    } else {
        displayText = wcpl_displayTextForMessage(msgWrap, self);
    }

    if (displayText.length == 0) return;

    if ([richTextView respondsToSelector:@selector(displayedText)]) {
        @try {
            NSString *currentText = [richTextView displayedText];
            if ([currentText isKindOfClass:[NSString class]] && [currentText isEqualToString:displayText]) {
                if (!needsLayoutRefresh) {
                    return;
                }
            }
        } @catch (__unused NSException *exception) {
        }
    }

    [richTextView setContent:displayText];
    if ([richTextView respondsToSelector:@selector(forceDisplayInSync)]) {
        [richTextView forceDisplayInSync];
    }

    if (needsLayoutRefresh) {
        id viewModel = nil;
        if ([self respondsToSelector:@selector(viewModel)]) {
            @try {
                viewModel = [self viewModel];
            } @catch (__unused NSException *exception) {
                viewModel = nil;
            }
        }
        if (viewModel && [viewModel respondsToSelector:@selector(resetLayoutCache)]) {
            @try {
                [viewModel resetLayoutCache];
            } @catch (__unused NSException *exception) {
            }
        }
        if (!objc_getAssociatedObject(self, kWCPLLocalReplaceLayoutingKey)) {
            objc_setAssociatedObject(self, kWCPLLocalReplaceLayoutingKey, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            if ([self respondsToSelector:@selector(resetLayoutCache)]) {
                @try {
                    ((void (*)(id, SEL))objc_msgSend)(self, @selector(resetLayoutCache));
                } @catch (__unused NSException *exception) {
                }
            }
            if ([self respondsToSelector:@selector(setNeedsLayout)]) {
                ((void (*)(id, SEL))objc_msgSend)(self, @selector(setNeedsLayout));
            }
            if ([self respondsToSelector:@selector(layoutIfNeeded)]) {
                ((void (*)(id, SEL))objc_msgSend)(self, @selector(layoutIfNeeded));
            }
            if ([self respondsToSelector:@selector(updateContentOffset)]) {
                @try {
                    [self updateContentOffset];
                } @catch (__unused NSException *exception) {
                }
            }
            objc_setAssociatedObject(self, kWCPLLocalReplaceLayoutingKey, nil, OBJC_ASSOCIATION_ASSIGN);
        }
    }
}

%new
- (void)wcpl_handleLocalReplaceMenuItem:(id)sender {
    wcpl_presentClownEditorForCell(self);
}

%end

%hook WCPayTransferMessageCellView

- (id)operationMenuItems {
    NSArray *items = %orig;
    return wcpl_injectClownMenuItemIfNeeded(self, items);
}

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 {
    if (arg1 == @selector(wcpl_handleLocalReplaceMenuItem:)) {
        CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
        return wcpl_isClownSupportedMessage(msgWrap);
    }
    return %orig;
}

- (void)updateStatus {
    %orig;

    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
    if (!wcpl_isTransferMessage(msgWrap)) {
        return;
    }

    id viewController = wcpl_viewControllerFromCell(self);
    if (!viewController) {
        return;
    }

    wcpl_syncLocalReplaceContent(viewController, msgWrap);
}

%new
- (void)wcpl_handleLocalReplaceMenuItem:(id)sender {
    wcpl_presentClownEditorForCell(self);
}

%end
