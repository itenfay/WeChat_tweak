//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVVideoCompositionCoreAnimationTool, NSDictionary;

@interface VideoEncodeParams : NSObject
{
    _Bool _videoOnly;
    _Bool _isEnableHEVCEncode;
    _Bool _isUseFFmpegHevcEncoding;
    _Bool _useAssetDurationForCompose;
    _Bool _useHDRToSDR;
    _Bool _HDRSwitch;
    _Bool _originVideoIsHDR;
    _Bool _skipVideoCompress;
    _Bool _fixesTransform;
    float _width;
    float _height;
    float _videoBitrate;
    float _frameInterval;
    float _audioBitrate;
    float _audioSampleRate;
    int _audioChannel;
    int _adaptiveBitrateUp;
    int _adaptiveBirateDown;
    int _resolutionAdjust;
    float _scaleFactor;
    int _originalVideoHDRFormat;
    int _vcodec2Preset;
    float _crf;
    int _vbvBufferSize;
    int _selectedKbpsLevel;
    unsigned long long _scene;
    double _fps;
    NSDictionary *_extraInfo;
    AVVideoCompositionCoreAnimationTool *_animationTool;
    NSDictionary *_colorProperties;
    NSDictionary *_originVideoColorProperties;
    NSDictionary *_colorRange;
    struct CGRect _cropFrame;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool fixesTransform; // @synthesize fixesTransform=_fixesTransform;
@property(nonatomic) int selectedKbpsLevel; // @synthesize selectedKbpsLevel=_selectedKbpsLevel;
@property(nonatomic) int vbvBufferSize; // @synthesize vbvBufferSize=_vbvBufferSize;
@property(nonatomic) float crf; // @synthesize crf=_crf;
@property(nonatomic) int vcodec2Preset; // @synthesize vcodec2Preset=_vcodec2Preset;
@property(nonatomic) _Bool skipVideoCompress; // @synthesize skipVideoCompress=_skipVideoCompress;
@property(nonatomic) int originalVideoHDRFormat; // @synthesize originalVideoHDRFormat=_originalVideoHDRFormat;
@property(nonatomic) _Bool originVideoIsHDR; // @synthesize originVideoIsHDR=_originVideoIsHDR;
@property(nonatomic) _Bool HDRSwitch; // @synthesize HDRSwitch=_HDRSwitch;
@property(nonatomic) _Bool useHDRToSDR; // @synthesize useHDRToSDR=_useHDRToSDR;
@property(nonatomic) _Bool useAssetDurationForCompose; // @synthesize useAssetDurationForCompose=_useAssetDurationForCompose;
@property(copy, nonatomic) NSDictionary *colorRange; // @synthesize colorRange=_colorRange;
@property(copy, nonatomic) NSDictionary *originVideoColorProperties; // @synthesize originVideoColorProperties=_originVideoColorProperties;
@property(copy, nonatomic) NSDictionary *colorProperties; // @synthesize colorProperties=_colorProperties;
@property(nonatomic) _Bool isUseFFmpegHevcEncoding; // @synthesize isUseFFmpegHevcEncoding=_isUseFFmpegHevcEncoding;
@property(retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool; // @synthesize animationTool=_animationTool;
@property(copy, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) struct CGRect cropFrame; // @synthesize cropFrame=_cropFrame;
@property(nonatomic) int resolutionAdjust; // @synthesize resolutionAdjust=_resolutionAdjust;
@property(nonatomic) int adaptiveBirateDown; // @synthesize adaptiveBirateDown=_adaptiveBirateDown;
@property(nonatomic) int adaptiveBitrateUp; // @synthesize adaptiveBitrateUp=_adaptiveBitrateUp;
@property(nonatomic) _Bool isEnableHEVCEncode; // @synthesize isEnableHEVCEncode=_isEnableHEVCEncode;
@property(nonatomic) _Bool videoOnly; // @synthesize videoOnly=_videoOnly;
@property(nonatomic) int audioChannel; // @synthesize audioChannel=_audioChannel;
@property(nonatomic) float audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(nonatomic) float audioBitrate; // @synthesize audioBitrate=_audioBitrate;
@property(nonatomic) float frameInterval; // @synthesize frameInterval=_frameInterval;
@property(nonatomic) float videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) double fps; // @synthesize fps=_fps;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (_Bool)shouldExportWithHDR;
- (void)resetColorPropertiesToITUR709;
- (id)YCbCrMatrix;
- (id)transferFunction;
- (id)colorPrimaries;
- (id)colorPropertyDict;
- (id)description;
- (void)guaranteeReleaseAnimationToolOnMainThread;
- (void)dealloc;
- (id)init;
- (double)_adjustedStandardLengthFromLength:(double)arg1;
- (void)_adjustSizeToStandardForMoments;
- (void)adjustIfNeeded;

@end

