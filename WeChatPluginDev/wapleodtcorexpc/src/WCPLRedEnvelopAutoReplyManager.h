//
// WCPLRedEnvelopAutoReplyManager.h
//
// 领取红包成功后，使用微信原生发送链路在当前会话发送设定的文本内容。
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCPLRedEnvelopAutoReplyManager : NSObject

+ (instancetype)sharedManager;

/// success=YES 时尝试发送自动回复；内部会读取配置并做去重处理。
- (void)handleRedEnvelopOpenResultSuccess:(BOOL)success
                         sessionUserName:(nullable NSString *)sessionUserName
                                  isGroup:(BOOL)isGroup
                                   sendId:(nullable NSString *)sendId
                         timingIdentifier:(nullable NSString *)timingIdentifier;

@end

NS_ASSUME_NONNULL_END

