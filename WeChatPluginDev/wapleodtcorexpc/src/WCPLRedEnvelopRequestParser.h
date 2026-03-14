#import <Foundation/Foundation.h>

@class HongBaoReq;
@class HongBaoRes;
@class SKBuiltinBuffer_t;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString * _Nullable WCPLRedEnvelopStringForKeyInDictionary(NSDictionary * _Nullable dict,
                                                                              NSString * _Nullable key);
FOUNDATION_EXPORT NSString * _Nullable WCPLRedEnvelopStringForKeysInDictionary(NSDictionary * _Nullable dict,
                                                                               NSArray<NSString *> * _Nullable keys);
FOUNDATION_EXPORT NSInteger WCPLRedEnvelopIntegerForKeysInDictionary(NSDictionary * _Nullable dict,
                                                                     NSArray<NSString *> * _Nullable keys,
                                                                     BOOL * _Nullable found);
FOUNDATION_EXPORT NSDictionary * _Nullable WCPLRedEnvelopDictionaryFromQueryString(NSString * _Nullable text);
FOUNDATION_EXPORT NSDictionary * _Nullable WCPLRedEnvelopDictionaryFromNativeUrlString(NSString * _Nullable nativeUrl);
FOUNDATION_EXPORT NSDictionary * _Nullable WCPLRedEnvelopDictionaryFromHongbaoBuffer(SKBuiltinBuffer_t * _Nullable buffer);
FOUNDATION_EXPORT NSDictionary * _Nullable WCPLRedEnvelopNativeUrlDictionaryFromRequestDictionary(NSDictionary * _Nullable requestDict);
FOUNDATION_EXPORT unsigned int WCPLRedEnvelopCommandId(HongBaoRes * _Nullable res,
                                                       HongBaoReq * _Nullable req);
FOUNDATION_EXPORT BOOL WCPLRedEnvelopOpenResponseLooksSuccessful(NSDictionary * _Nullable responseDict,
                                                                 HongBaoRes * _Nullable res,
                                                                 NSInteger * _Nullable amountOut,
                                                                 NSInteger * _Nullable totalAmountOut,
                                                                 NSInteger * _Nullable receiveStatusOut,
                                                                 NSInteger * _Nullable retCodeOut);
FOUNDATION_EXPORT void WCPLLogRedEnvelopCommonErrorResponse(NSString * _Nullable tag,
                                                            id _Nullable resObj,
                                                            id _Nullable reqObj);

NS_ASSUME_NONNULL_END
