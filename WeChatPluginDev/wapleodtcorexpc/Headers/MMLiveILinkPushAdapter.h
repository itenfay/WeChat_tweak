//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ILinkPusher, LayerOpenGLContext, MMLayerCompositer, MMLiveILinkCompositerTextureWrap, NSMutableArray, NSMutableDictionary, NSObject, NSString, TRTCTranscodingConfig, UIImage;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MMLiveILinkPushAdapter
{
    struct os_unfair_lock_s _remoteVideoDictLock;
    _Bool _hasVideoMuteImage;
    _Bool _useTRTCAudioDevice;
    _Bool _hasCreatedILinkBgmMgr;
    _Bool _shouldPushTrtcStream;
    _Bool _forcePushTrtcStream;
    ILinkPusher *_ilinkPushInstance;
    NSObject<OS_dispatch_queue> *_workingQueue;
    NSMutableDictionary *_remoteUserVideoInfoDict;
    TRTCTranscodingConfig *_localMixConfig;
    LayerOpenGLContext *_context;
    MMLayerCompositer *_layerCompositer;
    NSMutableArray *_subLayerArray;
    NSObject<OS_dispatch_source> *_imageStreamTimer;
    MMLiveILinkCompositerTextureWrap *_compositerTextureWrap;
    UIImage *_currentImageForVideoStream;
    NSString *_currentSdkUserId;
    unsigned long long _trtcPushState;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forcePushTrtcStream; // @synthesize forcePushTrtcStream=_forcePushTrtcStream;
@property _Bool shouldPushTrtcStream; // @synthesize shouldPushTrtcStream=_shouldPushTrtcStream;
@property unsigned long long trtcPushState; // @synthesize trtcPushState=_trtcPushState;
@property(nonatomic) _Bool hasCreatedILinkBgmMgr; // @synthesize hasCreatedILinkBgmMgr=_hasCreatedILinkBgmMgr;
@property(nonatomic) _Bool useTRTCAudioDevice; // @synthesize useTRTCAudioDevice=_useTRTCAudioDevice;
@property(copy) NSString *currentSdkUserId; // @synthesize currentSdkUserId=_currentSdkUserId;
@property(retain, nonatomic) UIImage *currentImageForVideoStream; // @synthesize currentImageForVideoStream=_currentImageForVideoStream;
@property(nonatomic) _Bool hasVideoMuteImage; // @synthesize hasVideoMuteImage=_hasVideoMuteImage;
@property(retain, nonatomic) MMLiveILinkCompositerTextureWrap *compositerTextureWrap; // @synthesize compositerTextureWrap=_compositerTextureWrap;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *imageStreamTimer; // @synthesize imageStreamTimer=_imageStreamTimer;
@property(retain, nonatomic) NSMutableArray *subLayerArray; // @synthesize subLayerArray=_subLayerArray;
@property(retain, nonatomic) MMLayerCompositer *layerCompositer; // @synthesize layerCompositer=_layerCompositer;
@property(retain, nonatomic) LayerOpenGLContext *context; // @synthesize context=_context;
@property(retain, nonatomic) TRTCTranscodingConfig *localMixConfig; // @synthesize localMixConfig=_localMixConfig;
@property(retain, nonatomic) NSMutableDictionary *remoteUserVideoInfoDict; // @synthesize remoteUserVideoInfoDict=_remoteUserVideoInfoDict;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // @synthesize workingQueue=_workingQueue;
@property(retain, nonatomic) ILinkPusher *ilinkPushInstance; // @synthesize ilinkPushInstance=_ilinkPushInstance;
- (void)sendH264EncodedVideoData:(id)arg1 width:(double)arg2 height:(double)arg3 frameType:(long long)arg4;
- (void)updateForcePushTrtcStream:(_Bool)arg1;
- (void)updateShouldPushTrtcStream;
- (void)updateTrtcPushState:(unsigned long long)arg1;
- (void)restartAudioDevice:(_Bool)arg1;
- (void)setAudioCaptureVolume:(long long)arg1;
- (void)setAudioMuted:(_Bool)arg1;
- (void)setAudioQuality:(long long)arg1;
- (void)setVolumeType:(long long)arg1;
- (void)setAudioRoute:(long long)arg1;
- (void)setAudioEnabled:(_Bool)arg1;
- (void)stopLocalAudio;
- (void)startLocalAudio;
- (id)getAudioEffectManager;
- (id)convertMonoToStereo:(id)arg1;
- (void)onMixedILinkLocalAudioData:(char *)arg1 dataLen:(int)arg2 channels:(int)arg3 sampleRate:(int)arg4;
- (void)onMixedPlayAudioFrame:(id)arg1;
- (void)onMixedAllAudioFrame:(id)arg1;
- (void)liveManager:(id)arg1 didPushVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 shouldReportCaptureMetrics:(_Bool)arg3;
- (void)sendSEIMessageData:(id)arg1 ilinkOnly:(_Bool)arg2;
- (void)sendSEIMessageData:(id)arg1;
- (_Bool)sendSEIMessage:(id)arg1 repeatCount:(long long)arg2;
- (void)delayResetTrtcPushState;
- (void)updateTrtcPushStateWithRemoteTRTCUsersState:(_Bool)arg1;
- (void)updateMixTranscodingConfig:(id)arg1;
- (void)mixRemoteThenSendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 isCameraMirror:(_Bool)arg2 shouldReportCaptureMetrics:(_Bool)arg3;
- (id)subLayerAtIndex:(unsigned long long)arg1;
- (void)initLayerCompositer;
- (void)setVideoMuteImage:(id)arg1 fps:(long long)arg2;
- (struct opaqueCMSampleBuffer *)createSampleBufferFromImage:(id)arg1 andSize:(struct CGSize)arg2;
- (void)checkAndClearImageStreamTimer;
- (void)clearImageStreamTimer;
- (void)startImageStreamTimerWithImage:(id)arg1;
- (void)updateRemoteUser:(id)arg1 isVideoEnabled:(_Bool)arg2;
- (void)removeRemoteUser:(id)arg1;
- (void)updateRemoteTRTCVideoFrame:(id)arg1 withUserId:(id)arg2;
- (void)setVideoMuted:(_Bool)arg1;
- (void)enableBlackStream:(_Bool)arg1;
- (void)switchRole:(long long)arg1;
- (void)destroySharedTRTCInstance;
- (void)exitRoom;
- (void)enterRoom;
- (_Bool)canStartLocalCapture;
- (_Bool)isLiveAudience;
- (void)initDefaultData;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

