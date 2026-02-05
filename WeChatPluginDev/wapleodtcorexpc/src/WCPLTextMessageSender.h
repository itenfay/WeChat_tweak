//
// WCPLTextMessageSender.h
//
// 统一封装“通过微信原生发送链路发送文本消息”的实现：
// - 自动回复
// - 红包领取结果通知
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 裁剪文本：去除首尾空白/换行，并额外剔除常见不可见字符（例如零宽空格/BOM），避免发送“看起来为空”的气泡。
FOUNDATION_EXPORT NSString * _Nullable WCPLTrimMessageText(NSString * _Nullable text);

@interface WCPLTextMessageSender : NSObject

+ (instancetype)sharedSender;

/// 当前登录用户的 userName（例如 wxid_xxx）。获取失败返回 nil。
- (nullable NSString *)selfUserName;

/// 发送文本到指定会话（sessionUserName 或 filehelper）。
/// 内部会自动切到主线程执行（若当前不在主线程）。
- (BOOL)sendText:(nullable NSString *)text toSession:(nullable NSString *)sessionUserName;

@end

NS_ASSUME_NONNULL_END

