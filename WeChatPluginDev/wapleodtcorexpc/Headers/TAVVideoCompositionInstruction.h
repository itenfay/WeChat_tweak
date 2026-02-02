//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CIColor, NSArray, NSString, TAVPixelBufferCache, TAVRenderReportData;
@protocol TAVVideoComposition, TAVVideoCompositionMixer;

@interface TAVVideoCompositionInstruction : NSObject
{
    _Bool _enablePostProcessing;
    _Bool _containsTweening;
    _Bool _cacheDecodedFrameAsEmptyFrame;
    int _passthroughTrackID;
    NSArray *_requiredSourceTrackIDs;
    NSArray *_transitionableChannel;
    NSArray *_layerInstructions;
    id <TAVVideoComposition> _videoComposition;
    id <TAVVideoCompositionMixer> _videoCompositionMixer;
    CIColor *_backgroundColor;
    TAVRenderReportData *_renderReportData;
    TAVPixelBufferCache *_pixelBufferCache;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TAVPixelBufferCache *pixelBufferCache; // @synthesize pixelBufferCache=_pixelBufferCache;
@property(retain, nonatomic) TAVRenderReportData *renderReportData; // @synthesize renderReportData=_renderReportData;
@property(nonatomic) _Bool cacheDecodedFrameAsEmptyFrame; // @synthesize cacheDecodedFrameAsEmptyFrame=_cacheDecodedFrameAsEmptyFrame;
@property(retain, nonatomic) CIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) id <TAVVideoCompositionMixer> videoCompositionMixer; // @synthesize videoCompositionMixer=_videoCompositionMixer;
@property(retain, nonatomic) id <TAVVideoComposition> videoComposition; // @synthesize videoComposition=_videoComposition;
@property(copy, nonatomic) NSArray *layerInstructions; // @synthesize layerInstructions=_layerInstructions;
@property(copy, nonatomic) NSArray *transitionableChannel; // @synthesize transitionableChannel=_transitionableChannel;
@property(readonly, nonatomic) int passthroughTrackID; // @synthesize passthroughTrackID=_passthroughTrackID;
@property(readonly, nonatomic) NSArray *requiredSourceTrackIDs; // @synthesize requiredSourceTrackIDs=_requiredSourceTrackIDs;
@property(nonatomic) _Bool containsTweening; // @synthesize containsTweening=_containsTweening;
@property(nonatomic) _Bool enablePostProcessing; // @synthesize enablePostProcessing=_enablePostProcessing;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (struct __CVBuffer *)handleCacheForPixelBuffer:(struct __CVBuffer *)arg1 trackID:(long long)arg2;
- (float)factorForTime:(CDStruct_1b6d18a9)arg1 inRange:(CDStruct_e83c9415)arg2;
- (struct CGAffineTransform)pixelAspectRatioTransformFromPixelBuffer:(struct __CVBuffer *)arg1;
- (id)generateImageFromPixelBuffer:(struct __CVBuffer *)arg1;
- (struct __CVBuffer *)pixelBufferFromLayerInstruction:(id)arg1 request:(id)arg2;
- (id)imageFromLayerInstruction:(id)arg1 request:(id)arg2;
- (id)applyCustomMixerWithRequest:(id)arg1 backgroundImage:(id)arg2;
- (id)applyTransitionForImage:(id)arg1 withRequest:(id)arg2 layerInstruction1:(id)arg3 layerInstruction2:(id)arg4;
- (id)applyDefaultMixerWithRequest:(id)arg1 backgroundImage:(id)arg2;
- (void)applyRequest:(id)arg1 directedToPixelBuffer:(struct __CVBuffer *)arg2;
- (id)applyRequest:(id)arg1;
- (void)commonInit;
- (id)initWithSourceTrackIDs:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (id)initWithPassthroughTrackID:(int)arg1 timeRange:(CDStruct_e83c9415)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@property(readonly) Class superclass;

@end

