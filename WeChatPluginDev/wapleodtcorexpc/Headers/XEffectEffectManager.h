//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSRecursiveLock, NSString, XEffectRenderTarget, XEffectVideoRecorder;
@protocol XEffectEffectManagerDelegate;

@interface XEffectEffectManager : NSObject
{
    struct unique_ptr<WeEffect::X3DEffect, std::default_delete<WeEffect::X3DEffect>> _p3DEffect;
    struct WeVisDataReport22049 dataReport22049;
    long long sharpenFilterId;
    _Bool _alwaysCopyPixelBuffer;
    _Bool _isFrontCamera;
    _Bool _isFaceTrackAllow;
    _Bool _hasSetupModels;
    _Bool _useSegment;
    _Bool _isBackground;
    _Bool _isRecording;
    _Bool _isRecordingRaw;
    unsigned int _appScenario;
    id <XEffectEffectManagerDelegate> _delegate;
    long long _outputFormat;
    long long _inputFormat;
    long long _orientation;
    CDUnknownBlockType _dataReportCallback;
    NSMutableArray *_eyeBrows;
    NSMutableArray *_eyeShadows;
    NSMutableArray *_lipSticker;
    NSMutableArray *_faceContours;
    NSMutableArray *_effectMaterialIds;
    NSMutableArray *_filters;
    NSMutableArray *_operations;
    NSMutableArray *_smallHeads;
    NSMutableArray *_cheekbones;
    NSMutableArray *_lowerJawbones;
    NSMutableArray *_wingOfNoses;
    NSMutableArray *_eyepouchSmilefolds;
    NSMutableArray *_sharpens;
    long long _faceThin2Id;
    double _edgeWidth;
    long long _trackConfig;
    long long _actionConfig;
    XEffectVideoRecorder *_videoWriter;
    XEffectRenderTarget *_renderTarget;
    double _animateInterval;
    long long _animateUpdateCountdown;
    NSRecursiveLock *_lock;
    NSArray *_modelKeyArray;
    CDStruct_1b6d18a9 _currentFrameTime;
    struct CGRect _captureFrame;
    struct CGRect _preferredRect;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned int appScenario; // @synthesize appScenario=_appScenario;
@property(retain, nonatomic) NSArray *modelKeyArray; // @synthesize modelKeyArray=_modelKeyArray;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) long long animateUpdateCountdown; // @synthesize animateUpdateCountdown=_animateUpdateCountdown;
@property double animateInterval; // @synthesize animateInterval=_animateInterval;
@property(nonatomic) struct CGRect preferredRect; // @synthesize preferredRect=_preferredRect;
@property(retain, nonatomic) XEffectRenderTarget *renderTarget; // @synthesize renderTarget=_renderTarget;
@property(nonatomic) CDStruct_1b6d18a9 currentFrameTime; // @synthesize currentFrameTime=_currentFrameTime;
@property(nonatomic) struct CGRect captureFrame; // @synthesize captureFrame=_captureFrame;
@property(nonatomic) _Bool isRecordingRaw; // @synthesize isRecordingRaw=_isRecordingRaw;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(retain, nonatomic) XEffectVideoRecorder *videoWriter; // @synthesize videoWriter=_videoWriter;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(nonatomic) long long actionConfig; // @synthesize actionConfig=_actionConfig;
@property(nonatomic) long long trackConfig; // @synthesize trackConfig=_trackConfig;
@property(nonatomic) double edgeWidth; // @synthesize edgeWidth=_edgeWidth;
@property(nonatomic) _Bool useSegment; // @synthesize useSegment=_useSegment;
@property(nonatomic) _Bool hasSetupModels; // @synthesize hasSetupModels=_hasSetupModels;
@property(nonatomic) long long faceThin2Id; // @synthesize faceThin2Id=_faceThin2Id;
@property(retain, nonatomic) NSMutableArray *sharpens; // @synthesize sharpens=_sharpens;
@property(retain, nonatomic) NSMutableArray *eyepouchSmilefolds; // @synthesize eyepouchSmilefolds=_eyepouchSmilefolds;
@property(retain, nonatomic) NSMutableArray *wingOfNoses; // @synthesize wingOfNoses=_wingOfNoses;
@property(retain, nonatomic) NSMutableArray *lowerJawbones; // @synthesize lowerJawbones=_lowerJawbones;
@property(retain, nonatomic) NSMutableArray *cheekbones; // @synthesize cheekbones=_cheekbones;
@property(retain, nonatomic) NSMutableArray *smallHeads; // @synthesize smallHeads=_smallHeads;
@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) NSMutableArray *effectMaterialIds; // @synthesize effectMaterialIds=_effectMaterialIds;
@property(retain, nonatomic) NSMutableArray *faceContours; // @synthesize faceContours=_faceContours;
@property(retain, nonatomic) NSMutableArray *lipSticker; // @synthesize lipSticker=_lipSticker;
@property(retain, nonatomic) NSMutableArray *eyeShadows; // @synthesize eyeShadows=_eyeShadows;
@property(retain, nonatomic) NSMutableArray *eyeBrows; // @synthesize eyeBrows=_eyeBrows;
@property(copy, nonatomic) CDUnknownBlockType dataReportCallback; // @synthesize dataReportCallback=_dataReportCallback;
@property(nonatomic) _Bool isFaceTrackAllow; // @synthesize isFaceTrackAllow=_isFaceTrackAllow;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool isFrontCamera; // @synthesize isFrontCamera=_isFrontCamera;
@property(nonatomic) _Bool alwaysCopyPixelBuffer; // @synthesize alwaysCopyPixelBuffer=_alwaysCopyPixelBuffer;
@property(nonatomic) long long inputFormat; // @synthesize inputFormat=_inputFormat;
@property(nonatomic) long long outputFormat; // @synthesize outputFormat=_outputFormat;
@property(nonatomic) __weak id <XEffectEffectManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setSceneType:(int)arg1;
- (void)end;
- (void)begin;
- (void)cancelRecordVideo;
- (void)finishRecordVideo:(CDUnknownBlockType)arg1;
- (void)prepareRecorderWithSize:(struct CGSize)arg1 filePath:(id)arg2;
- (void)startRecordWithVideoSize:(struct CGSize)arg1 captureFrame:(struct CGRect)arg2 filePath:(id)arg3 recordRawPixel:(_Bool)arg4;
- (long long)faceConfig;
- (_Bool)ensureX3DEffectInstance;
- (void)processRawBuffer:(struct __CVBuffer *)arg1 rawPixelTexture:(unsigned int)arg2;
- (void)processPixelBuffer:(struct __CVBuffer *)arg1;
- (void)processPixelBufferAfterPerformCachedOperations:(struct __CVBuffer *)arg1;
- (void)updateActionConfig:(id)arg1;
- (void)updateActionsForAssetPath:(id)arg1;
- (void)resetLite;
- (void)resetAllAnimation;
- (void)clearFilters;
- (void)clearMakeUp;
- (void)clearStickers;
- (void)clearAll;
- (void)applyWingOfNose:(float)arg1;
- (void)applyLowerJawbone:(float)arg1;
- (void)applyCheekbone:(float)arg1;
- (void)applySmallHead:(float)arg1;
- (void)applyRemoveEyePouch:(float)arg1 smileFolds:(float)arg2;
- (void)applyTeethBright:(float)arg1;
- (void)applySharpenFilter:(float)arg1;
- (void)applyDefaultFilter:(double)arg1;
- (void)applyFilter:(id)arg1 alpha:(double)arg2;
- (void)applyContours:(id)arg1;
- (void)enableBgSemgent:(_Bool)arg1;
- (void)applyFrontSticker:(id)arg1;
- (void)applyBackSticker:(id)arg1;
- (void)applyNaturalFilter:(double)arg1;
- (void)applyFaceRosy:(double)arg1;
- (void)applyFaceThin:(double)arg1;
- (void)applySkinBright:(double)arg1;
- (void)applyEyeBigger:(double)arg1;
- (void)applyEyeBright:(double)arg1;
- (void)applySkinSmooth:(double)arg1;
- (void)applyLipStick:(id)arg1;
- (void)applyEyeShadow:(id)arg1;
- (void)applyEyeBrow:(id)arg1;
- (void)applyEffectMaterial:(id)arg1;
- (void)apply2DSticker:(id)arg1;
- (void)applyMultiSampling:(unsigned long long)arg1;
- (void)performCachedOperations;
- (void)renderFrameDidFinish:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)registerBackgroundNotification;
- (id)snapshotWithFrame:(struct CGRect)arg1 format:(long long)arg2;
- (id)processWithSampleImageAfterPerformCachedOperations:(id)arg1;
- (id)processWithSampleImage:(id)arg1;
- (void)receiveVideoPixelBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)receiveVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)setVideoFrameRate:(long long)arg1 animationFrameRate:(long long)arg2;
- (void)shouldUpdateLayer:(_Bool)arg1;
- (void)setPreferredVideoOffset:(struct CGPoint)arg1;
- (void)setPreferredVideoSize:(struct CGSize)arg1;
- (void)setCurrentViewSize:(struct CGSize)arg1;
- (void)setModelMap:(id)arg1;
- (id)previewLayer;
- (void)dealloc;
- (void)loadingSettings;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

