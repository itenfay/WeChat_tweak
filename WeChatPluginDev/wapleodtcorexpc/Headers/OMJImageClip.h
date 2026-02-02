//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class OMJContentSpatialDesc;

@interface OMJImageClip
{
    OMJContentSpatialDesc *_contentSpatialDesc;
    CDStruct_1b6d18a9 _duration;
    struct CGRect _contentCropRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect contentCropRect; // @synthesize contentCropRect=_contentCropRect;
@property(retain, nonatomic) OMJContentSpatialDesc *contentSpatialDesc; // @synthesize contentSpatialDesc=_contentSpatialDesc;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
- (id)initWithAssetInfo:(id)arg1 duration:(CDStruct_1b6d18a9)arg2;

@end

