#import "WCHookSwipeUtilities.h"

#import "WCPLViewTraversalHelpers.h"
#import <objc/message.h>

// Forward declaration - CommonMessageCellView is a UIView subclass
@interface CommonMessageCellView : UIView
@end

static const CGFloat kWCHookSwipeTriggerRatio = 0.18f;
static const CGFloat kWCHookSwipeMinimumTrigger = 44.0f;
static const CGFloat kWCHookSwipeResetDuration = 0.25f;
static const CGFloat kWCHookSwipeSpringDamping = 0.78f;
static const CGFloat kWCHookSwipeSpringVelocity = 0.0f;

static UITableViewCell *WCHookFindContainingTableViewCell(UIView *view);
static UITableView *WCHookFindContainingTableView(UIView *view);
static id WCHookMessageIdentifierForView(UIView *view);
static void WCHookCollectMessageCellViewsFromView(UIView *root, NSMutableArray<UIView *> *storage);

@implementation WCHookSwipeUtilities

+ (CGFloat)thresholdForView:(UIView *)view {
    if (!view) {
        return kWCHookSwipeMinimumTrigger;
    }
    CGFloat threshold = CGRectGetWidth(view.bounds) * kWCHookSwipeTriggerRatio;
    if (threshold < kWCHookSwipeMinimumTrigger) {
        threshold = kWCHookSwipeMinimumTrigger;
    }
    return threshold;
}

+ (BOOL)shouldIgnoreTranslation:(CGPoint)translation {
    if (translation.x > 0.0f) {
        return YES;
    }
    CGFloat absX = fabs(translation.x);
    CGFloat absY = fabs(translation.y);
    return absY > absX * 0.7f;
}

+ (BOOL)isVelocityEligible:(CGPoint)velocity {
    if (velocity.x >= 0.0f) {
        return NO;
    }
    CGFloat absX = fabs(velocity.x);
    CGFloat absY = fabs(velocity.y);
    return absX >= absY * 1.3f;
}

+ (CGFloat)clampedTranslation:(CGFloat)translation threshold:(CGFloat)threshold {
    if (translation >= 0.0f) {
        return 0.0f;
    }
    if (translation <= -threshold) {
        return -threshold;
    }
    return translation;
}

+ (BOOL)shouldTriggerWithTranslation:(CGPoint)translation
                            velocity:(CGPoint)velocity
                           threshold:(CGFloat)threshold {
    if (translation.x <= -threshold) {
        return YES;
    }
    return (velocity.x < -600.0f);
}

+ (NSArray<UIView *> *)relatedMessageViewsForCommonView:(CommonMessageCellView *)view {
    if (!view) {
        return @[];
    }
    
    NSMutableArray<UIView *> *collected = [NSMutableArray array];
    UITableViewCell *tableViewCell = WCHookFindContainingTableViewCell(view);
    if (!tableViewCell) {
        return @[view];
    }

    id messageIdentifier = WCHookMessageIdentifierForView(view);
    if (!messageIdentifier) {
        WCHookCollectMessageCellViewsFromView(tableViewCell.contentView, collected);
        if (collected.count == 0 || ![collected containsObject:view]) {
            [collected addObject:view];
        }
        return collected.copy;
    }

    UITableView *tableView = WCHookFindContainingTableView(tableViewCell);
    if (!tableView) {
        WCHookCollectMessageCellViewsFromView(tableViewCell.contentView, collected);
        if (collected.count == 0 || ![collected containsObject:view]) {
            [collected addObject:view];
        }
        return collected.copy;
    }

    NSMutableArray<UITableViewCell *> *candidateCells = [NSMutableArray array];
    NSArray<UITableViewCell *> *visibleCells = nil;
    if ([tableView respondsToSelector:@selector(visibleCells)]) {
        visibleCells = [tableView visibleCells];
    }
    if (visibleCells.count > 0) {
        [candidateCells addObjectsFromArray:visibleCells];
    }
    if (![candidateCells containsObject:tableViewCell]) {
        [candidateCells addObject:tableViewCell];
    }

    for (UITableViewCell *cell in candidateCells) {
        NSMutableArray<UIView *> *cellViews = [NSMutableArray array];
        WCHookCollectMessageCellViewsFromView(cell.contentView, cellViews);
        for (UIView *messageView in cellViews) {
            id otherIdentifier = WCHookMessageIdentifierForView(messageView);
            if (!otherIdentifier) {
                continue;
            }
            if (otherIdentifier == messageIdentifier || [otherIdentifier isEqual:messageIdentifier]) {
                if (![collected containsObject:messageView]) {
                    [collected addObject:messageView];
                }
            }
        }
    }

    if (collected.count == 0 || ![collected containsObject:view]) {
        [collected addObject:view];
    }

    return collected.copy;
}

+ (void)applyTransform:(CGAffineTransform)transform toViews:(NSArray<UIView *> *)views {
    for (UIView *messageView in views) {
        messageView.transform = transform;
    }
}

+ (void)animateResetForViews:(NSArray<UIView *> *)views animated:(BOOL)animated {
    if (views.count == 0) {
        return;
    }

    void (^resetBlock)(void) = ^{
        [self applyTransform:CGAffineTransformIdentity toViews:views];
    };

    if (!animated) {
        resetBlock();
        return;
    }

    [UIView animateWithDuration:kWCHookSwipeResetDuration
                          delay:0.0
         usingSpringWithDamping:kWCHookSwipeSpringDamping
          initialSpringVelocity:kWCHookSwipeSpringVelocity
                        options:UIViewAnimationOptionCurveEaseOut | UIViewAnimationOptionBeginFromCurrentState
                     animations:resetBlock
                     completion:nil];
}

#pragma mark - Bidirectional Swipe Support

+ (BOOL)shouldIgnoreTranslationBidirectional:(CGPoint)translation {
    // 双向滑动：只检查垂直方向是否过大
    CGFloat absX = fabs(translation.x);
    CGFloat absY = fabs(translation.y);
    return absY > absX * 0.7f;
}

+ (BOOL)isVelocityEligibleBidirectional:(CGPoint)velocity {
    // 双向滑动：检查水平速度是否足够
    CGFloat absX = fabs(velocity.x);
    CGFloat absY = fabs(velocity.y);
    return absX >= absY * 1.3f;
}

+ (CGFloat)clampedTranslationBidirectional:(CGFloat)translation threshold:(CGFloat)threshold {
    // 双向滑动：限制在 [-threshold, threshold] 范围内
    if (translation >= threshold) {
        return threshold;
    }
    if (translation <= -threshold) {
        return -threshold;
    }
    return translation;
}

+ (BOOL)shouldTriggerWithTranslationBidirectional:(CGPoint)translation
                                         velocity:(CGPoint)velocity
                                        threshold:(CGFloat)threshold {
    // 双向滑动：检查是否达到触发条件
    CGFloat absTranslation = fabs(translation.x);
    CGFloat absVelocity = fabs(velocity.x);

    if (absTranslation >= threshold) {
        return YES;
    }
    return (absVelocity > 600.0f);
}

+ (WCHookSwipeDirection)swipeDirectionFromTranslation:(CGPoint)translation {
    if (translation.x < -10.0f) {
        return WCHookSwipeDirectionLeft;
    } else if (translation.x > 10.0f) {
        return WCHookSwipeDirectionRight;
    }
    return WCHookSwipeDirectionNone;
}

@end

static UITableViewCell *WCHookFindContainingTableViewCell(UIView *view) {
    return WCPLFindContainingTableViewCell(view);
}

static UITableView *WCHookFindContainingTableView(UIView *view) {
    return WCPLFindContainingTableView(view);
}

static id WCHookMessageIdentifierForView(UIView *view) {
    if (!view) {
        return nil;
    }

    SEL selectors[] = {
        @selector(getCurrentMessageWrap),
        @selector(getMessageWrap),
        @selector(messageWrap),
        @selector(msgWrap)
    };

    for (size_t idx = 0; idx < sizeof(selectors) / sizeof(selectors[0]); ++idx) {
        SEL selector = selectors[idx];
        if ([view respondsToSelector:selector]) {
            return ((id (*)(id, SEL))objc_msgSend)(view, selector);
        }
    }

    SEL viewModelSelector = @selector(viewModel);
    if ([view respondsToSelector:viewModelSelector]) {
        return ((id (*)(id, SEL))objc_msgSend)(view, viewModelSelector);
    }

    return nil;
}

static void WCHookCollectMessageCellViewsFromView(UIView *root, NSMutableArray<UIView *> *storage) {
    if (![root isKindOfClass:[UIView class]] || ![storage isKindOfClass:[NSMutableArray class]]) {
        return;
    }

    static Class baseClass;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        baseClass = NSClassFromString(@"BaseMessageCellView");
    });
    WCPLCollectViewsOfClassOrAllIfNil(root, baseClass, storage);
}
