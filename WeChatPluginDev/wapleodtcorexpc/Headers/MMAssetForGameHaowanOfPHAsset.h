//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, GameLocalAlbumInfo, NSString, NSURL, PHAsset, PHCachingImageManager;

@interface MMAssetForGameHaowanOfPHAsset
{
    PHAsset *_localAsset;
    int _videoRequestId;
    GameLocalAlbumInfo *_albumInfo;
    AVAsset *_avAsset;
    NSURL *_assetURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(retain, nonatomic) AVAsset *avAsset; // @synthesize avAsset=_avAsset;
- (id)formatDuration:(unsigned int)arg1;
@property(readonly, nonatomic) _Bool isLocalAsset;
- (void)requestThumbnail:(struct CGSize)arg1 isSync:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (id)requestThumbnailSync:(struct CGSize)arg1;
- (id)getCreatedDate;
- (id)imageExifLogInfo;
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
- (id)getThumbImage;
- (id)assetId;
- (id)assetUrl;
- (id)videoItem;
- (_Bool)isOnlineVideo;
- (id)appId;
- (id)gameName;
- (id)subtitle;
- (id)title;
@property(readonly, nonatomic) PHCachingImageManager *imageManger;
- (id)initWithPHAsset:(id)arg1 albumInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

