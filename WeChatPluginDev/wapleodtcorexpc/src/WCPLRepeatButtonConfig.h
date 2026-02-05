//
// WCPLRepeatButtonConfig.h
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCPLRepeatButtonConfig : NSObject

+ (instancetype)sharedConfig;

@property (assign, nonatomic) BOOL messageReplyEnable;
@property (assign, nonatomic) BOOL repeatButtonHapticEnable;

// 0 = 文字模式 (+1), 1 = 内置图标, 2 = 自定义图片
@property (assign, nonatomic) NSInteger repeatButtonStyle;
// 内置图标索引: 0=+1, 1=👍, 2=❤️, 3=😂, 4=🔥, 5=👏, 6=🎉
@property (assign, nonatomic) NSInteger repeatButtonIconIndex;
// 自定义图片路径 (存储在 Documents 目录)
@property (copy, nonatomic, nullable) NSString *repeatButtonCustomImagePath;

// 复读按钮背景透明度 (仅影响背景色)
@property (assign, nonatomic) CGFloat repeatButtonBackgroundAlpha;
// 复读按钮尺寸 (正方形边长)
@property (assign, nonatomic) CGFloat repeatButtonSize;

// 复读按钮文字颜色模式: 0=统一颜色, 1=按消息类型
@property (assign, nonatomic) NSInteger repeatButtonTextColorMode;
// 文字颜色 (Hex 字符串, 例如 #07C160)
@property (copy, nonatomic) NSString *repeatButtonTextColorDefault;
@property (copy, nonatomic) NSString *repeatButtonTextColorText;
@property (copy, nonatomic) NSString *repeatButtonTextColorVoice;
@property (copy, nonatomic) NSString *repeatButtonTextColorEmoticon;
@property (copy, nonatomic) NSString *repeatButtonTextColorQuote;

@end

NS_ASSUME_NONNULL_END

