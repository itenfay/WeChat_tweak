//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TXCDispatchQueue, TXCVideoEncodeConfig, TXCVideoEncodeFpsThrottle, TXCVideoEncodeReport, TXCVideoEncoderSupervisor, TXCVideoResolutionConstraint;
@protocol TXCVideoEncodeControllerDelegate, TXIVideoEncoderInterface, TXIVideoRpsEncoderInterface;

@interface TXCVideoEncodeController
{
    struct shared_ptr<liteav::video::TXCVideoRpsFramerateCallback> _rpsFramerateCallback;
    TXCVideoEncodeConfig *_config;
    id <TXIVideoEncoderInterface> _encoder;
    TXCVideoResolutionConstraint *_resolutionFilter;
    TXCDispatchQueue *_queue;
    TXCVideoEncodeFpsThrottle *_fpsThrottle;
    TXCVideoEncoderSupervisor *_supervisor;
    id <TXCVideoEncodeControllerDelegate> _delegate;
    TXCVideoEncodeReport *_report;
    double _lastRequestKeyFrameTime;
}

+ (_Bool)supportsHardwareHevcEncode;
+ (_Bool)supportsSoftwareEncode;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) double lastRequestKeyFrameTime; // @synthesize lastRequestKeyFrameTime=_lastRequestKeyFrameTime;
@property(readonly, nonatomic) TXCVideoEncodeReport *report; // @synthesize report=_report;
@property(nonatomic) __weak id <TXCVideoEncodeControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TXCVideoEncoderSupervisor *supervisor; // @synthesize supervisor=_supervisor;
@property(readonly, nonatomic) TXCVideoEncodeFpsThrottle *fpsThrottle; // @synthesize fpsThrottle=_fpsThrottle;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) TXCVideoResolutionConstraint *resolutionFilter; // @synthesize resolutionFilter=_resolutionFilter;
@property(retain, nonatomic) id <TXIVideoEncoderInterface> encoder; // @synthesize encoder=_encoder;
@property(readonly, nonatomic) TXCVideoEncodeConfig *config; // @synthesize config=_config;
- (void)supervisor:(id)arg1 onChangeToHardware:(_Bool)arg2 hevc:(_Bool)arg3;
- (void)notifyInputFormat;
- (void)setupStreamLine;
- (void)updateEncoder;
- (void)createEncoder;
- (void)updateSupervisor:(const void *)arg1;
- (_Bool)shouldResetEncoderWhenUpdateGopFrameIndex:(const void *)arg1;
- (void)applyConfig:(const void *)arg1;
- (void)enableRoiEncoding:(_Bool)arg1;
- (void)setRpsIDRFramerate:(long long)arg1 IsRpsIDR:(_Bool)arg2;
- (void)enablesHevc:(_Bool)arg1;
@property(readonly, nonatomic) id <TXIVideoRpsEncoderInterface> rpsEncoder;
- (void)setEncodeUsage:(int)arg1;
- (void)setEncodeStrategy:(int)arg1;
- (void)setEncodeParams:(const void *)arg1;
- (void)stop;
- (void)start;
- (id)initWithQueue:(id)arg1 streamType:(int)arg2 delegate:(id)arg3;

@end

