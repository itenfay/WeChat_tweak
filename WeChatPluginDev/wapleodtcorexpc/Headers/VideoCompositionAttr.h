//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVMutableVideoComposition, CALayer, NSMutableDictionary, NSString, UIImage;

@interface VideoCompositionAttr
{
    _Bool _hasOriginSound;
    _Bool _isPhotoCompositionVideo;
    _Bool _forbidsSoftEncoding;
    _Bool _useAssetDurationForCompose;
    _Bool _isVideoEdited;
    _Bool _canCompositeSameVideo;
    UIImage *overlayImage;
    NSMutableDictionary *_extraInfo;
    CALayer *_overlayLayer;
    unsigned long long _entranceType;
    unsigned long long _subEntranceType;
    long long _mediaType;
    NSString *_videoBGMPath;
    AVMutableVideoComposition *_videoComposition;
    CDUnknownBlockType _progressBlock;
    struct CGRect _cropFrame;
    CDStruct_e83c9415 cropTimeRange;
}

+ (id)createFromEditVideoAttr:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) _Bool canCompositeSameVideo; // @synthesize canCompositeSameVideo=_canCompositeSameVideo;
@property(nonatomic) _Bool isVideoEdited; // @synthesize isVideoEdited=_isVideoEdited;
@property(nonatomic) _Bool useAssetDurationForCompose; // @synthesize useAssetDurationForCompose=_useAssetDurationForCompose;
@property(retain, nonatomic) AVMutableVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(nonatomic) _Bool forbidsSoftEncoding; // @synthesize forbidsSoftEncoding=_forbidsSoftEncoding;
@property(nonatomic) struct CGRect cropFrame; // @synthesize cropFrame=_cropFrame;
@property(nonatomic) _Bool isPhotoCompositionVideo; // @synthesize isPhotoCompositionVideo=_isPhotoCompositionVideo;
@property(nonatomic) _Bool hasOriginSound; // @synthesize hasOriginSound=_hasOriginSound;
@property(copy, nonatomic) NSString *videoBGMPath; // @synthesize videoBGMPath=_videoBGMPath;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned long long subEntranceType; // @synthesize subEntranceType=_subEntranceType;
@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
@property(retain, nonatomic) CALayer *overlayLayer; // @synthesize overlayLayer=_overlayLayer;
@property(nonatomic) CDStruct_e83c9415 cropTimeRange; // @synthesize cropTimeRange;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage;
- (id)description;
@property(readonly, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

