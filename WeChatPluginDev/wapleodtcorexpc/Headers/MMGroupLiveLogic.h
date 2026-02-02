//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGroupLiveTask, MMGroupLiveTaskId, MMLiveGroupConnectMicLogic, NSString;
@protocol MMGroupLiveLogicDelegate;

@interface MMGroupLiveLogic
{
    _Bool _isKeyRequesting;
    _Bool _isInUpdateLiveMicEnableCgiProcess;
    id <MMGroupLiveLogicDelegate> _liveLogicDelegate;
    NSString *_roomId;
    long long _roleType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInUpdateLiveMicEnableCgiProcess; // @synthesize isInUpdateLiveMicEnableCgiProcess=_isInUpdateLiveMicEnableCgiProcess;
@property(nonatomic) _Bool isKeyRequesting; // @synthesize isKeyRequesting=_isKeyRequesting;
@property(nonatomic) long long roleType; // @synthesize roleType=_roleType;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(nonatomic) __weak id <MMGroupLiveLogicDelegate> liveLogicDelegate; // @synthesize liveLogicDelegate=_liveLogicDelegate;
- (void)applyConnectMic;
@property(readonly, nonatomic) MMLiveGroupConnectMicLogic *groupLiveConnectMicLogic;
@property(readonly, nonatomic) MMGroupLiveTask *liveTask;
@property(readonly, nonatomic) MMGroupLiveTaskId *groupTaskId;
- (void)onConnectMicModeChanged:(_Bool)arg1;
- (void)onConnectMicOperationPanelWillShowWithIdentityIdList:(id)arg1;
- (void)onApplyLiveMicWithTaskId:(id)arg1;
- (void)onCloseLiveMicWithTaskId:(id)arg1 audienceInfo:(id)arg2;
- (void)onAcceptLiveMicWithTaskId:(id)arg1 audienceInfo:(id)arg2;
- (void)onUpdateLiveMicEnableWithTaskId:(id)arg1 enable:(_Bool)arg2;
- (void)onGetLiveOnlineMemberByIdResult:(id)arg1 liveId:(unsigned long long)arg2 andAudienceOnlineInfo:(id)arg3;
- (void)onGetLiveMicAudienceInfoResult:(id)arg1 liveId:(unsigned long long)arg2 andAudience:(id)arg3;
- (void)onGetLiveInfoWithResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3 andLiveInfo:(id)arg4;
- (void)onGetRefreshLiveMicWithLiveId:(id)arg1 andLiveId:(unsigned long long)arg2 andLiveSdkInfo:(id)arg3;
- (void)onCloseApplyLiveMicResult:(id)arg1 lastAttemptValue:(_Bool)arg2 andLiveId:(unsigned long long)arg3;
- (void)onAcceptLiveMicResult:(id)arg1 andLiveId:(unsigned long long)arg2 andLiveMicId:(id)arg3;
- (void)onApplyLiveMicResult:(id)arg1 liveId:(unsigned long long)arg2 liveMicId:(id)arg3 isVerified:(_Bool)arg4 andVerifyUrl:(id)arg5;
- (void)onGetLiveMicSuccWithLiveId:(unsigned long long)arg1 andAudience:(id)arg2;
- (void)onGetCloseLiveMicWithLiveId:(unsigned long long)arg1 andLiveMicId:(id)arg2;
- (void)onGetEnableApplyLiveMicWithLiveId:(unsigned long long)arg1 andResult:(_Bool)arg2;
- (void)onLiveClosedResult:(id)arg1 andLiveId:(unsigned long long)arg2;
- (void)onGetLiveMessageResult:(id)arg1 liveMessageResp:(id)arg2 liveId:(unsigned long long)arg3 andRoomId:(id)arg4;
- (void)onGetAcceptLiveMicWithLiveId:(unsigned long long)arg1 liveMicId:(id)arg2 msgServerTime:(unsigned int)arg3 andLiveSdkInfo:(id)arg4;
- (void)onGetApplyLiveMicWithLiveId:(unsigned long long)arg1 fromAudience:(id)arg2;
- (void)onShareLiveResult:(id)arg1 andLiveId:(unsigned long long)arg2;
- (void)onJoinLiveResult:(id)arg1 andLiveId:(unsigned long long)arg2 andLiveSdkInfo:(id)arg3;
- (void)onCreateLiveResult:(id)arg1 andLiveInfo:(id)arg2 isVerified:(_Bool)arg3 andVerifyUrl:(id)arg4;
- (void)resetAnchorStatus;
- (void)sysCallInterrupted:(_Bool)arg1;
- (void)enterForeground;
- (void)enterBackground;
- (_Bool)fetchNewLiveSdkInfo;
- (_Bool)getLiveMicAudienceInfo;
- (_Bool)getLiveInfo;
- (_Bool)shareLive;
- (_Bool)setOffline;
- (void)clearLive;
- (_Bool)closeLiveByCutLive;
- (_Bool)closeLiveByAssitant;
- (_Bool)closeLive;
- (_Bool)joinLive:(unsigned long long)arg1;
- (_Bool)createLiveWithLiveCreateParamsModel:(id)arg1;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)initConnectMicLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

