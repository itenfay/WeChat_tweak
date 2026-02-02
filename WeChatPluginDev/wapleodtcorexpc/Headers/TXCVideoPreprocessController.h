//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TXCBeautifyFilter, TXCCustomProcessor, TXCDispatchQueue, TXCGSensor, TXCImageBlendFilter, TXCLookupFilter, TXCRgbToYuvFilter, TXCRoiRegionTransformFilter, TXCTransformFilter, TXCVideoPreprocessConfig, TXCVideoPreprocessSupervisor, TXCYuvToRgbFilter;
@protocol TXCVideoPreprocessControllerDelegate, TXIGlContext, TXIVideoBindable;

@interface TXCVideoPreprocessController
{
    id <TXCVideoPreprocessControllerDelegate> _delegate;
    TXCGSensor *_gSensor;
    TXCDispatchQueue *_queue;
    TXCVideoPreprocessConfig *_config;
    id <TXIGlContext> _glContext;
    TXCYuvToRgbFilter *_yuvToRgbFilter;
    TXCBeautifyFilter *_beautifyFilter;
    TXCCustomProcessor *_customFilter;
    TXCTransformFilter *_encodeTransformFilter;
    id <TXIVideoBindable> _localRenderFilter;
    id <TXIVideoBindable> _customRenderFilter;
    TXCRgbToYuvFilter *_rgbToYuvFilter;
    TXCImageBlendFilter *_watermark;
    TXCLookupFilter *_lutFilter;
    TXCRoiRegionTransformFilter *_roiRegionTransformFilter;
    TXCVideoPreprocessSupervisor *_supervisor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TXCVideoPreprocessSupervisor *supervisor; // @synthesize supervisor=_supervisor;
@property(retain, nonatomic) TXCRoiRegionTransformFilter *roiRegionTransformFilter; // @synthesize roiRegionTransformFilter=_roiRegionTransformFilter;
@property(retain, nonatomic) TXCLookupFilter *lutFilter; // @synthesize lutFilter=_lutFilter;
@property(retain, nonatomic) TXCImageBlendFilter *watermark; // @synthesize watermark=_watermark;
@property(retain, nonatomic) TXCRgbToYuvFilter *rgbToYuvFilter; // @synthesize rgbToYuvFilter=_rgbToYuvFilter;
@property(retain, nonatomic) id <TXIVideoBindable> customRenderFilter; // @synthesize customRenderFilter=_customRenderFilter;
@property(retain, nonatomic) id <TXIVideoBindable> localRenderFilter; // @synthesize localRenderFilter=_localRenderFilter;
@property(retain, nonatomic) TXCTransformFilter *encodeTransformFilter; // @synthesize encodeTransformFilter=_encodeTransformFilter;
@property(retain, nonatomic) TXCCustomProcessor *customFilter; // @synthesize customFilter=_customFilter;
@property(retain, nonatomic) TXCBeautifyFilter *beautifyFilter; // @synthesize beautifyFilter=_beautifyFilter;
@property(retain, nonatomic) TXCYuvToRgbFilter *yuvToRgbFilter; // @synthesize yuvToRgbFilter=_yuvToRgbFilter;
@property(retain, nonatomic) id <TXIGlContext> glContext; // @synthesize glContext=_glContext;
@property(retain, nonatomic) TXCVideoPreprocessConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) TXCGSensor *gSensor; // @synthesize gSensor=_gSensor;
@property(nonatomic) __weak id <TXCVideoPreprocessControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)preprocessSupervisorDidUpdateStrategy;
- (void)updateInputRatio:(struct CGSize)arg1;
- (_Bool)fixValue:(float *)arg1 minValue:(float)arg2 maxValue:(float)arg3;
- (void)gSensor:(id)arg1 onRotationChange:(unsigned long long)arg2 isViewInLandscape:(_Bool)arg3;
- (void)setupStreamLine;
- (void)enableRoiEncoding:(_Bool)arg1;
- (void)setRoiConfig:(id)arg1 shouldSkipRoiRegionTransform:(_Bool)arg2;
- (void)setWatermark:(id)arg1 atRect:(struct CGRect)arg2;
- (void)setImageFilterLeftImage:(id)arg1 leftStrength:(float)arg2 rightImage:(id)arg3 rightStrength:(float)arg4 leftRatio:(float)arg5;
- (void)setImageFilterStrength:(float)arg1;
- (void)setImageFilterImage:(id)arg1;
- (void)setEnableSharpnessEnhancement:(_Bool)arg1;
- (void)setRuddinessLevel:(float)arg1;
- (void)setWhitenessLevel:(float)arg1;
- (void)setBeautyLevel:(float)arg1;
- (void)setBeautifyStyle:(unsigned long long)arg1;
- (void)setCustomPreprocess:(id)arg1 pixelFormat:(unsigned long long)arg2 bufferType:(unsigned long long)arg3;
- (void)setOutputFormat:(unsigned long long)arg1;
- (void)setGSensorMode:(unsigned long long)arg1 homeOrientation:(int)arg2;
- (void)setOutputRotation:(unsigned long long)arg1;
- (void)enableOutputMirror:(_Bool)arg1;
- (void)setCustomPreprocessResolution:(id)arg1;
- (void)setOutputResolution:(struct CGSize)arg1;
- (void)setCustomRenderer:(id)arg1;
- (void)setLocalRenderer:(id)arg1;
- (void)setEncoderFeatures:(unsigned long long)arg1;
- (void)processVideoFrameResult:(id)arg1;
- (void)updateInputForSupervisor:(id)arg1;
- (void)setupFilters;
- (id)initWithQueue:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

