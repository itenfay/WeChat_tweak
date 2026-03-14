#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT void WCPLMarkReceiverQueryPending(NSString * _Nullable sendId,
                                                    NSString * _Nullable sign);
FOUNDATION_EXPORT BOOL WCPLIsReceiverQueryPending(NSString * _Nullable sendId,
                                                  NSString * _Nullable sign);
FOUNDATION_EXPORT NSTimeInterval WCPLMarkReceiverQueryFinished(NSString * _Nullable sendId,
                                                               NSString * _Nullable sign);
FOUNDATION_EXPORT void WCPLScheduleReceiverQueryHedgeRequests(NSString * _Nullable sendId,
                                                              NSString * _Nullable sign,
                                                              NSDictionary * _Nullable params,
                                                              NSString * _Nullable sessionUserName);

NS_ASSUME_NONNULL_END
