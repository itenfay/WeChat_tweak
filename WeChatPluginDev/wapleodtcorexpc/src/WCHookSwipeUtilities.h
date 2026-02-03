#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// 滑动方向
#ifndef WCHookSwipeDirection_ENUM_DEFINED
#define WCHookSwipeDirection_ENUM_DEFINED
typedef NS_ENUM(NSInteger, WCHookSwipeDirection) {
    WCHookSwipeDirectionLeft,   // 左滑
    WCHookSwipeDirectionRight,  // 右滑
    WCHookSwipeDirectionNone    // 无效
};
#endif

@class CommonMessageCellView;

@interface WCHookSwipeUtilities : NSObject

+ (CGFloat)thresholdForView:(UIView *)view;
+ (BOOL)shouldIgnoreTranslation:(CGPoint)translation;
+ (BOOL)isVelocityEligible:(CGPoint)velocity;
+ (CGFloat)clampedTranslation:(CGFloat)translation threshold:(CGFloat)threshold;
+ (BOOL)shouldTriggerWithTranslation:(CGPoint)translation
                            velocity:(CGPoint)velocity
                           threshold:(CGFloat)threshold;
+ (NSArray<UIView *> *)relatedMessageViewsForCommonView:(CommonMessageCellView *)view;
+ (void)applyTransform:(CGAffineTransform)transform toViews:(NSArray<UIView *> *)views;
+ (void)animateResetForViews:(NSArray<UIView *> *)views animated:(BOOL)animated;

// 新增：支持双向滑动
+ (BOOL)shouldIgnoreTranslationBidirectional:(CGPoint)translation;
+ (BOOL)isVelocityEligibleBidirectional:(CGPoint)velocity;
+ (CGFloat)clampedTranslationBidirectional:(CGFloat)translation threshold:(CGFloat)threshold;
+ (BOOL)shouldTriggerWithTranslationBidirectional:(CGPoint)translation
                                         velocity:(CGPoint)velocity
                                        threshold:(CGFloat)threshold;
+ (WCHookSwipeDirection)swipeDirectionFromTranslation:(CGPoint)translation;

@end

NS_ASSUME_NONNULL_END
