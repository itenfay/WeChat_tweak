//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAAuthorizeCancelReportMgr
{
}

- (void)cancelOperateWXDataConfirmWithAppID:(id)arg1 data:(id)arg2 scope:(id)arg3 debugModeType:(unsigned int)arg4 externalInfo:(id)arg5 sessionId:(id)arg6 avatarOpt:(unsigned int)arg7 completion:(CDUnknownBlockType)arg8;
- (void)cancelAuthorizeConfirmWithAppID:(id)arg1 scope:(id)arg2 debugModeType:(unsigned int)arg3 externalInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)cancelLoginConfirmWithAppID:(id)arg1 scope:(id)arg2 loginType:(unsigned int)arg3 debugModeType:(unsigned int)arg4 externalInfo:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

