//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, WebviewAuthorizationCache, WebviewAuthorizationInfo;

@interface WebviewAskAuthorizationLogic
{
    WebviewAuthorizationCache *_authCache;
    NSMutableArray *_needCheckQueue;
    WebviewAuthorizationInfo *_willSetScopeInfo;
    NSMutableArray *_willSetScopeList;
    NSString *_alertTitle;
    _Bool _isQueueHandling;
}

- (void).cxx_destruct;
- (id)getScopeListStrFromArray:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)structCGI:(id)arg1 withType:(unsigned int)arg2 withUserData:(id)arg3;
- (void)onSetScopeReq:(id)arg1 scopeResp:(id)arg2;
- (void)setScopeAuthInfo:(id)arg1 scopeInfoList:(id)arg2;
- (void)onCheckScopeReq:(id)arg1 scopeResp:(id)arg2 authInfo:(id)arg3;
- (void)checkScopeAuthInfo;
- (void)askUserAuthInfo:(id)arg1;
- (void)askSvrAuthInfo:(id)arg1;
- (void)askAuthInfo:(id)arg1;
- (void)updateScopeInfoList:(id)arg1;
- (id)init;
- (void)dealloc;

@end

