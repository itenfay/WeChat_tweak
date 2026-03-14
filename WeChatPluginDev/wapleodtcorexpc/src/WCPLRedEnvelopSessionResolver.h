#import <Foundation/Foundation.h>

@class HongBaoReq;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString * _Nullable WCPLRedEnvelopSessionFromDictionary(NSDictionary * _Nullable dict);
FOUNDATION_EXPORT NSString * _Nullable WCPLBestRedEnvelopSessionCandidate(NSString * _Nullable primarySession,
                                                                          NSDictionary * _Nullable requestDict,
                                                                          NSDictionary * _Nullable responseDict,
                                                                          NSDictionary * _Nullable requestNativeUrlDict,
                                                                          HongBaoReq * _Nullable req,
                                                                          NSString * _Nullable * _Nullable sourceOut);
FOUNDATION_EXPORT NSString * _Nullable WCPLRedEnvelopNormalizeSessionUserName(id _Nullable text);
FOUNDATION_EXPORT NSString * _Nullable WCPLRedEnvelopSafeUserNameFromObject(id _Nullable obj);
FOUNDATION_EXPORT BOOL WCPLRedEnvelopUserNameInList(NSString * _Nullable userName,
                                                    NSArray * _Nullable list);
FOUNDATION_EXPORT NSString * _Nullable WCPLRedEnvelopNotifySceneDisplayText(NSString * _Nullable sessionUserName);
FOUNDATION_EXPORT NSString * _Nullable WCPLRedEnvelopCurrentSelfUserName(void);

NS_ASSUME_NONNULL_END
