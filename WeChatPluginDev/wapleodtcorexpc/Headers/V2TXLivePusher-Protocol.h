//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSObject, NSString, TXAudioEffectManager, TXBeautyManager, TXDeviceManager, UIImage, UIView, V2TXLiveAudioFrame, V2TXLiveTranscodingConfig, V2TXLiveVideoEncoderParam, V2TXLiveVideoFrame;
@protocol V2TXLivePusherObserver;

@protocol V2TXLivePusher <NSObject>
- (long long)setMixTranscodingConfig:(V2TXLiveTranscodingConfig *)arg1;
- (long long)setProperty:(NSString *)arg1 value:(NSObject *)arg2;
- (void)showDebugView:(_Bool)arg1;
- (long long)sendSeiMessage:(int)arg1 data:(NSData *)arg2;
- (long long)sendCustomAudioFrame:(V2TXLiveAudioFrame *)arg1;
- (long long)sendCustomVideoFrame:(V2TXLiveVideoFrame *)arg1;
- (long long)enableCustomAudioCapture:(_Bool)arg1;
- (long long)enableCustomVideoCapture:(_Bool)arg1;
- (long long)enableCustomVideoProcess:(_Bool)arg1 pixelFormat:(long long)arg2 bufferType:(long long)arg3;
- (long long)enableVolumeEvaluation:(unsigned long long)arg1;
- (long long)setWatermark:(UIImage *)arg1 x:(float)arg2 y:(float)arg3 scale:(float)arg4;
- (long long)snapshot;
- (TXDeviceManager *)getDeviceManager;
- (TXBeautyManager *)getBeautyManager;
- (TXAudioEffectManager *)getAudioEffectManager;
- (long long)setVideoQuality:(V2TXLiveVideoEncoderParam *)arg1;
- (long long)setAudioQuality:(long long)arg1;
- (int)isPushing;
- (long long)stopPush;
- (long long)startPush:(NSString *)arg1;
- (long long)resumeVideo;
- (long long)pauseVideo;
- (long long)resumeAudio;
- (long long)pauseAudio;
- (long long)stopScreenCapture;
- (long long)startScreenCapture:(NSString *)arg1;
- (long long)stopVirtualCamera;
- (long long)startVirtualCamera:(UIImage *)arg1;
- (long long)stopMicrophone;
- (long long)startMicrophone;
- (long long)stopCamera;
- (long long)startCamera:(_Bool)arg1;
- (long long)setRenderRotation:(long long)arg1;
- (long long)setEncoderMirror:(_Bool)arg1;
- (long long)setRenderMirror:(long long)arg1;
- (long long)setRenderView:(UIView *)arg1;
- (void)setObserver:(id <V2TXLivePusherObserver>)arg1;
@end

