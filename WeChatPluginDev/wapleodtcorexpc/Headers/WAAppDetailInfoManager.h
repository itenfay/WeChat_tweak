//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAAppDetailInfoManager
{
}

- (void)sendRequest:(id)arg1 Retry:(unsigned int)arg2;
- (void)handleDeleteUserAuthInfoResponse:(id)arg1;
- (void)handleAppModAuthInfoResponse:(id)arg1;
- (void)handleAppGetAuthInfoResponse:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)requestDeleteAppUseUserInfo:(id)arg1;
- (void)modAuthorizationInfoForApp:(id)arg1 list:(id)arg2 ReceiveMsgStatusChanged:(_Bool)arg3 FinalReceiveMsgStatusAllow:(_Bool)arg4;
- (void)requestAuthorizationInfoForApp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

