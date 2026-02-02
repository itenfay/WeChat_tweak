//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCTimelineHeaderPreviewEditVideoCompositionTask
{
    struct CGSize _previewThumbSize;
}

@property(nonatomic) struct CGSize previewThumbSize; // @synthesize previewThumbSize=_previewThumbSize;
- (id)getThumbImageForEditVideoFromPath:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTaskId:(id)arg1 srcPHAsset:(id)arg2 editVideoAttr:(id)arg3 compositionAttr:(id)arg4 previewThumbImageSize:(struct CGSize)arg5;

@end

