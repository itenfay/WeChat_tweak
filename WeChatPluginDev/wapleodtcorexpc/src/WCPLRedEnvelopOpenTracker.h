//
// WCPLRedEnvelopOpenTracker.h
//
// 记录自动打开红包的请求，用于在回包时触发通知/自动回复。
//

#import <Foundation/Foundation.h>

@class WeChatRedEnvelopParam;

@interface WCPLRedEnvelopOpenTracker : NSObject

+ (instancetype)sharedTracker;

- (void)trackParam:(WeChatRedEnvelopParam *)param;

- (WeChatRedEnvelopParam *)consumeParamForSendId:(NSString *)sendId
                                timingIdentifier:(NSString *)timingIdentifier;

@end

