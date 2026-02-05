//
// WCPLRedEnvelopResultNotifier.h
//
// 红包领取结果通知：按设置将结果以“原生发送消息”的形式发送到自己或文件传输助手。
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCPLRedEnvelopResultNotifier : NSObject

+ (instancetype)sharedNotifier;

/// 处理“打开红包”回包结果，按配置决定是否发送通知。
- (void)notifyOpenResultSuccess:(BOOL)success
                sessionUserName:(nullable NSString *)sessionUserName
                        isGroup:(BOOL)isGroup
                         sendId:(nullable NSString *)sendId
               timingIdentifier:(nullable NSString *)timingIdentifier
                  receiveAmount:(nullable NSString *)receiveAmount
                    totalAmount:(nullable NSString *)totalAmount
                       hbStatus:(NSInteger)hbStatus
                        retCode:(NSInteger)retCode
                       errorMsg:(nullable NSString *)errorMsg;

@end

NS_ASSUME_NONNULL_END

