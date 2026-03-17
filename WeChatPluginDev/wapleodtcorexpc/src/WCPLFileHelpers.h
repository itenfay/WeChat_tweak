//
// WCPLFileHelpers.h
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT unsigned long long WCPLFileSizeAtPath(NSString * _Nullable path);
FOUNDATION_EXPORT BOOL WCPLFileIsRegularNonEmptyAtPath(NSString * _Nullable path,
                                                       unsigned long long * _Nullable sizeOut);

NS_ASSUME_NONNULL_END
