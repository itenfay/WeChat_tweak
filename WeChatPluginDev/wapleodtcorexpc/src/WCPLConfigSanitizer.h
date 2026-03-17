//
// WCPLConfigSanitizer.h
//
// 配置相关数据清洗工具，避免不同配置模块重复实现
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSArray<NSString *> *WCPLSanitizeUserNameArray(id _Nullable value);
FOUNDATION_EXPORT NSArray<NSString *> *WCPLSanitizeIdentifierArray(id _Nullable value);
FOUNDATION_EXPORT NSDictionary<NSString *, NSNumber *> *WCPLSanitizeIgnoreDictionary(id _Nullable value);

NS_ASSUME_NONNULL_END

