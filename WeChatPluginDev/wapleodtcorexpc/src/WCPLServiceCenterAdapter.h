//
// WCPLServiceCenterAdapter.h
//
// WeChat 服务中心适配层，统一 service lookup 入口。
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT id _Nullable WCPLServiceCenterAdapterGetServiceCenter(void);
FOUNDATION_EXPORT id _Nullable WCPLServiceCenterAdapterGetService(Class _Nullable serviceClass);
FOUNDATION_EXPORT id _Nullable WCPLServiceCenterAdapterGetServiceNamed(NSString * _Nullable serviceClassName);

NS_ASSUME_NONNULL_END
