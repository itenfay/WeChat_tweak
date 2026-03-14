//
// WCPLTypeGuard.h
//
// Foundation-only runtime type guards shared by helpers and adapters.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT BOOL WCPLIsString(id _Nullable value);
FOUNDATION_EXPORT BOOL WCPLIsArray(id _Nullable value);
FOUNDATION_EXPORT BOOL WCPLIsDictionary(id _Nullable value);

FOUNDATION_EXPORT NSString * _Nullable WCPLStringOrNil(id _Nullable value);
FOUNDATION_EXPORT NSString * _Nullable WCPLNonEmptyStringOrNil(id _Nullable value);
FOUNDATION_EXPORT NSArray * _Nullable WCPLArrayOrNil(id _Nullable value);
FOUNDATION_EXPORT NSDictionary * _Nullable WCPLDictionaryOrNil(id _Nullable value);
FOUNDATION_EXPORT NSArray<NSString *> * _Nullable WCPLArrayOfStringsOrNil(id _Nullable value);

NS_ASSUME_NONNULL_END
