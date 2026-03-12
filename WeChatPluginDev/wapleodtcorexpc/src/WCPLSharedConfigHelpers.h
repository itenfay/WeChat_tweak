//
// WCPLSharedConfigHelpers.h
//
// Foundation-only shared helpers for config normalization and parameter shaping.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *WCPLSanitizeReplyText(id _Nullable value);
FOUNDATION_EXPORT NSDictionary<NSString *, NSString *> *WCPLBuildRedEnvelopParamsFromDictionary(id _Nullable rawFields);
FOUNDATION_EXPORT NSInteger WCPLResolveRedEnvelopGroupScope(id _Nullable rawScopeValue,
                                                            id _Nullable allowedGroupList);
FOUNDATION_EXPORT NSInteger WCPLNormalizeRedEnvelopNotifyTarget(id _Nullable rawNotifyTargetValue);
FOUNDATION_EXPORT NSInteger WCPLResolveQuitMonitorScope(id _Nullable rawScopeValue,
                                                        id _Nullable rawWhitelistInfo);

NS_ASSUME_NONNULL_END
