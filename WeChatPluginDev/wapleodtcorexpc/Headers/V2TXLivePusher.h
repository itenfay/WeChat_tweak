//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TXAudioEffectManager, TXBeautyManager, TXDeviceManager;

@interface V2TXLivePusher : NSObject
{
    struct unique_ptr<lite_base::Thread, std::default_delete<lite_base::Thread>> _thread;
    struct Pusher *_pusher;
    struct PushNetworkConfig _config;
    struct shared_ptr<liteav::live::V2TXLivePusherObserverImpl> _client;
    TXDeviceManager *_deviceManager;
    TXBeautyManager *_beautyManager;
    TXAudioEffectManager *_audioEffectManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct VideoSize)getVideoSizeWith:(long long)arg1 mode:(long long)arg2;
- (id)convertToInnerFrame:(id)arg1;
- (unsigned long long)convertToInnerFormat:(long long)arg1;
- (struct LiveTranscodingConfig)convertToInnerMixTranscodingConfig:(id)arg1;
- (struct LiveMixStream)convertToInnerLiveMixStream:(id)arg1;
- (int)convertToInnerLiveMixInputType:(long long)arg1;
- (long long)enable3A:(id)arg1 value:(id)arg2;
- (long long)setMixTranscodingConfig:(id)arg1;
- (long long)setProperty:(id)arg1 value:(id)arg2;
- (void)showDebugView:(_Bool)arg1;
- (long long)sendSeiMessage:(int)arg1 data:(id)arg2;
- (long long)sendCustomAudioFrame:(id)arg1;
- (long long)sendCustomVideoFrame:(id)arg1;
- (long long)enableCustomAudioCapture:(_Bool)arg1;
- (long long)enableCustomVideoCapture:(_Bool)arg1;
- (long long)enableCustomVideoProcess:(_Bool)arg1 pixelFormat:(long long)arg2 bufferType:(long long)arg3;
- (long long)enableVolumeEvaluation:(unsigned long long)arg1;
- (long long)setWatermark:(id)arg1 x:(float)arg2 y:(float)arg3 scale:(float)arg4;
- (long long)snapshot;
- (id)getDeviceManager;
- (id)getBeautyManager;
- (id)getAudioEffectManager;
- (long long)setVideoQuality:(id)arg1;
- (long long)setAudioQuality:(long long)arg1;
- (int)isPushing;
- (long long)stopPush;
- (long long)startPush:(id)arg1;
- (long long)resumeVideo;
- (long long)pauseVideo;
- (long long)resumeAudio;
- (long long)pauseAudio;
- (long long)stopScreenCapture;
- (long long)startScreenCapture:(id)arg1;
- (long long)stopVirtualCamera;
- (long long)startVirtualCamera:(id)arg1;
- (long long)stopMicrophone;
- (long long)startMicrophone;
- (long long)stopCamera;
- (long long)startCamera:(_Bool)arg1;
- (long long)setRenderRotation:(long long)arg1;
- (long long)setEncoderMirror:(_Bool)arg1;
- (long long)setRenderMirror:(long long)arg1;
- (long long)setRenderView:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)dealloc;
- (id)initWithLiveMode:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

