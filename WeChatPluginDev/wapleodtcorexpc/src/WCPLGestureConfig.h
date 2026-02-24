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
// 手势触发引用时自动@被引用消息发送者
@property (assign, nonatomic) BOOL swipeQuoteAtUserEnable;
// 消息气泡复读按钮
@property (assign, nonatomic) BOOL repeatButtonEnable;
// 复读按钮点击震动反馈
@property (assign, nonatomic) BOOL repeatButtonHapticEnable;
// 复读按钮大小（16~30，默认 20）
@property (assign, nonatomic) CGFloat repeatButtonSize;
// 复读按钮使用自定义图片
@property (assign, nonatomic) BOOL repeatButtonCustomImageEnable;
// 自定义图片相对路径（相对 app 沙盒根目录）
@property (copy, nonatomic, nullable) NSString *repeatButtonCustomImageRelativePath;
// 自定义图片资源版本号（每次上传递增/刷新）
@property (assign, nonatomic) NSInteger repeatButtonCustomImageRevision;
// 自定义图片存储结构版本号（用于升级迁移）
@property (assign, nonatomic) NSInteger repeatButtonCustomImageSchemaVersion;
// 复读支持表情包消息
@property (assign, nonatomic) BOOL repeatSupportEmoticonEnable;
// 复读支持语音消息
@property (assign, nonatomic) BOOL repeatSupportVoiceEnable;
// 复读支持图片消息
@property (assign, nonatomic) BOOL repeatSupportImageEnable;
// 复读支持视频消息
@property (assign, nonatomic) BOOL repeatSupportVideoEnable;
// 复读按钮引擎 V2（单 cell 同步渲染），默认关闭，仅用于灰度调试
@property (assign, nonatomic) BOOL repeatButtonEngineV2Enable;
// 复读按钮立即显示（自己发送消息不等待状态稳定），默认开启
@property (assign, nonatomic) BOOL repeatImmediateRenderEnable;
// 长按面板复读菜单开关（默认开启）
@property (assign, nonatomic) BOOL repeatLongPressMenuEnable;
// 小丑功能开关（默认开启）
@property (assign, nonatomic) BOOL clownFeatureEnable;
// 语音转发功能开关（默认开启）
@property (assign, nonatomic) BOOL voiceForwardFeatureEnable;

// 消息手势灵敏度：0=低(不易误触), 1=中(默认), 2=高(更灵敏)
@property (assign, nonatomic) NSInteger swipeSensitivityLevel;

// 消息手势操作类型：0=引用，1=关闭，2=删除，3=撤回(仅己方)，4=复读，5=转发
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
// 双击功能开关
@property (assign, nonatomic) BOOL doubleTapGestureEnable;
// 双击对方消息操作
@property (assign, nonatomic) NSInteger doubleTapOtherAction;
// 双击己方消息操作
@property (assign, nonatomic) NSInteger doubleTapSelfAction;
// 头像下方显示消息时间
@property (assign, nonatomic) BOOL messageTimeEnable;

// 手势参数（根据 swipeSensitivityLevel 计算）
- (CGFloat)swipeDistanceScale;
- (CGFloat)swipeVelocityTrigger;
- (CGFloat)swipeLightTriggerRatio;

@end

NS_ASSUME_NONNULL_END
