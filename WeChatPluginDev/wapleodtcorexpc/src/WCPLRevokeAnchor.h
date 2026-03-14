//
// WCPLRevokeAnchor.h
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, WCPLRevokeAnchorSource) {
    WCPLRevokeAnchorSourceRevokeEvent = 0,
    WCPLRevokeAnchorSourceRevokedMessage = 1,
};

typedef struct {
    unsigned int createTime;
    unsigned int svrCreateTime;
    unsigned int sequenceId;
} WCPLRevokeAnchorFields;

FOUNDATION_EXPORT WCPLRevokeAnchorFields WCPLResolveRevokeAnchorFields(unsigned int revokeCreateTime,
                                                                       unsigned int revokeSvrCreateTime,
                                                                       unsigned int revokeSequenceId,
                                                                       unsigned int revokedCreateTime,
                                                                       unsigned int revokedSvrCreateTime,
                                                                       unsigned int revokedSequenceId,
                                                                       BOOL hasRevokedMessage,
                                                                       WCPLRevokeAnchorSource * _Nullable sourceOut);
FOUNDATION_EXPORT NSString *WCPLRevokeAnchorSourceDescription(WCPLRevokeAnchorSource source);
FOUNDATION_EXPORT NSString * _Nullable WCPLBuildRevokeDedupKey(NSString * _Nullable session,
                                                               long long revokedMsgId,
                                                               unsigned int revokeCreateTime,
                                                               NSString * _Nullable replaceText);

NS_ASSUME_NONNULL_END
