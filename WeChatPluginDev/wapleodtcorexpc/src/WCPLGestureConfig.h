//
// WCPLGestureConfig.h
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCPLGestureConfig : NSObject

+ (instancetype)sharedConfig;

// 消息手势总开关
@property (assign, nonatomic) BOOL swipeGestureEnable;
// 左滑引用功能
@property (assign, nonatomic) BOOL swipeQuoteEnable;
// 引用消息点击跳转
@property (assign, nonatomic) BOOL tapReferJumpEnable;

// 消息手势灵敏度：0=低(不易误触), 1=中(默认), 2=高(更灵敏)
@property (assign, nonatomic) NSInteger swipeSensitivityLevel;

// 消息手势操作类型
// 0=引用, 1=复读, 2=删除, 3=撤回(仅己方消息)
// 左滑对方消息操作
@property (assign, nonatomic) NSInteger swipeLeftOtherAction;
// 左滑己方消息操作
@property (assign, nonatomic) NSInteger swipeLeftSelfAction;
// 右滑功能开关
@property (assign, nonatomic) BOOL swipeRightEnable;
// 右滑对方消息操作
@property (assign, nonatomic) NSInteger swipeRightOtherAction;
// 右滑己方消息操作
@property (assign, nonatomic) NSInteger swipeRightSelfAction;

// 手势参数（根据 swipeSensitivityLevel 计算）
- (CGFloat)swipeDistanceScale;
- (CGFloat)swipeVelocityTrigger;
- (CGFloat)swipeLightTriggerRatio;

@end

NS_ASSUME_NONNULL_END

