//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSMutableDictionary, NSString, ServiceAuthViewController;

@interface ServiceAuthMgr
{
    ServiceAuthViewController *m_authController;
    NSMutableDictionary *m_runningTasks;
    MMUIViewController *_loadingController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *loadingController; // @synthesize loadingController=_loadingController;
- (void)_notifyChange:(id)arg1 error:(id)arg2;
- (void)_saveStatusAuth:(id)arg1 noAuth:(id)arg2;
- (void)_stopLoadingForFail;
- (void)_stopLoadingForSuccess;
- (void)onClickConfirmButton;
- (void)onClickCancelButton;
- (void)onTaskFail:(id)arg1 error:(id)arg2;
- (void)onTaskSuccess:(id)arg1;
- (void)requestWithConfig:(id)arg1;
- (_Bool)isServiceOpened:(unsigned long long)arg1;
- (void)showAuthViewWithConfig:(id)arg1 delegateBlockWrapper:(id)arg2;
- (void)showAuthViewWithConfig:(id)arg1 delegate:(id)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

