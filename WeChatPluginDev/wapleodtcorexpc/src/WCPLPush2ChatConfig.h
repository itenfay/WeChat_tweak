//
// WCPLPush2ChatConfig.h
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 消息直达（推送点击后直达会话）配置。
/// 0=全屏（Push 会话页），1=半屏（QuickReply PageSheet）
@interface WCPLPush2ChatConfig : NSObject

+ (instancetype)sharedConfig;

@property (assign, nonatomic) BOOL enableForegroundPush;
@property (assign, nonatomic) BOOL enableBackgroundPush;
@property (assign, nonatomic) NSInteger foregroundPushMode;
@property (assign, nonatomic) NSInteger backgroundPushMode;

@end

NS_ASSUME_NONNULL_END

