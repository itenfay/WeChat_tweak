//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIView, V2TXLivePusherJSConfig, V2TXLivePusherWx;
@protocol V2TXLivePusherJSAdapterDelegate;

@interface V2TXLivePusherJSAdapter : NSObject
{
    unsigned long long _mode;
    V2TXLivePusherJSConfig *_appliedConfig;
    UIView *_preview;
    _Bool _enableTorch;
    _Bool _needCompress;
    _Bool _isBGMPlaying;
    _Bool _isBGMPlayingWhenPausePusher;
    _Bool _isPreviewing;
    id <V2TXLivePusherJSAdapterDelegate> _delegate;
    V2TXLivePusherWx *_pusher;
    long long _bgmVolume;
    long long _micVolume;
}

- (void).cxx_destruct;
@property(nonatomic) long long micVolume; // @synthesize micVolume=_micVolume;
@property(nonatomic) long long bgmVolume; // @synthesize bgmVolume=_bgmVolume;
@property(retain, nonatomic) V2TXLivePusherWx *pusher; // @synthesize pusher=_pusher;
@property(nonatomic) __weak id <V2TXLivePusherJSAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)apiOnlineLog:(id)arg1 online:(_Bool)arg2;
- (void)onPushNetStatus:(id)arg1;
- (void)onPushEvent:(long long)arg1 param:(id)arg2;
- (void)onSnapshotComplete:(id)arg1;
- (void)onMicrophoneVolumeUpdate:(long long)arg1;
- (void)adjustPushMode:(id)arg1 width:(long long *)arg2 height:(long long *)arg3 minVideoBitrate:(long long *)arg4 maxVideoBitrate:(long long *)arg5;
- (int)getGopWithPushMode:(long long)arg1;
- (void)notifyMicStatusChanged:(_Bool)arg1;
- (void)notifyAudioMuteStatusChanged:(_Bool)arg1;
- (void)onCameraStateChanged:(_Bool)arg1;
- (void)updateAudioRecord;
- (void)stopPreview;
- (void)startPreview;
- (void)updatePreview:(_Bool)arg1;
- (void)stopPush;
- (void)startPush;
- (void)createPusher:(unsigned long long)arg1;
- (void)setVideoEncParams:(id)arg1;
- (void)enableCustomVideoCapture:(id)arg1;
- (void)applyConfig:(id)arg1 force:(_Bool)arg2 needNotify:(_Bool)arg3;
- (void)applyConfig:(id)arg1 force:(_Bool)arg2;
- (id)parseConfigs:(id)arg1;
- (long long)sendVideoFrameData:(id)arg1 param:(id)arg2;
- (long long)sendVideoPixelBuffer:(struct __CVBuffer *)arg1;
- (void)restartAudioDevice;
- (void)onlineLog:(id)arg1;
- (void)setOrientation:(id)arg1;
- (_Bool)userLandscapeResolution:(long long)arg1 isVertical:(_Bool)arg2;
- (void)setRenderRotation:(long long)arg1;
- (void)setFilterImage:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)enablePureAudioPush:(_Bool)arg1;
@property(readonly, nonatomic) double cameraZoomMaxRatio;
@property(readonly, nonatomic) _Bool isAudioMuted;
@property(readonly, nonatomic) _Bool isMicEnabled;
@property(readonly, nonatomic) _Bool isPreviewing;
@property(readonly, nonatomic) _Bool isPushing;
@property(readonly, nonatomic) V2TXLivePusherJSConfig *config;
- (_Bool)operateLivePusherWithType:(id)arg1 params:(id)arg2;
- (void)updateLivePusherWithConfigs:(id)arg1 force:(_Bool)arg2 needNotify:(_Bool)arg3;
- (void)updateLivePusherWithConfigs:(id)arg1 needNotify:(_Bool)arg2;
- (void)updateLivePusherWithConfigs:(id)arg1;
- (id)initWithPreviewView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

