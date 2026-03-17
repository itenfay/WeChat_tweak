//
// WCPLObjcSafeCall.h
//
// 统一 KVC/ivar/objc_msgSend 的安全封装，减少重复实现与行为漂移。
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT id _Nullable WCPLSafeValueForKey(id _Nullable obj, NSString * _Nullable key);
FOUNDATION_EXPORT BOOL WCPLSafeSetValueForKey(id _Nullable obj, NSString * _Nullable key, id _Nullable value);
FOUNDATION_EXPORT id _Nullable WCPLSafeObjectIvar(id _Nullable obj, const char * _Nullable name);

FOUNDATION_EXPORT id _Nullable WCPLObjcCallId0(id _Nullable target, SEL _Nullable selector);
FOUNDATION_EXPORT id _Nullable WCPLObjcCallId1(id _Nullable target, SEL _Nullable selector, id _Nullable arg);
FOUNDATION_EXPORT BOOL WCPLObjcCallVoid0(id _Nullable target, SEL _Nullable selector);
FOUNDATION_EXPORT BOOL WCPLObjcCallVoid1(id _Nullable target, SEL _Nullable selector, id _Nullable arg);
FOUNDATION_EXPORT BOOL WCPLObjcCallBool2(id _Nullable target, SEL _Nullable selector, id _Nullable arg0, id _Nullable arg1);

NS_ASSUME_NONNULL_END
