//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class OMJContentSpatialDesc;

@interface OMJVideoClip
{
    OMJContentSpatialDesc *_contentSpatialDesc;
    struct CGRect _contentCropRect;
    CDStruct_e83c9415 _timeRangeInAsset;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect contentCropRect; // @synthesize contentCropRect=_contentCropRect;
@property(retain, nonatomic) OMJContentSpatialDesc *contentSpatialDesc; // @synthesize contentSpatialDesc=_contentSpatialDesc;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRangeInAsset; // @synthesize timeRangeInAsset=_timeRangeInAsset;
- (id)initWithAssetInfo:(id)arg1 timeRangeInAsset:(CDStruct_e83c9415)arg2;
- (id)initWithAssetInfo:(id)arg1;

@end

