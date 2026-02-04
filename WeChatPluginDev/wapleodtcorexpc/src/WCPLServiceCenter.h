//
// WCPLServiceCenter.h
//
// 兼容不同 WeChat 版本的 ServiceCenter/MMServiceCenter 获取。
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT id _Nullable WCPLGetServiceCenter(void);
FOUNDATION_EXPORT id _Nullable WCPLGetService(Class _Nullable serviceClass);

NS_ASSUME_NONNULL_END

