//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGroupLiveTask, MMLiveApplyConnectMicAudience, MMLiveConnectMicOperationPanel, MMLiveConnectMicVideoPreviewPanel, NSMutableSet, NSString, OrderedDictionary, UIView;

@interface MMLiveGroupConnectMicLogic
{
    _Bool _canConnectMic;
    _Bool _isConnectingMic;
    _Bool _hasSentCloseLiveMic;
    _Bool _recordPermissionCheckOK;
    _Bool _hasStartedRemoteVideo;
    unsigned int _lastMicConnectedTime;
    unsigned int _linkCount;
    MMLiveApplyConnectMicAudience *_currentConnectedMicAudience;
    MMLiveApplyConnectMicAudience *_connectingMicAudience;
    MMLiveApplyConnectMicAudience *_connectMicAudienceInfoForSelf;
    OrderedDictionary *_applyConnectMicAudienceDict;
    NSMutableSet *_unreadApplyConnectMicAudienceSet;
    NSString *_lastReportLiveMicId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *lastReportLiveMicId; // @synthesize lastReportLiveMicId=_lastReportLiveMicId;
@property(nonatomic) _Bool hasStartedRemoteVideo; // @synthesize hasStartedRemoteVideo=_hasStartedRemoteVideo;
@property(nonatomic) unsigned int linkCount; // @synthesize linkCount=_linkCount;
@property(nonatomic) unsigned int lastMicConnectedTime; // @synthesize lastMicConnectedTime=_lastMicConnectedTime;
@property(nonatomic) _Bool recordPermissionCheckOK; // @synthesize recordPermissionCheckOK=_recordPermissionCheckOK;
@property(nonatomic) _Bool hasSentCloseLiveMic; // @synthesize hasSentCloseLiveMic=_hasSentCloseLiveMic;
@property(nonatomic) _Bool isConnectingMic; // @synthesize isConnectingMic=_isConnectingMic;
@property(retain, nonatomic) NSMutableSet *unreadApplyConnectMicAudienceSet; // @synthesize unreadApplyConnectMicAudienceSet=_unreadApplyConnectMicAudienceSet;
@property(retain, nonatomic) OrderedDictionary *applyConnectMicAudienceDict; // @synthesize applyConnectMicAudienceDict=_applyConnectMicAudienceDict;
@property(retain, nonatomic) MMLiveApplyConnectMicAudience *connectMicAudienceInfoForSelf; // @synthesize connectMicAudienceInfoForSelf=_connectMicAudienceInfoForSelf;
@property(retain, nonatomic) MMLiveApplyConnectMicAudience *connectingMicAudience; // @synthesize connectingMicAudience=_connectingMicAudience;
@property(retain, nonatomic) MMLiveApplyConnectMicAudience *currentConnectedMicAudience; // @synthesize currentConnectedMicAudience=_currentConnectedMicAudience;
@property(nonatomic) _Bool canConnectMic; // @synthesize canConnectMic=_canConnectMic;
- (_Bool)isConnectingMicByMyself;
- (id)groupliveTaskId;
@property(readonly, nonatomic) MMGroupLiveTask *liveTask;
- (void)setNetworkReachable:(_Bool)arg1;
@property(readonly, nonatomic) UIView *containerView;
- (id)getLiveTask;
@property(readonly, nonatomic) MMLiveConnectMicVideoPreviewPanel *connectMicVideoPreviewPanel;
@property(readonly, nonatomic) MMLiveConnectMicOperationPanel *connectMicOperationPanel;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)onMMLiveConnectMicVideoPreviewPanelConfirm;
- (void)onMMLiveConnectMicVideoPreviewPanelCancel;
- (void)onMMLiveConnectMicVideoPreviewPanelClose;
- (id)generateReportHandler;
- (void)showConnectMicVideoPreviewPanel;
- (_Bool)tryStopConnectMic;
- (void)stopLocalConnectMicWithTask:(id)arg1;
- (void)stopConnectMicForConnectedAudienceWithTask:(id)arg1;
- (void)tryCancelConnectMicForAudienceAndShowToast:(_Bool)arg1;
- (void)cancelConnectMicForAudienceAndShowToast:(_Bool)arg1;
- (void)cancelConnectMicForAudience;
- (_Bool)tryApplyConnectMic;
- (void)startApplyConnectMic;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkAndSendCloseLiveMicForAnchor;
- (void)stopOrCancelConnectMicForAnchorAndSendCgi:(_Bool)arg1;
- (void)stopOrCancelConnectMicForAnchor;
- (void)onMMLiveConnectMicOperationPanelCancelConnect;
- (void)onMMLiveConnectMicOperationPanelStopConnect;
- (void)checkConnectingMicTimeOutWithAudience:(id)arg1;
- (void)onMMLiveConnectMicOperationPanelStartConnectToAudience:(id)arg1;
- (void)onMMLiveConnectMicOperationPanelClose;
- (void)onMMLiveConnectMicOperationPanelChangeMicState:(_Bool)arg1;
- (void)checkAndStopRemoteVideoViewWithUserId:(id)arg1;
- (void)checkAndStartRemoteVideoViewWithUserId:(id)arg1;
- (void)showApplyConnectMicActionSheet;
- (void)connectMicAction;
- (void)connectMicActionForAudience;
- (void)handleUser:(id)arg1 videoAvailable:(_Bool)arg2;
- (void)handleUser:(id)arg1 audioAvailable:(_Bool)arg2;
- (void)onTrtcSwitchRoleFinished;
- (void)changeToConnectedMicModeShouldShowToast:(_Bool)arg1;
- (void)changeToNormalModeShouldShowToast:(_Bool)arg1;
- (void)onGetRefreshLiveMicWithLiveId:(id)arg1 andLiveId:(unsigned long long)arg2 andLiveSdkInfo:(id)arg3;
- (void)onCloseApplyLiveMicResult:(id)arg1 lastAttemptValue:(_Bool)arg2 andLiveId:(unsigned long long)arg3;
- (void)onAcceptLiveMicResult:(id)arg1 andLiveId:(unsigned long long)arg2 andLiveMicId:(id)arg3;
- (void)onApplyLiveMicResult:(id)arg1 liveId:(unsigned long long)arg2 liveMicId:(id)arg3;
- (void)onGetLiveOnlineMemberByIdResult:(id)arg1 withLiveId:(unsigned long long)arg2;
- (void)onGetCurrentLiveMicAudience:(id)arg1 withLiveId:(unsigned long long)arg2;
- (void)onGetLiveMicSuccWithLiveId:(unsigned long long)arg1 andAudience:(id)arg2;
- (void)receiveLiveMicAudience:(id)arg1 withLiveId:(unsigned long long)arg2 fromMicAudiencCgi:(_Bool)arg3;
- (void)onGetCloseLiveMicWithLiveId:(unsigned long long)arg1 andLiveMicId:(id)arg2;
- (void)onGetEnableApplyLiveMicWithLiveId:(unsigned long long)arg1 andResult:(_Bool)arg2;
- (void)onGetLiveMessageResult:(id)arg1 liveMessageResp:(id)arg2 liveId:(unsigned long long)arg3 andRoomId:(id)arg4;
- (void)onGetAcceptLiveMicWithLiveId:(unsigned long long)arg1 liveMicId:(id)arg2 msgServerTime:(unsigned int)arg3 andLiveSdkInfo:(id)arg4;
- (void)onGetApplyLiveMicWithLiveId:(unsigned long long)arg1 fromAudience:(id)arg2;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

