//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFansGroupOperationPanel, NSString, WCFinderFeedContentVM;

@interface MMLiveOpenApiMgr
{
    _Bool _tempSwitchPause;
    _Bool _joinTeamBusy;
    WCFinderFeedContentVM *_lastContentVM;
    MMFinderLiveFansGroupOperationPanel *_fansGroupOperationPanel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFansGroupOperationPanel *fansGroupOperationPanel; // @synthesize fansGroupOperationPanel=_fansGroupOperationPanel;
@property _Bool joinTeamBusy; // @synthesize joinTeamBusy=_joinTeamBusy;
@property(nonatomic) _Bool tempSwitchPause; // @synthesize tempSwitchPause=_tempSwitchPause;
@property(retain, nonatomic) WCFinderFeedContentVM *lastContentVM; // @synthesize lastContentVM=_lastContentVM;
- (id)getContentVM:(id)arg1 fromViewController:(id)arg2;
- (long long)convertToUIImageOrientation:(long long)arg1 mirrored:(_Bool)arg2;
- (long long)convertToTRTCAudioSampleRate:(long long)arg1;
- (long long)convertToTRTCVideoPixelFormat:(long long)arg1;
- (long long)convertToTRTCVideoRotation:(long long)arg1;
- (unsigned int)convertFromLiveCommentMsgType:(unsigned int)arg1;
- (_Bool)isLiveRoomMsgTypeSupport:(unsigned int)arg1;
- (void)onReportFansGroupNoticeActionType:(long long)arg1 notice:(id)arg2 level:(unsigned long long)arg3 imageUrl:(id)arg4 visibility:(long long)arg5;
- (void)onReportFansGroupOperationActionType:(long long)arg1;
- (void)onFinderGetLiveOnlineMember:(id)arg1 taskId:(id)arg2 onlineMemberResult:(id)arg3;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(_Bool)arg7 liveClosed:(_Bool)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 liveGameData:(id)arg14 respContext:(id)arg15;
- (void)cgiUpdateTopic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resumeLiveWithLiveId:(unsigned long long)arg1 withCompleteBlock:(CDUnknownBlockType)arg2;
- (void)pauseLiveWithLiveId:(unsigned long long)arg1 withCompleteBlock:(CDUnknownBlockType)arg2;
- (void)getLiveOnlineMemberListWithLiveId:(unsigned long long)arg1;
- (id)getLiveRoomInfoWithLiveId:(unsigned long long)arg1;
- (id)getSelfFinderContact;
- (void)setVideoEncoderParamWithWidth:(double)arg1 height:(double)arg2 withLiveId:(unsigned long long)arg3;
- (void)setExperimentConfig:(id)arg1 withParams:(id)arg2 withLiveId:(unsigned long long)arg3;
- (void)updateLiveRoomCoverImage:(id)arg1 withLiveId:(unsigned long long)arg2;
- (void)setVoiceVolume:(long long)arg1 withLiveId:(unsigned long long)arg2;
- (void)enableLocalAudio:(_Bool)arg1 withLiveId:(unsigned long long)arg2;
- (void)enableLocalVideo:(_Bool)arg1 withLiveId:(unsigned long long)arg2;
- (void)joinTeam:(unsigned long long)arg1 gameInfo:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)closeLive:(unsigned long long)arg1 navigationController:(id)arg2 delegate:(id)arg3;
- (void)openLiveRoomViewWithLiveId:(unsigned long long)arg1 navigationController:(id)arg2;
- (void)enableAudioVolumeEvaluation:(unsigned long long)arg1 withLiveId:(unsigned long long)arg2;
- (_Bool)mixExternalAudioDataWithLiveId:(unsigned long long)arg1 withAudioData:(id)arg2 sampleRate:(long long)arg3 channels:(int)arg4 timestampMs:(unsigned long long)arg5;
- (_Bool)enableMixExternalAudioWithLiveId:(unsigned long long)arg1 enablePublish:(_Bool)arg2 playout:(_Bool)arg3;
- (_Bool)sendCustomAudioDataWithLiveId:(unsigned long long)arg1 withAudioData:(id)arg2 sampleRate:(long long)arg3 channels:(int)arg4 timestampMs:(unsigned long long)arg5;
- (_Bool)enableCustomAudioCaptureWithLiveId:(unsigned long long)arg1 enable:(_Bool)arg2;
- (_Bool)sendCustomVideoDataWithLiveId:(unsigned long long)arg1 withVideoData:(id)arg2 pixelFormat:(long long)arg3 rotation:(long long)arg4 timestampMs:(unsigned long long)arg5 width:(double)arg6 height:(double)arg7;
- (_Bool)sendCustomVideoDataWithLiveId:(unsigned long long)arg1 withPixelBuffer:(struct __CVBuffer *)arg2 pixelFormat:(long long)arg3 rotation:(long long)arg4 timestampMs:(unsigned long long)arg5;
- (_Bool)enableCustomVideoCaptureWithLiveId:(unsigned long long)arg1 enable:(_Bool)arg2;
- (_Bool)dismissLiveMinimizationWithLiveId:(unsigned long long)arg1;
- (_Bool)minimizeWithLiveId:(unsigned long long)arg1;
- (_Bool)isLivePushing;
- (void)openFansClubWithLiveId:(unsigned long long)arg1 fromViewController:(id)arg2;
- (void)shareToMomentWithLiveId:(unsigned long long)arg1 fromViewController:(id)arg2;
- (void)shareToFriendWithLiveId:(unsigned long long)arg1 fromViewController:(id)arg2;
- (void)exitLiveRoomWithLiveId:(unsigned long long)arg1 finderUserName:(id)arg2;
- (void)createLiveRoomWithAppId:(id)arg1 andExtInfo:(id)arg2 nav:(id)arg3 startInfo:(id)arg4;
- (void)enterLiveRoomWithLiveId:(unsigned long long)arg1 finderUserName:(id)arg2 oberver:(id)arg3;
- (_Bool)routeToLiveWithAppId:(id)arg1 extInfo:(id)arg2 failCallback:(CDUnknownBlockType)arg3 rootVC:(id)arg4;
- (_Bool)createVideoLiveWithAppId:(id)arg1 extInfo:(id)arg2 startInfo:(id)arg3 failCallback:(CDUnknownBlockType)arg4 rootVC:(id)arg5;
- (_Bool)routeToLiveFromOpenSDKWithAppId:(id)arg1 extInfo:(id)arg2 startInfo:(id)arg3 sameAccount:(_Bool)arg4 failCallback:(CDUnknownBlockType)arg5 rootVC:(id)arg6;
- (void)clearDataWithLiveId:(unsigned long long)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (_Bool)preJudgeSuccessWithExtInfoDic:(id)arg1 sameAccount:(_Bool)arg2 failCallback:(CDUnknownBlockType)arg3;
- (void)refreshGameLiveLaunchModelWith:(id)arg1 appId:(id)arg2;
- (_Bool)routeToGameLiveWithAppId:(id)arg1 opensdkVersion:(unsigned int)arg2 extInfo:(id)arg3 sameAccount:(_Bool)arg4 failCallback:(CDUnknownBlockType)arg5 rootVC:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

