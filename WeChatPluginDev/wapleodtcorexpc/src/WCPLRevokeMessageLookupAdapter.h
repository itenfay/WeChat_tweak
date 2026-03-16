#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class CMessageWrap;

FOUNDATION_EXPORT CMessageWrap * _Nullable WCPLFindRevokedMessageWrap(id _Nullable messageMgr,
                                                                      NSArray<NSString *> * _Nullable sessionCandidates,
                                                                      long long revokedMsgId,
                                                                      unsigned int revokeCreateTime,
                                                                      NSString * _Nullable actorUserName,
                                                                      NSString * _Nullable revokedContentHint);

NS_ASSUME_NONNULL_END
