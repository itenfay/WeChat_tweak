#import "WeChatRedEnvelop.h"
#import "WCPLConfigCenter.h"
#import "WCPLFuncService.h"
#import "WCPLAVManager.h"
#import "WCPLContactLookup.h"
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
static void wcpl_applyMenuItemIconWithTint(id menuItem, UIImage *icon, BOOL shouldTint);

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
static BOOL wcpl_classNameContainsSearchToken(NSString *className);
static BOOL wcpl_viewTreeHasSearchLikeNode(UIView *view, NSUInteger depth);
static NSString *wcpl_barButtonActionName(UIBarButtonItem *item);
static BOOL wcpl_barButtonItemLooksLikeMoreEntry(UIBarButtonItem *item);
static BOOL wcpl_softDisableSearchOverlayInTree(UIView *view,
                                                UIView *excludedRoot,
                                                UIView *scanRoot,
                                                NSString *stage,
                                                NSUInteger depth,
                                                NSUInteger *disabledCount);

static CGFloat wcpl_viewOriginY(UIView *view) {
    if (![view isKindOfClass:[UIView class]]) {
        return 0.0f;
    }
    if ([view respondsToSelector:@selector(y)]) {
        @try {
            return ((CGFloat (*)(id, SEL))objc_msgSend)(view, @selector(y));
        } @catch (__unused NSException *exception) {
        }
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
        } @catch (__unused NSException *exception) {
        }
    }
    CGRect frame = view.frame;
    frame.origin.y = y;
    view.frame = frame;
}

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

static BOOL wcpl_barButtonItemHasRenderableContent(UIBarButtonItem *item) {
    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        return NO;
    }

    CGFloat itemWidth = 0.0f;
    @try {
        itemWidth = item.width;
    } @catch (__unused NSException *exception) {
        itemWidth = 0.0f;
    }

    UIView *customView = nil;
    @try {
        customView = item.customView;
    } @catch (__unused NSException *exception) {
        customView = nil;
    }
    if ([customView isKindOfClass:[UIView class]]) {
        CGFloat customWidth = CGRectGetWidth(customView.bounds);
        if (customWidth <= 0.1f) {
            customWidth = CGRectGetWidth(customView.frame);
        }

        if ([customView isKindOfClass:[UIButton class]]) {
            UIButton *btn = (UIButton *)customView;
            UIImage *btnImage = [btn imageForState:UIControlStateNormal];
            NSString *btnTitle = [btn titleForState:UIControlStateNormal] ?: @"";
            if ([btnImage isKindOfClass:[UIImage class]] || btnTitle.length > 0) {
                return YES;
            }
        }

        // 密友同款按钮正常宽度约 30+，10 这类宽度通常是空占位，视为不可见。
        if (itemWidth >= 20.0f || customWidth >= 20.0f) {
            return YES;
        }
    }

    NSString *title = [item.title isKindOfClass:[NSString class]] ? item.title : @"";
    if (title.length > 0) {
        return YES;
    }

    if ([item respondsToSelector:@selector(image)]) {
        @try {
            UIImage *image = ((UIImage * (*)(id, SEL))objc_msgSend)(item, @selector(image));
            if ([image isKindOfClass:[UIImage class]]) {
                return YES;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    if ([item respondsToSelector:@selector(landscapeImagePhone)]) {
        @try {
            UIImage *landscapeImage = ((UIImage * (*)(id, SEL))objc_msgSend)(item, @selector(landscapeImagePhone));
            if ([landscapeImage isKindOfClass:[UIImage class]]) {
                return YES;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    if (itemWidth >= 20.0f) {
        return YES;
    }

    return NO;
}

static NSString *wcpl_barButtonItemDebugSummary(UIBarButtonItem *item) {
    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        return @"<nil>";
    }

    NSString *cls = NSStringFromClass([item class]) ?: @"Unknown";
    NSString *title = [item.title isKindOfClass:[NSString class]] ? item.title : @"";
    NSString *action = wcpl_barButtonActionName(item);

    NSString *imageState = @"n/a";
    if ([item respondsToSelector:@selector(image)]) {
        @try {
            imageState = ((UIImage * (*)(id, SEL))objc_msgSend)(item, @selector(image)) ? @"yes" : @"no";
        } @catch (__unused NSException *exception) {
            imageState = @"err";
        }
    }

    NSString *customViewClass = @"nil";
    CGFloat customWidth = 0.0f;
    @try {
        UIView *customView = item.customView;
        if ([customView isKindOfClass:[UIView class]]) {
            customViewClass = NSStringFromClass([customView class]) ?: @"UIView";
            customWidth = CGRectGetWidth(customView.bounds);
            if (customWidth <= 0.1f) {
                customWidth = CGRectGetWidth(customView.frame);
            }
        }
    } @catch (__unused NSException *exception) {
        customViewClass = @"err";
        customWidth = 0.0f;
    }

    CGFloat width = 0.0f;
    @try {
        width = item.width;
    } @catch (__unused NSException *exception) {
        width = 0.0f;
    }

    return [NSString stringWithFormat:@"class=%@ action=%@ title=%@ image=%@ custom=%@ customW=%.1f width=%.1f",
            cls, action.length > 0 ? action : @"<none>", title.length > 0 ? title : @"<none>", imageState, customViewClass, customWidth, width];
}

static UIControl *wcpl_findFirstControlInView(UIView *root, NSUInteger depth) {
    if (![root isKindOfClass:[UIView class]] || depth > 8) {
        return nil;
    }
    if ([root isKindOfClass:[UIControl class]]) {
        return (UIControl *)root;
    }
    NSArray<UIView *> *subviews = root.subviews;
    if (![subviews isKindOfClass:[NSArray class]] || subviews.count == 0) {
        return nil;
    }
    for (UIView *child in subviews) {
        UIControl *control = wcpl_findFirstControlInView(child, depth + 1);
        if ([control isKindOfClass:[UIControl class]]) {
            return control;
        }
    }
    return nil;
}

static void wcpl_forceBindSearchButtonAction(UIBarButtonItem *item, id viewController, NSString *sourceTag) {
    if (![item isKindOfClass:[UIBarButtonItem class]] || !viewController) {
        return;
    }

    SEL tapSel = @selector(wcpl_onTapChatSearchButton:);
    SEL searchSel = @selector(onSearchItem);

    @try {
        item.target = viewController;
        item.action = tapSel;
        item.enabled = YES;
    } @catch (__unused NSException *exception) {
    }

    UIView *customView = nil;
    @try {
        customView = item.customView;
    } @catch (__unused NSException *exception) {
        customView = nil;
    }
    if ([customView isKindOfClass:[UIView class]]) {
        customView.userInteractionEnabled = YES;
    }

    UIControl *targetControl = nil;
    if ([customView respondsToSelector:@selector(barButton)]) {
        @try {
            id barButton = ((id (*)(id, SEL))objc_msgSend)(customView, @selector(barButton));
            if ([barButton isKindOfClass:[UIControl class]]) {
                targetControl = (UIControl *)barButton;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    if (![targetControl isKindOfClass:[UIControl class]] && [customView isKindOfClass:[UIControl class]]) {
        targetControl = (UIControl *)customView;
    }

    if (![targetControl isKindOfClass:[UIControl class]]) {
        targetControl = wcpl_findFirstControlInView(customView, 0);
    }

    if ([targetControl isKindOfClass:[UIControl class]]) {
        @try {
            [targetControl removeTarget:nil action:NULL forControlEvents:UIControlEventTouchUpInside];
            [targetControl addTarget:viewController action:tapSel forControlEvents:UIControlEventTouchUpInside];
            targetControl.userInteractionEnabled = YES;
            WCPLLogInfo(@"[搜索按钮] 绑定点击链路 source=%@ control=%@ action=%@",
                        sourceTag ?: @"unknown",
                        NSStringFromClass([targetControl class]) ?: @"UIControl",
                        NSStringFromSelector(tapSel));
            return;
        } @catch (__unused NSException *exception) {
        }
    }

    // 兜底：至少确保 barButtonItem 自身 action 指向 onSearchItem。
    @try {
        item.target = viewController;
        item.action = searchSel;
        item.enabled = YES;
    } @catch (__unused NSException *exception) {
    }

    WCPLLogInfo(@"[搜索按钮] 未找到可绑定 control，保留 barButtonItem action source=%@ item=%@",
                sourceTag ?: @"unknown",
                wcpl_barButtonItemDebugSummary(item));
}

static BOOL wcpl_isInjectedChatSearchButtonItem(UIBarButtonItem *item) {
    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        return NO;
    }
    id marker = objc_getAssociatedObject(item, kWCPLChatSearchNavButtonTagKey);
    if ([marker respondsToSelector:@selector(boolValue)] && [marker boolValue]) {
        return YES;
    }
    return item.action == @selector(onSearchItem) ||
           item.action == @selector(wcpl_onTapChatSearchButton:);
}

static BOOL wcpl_barButtonItemArrayPointerEqual(NSArray<UIBarButtonItem *> *lhs, NSArray<UIBarButtonItem *> *rhs) {
    if (lhs == rhs) {
        return YES;
    }
    if (![lhs isKindOfClass:[NSArray class]] || ![rhs isKindOfClass:[NSArray class]]) {
        return NO;
    }
    if (lhs.count != rhs.count) {
        return NO;
    }
    for (NSUInteger i = 0; i < lhs.count; i++) {
        if (lhs[i] != rhs[i]) {
            return NO;
        }
    }
    return YES;
}

static BOOL wcpl_barButtonItemEquivalent(UIBarButtonItem *lhs, UIBarButtonItem *rhs) {
    if (lhs == rhs) {
        return YES;
    }
    if (![lhs isKindOfClass:[UIBarButtonItem class]] || ![rhs isKindOfClass:[UIBarButtonItem class]]) {
        return NO;
    }

    BOOL lhsInjected = wcpl_isInjectedChatSearchButtonItem(lhs);
    BOOL rhsInjected = wcpl_isInjectedChatSearchButtonItem(rhs);
    if (lhsInjected || rhsInjected) {
        return lhsInjected && rhsInjected;
    }

    NSString *lhsAction = wcpl_barButtonActionName(lhs);
    NSString *rhsAction = wcpl_barButtonActionName(rhs);
    if ((lhsAction.length > 0 || rhsAction.length > 0) && ![lhsAction isEqualToString:rhsAction]) {
        return NO;
    }

    NSString *lhsTitle = [lhs.title isKindOfClass:[NSString class]] ? lhs.title : @"";
    NSString *rhsTitle = [rhs.title isKindOfClass:[NSString class]] ? rhs.title : @"";
    if ((lhsTitle.length > 0 || rhsTitle.length > 0) && ![lhsTitle isEqualToString:rhsTitle]) {
        return NO;
    }

    NSString *lhsClass = NSStringFromClass([lhs class]) ?: @"";
    NSString *rhsClass = NSStringFromClass([rhs class]) ?: @"";
    return [lhsClass isEqualToString:rhsClass];
}

static BOOL wcpl_barButtonItemArrayEquivalent(NSArray<UIBarButtonItem *> *lhs, NSArray<UIBarButtonItem *> *rhs) {
    if (wcpl_barButtonItemArrayPointerEqual(lhs, rhs)) {
        return YES;
    }
    if (![lhs isKindOfClass:[NSArray class]] || ![rhs isKindOfClass:[NSArray class]]) {
        return NO;
    }
    if (lhs.count != rhs.count) {
        return NO;
    }
    for (NSUInteger i = 0; i < lhs.count; i++) {
        if (!wcpl_barButtonItemEquivalent(lhs[i], rhs[i])) {
            return NO;
        }
    }
    return YES;
}

static UIBarButtonItem *wcpl_controllerCurrentNativeRightItem(id viewController, NSArray<UIBarButtonItem *> *items) {
    if ([viewController respondsToSelector:@selector(getRightBarButton:)]) {
        @try {
            id right = ((id (*)(id, SEL, BOOL))objc_msgSend)(viewController, @selector(getRightBarButton:), YES);
            if ([right isKindOfClass:[UIBarButtonItem class]]) {
                return right;
            }
        } @catch (__unused NSException *exception) {
        }
        @try {
            id right = ((id (*)(id, SEL, BOOL))objc_msgSend)(viewController, @selector(getRightBarButton:), NO);
            if ([right isKindOfClass:[UIBarButtonItem class]]) {
                return right;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    if ([viewController respondsToSelector:@selector(getRightBarButton)]) {
        @try {
            id right = ((id (*)(id, SEL))objc_msgSend)(viewController, @selector(getRightBarButton));
            if ([right isKindOfClass:[UIBarButtonItem class]]) {
                return right;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    for (UIBarButtonItem *item in items) {
        if (wcpl_isInjectedChatSearchButtonItem(item)) {
            continue;
        }
        if (wcpl_barButtonItemLooksLikeMoreEntry(item)) {
            return item;
        }
    }

    for (UIBarButtonItem *item in items) {
        if (!wcpl_isInjectedChatSearchButtonItem(item)) {
            return item;
        }
    }

    return nil;
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

static __attribute__((unused)) BOOL wcpl_barButtonItemLooksLikeSearchOrDateEntry(UIBarButtonItem *item) {
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
    if ([item isKindOfClass:[UIBarButtonItem class]] && wcpl_barButtonItemHasRenderableContent(item)) {
        return item;
    }
    if ([item isKindOfClass:[UIBarButtonItem class]]) {
        WCPLLogInfo(@"[搜索按钮] 缓存按钮不可见，准备重建: %@",
                    wcpl_barButtonItemDebugSummary(item));
        objc_setAssociatedObject(viewController, kWCPLChatSearchNavButtonKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        item = nil;
    }

    NSArray<NSString *> *iconNames = @[
        @"ui-resource_search",
        @"icons_outlined_search",
        @"icons_filled_search",
        @"icons_filled_magnifier",
        @"barbuttonicon_search",
        @"icon_search",
        @"search",
        @"Q"
    ];
    NSArray<NSString *> *accessibilityNames = @[
        @"查找聊天内容",
        @"搜索",
        @"Search"
    ];

    SEL factorySel = @selector(getBarButtonWithImageName:target:action:style:accessibility:);
    Class utilClass = objc_getClass("MMUICommonUtil");
    if (utilClass && [utilClass respondsToSelector:factorySel]) {
        for (NSString *iconName in iconNames) {
            for (NSString *accessibility in accessibilityNames) {
                @try {
                    id generated = ((id (*)(id, SEL, id, id, SEL, unsigned long long, id))objc_msgSend)(
                        utilClass, factorySel, iconName, viewController, @selector(onSearchItem), (unsigned long long)2, accessibility);
                    if ([generated isKindOfClass:[UIBarButtonItem class]] &&
                        wcpl_barButtonItemHasRenderableContent((UIBarButtonItem *)generated)) {
                        wcpl_forceBindSearchButtonAction((UIBarButtonItem *)generated, viewController, @"MMUICommonUtil");
                        item = generated;
                        WCPLLogInfo(@"[搜索按钮] MMUICommonUtil 生成成功 icon=%@ accessibility=%@ -> %@",
                                    iconName, accessibility, wcpl_barButtonItemDebugSummary((UIBarButtonItem *)generated));
                        break;
                    }
                } @catch (__unused NSException *exception) {
                }
            }
            if ([item isKindOfClass:[UIBarButtonItem class]]) {
                break;
            }
        }
    }

    if (![item isKindOfClass:[UIBarButtonItem class]] && [viewController respondsToSelector:factorySel]) {
        for (NSString *iconName in iconNames) {
            for (NSString *accessibility in accessibilityNames) {
                @try {
                    id generated = ((id (*)(id, SEL, id, id, SEL, unsigned long long, id))objc_msgSend)(
                        viewController, factorySel, iconName, viewController, @selector(onSearchItem), (unsigned long long)2, accessibility);
                    if ([generated isKindOfClass:[UIBarButtonItem class]] &&
                        wcpl_barButtonItemHasRenderableContent((UIBarButtonItem *)generated)) {
                        wcpl_forceBindSearchButtonAction((UIBarButtonItem *)generated, viewController, @"controllerFactory");
                        item = generated;
                        WCPLLogInfo(@"[搜索按钮] controller 工厂生成成功 icon=%@ accessibility=%@ -> %@",
                                    iconName, accessibility, wcpl_barButtonItemDebugSummary((UIBarButtonItem *)generated));
                        break;
                    }
                } @catch (__unused NSException *exception) {
                }
            }
            if ([item isKindOfClass:[UIBarButtonItem class]]) {
                break;
            }
        }
    }

    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        UIImage *icon = wcpl_chatSearchButtonIconImage();
        UIButton *compactButton = [UIButton buttonWithType:UIButtonTypeSystem];
        compactButton.frame = CGRectMake(0, 0, 32.0, 32.0);
        compactButton.contentHorizontalAlignment = UIControlContentHorizontalAlignmentCenter;
        compactButton.contentVerticalAlignment = UIControlContentVerticalAlignmentCenter;
        compactButton.adjustsImageWhenHighlighted = NO;
        compactButton.accessibilityLabel = @"查找聊天内容";
        [compactButton addTarget:viewController action:@selector(onSearchItem) forControlEvents:UIControlEventTouchUpInside];

        if (icon && [compactButton respondsToSelector:@selector(setImage:forState:)]) {
            if ([compactButton respondsToSelector:@selector(setPreferredSymbolConfiguration:forImageInState:)]) {
                UIImageSymbolConfiguration *config = [UIImageSymbolConfiguration configurationWithPointSize:16 weight:UIImageSymbolWeightRegular];
                [compactButton setPreferredSymbolConfiguration:config forImageInState:UIControlStateNormal];
            }
            [compactButton setImage:icon forState:UIControlStateNormal];
        } else {
            [compactButton setTitle:@"搜" forState:UIControlStateNormal];
            compactButton.titleLabel.font = [UIFont systemFontOfSize:15.0 weight:UIFontWeightRegular];
        }

        item = [[UIBarButtonItem alloc] initWithCustomView:compactButton];
        wcpl_forceBindSearchButtonAction(item, viewController, @"fallbackCustomView");
        WCPLLogInfo(@"[搜索按钮] 工厂未命中，使用 customView 回退按钮");
    }

    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        WCPLLogInfo(@"[搜索按钮] 创建失败：最终未得到 UIBarButtonItem");
        return nil;
    }

    wcpl_forceBindSearchButtonAction(item, viewController, @"finalEnsure");

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

static __attribute__((unused)) BOOL wcpl_immediateHardCleanupAfterCancel(id controller, NSString *stage) {
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

static __attribute__((unused)) void wcpl_preflightRepairBeforeSearchActivation(id controller) {
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
    NSArray<UIBarButtonItem *> *currentItems = nil;
    if ([navigationItem.rightBarButtonItems isKindOfClass:[NSArray class]] && navigationItem.rightBarButtonItems.count > 0) {
        currentItems = navigationItem.rightBarButtonItems;
        rightItems = [currentItems mutableCopy];
    } else if ([navigationItem.rightBarButtonItem isKindOfClass:[UIBarButtonItem class]]) {
        currentItems = @[navigationItem.rightBarButtonItem];
        rightItems = [NSMutableArray arrayWithObject:navigationItem.rightBarButtonItem];
    } else {
        UIBarButtonItem *nativeFallback = wcpl_controllerCurrentNativeRightItem(viewController, @[]);
        currentItems = @[];
        rightItems = [NSMutableArray array];
        if ([nativeFallback isKindOfClass:[UIBarButtonItem class]]) {
            [rightItems addObject:nativeFallback];
        }
    }

    NSMutableArray<UIBarButtonItem *> *filteredItems = [NSMutableArray arrayWithCapacity:rightItems.count];
    for (UIBarButtonItem *item in rightItems) {
        if (!wcpl_isInjectedChatSearchButtonItem(item)) {
            [filteredItems addObject:item];
        }
    }

    BOOL targetChat = wcpl_isTargetChatForSearchButton(viewController);
    if (!targetChat && [viewController respondsToSelector:@selector(updateRightBar)]) {
        targetChat = YES;
    }
    if (!targetChat) {
        if (!wcpl_barButtonItemArrayEquivalent(currentItems ?: @[], filteredItems ?: @[])) {
            navigationItem.rightBarButtonItems = filteredItems;
        }
        return;
    }

    UIBarButtonItem *searchButtonItem = wcpl_chatSearchNavButtonItem(viewController);
    if (![searchButtonItem isKindOfClass:[UIBarButtonItem class]]) {
        if (!wcpl_barButtonItemArrayEquivalent(currentItems ?: @[], filteredItems ?: @[])) {
            navigationItem.rightBarButtonItems = filteredItems;
        }
        WCPLLogInfo(@"[搜索按钮] 生成搜索按钮失败，保持原生右键 vc=%@",
                    NSStringFromClass([viewController class]));
        return;
    }

    UIBarButtonItem *nativeItem = wcpl_controllerCurrentNativeRightItem(viewController, filteredItems);
    if (![nativeItem isKindOfClass:[UIBarButtonItem class]]) {
        for (UIBarButtonItem *candidate in filteredItems) {
            if (![candidate isKindOfClass:[UIBarButtonItem class]] || wcpl_isInjectedChatSearchButtonItem(candidate)) {
                continue;
            }
            nativeItem = candidate;
            break;
        }
    }

    NSMutableArray<UIBarButtonItem *> *stableItems = [NSMutableArray arrayWithCapacity:2];
    if ([nativeItem isKindOfClass:[UIBarButtonItem class]]) {
        [stableItems addObject:nativeItem];
        if (nativeItem.tintColor) {
            searchButtonItem.tintColor = nativeItem.tintColor;
            if ([searchButtonItem.customView isKindOfClass:[UIButton class]]) {
                ((UIButton *)searchButtonItem.customView).tintColor = nativeItem.tintColor;
            }
        }
    }
    [stableItems addObject:searchButtonItem];

    if (!wcpl_barButtonItemArrayEquivalent(currentItems ?: @[], stableItems ?: @[])) {
        navigationItem.rightBarButtonItems = stableItems;
        WCPLLogInfo(@"[搜索按钮] 已更新 rightBar: native={%@} search={%@}",
                    [nativeItem isKindOfClass:[UIBarButtonItem class]] ? wcpl_barButtonItemDebugSummary(nativeItem) : @"<nil>",
                    wcpl_barButtonItemDebugSummary(searchButtonItem));
    }
}

static id wcpl_miyouSearcherFromController(id controller) {
    if (!controller) {
        return nil;
    }

    SEL searcherSel = @selector(searcher);
    if ([controller respondsToSelector:searcherSel]) {
        @try {
            id value = ((id (*)(id, SEL))objc_msgSend)(controller, searcherSel);
            if (value) {
                return value;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    NSArray<NSString *> *controllerKeys = @[@"searcher", @"m_searcher"];
    for (NSString *key in controllerKeys) {
        @try {
            id value = [controller valueForKey:key];
            if (value) {
                return value;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    id helper = wcpl_msgSearchHelperFromController(controller);
    NSArray<NSString *> *helperKeys = @[@"searcher", @"m_searcher", @"searchController", @"m_searchController"];
    for (NSString *key in helperKeys) {
        @try {
            id value = [helper valueForKey:key];
            if (value) {
                return value;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    return nil;
}

static UIView *wcpl_miyouSearchBarContainer(id searcher) {
    if (!searcher) {
        return nil;
    }

    id searchBar = nil;
    SEL searchBarSel = @selector(searchBar);
    if ([searcher respondsToSelector:searchBarSel]) {
        @try {
            searchBar = ((id (*)(id, SEL))objc_msgSend)(searcher, searchBarSel);
        } @catch (__unused NSException *exception) {
            searchBar = nil;
        }
    }
    if (![searchBar isKindOfClass:[UIView class]]) {
        return nil;
    }

    UIView *container = nil;
    @try {
        container = ((UIView *(*)(id, SEL))objc_msgSend)(searchBar, @selector(superview));
    } @catch (__unused NSException *exception) {
        container = nil;
    }

    return [container isKindOfClass:[UIView class]] ? container : nil;
}

static __attribute__((unused)) CGFloat wcpl_miyouStatusBarHeight(void) {
    CGFloat statusBarHeight = 0.0f;

    Class mmUtilityClass = objc_getClass("MMUICommonUtility");
    SEL normalStatusBarHeightSel = @selector(normalStatusBarHeight);
    if (mmUtilityClass && [mmUtilityClass respondsToSelector:normalStatusBarHeightSel]) {
        @try {
            statusBarHeight = ((CGFloat (*)(id, SEL))objc_msgSend)(mmUtilityClass, normalStatusBarHeightSel);
        } @catch (__unused NSException *exception) {
            statusBarHeight = 0.0f;
        }
    }

    if (statusBarHeight <= 0.0f) {
        UIWindow *window = nil;
        if (@available(iOS 13.0, *)) {
            NSSet<UIScene *> *scenes = UIApplication.sharedApplication.connectedScenes;
            for (UIScene *scene in scenes) {
                if (![scene isKindOfClass:[UIWindowScene class]]) {
                    continue;
                }
                UIWindowScene *windowScene = (UIWindowScene *)scene;
                for (UIWindow *candidate in windowScene.windows) {
                    if (candidate.isKeyWindow) {
                        window = candidate;
                        break;
                    }
                }
                if (window) {
                    break;
                }
            }
        } else {
            NSArray<UIWindow *> *windows = UIApplication.sharedApplication.windows;
            for (UIWindow *candidate in windows) {
                if (candidate.isKeyWindow) {
                    window = candidate;
                    break;
                }
            }
            if (!window && windows.count > 0) {
                window = windows.firstObject;
            }
        }

        if ([window isKindOfClass:[UIWindow class]]) {
            if (@available(iOS 11.0, *)) {
                statusBarHeight = window.safeAreaInsets.top;
            }
        }
    }

    if (statusBarHeight <= 0.0f) {
        statusBarHeight = 20.0f;
    }
    return statusBarHeight;
}

static __attribute__((unused)) UIView *wcpl_miyouHideSearchBarContainer(id controller, NSString *stage) {
    id searcher = wcpl_miyouSearcherFromController(controller);
    UIView *container = wcpl_miyouSearchBarContainer(searcher);
    if (![container isKindOfClass:[UIView class]]) {
        return nil;
    }

    container.hidden = YES;
    WCPLLogInfo(@"[搜索] %@ hideSearchBarContainer class=%@ y=%.2f",
                stage ?: @"miyou",
                NSStringFromClass([container class]) ?: @"unknown",
                wcpl_viewOriginY(container));
    return container;
}

static __attribute__((unused)) void wcpl_miyouPrepareSearchBarContainerForSearchEntry(id controller, NSString *stage) {
    UIView *container = wcpl_miyouHideSearchBarContainer(controller, stage);
    if (![container isKindOfClass:[UIView class]]) {
        return;
    }

    CGFloat statusBarHeight = wcpl_miyouStatusBarHeight();
    wcpl_setViewOriginY(container, statusBarHeight);
    WCPLLogInfo(@"[搜索] %@ setSearchBarContainerY=%.2f",
                stage ?: @"miyou",
                statusBarHeight);
}

static __attribute__((unused)) void wcpl_miyouRestoreSearchBarContainer(id controller, NSString *stage) {
    id searcher = wcpl_miyouSearcherFromController(controller);
    UIView *container = wcpl_miyouSearchBarContainer(searcher);
    if (![container isKindOfClass:[UIView class]]) {
        return;
    }

    CGFloat targetY = 0.0f;
    id marker = objc_getAssociatedObject(container, kWCPLSearchBarContainerOriginalYKey);
    if ([marker respondsToSelector:@selector(doubleValue)]) {
        targetY = (CGFloat)[marker doubleValue];
    } else {
        targetY = 0.0f;
    }

    container.hidden = NO;
    if (container.alpha < 0.99f) {
        container.alpha = 1.0f;
    }
    if (!container.userInteractionEnabled) {
        container.userInteractionEnabled = YES;
    }

    UIView *superview = container.superview;
    if ([superview isKindOfClass:[UIView class]]) {
        [superview setNeedsLayout];
        [superview layoutIfNeeded];
    }

    CGFloat currentY = wcpl_viewOriginY(container);
    objc_setAssociatedObject(container, kWCPLSearchBarContainerOriginalYKey, nil, OBJC_ASSOCIATION_ASSIGN);

    WCPLLogInfo(@"[搜索] %@ restoreSearchBarContainer class=%@ recordY=%.2f currentY=%.2f",
                stage ?: @"miyou",
                NSStringFromClass([container class]) ?: @"unknown",
                targetY,
                currentY);
}

static __attribute__((unused)) UIView *wcpl_currentSearchButtonView(id controller) {
    if (![controller isKindOfClass:[UIViewController class]]) {
        return nil;
    }

    UIBarButtonItem *item = objc_getAssociatedObject(controller, kWCPLChatSearchNavButtonKey);
    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        UINavigationItem *navItem = ((UIViewController *)controller).navigationItem;
        NSArray<UIBarButtonItem *> *items = [navItem.rightBarButtonItems isKindOfClass:[NSArray class]] ? navItem.rightBarButtonItems : @[];
        for (UIBarButtonItem *candidate in items) {
            if (wcpl_isInjectedChatSearchButtonItem(candidate)) {
                item = candidate;
                break;
            }
        }
    }
    if (![item isKindOfClass:[UIBarButtonItem class]]) {
        return nil;
    }

    UIView *customView = nil;
    @try {
        customView = item.customView;
    } @catch (__unused NSException *exception) {
        customView = nil;
    }
    if ([customView isKindOfClass:[UIView class]]) {
        return customView;
    }

    if ([item respondsToSelector:@selector(m_btn)]) {
        @try {
            id mBtn = ((id (*)(id, SEL))objc_msgSend)(item, @selector(m_btn));
            if ([mBtn isKindOfClass:[UIView class]]) {
                return (UIView *)mBtn;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    return nil;
}

static __attribute__((unused)) BOOL wcpl_alignSearchBarContainerToSearchButton(id controller, NSString *stage) {
    UIView *buttonView = wcpl_currentSearchButtonView(controller);
    if (![buttonView isKindOfClass:[UIView class]]) {
        return NO;
    }

    id searcher = wcpl_miyouSearcherFromController(controller);
    UIView *container = wcpl_miyouSearchBarContainer(searcher);
    if (![container isKindOfClass:[UIView class]]) {
        return NO;
    }

    UIWindow *window = buttonView.window ?: container.window;
    if (![window isKindOfClass:[UIWindow class]]) {
        return NO;
    }

    CGRect buttonRect = [buttonView convertRect:buttonView.bounds toView:window];
    CGRect containerRect = [container convertRect:container.bounds toView:window];
    CGFloat delta = CGRectGetMidY(buttonRect) - CGRectGetMidY(containerRect);
    if (delta > -0.5f && delta < 0.5f) {
        return NO;
    }

    CGFloat newY = wcpl_viewOriginY(container) + delta;
    wcpl_setViewOriginY(container, newY);
    WCPLLogInfo(@"[搜索] %@ alignSearchBarContainer delta=%.2f newY=%.2f container=%@",
                stage ?: @"align",
                delta,
                newY,
                NSStringFromClass([container class]) ?: @"unknown");
    return YES;
}

static __attribute__((unused)) void wcpl_scheduleSearchBarAlignment(id controller, NSString *stage) {
    if (!controller) {
        return;
    }
    id weakController = controller;
    NSString *prefix = [stage isKindOfClass:[NSString class]] && stage.length > 0 ? stage : @"align";
    const NSTimeInterval delays[] = {0.02, 0.08, 0.18};
    for (NSUInteger i = 0; i < sizeof(delays) / sizeof(delays[0]); i++) {
        NSTimeInterval delay = delays[i];
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            if (!weakController) {
                return;
            }
            wcpl_alignSearchBarContainerToSearchButton(weakController,
                                                       [NSString stringWithFormat:@"%@ %.0fms", prefix, delay * 1000.0]);
        });
    }
}

static __attribute__((unused)) void wcpl_miyouFinishSearch(id controller, NSString *stage) {
    BOOL finished = NO;

    id searcher = wcpl_miyouSearcherFromController(controller);
    if (searcher && [searcher respondsToSelector:@selector(finishSearch)]) {
        @try {
            ((void (*)(id, SEL))objc_msgSend)(searcher, @selector(finishSearch));
            finished = YES;
        } @catch (__unused NSException *exception) {
        }
    }

    if (!finished) {
        id helper = wcpl_msgSearchHelperFromController(controller);
        if (helper && [helper respondsToSelector:@selector(finishSearch)]) {
            @try {
                ((void (*)(id, SEL))objc_msgSend)(helper, @selector(finishSearch));
                finished = YES;
            } @catch (__unused NSException *exception) {
            }
        }
    }

    if (finished) {
        WCPLLogInfo(@"[搜索] %@ finishSearch 已执行", stage ?: @"miyou");
    }
}

static __attribute__((unused)) void wcpl_miyouRecoverTouchAfterCancel(id controller, NSString *stage) {
    if (!controller) {
        return;
    }

    wcpl_forceDisableSearchPresentationOverlay(controller,
                                               [NSString stringWithFormat:@"%@/touch-now", stage ?: @"[搜索] cancel"]);

    __weak id weakController = controller;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.10 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        id strongController = weakController;
        if (!strongController) {
            return;
        }
        wcpl_forceDisableSearchPresentationOverlay(strongController,
                                                   [NSString stringWithFormat:@"%@/touch-100ms", stage ?: @"[搜索] cancel"]);
    });
}

static __attribute__((unused)) BOOL wcpl_miyouPushSearchController(id controller) {
    id searcher = wcpl_miyouSearcherFromController(controller);
    SEL pushSel = @selector(pushSearchControllerWithCompletion:);
    if (!searcher || ![searcher respondsToSelector:pushSel]) {
        WCPLLogInfo(@"[搜索] pushSearchControllerWithCompletion 不可用 searcher=%@",
                    searcher ? (NSStringFromClass([searcher class]) ?: @"unknown") : @"nil");
        return NO;
    }

    @try {
        ((void (*)(id, SEL, id))objc_msgSend)(searcher, pushSel, nil);
        WCPLLogInfo(@"[搜索] pushSearchControllerWithCompletion 已触发 searcher=%@",
                    NSStringFromClass([searcher class]) ?: @"unknown");
        return YES;
    } @catch (__unused NSException *exception) {
        WCPLLogInfo(@"[搜索] pushSearchControllerWithCompletion 异常");
        return NO;
    }
}

static __attribute__((unused)) BOOL wcpl_pushSearchSceneFallback(id contact, UINavigationController *navigationController) {
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

static __attribute__((unused)) void wcpl_forceActivateSearchControllerIfNeeded(id controller, id helper, NSString *stage) {
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

static __attribute__((unused)) void wcpl_scheduleNativeFallbackIfSearchStuck(id controller) {
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

        WCPLLogInfo(@"[搜索] [FixFallback] 检测到卡死态，执行 dismiss + 完整搜索链路重启");
        UIViewController *owner = (UIViewController *)weakController;
        UINavigationController *nav = owner.navigationController;
        id helper = wcpl_msgSearchHelperFromController(weakController);
        wcpl_resetSearchHelperRuntimeState(helper, @"[搜索] [FixFallback]");

        void (^retryNative)(void) = ^{
            wcpl_markForceFullSearchMode(weakController, YES);
            wcpl_forceSetSearchBusinessTypeToNormal(weakController, @"[搜索] [FixFallback] native前");
            wcpl_resetSpecialHelperForNativeFullSearch(weakController, @"[搜索] [FixFallback] native前");

            SEL initSearchSel = @selector(initMsgSearchHelper:);
            if ([weakController respondsToSelector:initSearchSel]) {
                @try {
                    ((void (*)(id, SEL, int))objc_msgSend)(weakController, initSearchSel, 0);
                } @catch (__unused NSException *exception) {
                }
            }

            BOOL relaunched = wcpl_miyouPushSearchController(weakController);
            if (!relaunched) {
                id contact = nil;
                @try {
                    if ([weakController respondsToSelector:@selector(GetContact)]) {
                        contact = ((id (*)(id, SEL))objc_msgSend)(weakController, @selector(GetContact));
                    }
                } @catch (__unused NSException *exception) {
                    contact = nil;
                }
                relaunched = wcpl_pushSearchSceneFallback(contact, nav);
            }

            WCPLLogInfo(@"[搜索] [FixFallback] 完整搜索重启结果=%@",
                        relaunched ? @"YES" : @"NO");
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

static __attribute__((unused)) void wcpl_schedulePostActivationTouchProbes(id controller) {
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

static __attribute__((unused)) BOOL wcpl_activateInPageSearchState(id controller) {
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
    // 历史异步补偿在「快速取消 -> 再次点击」场景会重入，导致重复搜索框；此链路停用。

    WCPLLogInfo(@"[搜索] 同页激活 businessType=%u helper=%@ started=%@",
                businessType,
                NSStringFromClass([helper class]),
                helperStarted ? @"YES" : @"NO");
    wcpl_logSearchHelperSnapshot(controller, @"[搜索] 激活后");
    // 同上：停用激活后的异步补偿，避免取消后延迟任务再次改写 UI。

    return activated;
}

static __attribute__((unused)) BOOL wcpl_beginChatSearchTransition(id controller) {
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

static __attribute__((unused)) void wcpl_endChatSearchTransition(id controller) {
    if (!controller) {
        return;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchTransitioningKey, @NO, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static __attribute__((unused)) BOOL wcpl_beginCancelTransition(id controller) {
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

static __attribute__((unused)) void wcpl_endCancelTransition(id controller) {
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

static __attribute__((unused)) BOOL wcpl_shouldForceFullSearchMode(id controller) {
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

static __attribute__((unused)) void wcpl_clearSearchEnhanceRetry(id controller) {
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

static __attribute__((unused)) BOOL wcpl_shouldFinalizeSearchDismiss(id controller) {
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

static __attribute__((unused)) BOOL wcpl_shouldPreferNativeReturnAnimation(id controller) {
    if (!controller) {
        return NO;
    }
    // 密友行为对齐：仅在插件注入搜索链中优先保留原生取消动画。
    return wcpl_isInjectedChatSearchFlow(controller);
}

static __attribute__((unused)) void wcpl_scheduleNativeReturnTouchFailSafe(id controller, NSString *stagePrefix, NSTimeInterval delay) {
    if (!controller) {
        return;
    }

    NSString *prefix = ([stagePrefix isKindOfClass:[NSString class]] && stagePrefix.length > 0)
        ? stagePrefix
        : @"[搜索] native-return-touch";
    __weak id weakController = controller;
    NSTimeInterval safeDelay = delay > 0 ? delay : 0.20;

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(safeDelay * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        id strongController = weakController;
        if (!strongController) {
            return;
        }

        BOOL recovered = wcpl_forceDisableSearchPresentationOverlay(strongController,
                                                                    [NSString stringWithFormat:@"%@ 触控兜底", prefix]);
        if (recovered) {
            WCPLLogInfo(@"[搜索] %@ 触控兜底恢复完成", prefix);
        }
    });
}

static __attribute__((unused)) void wcpl_scheduleNativeReturnFallbackCleanup(id controller, NSString *stagePrefix, NSTimeInterval delay) {
    if (!controller) {
        return;
    }

    NSString *prefix = ([stagePrefix isKindOfClass:[NSString class]] && stagePrefix.length > 0)
        ? stagePrefix
        : @"[搜索] native-return";
    __weak id weakController = controller;
    NSTimeInterval safeDelay = delay > 0 ? delay : 0.75;

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(safeDelay * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        id strongController = weakController;
        if (!strongController) {
            return;
        }

        // native-return 保留动画时，优先只做触控恢复，不做激进清理。
        BOOL recoveredTouch = wcpl_forceDisableSearchPresentationOverlay(strongController,
                                                                         [NSString stringWithFormat:@"%@ 触控兜底", prefix]);
        if (recoveredTouch) {
            WCPLLogInfo(@"[搜索] %@ 延迟触控兜底恢复完成", prefix);
        }

        BOOL stillSearchLike = wcpl_isControllerShowingSearchUI(strongController) ||
                               wcpl_navTitleViewLooksSearchLike(strongController) ||
                               wcpl_navBarHasSearchResidue(strongController) ||
                               wcpl_controllerRootHasSearchResidue(strongController);
        if (!stillSearchLike) {
            WCPLLogInfo(@"[搜索] %@ 保持原生回退动画完成", prefix);
            return;
        }

        WCPLLogInfo(@"[搜索] %@ 检测到残留，触发兜底收口", prefix);
        wcpl_markForceDelayedExitRepair(strongController, YES);
        wcpl_finalizeExitSearchUIIfNeeded(strongController, [NSString stringWithFormat:@"%@ 兜底收口", prefix]);
    });
}

static void wcpl_markChatSearchAutoPopOnCancel(id controller, BOOL enable) {
    if (!controller) {
        return;
    }

    objc_setAssociatedObject(controller, kWCPLChatSearchAutoPopOnCancelKey, @(enable), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static __attribute__((unused)) void wcpl_tryAutoPopAfterSearchCancel(id controller) {
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
        // 直接手绘，避免 WAThemeProxy/SF Symbol 兜底造成样式跑偏。
        CGSize size = CGSizeMake(24.0, 24.0);
        UIGraphicsBeginImageContextWithOptions(size, NO, 0);
        UIColor *ink = [UIColor colorWithWhite:0.0 alpha:1.0];
        [ink setStroke];
        [ink setFill];

        CGFloat strokeW = 1.6;

        UIBezierPath *face = [UIBezierPath bezierPath];
        face.lineWidth = strokeW;
        face.lineCapStyle = kCGLineCapRound;
        face.lineJoinStyle = kCGLineJoinRound;
        [face moveToPoint:CGPointMake(5.2, 9.4)];
        [face addCurveToPoint:CGPointMake(12.0, 18.8)
                controlPoint1:CGPointMake(5.2, 15.2)
                controlPoint2:CGPointMake(8.3, 18.8)];
        [face addCurveToPoint:CGPointMake(18.8, 9.4)
                controlPoint1:CGPointMake(15.7, 18.8)
                controlPoint2:CGPointMake(18.8, 15.2)];
        [face stroke];

        UIBezierPath *eyeL = [UIBezierPath bezierPath];
        eyeL.lineWidth = strokeW;
        eyeL.lineCapStyle = kCGLineCapRound;
        eyeL.lineJoinStyle = kCGLineJoinRound;
        [eyeL moveToPoint:CGPointMake(7.8, 10.8)];
        [eyeL addCurveToPoint:CGPointMake(10.2, 10.2)
                controlPoint1:CGPointMake(7.8, 10.1)
                controlPoint2:CGPointMake(9.7, 9.7)];
        [eyeL stroke];

        UIBezierPath *eyeR = [UIBezierPath bezierPath];
        eyeR.lineWidth = strokeW;
        eyeR.lineCapStyle = kCGLineCapRound;
        eyeR.lineJoinStyle = kCGLineJoinRound;
        [eyeR moveToPoint:CGPointMake(13.8, 10.2)];
        [eyeR addCurveToPoint:CGPointMake(16.2, 10.8)
                controlPoint1:CGPointMake(14.3, 9.7)
                controlPoint2:CGPointMake(16.2, 10.1)];
        [eyeR stroke];

        UIBezierPath *nose = [UIBezierPath bezierPathWithOvalInRect:CGRectMake(10.6, 11.0, 2.8, 2.8)];
        [nose fill];

        UIBezierPath *mouth = [UIBezierPath bezierPath];
        mouth.lineWidth = strokeW;
        mouth.lineCapStyle = kCGLineCapRound;
        mouth.lineJoinStyle = kCGLineJoinRound;
        [mouth moveToPoint:CGPointMake(8.5, 14.8)];
        [mouth addCurveToPoint:CGPointMake(15.5, 14.8)
                 controlPoint1:CGPointMake(9.7, 16.6)
                 controlPoint2:CGPointMake(14.3, 16.6)];
        [mouth stroke];

        UIBezierPath *hatL = [UIBezierPath bezierPath];
        hatL.lineWidth = strokeW;
        hatL.lineCapStyle = kCGLineCapRound;
        hatL.lineJoinStyle = kCGLineJoinRound;
        [hatL moveToPoint:CGPointMake(5.2, 9.4)];
        [hatL addLineToPoint:CGPointMake(3.0, 4.8)];
        [hatL stroke];

        UIBezierPath *hatR = [UIBezierPath bezierPath];
        hatR.lineWidth = strokeW;
        hatR.lineCapStyle = kCGLineCapRound;
        hatR.lineJoinStyle = kCGLineJoinRound;
        [hatR moveToPoint:CGPointMake(18.8, 9.4)];
        [hatR addLineToPoint:CGPointMake(21.0, 4.8)];
        [hatR stroke];

        UIBezierPath *hatC = [UIBezierPath bezierPath];
        hatC.lineWidth = strokeW;
        hatC.lineCapStyle = kCGLineCapRound;
        hatC.lineJoinStyle = kCGLineJoinRound;
        [hatC moveToPoint:CGPointMake(7.8, 7.2)];
        [hatC addLineToPoint:CGPointMake(12.0, 2.4)];
        [hatC addLineToPoint:CGPointMake(16.2, 7.2)];
        [hatC stroke];

        [[UIBezierPath bezierPathWithOvalInRect:CGRectMake(1.8, 3.9, 2.4, 2.4)] fill];
        [[UIBezierPath bezierPathWithOvalInRect:CGRectMake(19.8, 3.9, 2.4, 2.4)] fill];
        [[UIBezierPath bezierPathWithOvalInRect:CGRectMake(10.8, 1.3, 2.4, 2.4)] fill];

        UIBezierPath *collar = [UIBezierPath bezierPath];
        collar.lineWidth = strokeW;
        collar.lineCapStyle = kCGLineCapRound;
        collar.lineJoinStyle = kCGLineJoinRound;
        [collar moveToPoint:CGPointMake(4.2, 18.6)];
        [collar addLineToPoint:CGPointMake(6.6, 20.8)];
        [collar addLineToPoint:CGPointMake(9.0, 18.6)];
        [collar addLineToPoint:CGPointMake(11.4, 20.8)];
        [collar addLineToPoint:CGPointMake(13.8, 18.6)];
        [collar addLineToPoint:CGPointMake(16.2, 20.8)];
        [collar addLineToPoint:CGPointMake(18.6, 18.6)];
        [collar addLineToPoint:CGPointMake(20.8, 20.8)];
        [collar stroke];

        UIImage *drawn = UIGraphicsGetImageFromCurrentImageContext();
        UIGraphicsEndImageContext();
        if ([drawn isKindOfClass:[UIImage class]]) {
            icon = drawn;
        }

        if (icon && [icon respondsToSelector:@selector(imageWithRenderingMode:)]) {
            icon = [icon imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
        }
    });
    return icon;
}

static UIImage *wcpl_voiceForwardMenuIconImage(void) {
    static UIImage *icon = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSString *svg =
            @"<svg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 24 24'>"
            "<path d='M7 9C8.5 10.5 8.5 13.5 7 15' fill='none' stroke='#ECECF0' stroke-width='1.5' stroke-linecap='round'/>"
            "<path d='M10 7C12.5 9.5 12.5 14.5 10 17' fill='none' stroke='#ECECF0' stroke-width='1.5' stroke-linecap='round'/>"
            "<path d='M14 19H5C3.89543 19 3 18.1046 3 17V7C3 5.89543 3.89543 5 5 5H15C16.1046 5 17 5.89543 17 7V11' fill='none' stroke='#ECECF0' stroke-width='1.5' stroke-linecap='round' stroke-linejoin='round'/>"
            "<path d='M16 15H21M21 15L18 12M21 15L18 18' fill='none' stroke='#ECECF0' stroke-width='1.5' stroke-linecap='round' stroke-linejoin='round'/>"
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
                symbol = [UIImage systemImageNamed:@"arrowshape.turn.up.right" withConfiguration:config];
                if (!symbol) {
                    symbol = [UIImage systemImageNamed:@"waveform" withConfiguration:config];
                }
            }
            if (!symbol) {
                symbol = [UIImage systemImageNamed:@"arrowshape.turn.up.right"];
            }
            if (!symbol) {
                symbol = [UIImage systemImageNamed:@"waveform"];
            }
            if (!symbol) {
                symbol = [UIImage systemImageNamed:@"arrow.right"];
            }
            if (symbol) {
                icon = symbol;
            }
        }

        if (icon && [icon respondsToSelector:@selector(imageWithRenderingMode:)]) {
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

static UIColor *wcpl_menuIconTintColor(void) {
    if (@available(iOS 13.0, *)) {
        UIUserInterfaceStyle style = UIUserInterfaceStyleUnspecified;
        UIApplication *application = [UIApplication sharedApplication];
        if ([application respondsToSelector:@selector(windows)]) {
            for (UIWindow *window in application.windows) {
                if (![window isKindOfClass:[UIWindow class]]) {
                    continue;
                }
                UIUserInterfaceStyle windowStyle = window.traitCollection.userInterfaceStyle;
                if (windowStyle != UIUserInterfaceStyleUnspecified) {
                    style = windowStyle;
                    if (window.isKeyWindow) {
                        break;
                    }
                }
            }
        }
        if (style == UIUserInterfaceStyleDark) {
            return [UIColor colorWithWhite:0.92 alpha:1.0];
        }
        return [UIColor colorWithWhite:0.16 alpha:1.0];
    }
    return [UIColor colorWithWhite:0.16 alpha:1.0];
}

static void wcpl_applyMenuItemIcon(id menuItem, UIImage *icon) {
    wcpl_applyMenuItemIconWithTint(menuItem, icon, YES);
}

static void wcpl_applyMenuItemIconWithTint(id menuItem, UIImage *icon, BOOL shouldTint) {
    if (!menuItem || !icon) {
        return;
    }

    UIImage *finalIcon = icon;
    if (shouldTint && [finalIcon respondsToSelector:@selector(imageWithTintColor:)]) {
        @try {
            finalIcon = [finalIcon imageWithTintColor:wcpl_menuIconTintColor()];
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

static __attribute__((unused)) UIViewController *wcpl_viewControllerFromResponderChain(UIResponder *responder) {
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

static __attribute__((unused)) BOOL wcpl_viewHasSearchLikeAncestor(UIView *view) {
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

static BOOL wcpl_isVoiceMessage(CMessageWrap *msgWrap) {
    return (msgWrap && msgWrap.m_uiMessageType == 34);
}

static id wcpl_serviceByClass(Class serviceClass) {
    if (!serviceClass) {
        return nil;
    }

    Class serviceCenterClass = objc_getClass("MMServiceCenter");
    if (!serviceCenterClass || ![serviceCenterClass respondsToSelector:@selector(defaultCenter)]) {
        return nil;
    }

    id serviceCenter = nil;
    @try {
        serviceCenter = ((id (*)(id, SEL))objc_msgSend)(serviceCenterClass, @selector(defaultCenter));
    } @catch (__unused NSException *exception) {
        serviceCenter = nil;
    }
    if (!serviceCenter || ![serviceCenter respondsToSelector:@selector(getService:)]) {
        return nil;
    }

    @try {
        return ((id (*)(id, SEL, Class))objc_msgSend)(serviceCenter, @selector(getService:), serviceClass);
    } @catch (__unused NSException *exception) {
        return nil;
    }
}

static id wcpl_createVoiceForwardMenuItem(Class menuItemClass, id cell, SEL action) {
    if (!menuItemClass || !cell || !action) {
        return nil;
    }

    NSString *title = @"语音转发";
    UIImage *icon = wcpl_voiceForwardMenuIconImage();
    id menuItem = nil;

    if (icon && [menuItemClass instancesRespondToSelector:@selector(initWithTitle:icon:target:action:)]) {
        @try {
            menuItem = [[menuItemClass alloc] initWithTitle:title icon:icon target:cell action:action];
        } @catch (__unused NSException *exception) {
        }
    }

    if (!menuItem && [menuItemClass instancesRespondToSelector:@selector(initWithTitle:target:action:)]) {
        @try {
            menuItem = [[menuItemClass alloc] initWithTitle:title target:cell action:action];
        } @catch (__unused NSException *exception) {
        }
    }

    if (menuItem && icon) {
        wcpl_applyMenuItemIcon(menuItem, icon);
    }
    return menuItem;
}

static NSArray *wcpl_injectVoiceForwardMenuItemIfNeeded(id cell, NSArray *items) {
    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(cell);
    if (!wcpl_isVoiceMessage(msgWrap)) {
        return items;
    }

    Class menuItemClass = objc_getClass("MMMenuItem");
    if (!menuItemClass) {
        return items;
    }

    SEL customAction = @selector(wcpl_handleVoiceForwardMenuItem:);
    SEL nativeForwardAction = @selector(onForward:);
    SEL nativeDoForwardAction = @selector(doForward);

    NSMutableArray *mutableItems = items ? [items mutableCopy] : [NSMutableArray array];
    for (id item in mutableItems) {
        if (![item isKindOfClass:menuItemClass] || ![item respondsToSelector:@selector(action)]) {
            continue;
        }
        @try {
            SEL itemAction = ((SEL (*)(id, SEL))objc_msgSend)(item, @selector(action));
            if (itemAction == customAction ||
                itemAction == nativeForwardAction ||
                itemAction == nativeDoForwardAction) {
                return mutableItems;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    id menuItem = wcpl_createVoiceForwardMenuItem(menuItemClass, cell, customAction);
    if (menuItem) {
        [mutableItems addObject:menuItem];
        WCPLLogInfo(@"[语音转发] 注入长按菜单: class=%@", NSStringFromClass([cell class]) ?: @"(nil)");
    }
    return mutableItems;
}

static BOOL wcpl_tryForwardObjObj(id target,
                                  SEL selector,
                                  id arg1,
                                  id arg2,
                                  NSString *routeTag) {
    if (!(target && selector && arg1 && arg2)) {
        return NO;
    }
    if (![target respondsToSelector:selector]) {
        return NO;
    }
    @try {
        ((void (*)(id, SEL, id, id))objc_msgSend)(target, selector, arg1, arg2);
        WCPLLogInfo(@"[语音转发] 命中链路 route=%@", routeTag ?: @"unknown");
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[语音转发] 链路异常 route=%@ reason=%@",
                       routeTag ?: @"unknown",
                       exception.reason ?: @"unknown");
        return NO;
    }
}

static BOOL wcpl_tryForwardObjObjUInt(id target,
                                      SEL selector,
                                      id arg1,
                                      id arg2,
                                      unsigned int arg3,
                                      NSString *routeTag) {
    if (!(target && selector && arg1 && arg2)) {
        return NO;
    }
    if (![target respondsToSelector:selector]) {
        return NO;
    }
    @try {
        ((void (*)(id, SEL, id, id, unsigned int))objc_msgSend)(target, selector, arg1, arg2, arg3);
        WCPLLogInfo(@"[语音转发] 命中链路 route=%@", routeTag ?: @"unknown");
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[语音转发] 链路异常 route=%@ reason=%@",
                       routeTag ?: @"unknown",
                       exception.reason ?: @"unknown");
        return NO;
    }
}

static BOOL wcpl_tryForwardObjObjUIntUInt(id target,
                                          SEL selector,
                                          id arg1,
                                          id arg2,
                                          unsigned int arg3,
                                          unsigned int arg4,
                                          NSString *routeTag) {
    if (!(target && selector && arg1 && arg2)) {
        return NO;
    }
    if (![target respondsToSelector:selector]) {
        return NO;
    }
    @try {
        ((void (*)(id, SEL, id, id, unsigned int, unsigned int))objc_msgSend)(target,
                                                                               selector,
                                                                               arg1,
                                                                               arg2,
                                                                               arg3,
                                                                               arg4);
        WCPLLogInfo(@"[语音转发] 命中链路 route=%@", routeTag ?: @"unknown");
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[语音转发] 链路异常 route=%@ reason=%@",
                       routeTag ?: @"unknown",
                       exception.reason ?: @"unknown");
        return NO;
    }
}

static BOOL wcpl_tryForwardObjObjObj(id target,
                                     SEL selector,
                                     id arg1,
                                     id arg2,
                                     id arg3,
                                     NSString *routeTag) {
    if (!(target && selector && arg1 && arg2 && arg3)) {
        return NO;
    }
    if (![target respondsToSelector:selector]) {
        return NO;
    }
    @try {
        ((void (*)(id, SEL, id, id, id))objc_msgSend)(target, selector, arg1, arg2, arg3);
        WCPLLogInfo(@"[语音转发] 命中链路 route=%@", routeTag ?: @"unknown");
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[语音转发] 链路异常 route=%@ reason=%@",
                       routeTag ?: @"unknown",
                       exception.reason ?: @"unknown");
        return NO;
    }
}

static BOOL wcpl_tryForwardObjObjUIntObj(id target,
                                         SEL selector,
                                         id arg1,
                                         id arg2,
                                         unsigned int arg3,
                                         id arg4,
                                         NSString *routeTag) {
    if (!(target && selector && arg1 && arg2)) {
        return NO;
    }
    if (![target respondsToSelector:selector]) {
        return NO;
    }
    @try {
        ((id (*)(id, SEL, id, id, unsigned int, id))objc_msgSend)(target,
                                                                   selector,
                                                                   arg1,
                                                                   arg2,
                                                                   arg3,
                                                                   arg4);
        WCPLLogInfo(@"[语音转发] 命中链路 route=%@", routeTag ?: @"unknown");
        return YES;
    } @catch (NSException *exception) {
        WCPLLogWarning(@"[语音转发] 链路异常 route=%@ reason=%@",
                       routeTag ?: @"unknown",
                       exception.reason ?: @"unknown");
        return NO;
    }
}

static NSArray<NSString *> *wcpl_sanitizedForwardIdentifiers(NSArray<NSString *> *identifiers) {
    if (![identifiers isKindOfClass:[NSArray class]]) {
        return @[];
    }
    NSMutableOrderedSet<NSString *> *results = [NSMutableOrderedSet orderedSet];
    for (id obj in identifiers) {
        if (![obj isKindOfClass:[NSString class]]) {
            continue;
        }
        NSString *value = wcpl_trimString((NSString *)obj);
        if (value.length > 0) {
            [results addObject:value];
        }
    }
    return results.array;
}

static CContact *wcpl_forwardContactForIdentifier(NSString *identifier, UIViewController *viewController) {
    NSString *userName = wcpl_trimString(identifier);
    if (userName.length == 0) {
        return nil;
    }

    CContactMgr *contactMgr = wcpl_serviceByClass(objc_getClass("CContactMgr"));
    ContactsDataLogic *dataLogic = nil;
    NSArray<NSString *> *logicKeys = @[@"m_contactsDataLogic", @"contactsDataLogic", @"m_contactDataLogic"];
    for (NSString *key in logicKeys) {
        @try {
            id value = [viewController valueForKey:key];
            if ([value isKindOfClass:objc_getClass("ContactsDataLogic")]) {
                dataLogic = (ContactsDataLogic *)value;
                break;
            }
        } @catch (__unused NSException *exception) {
        }
    }

    return WCPLFindContactByUserName(userName, contactMgr, dataLogic);
}

static BOOL wcpl_forwardVoiceToTarget(CMessageWrap *msgWrap,
                                      UIViewController *viewController,
                                      id targetContact,
                                      NSString *targetIdentifier) {
    if (!(wcpl_isVoiceMessage(msgWrap) &&
          [viewController isKindOfClass:[UIViewController class]] &&
          targetContact)) {
        return NO;
    }

    NSString *target = targetIdentifier.length > 0 ? targetIdentifier : @"(unknown)";

    Class lmUtilsClass = objc_getClass("LMUtils");
    if (wcpl_tryForwardObjObj((id)lmUtilsClass,
                              NSSelectorFromString(@"ForwardMsg:ToContact:"),
                              msgWrap,
                              targetContact,
                              [NSString stringWithFormat:@"LMUtils/%@", target])) {
        return YES;
    }

    Class forwardUtilClass = objc_getClass("ForwardMsgUtil");
    if (wcpl_tryForwardObjObjUInt((id)forwardUtilClass,
                                  @selector(ForwardMsg:ToContact:Scene:),
                                  msgWrap,
                                  targetContact,
                                  (unsigned int)3,
                                  [NSString stringWithFormat:@"ForwardMsgUtil.api3/%@", target])) {
        return YES;
    }
    if (wcpl_tryForwardObjObjUIntUInt((id)forwardUtilClass,
                                      @selector(ForwardMsg:ToContact:Scene:forwardType:),
                                      msgWrap,
                                      targetContact,
                                      (unsigned int)3,
                                      (unsigned int)0,
                                      [NSString stringWithFormat:@"ForwardMsgUtil.api4/%@", target])) {
        return YES;
    }
    if (wcpl_tryForwardObjObjUIntObj((id)forwardUtilClass,
                                     @selector(SendMsgWithOriMsg:Contact:ForwardType:EditImageAttr:),
                                     msgWrap,
                                     targetContact,
                                     (unsigned int)0,
                                     nil,
                                     [NSString stringWithFormat:@"ForwardMsgUtil.sendmsg/%@", target])) {
        return YES;
    }

    id forwardMgr = wcpl_serviceByClass(objc_getClass("ForwardMessageMgr"));
    if (wcpl_tryForwardObjObjObj(forwardMgr,
                                 NSSelectorFromString(@"forwardMessage:fromViewController:toContact:"),
                                 msgWrap,
                                 viewController,
                                 targetContact,
                                 [NSString stringWithFormat:@"ForwardMessageMgr.toContact/%@", target])) {
        return YES;
    }
    return NO;
}

static NSUInteger wcpl_forwardVoiceToIdentifiers(CMessageWrap *msgWrap,
                                                 UIViewController *viewController,
                                                 NSArray<NSString *> *identifiers) {
    NSArray<NSString *> *targets = wcpl_sanitizedForwardIdentifiers(identifiers);
    NSUInteger successCount = 0;
    for (NSString *identifier in targets) {
        CContact *contact = wcpl_forwardContactForIdentifier(identifier, viewController);
        BOOL success = NO;
        if (contact) {
            success = wcpl_forwardVoiceToTarget(msgWrap, viewController, contact, identifier);
        }
        if (!success) {
            success = wcpl_forwardVoiceToTarget(msgWrap, viewController, identifier, identifier);
        }
        successCount += success ? 1 : 0;
    }
    WCPLLogInfo(@"[语音转发] 发送结果 selected=%lu success=%lu",
                (unsigned long)targets.count,
                (unsigned long)successCount);
    return successCount;
}

static BOOL wcpl_presentVoiceForwardPicker(CMessageWrap *msgWrap, UIViewController *viewController) {
    if (!(wcpl_isVoiceMessage(msgWrap) && [viewController isKindOfClass:[UIViewController class]])) {
        return NO;
    }

    Class pickerDataProviderClass = objc_getClass("WCPLPickerDataProvider");
    SEL allItemsSelector = @selector(allPickerItems);
    if (!(pickerDataProviderClass && [pickerDataProviderClass respondsToSelector:allItemsSelector])) {
        WCPLLogWarning(@"[语音转发] WCPLPickerDataProvider 不可用");
        return NO;
    }

    NSArray *allItems = nil;
    @try {
        allItems = ((id (*)(id, SEL))objc_msgSend)(pickerDataProviderClass, allItemsSelector);
    } @catch (__unused NSException *exception) {
        allItems = nil;
    }
    if (![allItems isKindOfClass:[NSArray class]] || allItems.count == 0) {
        WCPLLogWarning(@"[语音转发] 联系人数据为空，无法弹出选择器");
        return NO;
    }

    Class pickerClass = objc_getClass("WCPLContactGroupPickerViewController");
    SEL initSelector = NSSelectorFromString(@"initWithItems:pickerMode:preselectedIdentifiers:");
    if (!(pickerClass && [pickerClass instancesRespondToSelector:initSelector])) {
        WCPLLogWarning(@"[语音转发] WCPLContactGroupPickerViewController 不可用");
        return NO;
    }

    id picker = nil;
    @try {
        picker = ((id (*)(id, SEL, id, NSUInteger, id))objc_msgSend)([pickerClass alloc],
                                                                      initSelector,
                                                                      allItems,
                                                                      (NSUInteger)1,
                                                                      nil);
    } @catch (__unused NSException *exception) {
        picker = nil;
    }
    if (!picker) {
        return NO;
    }

    if ([picker respondsToSelector:@selector(setTitleText:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(picker, @selector(setTitleText:), @"语音转发");
        } @catch (__unused NSException *exception) {
        }
    }
    if ([picker respondsToSelector:@selector(setEnableTypeSegment:)]) {
        @try {
            ((void (*)(id, SEL, BOOL))objc_msgSend)(picker, @selector(setEnableTypeSegment:), YES);
        } @catch (__unused NSException *exception) {
        }
    }
    if ([picker respondsToSelector:@selector(setEnableSectionByType:)]) {
        @try {
            ((void (*)(id, SEL, BOOL))objc_msgSend)(picker, @selector(setEnableSectionByType:), NO);
        } @catch (__unused NSException *exception) {
        }
    }

    __weak UIViewController *weakViewController = viewController;
    CMessageWrap *forwardWrap = msgWrap;
    void (^onFinishBlock)(NSArray *, NSArray *) = ^(NSArray *selectedItems, NSArray *selectedIdentifiers) {
        (void)selectedItems;
        UIViewController *strongViewController = weakViewController;
        if (!strongViewController) {
            return;
        }
        wcpl_forwardVoiceToIdentifiers(forwardWrap, strongViewController, (NSArray<NSString *> *)selectedIdentifiers);
    };
    if ([picker respondsToSelector:@selector(setOnFinish:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(picker, @selector(setOnFinish:), onFinishBlock);
        } @catch (__unused NSException *exception) {
        }
    }

    UINavigationController *navigationController = [[UINavigationController alloc] initWithRootViewController:picker];
    navigationController.modalPresentationStyle = UIModalPresentationFullScreen;

    UIViewController *presenter = viewController;
    while ([presenter.presentedViewController isKindOfClass:[UIViewController class]] &&
           !presenter.presentedViewController.isBeingDismissed) {
        presenter = presenter.presentedViewController;
    }
    if (![presenter respondsToSelector:@selector(presentViewController:animated:completion:)]) {
        return NO;
    }

    [presenter presentViewController:navigationController animated:YES completion:nil];
    WCPLLogInfo(@"[语音转发] 已弹出选择器 items=%lu", (unsigned long)allItems.count);
    return YES;
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
    wcpl_updateChatSearchButtonForViewController(self);
}

- (void)viewDidAppear:(_Bool)arg1 {
    %orig;
    if ([self respondsToSelector:@selector(updateRightBar)]) {
        ((void (*)(id, SEL))objc_msgSend)(self, @selector(updateRightBar));
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
    return %orig;
}

- (void)initMsgSearchHelper:(int)type {
    %orig(type);
}

- (void)msgSearchBarCancel {
    wcpl_miyouHideSearchBarContainer(self, @"[搜索] cancel/pre");
    %orig;
    wcpl_miyouHideSearchBarContainer(self, @"[搜索] cancel/post");
    wcpl_miyouFinishSearch(self, @"[搜索] cancel/post");
}

- (void)msgSearchBarCancelForSpecialMsg {
    wcpl_miyouHideSearchBarContainer(self, @"[搜索] special cancel/pre");
    %orig;
    wcpl_miyouHideSearchBarContainer(self, @"[搜索] special cancel/post");
    wcpl_miyouFinishSearch(self, @"[搜索] special cancel/post");
}

- (void)msgSearchDidDismissForSpecialMsg {
    %orig;
}

- (void)msgSearchDidDismiss {
    %orig;
}

- (void)onSearchButton:(id)sender {
    // 原生入口保持原生行为，避免二次改写导致导航 titleView 残留搜索框。
    %orig;
}

%new
- (void)onSearchItem {
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{
            ((void (*)(id, SEL))objc_msgSend)(self, @selector(onSearchItem));
        });
        return;
    }

    WCPLLogInfo(@"[搜索] onSearchItem 命中，进入密友同款链路");

    SEL panSel = @selector(setBUsePanCancelGesture:);
    if ([self respondsToSelector:panSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(self, panSel, YES);
    }

    wcpl_miyouPrepareSearchBarContainerForSearchEntry(self, @"[搜索] onSearchItem");
    BOOL launched = wcpl_miyouPushSearchController(self);
    if (!launched) {
        SEL initSel = @selector(initMsgSearchHelper:);
        if ([self respondsToSelector:initSel]) {
            @try {
                ((void (*)(id, SEL, int))objc_msgSend)(self, initSel, 1);
            } @catch (__unused NSException *exception) {
            }
        }
        wcpl_miyouPrepareSearchBarContainerForSearchEntry(self, @"[搜索] onSearchItem/retry");
        launched = wcpl_miyouPushSearchController(self);
    }
    WCPLLogInfo(@"[搜索] onSearchItem 密友链路 pushSearchControllerWithCompletion result=%@",
                launched ? @"YES" : @"NO");
}

%new
- (void)searchItemAction {
    ((void (*)(id, SEL))objc_msgSend)(self, @selector(onSearchItem));
}

%new
- (void)wcpl_onTapChatSearchButton:(id)sender {
    (void)sender;
    if ([self respondsToSelector:@selector(onSearchItem)]) {
        ((void (*)(id, SEL))objc_msgSend)(self, @selector(onSearchItem));
    }
}

%end

%hook UIControl

- (void)sendAction:(SEL)action to:(id)target forEvent:(id)event {
    (void)action;
    (void)target;
    (void)event;
    %orig;
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

%hook VoiceMessageCellView

- (id)operationMenuItems {
    NSArray *items = %orig;
    return wcpl_injectVoiceForwardMenuItemIfNeeded(self, items);
}

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 {
    if (arg1 == @selector(wcpl_handleVoiceForwardMenuItem:)) {
        CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
        return wcpl_isVoiceMessage(msgWrap);
    }
    return %orig;
}

%new
- (void)wcpl_handleVoiceForwardMenuItem:(id)sender {
    (void)sender;
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{
            ((void (*)(id, SEL, id))objc_msgSend)(self, @selector(wcpl_handleVoiceForwardMenuItem:), nil);
        });
        return;
    }

    CMessageWrap *msgWrap = wcpl_messageWrapFromCell(self);
    if (!wcpl_isVoiceMessage(msgWrap)) {
        return;
    }

    UIViewController *viewController = wcpl_viewControllerFromCell(self);
    @try {
        UIMenuController *menuController = [UIMenuController sharedMenuController];
        SEL hideMenuSelector = NSSelectorFromString(@"hideMenuFromView:");
        if (menuController && [menuController respondsToSelector:hideMenuSelector]) {
            ((void (*)(id, SEL, id))objc_msgSend)(menuController, hideMenuSelector, self);
        }
    } @catch (__unused NSException *exception) {
    }

    BOOL handled = wcpl_presentVoiceForwardPicker(msgWrap, viewController);

    if (!handled && [self respondsToSelector:@selector(onForward:)]) {
        @try {
            ((void (*)(id, SEL, id))objc_msgSend)(self, @selector(onForward:), nil);
            WCPLLogInfo(@"[语音转发] fallback: onForward:");
            handled = YES;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"[语音转发] fallback onForward 异常: %@", exception.reason ?: @"unknown");
        }
    }

    if (!handled && [self respondsToSelector:@selector(doForward)]) {
        @try {
            ((void (*)(id, SEL))objc_msgSend)(self, @selector(doForward));
            WCPLLogInfo(@"[语音转发] fallback: doForward");
            handled = YES;
        } @catch (NSException *exception) {
            WCPLLogWarning(@"[语音转发] fallback doForward 异常: %@", exception.reason ?: @"unknown");
        }
    }

    if (!handled) {
        WCPLLogWarning(@"[语音转发] 所有链路不可用: class=%@",
                       NSStringFromClass([self class]) ?: @"(nil)");
    }
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
