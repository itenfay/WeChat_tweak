//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSObject, NSString;
@protocol ILinkAudioFrameDelegate, OS_dispatch_queue;

@interface ILinkPusher
{
    NSString *_rtmpUrl;
    int _videoFPS;
    struct os_unfair_lock_s _videoPixelBufferListLock;
    _Bool _isInRoom;
    _Bool _enableCustomAudio;
    id <ILinkAudioFrameDelegate> _audioFrameDelegate;
    NSObject<OS_dispatch_queue> *_workingQueue;
    NSMutableArray *_videoPixelBufferList;
    shared_ptr_f88d11c8 _ilinkPuhserAudioDataCallback;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool enableCustomAudio; // @synthesize enableCustomAudio=_enableCustomAudio;
@property(nonatomic) _Bool isInRoom; // @synthesize isInRoom=_isInRoom;
@property(retain, nonatomic) NSMutableArray *videoPixelBufferList; // @synthesize videoPixelBufferList=_videoPixelBufferList;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // @synthesize workingQueue=_workingQueue;
@property(nonatomic) shared_ptr_f88d11c8 ilinkPuhserAudioDataCallback; // @synthesize ilinkPuhserAudioDataCallback=_ilinkPuhserAudioDataCallback;
@property(nonatomic) __weak id <ILinkAudioFrameDelegate> audioFrameDelegate; // @synthesize audioFrameDelegate=_audioFrameDelegate;
- (void)updateLiveRemoteStatus:(_Bool)arg1;
- (void)setILinkAudioFrameDelegate:(id)arg1;
- (void)OnAudioLocalProcessedData:(char *)arg1 dataLen:(int)arg2 channels:(int)arg3 sampleRate:(int)arg4;
- (void)sendTRTCRemoteAudioData:(char *)arg1 length:(unsigned int)arg2 channels:(unsigned int)arg3 sampleRate:(unsigned int)arg4;
- (void)restartAudioDevice:(_Bool)arg1;
- (void)setAudioCaptureVolume:(long long)arg1;
- (void)muteLocalAudio:(_Bool)arg1;
- (void)setHandsFree:(_Bool)arg1;
- (void)stopLocalAudio;
- (void)startLocalAudio;
- (void)onSetMultiTalkScreenSharingStatus:(int)arg1 ScreenSharingStatus:(int)arg2;
- (void)onMultiTalkNotAllowCameraLimit:(unsigned int)arg1;
- (void)onMultiTalkCreateLimit:(unsigned int)arg1;
- (void)onMultiTalkJoinLimit:(unsigned int)arg1;
- (void)onMultiTalkBannerChange:(id)arg1;
- (void)onOtherDeviceHandleTalk:(id)arg1;
- (void)onMultiTalkRedirectOk;
- (void)onReceiveSubscribeMemberChangeMsg:(int)arg1;
- (void)onReceiveVideoMemberChangeMsg:(id)arg1 extArray:(id)arg2;
- (void)OnSysCallNotifyInterrupt:(int)arg1;
- (void)onAddMultiTalkMemberResult:(_Bool)arg1 errorType:(int)arg2 groupInfo:(id)arg3;
- (void)onSpeakerStateChange:(_Bool)arg1;
- (void)onVideoData:(unsigned int)arg1 Bgra:(char *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4 frontCamera:(_Bool)arg5 screenData:(_Bool)arg6;
- (void)onErr:(int)arg1 groupUserName:(id)arg2;
- (void)OnVideoStateChange:(_Bool)arg1 VideoOn:(_Bool)arg2;
- (void)onMuteStateChange:(_Bool)arg1;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onMultiTalkReady;
- (void)onMemberChange:(id)arg1 withNewJoinedMembers:(id)arg2;
- (void)onMemberChange:(id)arg1;
- (void)onReceiveMissMultiTalk:(id)arg1;
- (void)onInviteOrAcceptTimeout:(id)arg1;
- (void)onCancelCreateMultiTalk:(id)arg1;
- (void)onCreateMultiTalk:(id)arg1;
- (void)onEnterMultiTalk:(id)arg1;
- (void)sendCustomVideoEncData:(id)arg1 width:(double)arg2 height:(double)arg3 frameType:(long long)arg4;
- (void)sendCustomMessage:(id)arg1;
- (void)sendCustomVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)sendCustomAudioData:(char *)arg1 length:(unsigned int)arg2;
- (void)exitRoom;
- (void)enterRoom:(id)arg1;
- (void)startILinkPushService;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

