//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class XImageViewRenderer;

@interface CdnRciRenderView
{
    unsigned long long _renderFrameCount;
    long long _format;
    struct CGRect _frameRect;
    struct CGRect _frame;
    _Bool _rendering;
    struct __CVBuffer *_sampleBufferToRender;
    unsigned long long _busyCount;
    long long _startPlayTs;
    float _currentScale;
    struct CGSize _bufSize;
    _Bool _isBufferSetup;
    _Bool _isRotating;
    _Bool _isInitProgram;
    _Bool _mReceivedFirstFrame;
    float _rotationInDegree;
    unsigned int _mRawDataFrameType;
    unsigned long long _contentMode;
    CDUnknownBlockType _renderLogger;
    XImageViewRenderer *_renderer;
    struct CGRect _videoRect;
}

+ (_Bool)checkInitParamValidWithRenderMode:(long long)arg1 renderScene:(long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) XImageViewRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) _Bool mReceivedFirstFrame; // @synthesize mReceivedFirstFrame=_mReceivedFirstFrame;
@property(nonatomic) _Bool isInitProgram; // @synthesize isInitProgram=_isInitProgram;
@property _Bool isRotating; // @synthesize isRotating=_isRotating;
@property(nonatomic) _Bool isBufferSetup; // @synthesize isBufferSetup=_isBufferSetup;
@property(nonatomic) unsigned int mRawDataFrameType; // @synthesize mRawDataFrameType=_mRawDataFrameType;
@property(readonly, copy, nonatomic) CDUnknownBlockType renderLogger; // @synthesize renderLogger=_renderLogger;
@property(nonatomic) struct CGRect videoRect; // @synthesize videoRect=_videoRect;
@property(nonatomic) float rotationInDegree; // @synthesize rotationInDegree=_rotationInDegree;
@property(nonatomic) unsigned long long contentMode; // @synthesize contentMode=_contentMode;
- (id)getCdnRenderContext;
- (void)resumeMonitor;
- (void)pauseMonitor;
- (void)setMaxMinHalfFOVVer:(float)arg1 MaxVal:(float)arg2;
- (void)setMaxMinHalfFOVHor:(float)arg1 MaxVal:(float)arg2;
- (void)resetPitchAndYaw;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)setRotation:(long long)arg1;
- (void)resetStatsInternal;
- (void)resetStats;
- (void)statisticFrame:(_Bool)arg1;
- (void)onCdnRenderStatsFpsUpdate:(int)arg1;
- (void)onCdnRenderStatsMonitoredBlock:(unsigned long long)arg1;
- (void)setEnhanceParam:(int)arg1;
- (void)pauseRenderLocalView;
- (void)innerRenderFrame:(struct __CVBuffer *)arg1;
- (void)innerRenderRGBAImage:(id)arg1;
- (_Bool)checkWeEffectFrameValid:(id)arg1;
- (void)invokeRenderFrame:(struct __CVBuffer *)arg1;
- (void)_renderFrame:(struct __CVBuffer *)arg1;
- (void)renderFrame:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)renderFrame:(id)arg1;
- (_Bool)checkEnableProcessByWeEffect;
- (void)updateNeedProcessByWeffect:(_Bool)arg1;
- (void)configCdnWeEffectManager:(id)arg1;
- (void)resume;
- (void)pause;
- (float)currentScale;
- (struct CGSize)bufSize;
- (void)sendNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)sendNotifyEvent:(int)arg1;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)setup;
- (void)removeFromSuperview;
- (void)asyncLayout;
- (void)layoutSubviews;
- (void)setCustomrenderMode:(long long)arg1;
- (void)setSensorControlFlag:(_Bool)arg1 keepLastSensor:(_Bool)arg2;
- (void)setTouchControlFlag:(_Bool)arg1;
- (void)handleGesturesOperation:(id)arg1;
- (void)uninitVrParameter;
- (void)initVrParameter;
- (id)initRemoteViewWithFrame:(struct CGRect)arg1 renderMode:(long long)arg2 renderScene:(long long)arg3;

@end

