#import <Foundation/Foundation.h>

#import "WCPLRevokeAnchor.h"

NS_ASSUME_NONNULL_BEGIN

@class CMessageWrap;

FOUNDATION_EXPORT void WCPLApplyRevokeAnchorFieldsToWrap(CMessageWrap * _Nullable msgWrap,
                                                         WCPLRevokeAnchorFields anchorFields);
FOUNDATION_EXPORT BOOL WCPLInsertAnchoredRevokeTipMessage(id _Nullable messageMgr,
                                                          NSString * _Nullable session,
                                                          NSString * _Nullable tipText,
                                                          WCPLRevokeAnchorFields anchorFields);
FOUNDATION_EXPORT void WCPLPersistRevokeAnchorFields(id _Nullable messageMgr,
                                                     NSString * _Nullable session,
                                                     CMessageWrap * _Nullable msgWrap,
                                                     WCPLRevokeAnchorFields anchorFields);

NS_ASSUME_NONNULL_END
