#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT void WCPLBeginHongbaoBackgroundTask(NSString * _Nullable sendId,
                                                      NSString * _Nullable sign);
FOUNDATION_EXPORT void WCPLEndHongbaoBackgroundTask(NSString * _Nullable sendId,
                                                    NSString * _Nullable sign,
                                                    NSString * _Nullable reason);

NS_ASSUME_NONNULL_END
