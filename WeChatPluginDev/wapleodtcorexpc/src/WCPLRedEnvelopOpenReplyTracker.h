#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT void WCPLTrackOpenReplySession(NSString * _Nullable sendId,
                                                 NSString * _Nullable sign,
                                                 NSString * _Nullable timingIdentifier,
                                                 NSString * _Nullable sessionUserName);
FOUNDATION_EXPORT void WCPLTrackOpenReplySessionFromRequestDictionary(NSDictionary * _Nullable params);
FOUNDATION_EXPORT NSString * _Nullable WCPLLookupTrackedOpenSession(NSString * _Nullable sendId,
                                                                    NSString * _Nullable sign,
                                                                    NSString * _Nullable timingIdentifier,
                                                                    NSString * _Nullable * _Nullable sourceOut);

NS_ASSUME_NONNULL_END
