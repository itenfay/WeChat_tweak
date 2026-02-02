//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAAdapterMgr
{
    _Bool _isCallInterruption;
}

+ (void)internalRegisterLazyExtension;
+ (void)registerLazyExtension;
+ (void)setup;
@property(nonatomic) _Bool isCallInterruption; // @synthesize isCallInterruption=_isCallInterruption;
- (void)mainTabBarController:(id)arg1 transitionFromViewController:(id)arg2 toViewController:(id)arg3;
- (void)onCloseService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)didMonoServiceRejectMsg;
- (_Bool)isMonoServiceCheckingServer;
- (_Bool)isMonoServiceUIWorking;
- (_Bool)isMonoServiceUIExist;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)onMMLiveWillStart;
- (void)onWAAudioSessionInterruptionEnd;
- (void)onWAAudioSessionInterruptionBegan;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)EndInterruption;
- (void)BeginInterruption;
- (void)onMonoServiceDidEnd;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)onNetworkWeakChanged:(_Bool)arg1 currentRTT:(unsigned int)arg2;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onVoipMinimized;
- (void)onVoipMaximized;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onMultiTalkMinimized;
- (void)onMultiTalkMaximized;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onBeginMultiTalk;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onMMDynamicConfigUpdated;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onAuthOKWithVersionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)onAuthOK;
- (void)unregisterExtension;
- (void)registerExtension;
- (void)clearDataOnUserLogout;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

