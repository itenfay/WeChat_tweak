//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MemoryMappedKV, NSMutableArray, NSString;
@protocol WAGameLiveServiceExt;

@interface WeAppGameLiveMgr
{
    unsigned long long _liveId;
    NSString *_finderUsername;
    unsigned long long _finderId;
    NSString *_onLiveAppId;
    unsigned long long _onLiveVersionType;
    _Bool _disableLiveInfoEvent;
    _Bool _disableLiveMicInfoEvent;
    _Bool _isMicMuted;
    _Bool _gameDismissedWhileLiving;
    NSString *_resumeAppId;
    unsigned long long _resumeVersionType;
    _Bool _shouldDoResume;
    _Bool _musicCaptureDisabled;
    CDUnknownBlockType _startResultCallback;
    CDUnknownBlockType _liveCompleteCloseBlock;
    CDUnknownBlockType _shareFriendCompletionBlock;
    CDUnknownBlockType _getLiveRoomMemberInfoCompletionBlock;
    id <WAGameLiveServiceExt> _serviceExt;
    MemoryMappedKV *_gameTeamInfoMMKV;
    NSMutableArray *_pendingMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pendingMsg; // @synthesize pendingMsg=_pendingMsg;
@property(retain, nonatomic) MemoryMappedKV *gameTeamInfoMMKV; // @synthesize gameTeamInfoMMKV=_gameTeamInfoMMKV;
@property(nonatomic) __weak id <WAGameLiveServiceExt> serviceExt; // @synthesize serviceExt=_serviceExt;
@property(copy, nonatomic) CDUnknownBlockType getLiveRoomMemberInfoCompletionBlock; // @synthesize getLiveRoomMemberInfoCompletionBlock=_getLiveRoomMemberInfoCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType shareFriendCompletionBlock; // @synthesize shareFriendCompletionBlock=_shareFriendCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType liveCompleteCloseBlock; // @synthesize liveCompleteCloseBlock=_liveCompleteCloseBlock;
@property(copy, nonatomic) CDUnknownBlockType startResultCallback; // @synthesize startResultCallback=_startResultCallback;
- (id)getGameTeamInfo:(id)arg1 versionType:(long long)arg2;
- (void)setGameTeamInfo:(id)arg1 forAppId:(id)arg2 versionType:(long long)arg3;
- (id)gameTeamKey:(id)arg1 versionType:(long long)arg2;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onAppTaskTerminate:(id)arg1;
- (void)onAppTaskDidColdLaunchFailedWithAppId:(id)arg1;
- (void)onAppTaskDidCancelColdLaunchWithAppId:(id)arg1;
- (void)onForwardMessageCancelWithContentVM:(id)arg1 andUserArray:(id)arg2;
- (void)onDoneForwardMessageWithContentVM:(id)arg1 andUserArray:(id)arg2;
- (void)onMMLiveCompleteViewControllerClose;
- (void)onLiveTask:(id)arg1 networkLocalQuality:(id)arg2 remoteQuality:(id)arg3;
- (void)onLiveTask:(id)arg1 userVoiceVolume:(id)arg2 totalVolume:(long long)arg3 isSelfAnchorUserTalking:(_Bool)arg4;
- (void)onMMLiveCancel;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)onMMLiveStartFinishedWithLiveTask:(id)arg1 startExtraInfo:(id)arg2 startSuccess:(_Bool)arg3;
- (void)onMMLiveWillStart;
- (void)onMMLiveVerifyFinishedWithLiveTask:(id)arg1 startExtraInfo:(id)arg2 verifySuccess:(_Bool)arg3;
- (void)onReceiveLiveMusicMsg:(_Bool)arg1 musicName:(id)arg2;
- (void)onReceiveLiveRoomMsg:(unsigned long long)arg1 liveRoomMsgList:(id)arg2 currOnlineCount:(unsigned int)arg3 totalViewCount:(unsigned int)arg4 currLikeCount:(unsigned long long)arg5 totalRewardCount:(unsigned long long)arg6;
- (void)appendOfficialNotifyMsg:(id)arg1;
- (void)onGetLiveOnlineMemberList:(unsigned long long)arg1 liveRoomMemberList:(id)arg2;
- (void)onMixExternalAudioData:(id)arg1 sampleRate:(long long)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
- (void)onCustomAudioData:(id)arg1 sampleRate:(long long)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
- (void)onCustomVideoData:(struct __CVBuffer *)arg1 pixelFormat:(long long)arg2 rotation:(long long)arg3 timestampMs:(unsigned long long)arg4;
- (id)getCurrentMusicInfo;
- (void)showMusicPanel;
- (long long)convertToLiveSamplerate:(int)arg1;
- (long long)convertToLivePixelFormat:(int)arg1;
- (long long)convertToVideoRotation:(int)arg1;
- (void)sendLiveStateChangeEvent:(unsigned long long)arg1 reason:(unsigned long long)arg2 appId:(id)arg3;
- (void)cgiUpdateTopic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getCurrentLiveRoomInfo;
- (void)getCurrentLiveRoomMemberInfo:(CDUnknownBlockType)arg1;
- (void)setupLiveInfoFromFinder;
- (void)setEncoderParamWithVideoSize:(double)arg1 height:(double)arg2;
- (void)setExperimentConfig:(id)arg1 withParams:(id)arg2;
- (_Bool)mixExternalAudioData:(id)arg1 sampleRate:(int)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
- (_Bool)mixExternalAudioData:(void *)arg1 size:(int)arg2 sampleRate:(int)arg3 channels:(int)arg4 timestampMs:(unsigned long long)arg5;
- (_Bool)enableMixExternalAudio:(_Bool)arg1 playout:(_Bool)arg2;
- (_Bool)sendCustomAudioData:(id)arg1 sampleRate:(int)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
- (_Bool)sendCustomAudioData:(void *)arg1 size:(int)arg2 sampleRate:(int)arg3 channels:(int)arg4 timestampMs:(unsigned long long)arg5;
- (_Bool)enableCustomAudioCapture:(_Bool)arg1;
- (_Bool)sendCustomVideoData:(id)arg1 pixelFormat:(int)arg2 timestampMs:(unsigned long long)arg3 width:(double)arg4 height:(double)arg5 rotation:(int)arg6;
- (_Bool)sendCustomVideoData:(void *)arg1 size:(int)arg2 pixelFormat:(int)arg3 timestampMs:(unsigned long long)arg4 width:(double)arg5 height:(double)arg6 rotation:(int)arg7;
- (_Bool)sendCustomVideoData:(struct __CVBuffer *)arg1 pixelFormat:(int)arg2 timestampMs:(unsigned long long)arg3 rotation:(int)arg4;
- (_Bool)enableCustomVideoCapture:(_Bool)arg1;
- (void)enableLocalAudio:(_Bool)arg1;
- (void)enableLocalVideo:(_Bool)arg1;
- (void)updateCoverImage:(id)arg1;
- (void)notifyGameViewVisible:(_Bool)arg1;
- (_Bool)minimize;
- (_Bool)isLiving;
- (void)openFansClub:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shareToMoment:(id)arg1;
- (void)shareToFriend:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isGameLiving:(id)arg1 versionType:(unsigned long long)arg2;
- (void)enterCurrentLiveRoom:(id)arg1;
- (void)saveCurrentState;
- (void)resetState;
- (void)cancelWhileCountDown;
- (void)setLiveMicInfoEvent:(_Bool)arg1 duration:(unsigned long long)arg2;
- (void)setLiveInfoEvent:(_Bool)arg1;
- (void)joinTeam:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)exitGameLive:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2 nav:(id)arg3;
- (void)notifyGameLiveDidStart;
- (void)notifyGameLiveWillStart;
- (void)checkDisableMicMusicCapture;
- (_Bool)isDisableMicMusicCapture;
- (_Bool)isMicCaptureDisabledBySwitch;
- (_Bool)isMicMuted;
- (void)setMicMute:(_Bool)arg1;
- (void)onLaunchGameFailed;
- (void)hideWAGameForFinderLive:(id)arg1 versionType:(unsigned long long)arg2;
- (void)launchWAGameForFinderLive:(id)arg1 versionType:(unsigned long long)arg2 viewController:(id)arg3 fromWeApp:(_Bool)arg4 firstStart:(_Bool)arg5;
- (void)sendGameLiveMenuClickEvent:(id)arg1 versionType:(unsigned long long)arg2;
- (void)notifyAppRebootWithNav:(id)arg1;
- (void)startGameLiveFromMenu:(id)arg1 versionType:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3 nav:(id)arg4 startInfo:(id)arg5;
- (void)setDelegate:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

