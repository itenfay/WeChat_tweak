//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMCStoryline, OMJAspectRatio;

@interface OMCTimeline : NSObject
{
    struct SharedPtr<XMSComposingSession> _composingSession;
    OMCStoryline *_storyline;
    CDStruct_1b6d18a9 _imageOriginDuration;
    CDStruct_1b6d18a9 _minSegmentPreservedDuration;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) OMCStoryline *storyline; // @synthesize storyline=_storyline;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minSegmentPreservedDuration; // @synthesize minSegmentPreservedDuration=_minSegmentPreservedDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 imageOriginDuration; // @synthesize imageOriginDuration=_imageOriginDuration;
- (void)updateAspectRatio:(id)arg1;
- (id)retrieveTimelineMutation;
- (CDStruct_1b6d18a9)alignTimeToVideoFrameBoundaryForward:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)alignTimeToVideoFrameBoundary:(CDStruct_1b6d18a9)arg1;
- (void)moveAnchoredSegmentWithID:(id)arg1 aboveSegmentWithID:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)moveStorySegmentWithID:(id)arg1 beforeSegmentWithID:(id)arg2;
- (id)splitSegmentWithID:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 isAlignedToVideoFrameBoundary:(_Bool)arg3;
- (void)removeSegmentWithID:(id)arg1;
- (id)anchorCaptionSegmentWithMaterialID:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 shouldUsePlaceholder:(_Bool)arg4;
- (id)anchorNarrationSegmentWithFilePath:(id)arg1 audioFileID:(id)arg2 captionTexts:(id)arg3 captionStyleID:(id)arg4 atTime:(CDStruct_1b6d18a9)arg5;
- (id)anchorMusicSegmentWithMusicInfo:(id)arg1 musicFilePath:(id)arg2 lyricStyleID:(id)arg3 atTime:(CDStruct_1b6d18a9)arg4 duration:(CDStruct_1b6d18a9)arg5 isLooping:(_Bool)arg6;
- (id)anchorEmoticonSegmentWithFilePath:(id)arg1 decoderType:(unsigned long long)arg2 timingFillMode:(unsigned long long)arg3 atTime:(CDStruct_1b6d18a9)arg4 duration:(CDStruct_1b6d18a9)arg5;
- (id)anchorWhenWhereSegmentWithMaterialID:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 shouldUsePlaceholder:(_Bool)arg4;
- (id)anchorFancyTextSegmentWithMaterialID:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 shouldUsePlaceholder:(_Bool)arg4;
- (id)anchorContentDescSegmentWithMaterialID:(id)arg1 belongingSegmentID:(id)arg2 shouldUsePlaceholder:(_Bool)arg3;
- (id)anchorMovieTitleSegmentWithMaterialID:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 shouldUsePlaceholder:(_Bool)arg4;
- (id)insertPhotoVideoSegmentsWithAssetIDs:(id)arg1 isAudioMuted:(_Bool)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (id)addPhotoVideoSegmentsWithAssetIDs:(id)arg1 isAudioMuted:(_Bool)arg2;
- (id)segmentWithXID:(const void *)arg1;
- (id)segmentWithID:(id)arg1;
@property(nonatomic) _Bool isOSTEnabled;
@property(readonly, nonatomic) _Bool hasAnyMutation;
@property(readonly, nonatomic) struct CGSize pointSize;
@property(readonly, nonatomic) unsigned long long frameRateType;
@property(readonly, nonatomic) double frameRateValue;
@property(readonly, nonatomic) OMJAspectRatio *aspectRatioDesc;
@property(readonly, nonatomic) double videoAspectRatio;
@property(readonly, nonatomic) CDStruct_1b6d18a9 videoFrameDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) const void *backingTimeline;
- (id)initWithBackingComposingSession:(const void *)arg1 imageOriginDuration:(CDStruct_1b6d18a9)arg2 minSegmentPreservedDuration:(CDStruct_1b6d18a9)arg3;

@end

