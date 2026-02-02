//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OMCClipSegment;
@protocol OMCClipSpeedAdjustable, OMCColorAdjustable, OMCContentSpatialAdjustable, OMCFilterAdjustable, OMCPictureEnhancable, OMCSpeedAdjustable, OMCThumbnailProvider, OMCVolumeAdjustable;

@interface MJVisualClipSegmentViewModel
{
    struct {
        _Bool isExecuting;
        struct vector<long, std::allocator<long>> taskIDs;
    } _prefetchingParams;
    _Bool _isReversed;
    _Bool _isSpeedCurveAdjusted;
    id <OMCThumbnailProvider> _thumbnailProvider;
    double _storylineHeight;
    OMCClipSegment *_clipSegment;
    id <OMCColorAdjustable> _colorAdjustable;
    id <OMCPictureEnhancable> _pictureEnhancable;
    id <OMCFilterAdjustable> _filterAdjustable;
    id <OMCContentSpatialAdjustable> _contentSpatialAdjustable;
    id <OMCVolumeAdjustable> _volumeAdjustable;
    id <OMCClipSpeedAdjustable> _speedAdjustable;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) id <OMCClipSpeedAdjustable> speedAdjustable; // @synthesize speedAdjustable=_speedAdjustable;
@property(retain, nonatomic) id <OMCVolumeAdjustable> volumeAdjustable; // @synthesize volumeAdjustable=_volumeAdjustable;
@property(retain, nonatomic) id <OMCContentSpatialAdjustable> contentSpatialAdjustable; // @synthesize contentSpatialAdjustable=_contentSpatialAdjustable;
@property(retain, nonatomic) id <OMCFilterAdjustable> filterAdjustable; // @synthesize filterAdjustable=_filterAdjustable;
@property(retain, nonatomic) id <OMCPictureEnhancable> pictureEnhancable; // @synthesize pictureEnhancable=_pictureEnhancable;
@property(retain, nonatomic) id <OMCColorAdjustable> colorAdjustable; // @synthesize colorAdjustable=_colorAdjustable;
@property(retain, nonatomic) OMCClipSegment *clipSegment; // @synthesize clipSegment=_clipSegment;
@property(readonly, nonatomic) double storylineHeight; // @synthesize storylineHeight=_storylineHeight;
@property(readonly, nonatomic) _Bool isSpeedCurveAdjusted; // @synthesize isSpeedCurveAdjusted=_isSpeedCurveAdjusted;
@property(readonly, nonatomic) _Bool isReversed; // @synthesize isReversed=_isReversed;
@property(retain, nonatomic) id <OMCThumbnailProvider> thumbnailProvider; // @synthesize thumbnailProvider=_thumbnailProvider;
- (void)syncWithMutationEntry:(id)arg1;
@property(readonly, nonatomic) id <OMCSpeedAdjustable> speedAdjustableProxy;
@property(readonly, nonatomic) _Bool isPictureParamAdjusted;
@property(readonly, nonatomic) _Bool isColorAdjusted;
@property(readonly, nonatomic) _Bool isContentSpatialAdjusted;
@property(readonly, nonatomic) _Bool isAudioMuted;
@property(readonly, nonatomic) _Bool isFilterAdjusted;
- (CDStruct_1b6d18a9)mediaTimeToClip:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)clipTimeToMedia:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) NSString *phLocalIdentifier;
@property(readonly, nonatomic) NSString *mediaFilePath;
- (void)cancelPrefetching;
- (void)prefetch;
- (void)reopenThumbnailProviderIfNeeded;
- (void)cancelAllRequestTasks;
- (void)cancelRequestTask:(long long)arg1;
- (long long)requestThumbnailAtTimeRange:(CDStruct_e83c9415)arg1 resultHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) struct CGSize thumbnailPointSize;
@property(readonly, nonatomic) struct CGSize thumbnailPixelSize;
- (void)dealloc;
- (void)syncWithVisualClipSegmentImpl;
- (_Bool)syncWithSegment:(id)arg1;
- (id)initWithClipSegment:(id)arg1 storylineHeight:(double)arg2;

@end

