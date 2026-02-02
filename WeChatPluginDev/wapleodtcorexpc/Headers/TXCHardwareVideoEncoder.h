//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TXCDispatchQueue, TXCDroppableDispatcher, TXCRetrier, TXCVideoEncodeConfig, TXCVideoEncoderSupervisor;

@interface TXCHardwareVideoEncoder
{
    _Bool _enable_restart_encoder_when_bitrate_not_health;
    _Bool _should_restart_after_bitrate_changed;
    unsigned int _bitrate_anchor;
    unsigned int _bitrate_health_degree_timestamp;
    unsigned int _bitrate_health_check_interval;
    float _bitrate_health_degree;
    float _bitrate_health_lower_limit;
    float _bitrate_health_upper_limit;
    unsigned int _encoded_data_length_bytes;
    _Bool _enablesHevc;
    _Bool _nextKeyFrame;
    _Bool _needsRestartEncoder;
    TXCVideoEncoderSupervisor *supervisor;
    TXCDispatchQueue *_queue;
    TXCVideoEncodeConfig *_config;
    struct OpaqueVTCompressionSession *_session;
    long long _frameIndex;
    TXCRetrier *_recreateRetrier;
    double _lastIDRTime;
    const struct __CFString *_currentYCbCrMatrixKey;
    TXCDroppableDispatcher *_dispatcher;
    long long _lastPts;
    CDUnknownBlockType _stuckChecker;
    long long _droppedFrameCount;
    unsigned long long _frameDurationFlag;
}

+ (void)releaseSession:(struct OpaqueVTCompressionSession *)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long frameDurationFlag; // @synthesize frameDurationFlag=_frameDurationFlag;
@property(nonatomic) long long droppedFrameCount; // @synthesize droppedFrameCount=_droppedFrameCount;
@property(copy, nonatomic) CDUnknownBlockType stuckChecker; // @synthesize stuckChecker=_stuckChecker;
@property(nonatomic) long long lastPts; // @synthesize lastPts=_lastPts;
@property(retain, nonatomic) TXCDroppableDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(nonatomic) const struct __CFString *currentYCbCrMatrixKey; // @synthesize currentYCbCrMatrixKey=_currentYCbCrMatrixKey;
@property(nonatomic) _Bool needsRestartEncoder; // @synthesize needsRestartEncoder=_needsRestartEncoder;
@property(nonatomic) double lastIDRTime; // @synthesize lastIDRTime=_lastIDRTime;
@property(nonatomic) _Bool nextKeyFrame; // @synthesize nextKeyFrame=_nextKeyFrame;
@property(readonly, nonatomic) _Bool enablesHevc; // @synthesize enablesHevc=_enablesHevc;
@property(retain, nonatomic) TXCRetrier *recreateRetrier; // @synthesize recreateRetrier=_recreateRetrier;
@property(nonatomic) long long frameIndex; // @synthesize frameIndex=_frameIndex;
@property(nonatomic) struct OpaqueVTCompressionSession *session; // @synthesize session=_session;
@property(retain, nonatomic) TXCVideoEncodeConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak TXCVideoEncoderSupervisor *supervisor; // @synthesize supervisor;
- (id)videoFrameFrom:(struct opaqueCMSampleBuffer *)arg1;
- (void)onCodecFinished:(int)arg1 infoFlags:(unsigned int)arg2 sampleBufferRef:(struct opaqueCMSampleBuffer *)arg3 startTime:(id)arg4 complete:(CDUnknownBlockType)arg5;
- (_Bool)shouldDisableDataRateLimits;
- (unsigned int)codecType;
- (struct __CFString *)profileLevel;
- (_Bool)recreateEncodeOnPtsWrapAround:(long long)arg1;
- (void)notifyError:(id)arg1 withComplete:(CDUnknownBlockType)arg2;
- (void)requestKeyFrame;
- (void)updateBitrate:(long long)arg1;
- (void)updateFrameRate:(long long)arg1;
- (void)encodePixelBuffer:(struct __CVBuffer *)arg1 timestamp:(unsigned long long)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)configVUIColorInfoIfNeed:(struct __CVBuffer *)arg1;
- (_Bool)createEncoder;
- (void)configOpenGop;
- (void)configMaxFrameDelay;
- (void)configRealTime;
- (void)configEnableRestartStrategy;
@property(readonly, nonatomic) unsigned long long features;
- (void)enableTranscodingMode:(_Bool)arg1;
- (void)setFrameRate:(long long)arg1;
- (void)setBitrate:(long long)arg1;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 enablesHevc:(_Bool)arg2 config:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

