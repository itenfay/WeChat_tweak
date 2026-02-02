//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGameAudioMixWrapper, MMGameOffTexture, NSString;

@interface WAWebViewPlugin_GameLive
{
    _Bool started;
    _Bool capture;
    _Bool disappear;
    _Bool disableMicMusicCapture;
    _Bool _bForceUpdateAudioPlayBack;
    unsigned int mark_id;
    unsigned int video_width;
    unsigned int video_height;
    unsigned int video_cap_frame_cnt;
    unsigned int video_snd_frame_cnt;
    unsigned int audio_cap_frame_cnt;
    unsigned int audio_mix_frame_cnt;
    unsigned int audio_snd_frame_cnt;
    unsigned long long last_stats_stamp;
    unsigned long long _stopScene;
    CDUnknownBlockType _closeBlock;
    MMGameAudioMixWrapper *_mixWrapper;
    MMGameOffTexture *_offTexture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMGameOffTexture *offTexture; // @synthesize offTexture=_offTexture;
@property(retain, nonatomic) MMGameAudioMixWrapper *mixWrapper; // @synthesize mixWrapper=_mixWrapper;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void)wkRequest:(id)arg1;
- (void)onMixData:(id)arg1 format:(long long)arg2 samplerate:(int)arg3 channel:(int)arg4;
- (void)onExitLiveSuccessWithLiveTask;
- (void)onMMLiveCancel;
- (void)onMMLiveStartFinishedWithLiveTask:(id)arg1 startSuccess:(_Bool)arg2;
- (void)onMMLiveWillStart;
- (void)onMMLiveVerifyFinishedWithLiveTask:(id)arg1 verifySuccess:(_Bool)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showLiveScreenToast:(_Bool)arg1 msg:(id)arg2;
- (void)onWxAudioPlayBackWithSessionId:(int)arg1 data:(char *)arg2 size:(unsigned int)arg3 channels:(unsigned int)arg4 samplerate:(unsigned int)arg5 fmt:(unsigned long long)arg6;
- (void)onAudioPlayBack:(id)arg1 when:(id)arg2;
- (void)onScreenCapture:(unsigned int)arg1 data:(void *)arg2 size:(unsigned long long)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 bitsPerComponent:(unsigned long long)arg6 bytesPerRow:(unsigned long long)arg7 format:(int)arg8;
- (void)onScreenCapture:(unsigned int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelBuffer:(struct __CVBuffer *)arg4;
- (void)checkStats;
- (void)updateEncodeParmas;
- (void)updateResolutionRatio:(unsigned int)arg1 height:(unsigned int)arg2;
- (id)getImageFromView:(id)arg1;
- (id)getSnapshotFromPixelBuffer:(struct __CVBuffer *)arg1;
- (void)updateSnapshotImg;
- (_Bool)isLiving;
- (_Bool)isCurrGameLiving;
- (void)enableDelegate:(_Bool)arg1;
- (_Bool)captureDisabled;
- (void)checkAudioPlayBack;
- (void)doStopLive;
- (void)stopLive:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)joinTeam:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)stopPush;
- (void)startPush;
- (void)startLive:(id)arg1;
- (void)onGameViewWillDisappear:(_Bool)arg1;
- (void)onGameViewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

