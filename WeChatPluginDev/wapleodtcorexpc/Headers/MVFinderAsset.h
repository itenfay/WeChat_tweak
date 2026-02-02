//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicFinderVideoCellModel, MVImageLoader, WCFinderDataItem;

@interface MVFinderAsset
{
    unsigned long long _type;
    MMMusicFinderVideoCellModel *_finderVideoModel;
    WCFinderDataItem *_draftModel;
    MVImageLoader *_imageLoader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MVImageLoader *imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) WCFinderDataItem *draftModel; // @synthesize draftModel=_draftModel;
@property(retain, nonatomic) MMMusicFinderVideoCellModel *finderVideoModel; // @synthesize finderVideoModel=_finderVideoModel;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)getVideoDurationForDisplayWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestThumbnail:(struct CGSize)arg1 isSync:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (id)requestThumbnailSync:(struct CGSize)arg1;
- (id)getCreatedDate;
- (struct CGSize)getImageRatioSize;
- (void)stopICloudActivity;
- (void)asyncGetVideoAssetWithBlock:(CDUnknownBlockType)arg1;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize)arg1 andResult:(CDUnknownBlockType)arg2;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (_Bool)getIsEdited;
- (id)videoDuration;
- (_Bool)isVideo;
- (_Bool)isPicture;
- (_Bool)isGif;
- (id)tipForLoadingUncomplete;
- (id)getThumbnail;
- (id)coverUrlToken;
- (id)coverUrl;
- (id)getThumbImage;
- (id)assetId;
- (id)assetUrl;
- (id)initWithFinderDataItem:(id)arg1;
- (id)initWithFinderVideoModel:(id)arg1;

@end

