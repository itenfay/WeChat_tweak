//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, GameHaowanAlbumVideoItem, NSString, NSURL, NSURLSessionTask;

@interface MMAssetForGameHaowanOfVideoItem
{
    GameHaowanAlbumVideoItem *_videoItem;
    CDUnknownBlockType _imageResultBlock;
    NSURLSessionTask *_sessionTask;
    AVAsset *_avAsset;
    NSURL *_assetURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(retain, nonatomic) AVAsset *avAsset; // @synthesize avAsset=_avAsset;
- (void)dealloc;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2 extraInfo:(id)arg3;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (id)getCreatedDate;
- (id)imageExifLogInfo;
- (struct CGSize)getImageRatioSize;
- (void)stopICloudActivity;
- (void)asyncGetVideoAssetWithBlock:(CDUnknownBlockType)arg1;
- (void)requestThumbnail:(CDUnknownBlockType)arg1;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize)arg1 andResult:(CDUnknownBlockType)arg2;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (_Bool)getIsEdited;
- (id)videoDuration;
- (_Bool)isVideo;
- (_Bool)isPicture;
- (_Bool)isGif;
- (id)getThumbnail;
- (id)getThumbImage;
- (id)assetId;
- (id)assetUrl;
@property(readonly, nonatomic) GameHaowanAlbumVideoItem *videoItem;
- (_Bool)isOnlineVideo;
- (id)appId;
- (id)gameName;
- (id)subtitle;
- (id)title;
- (id)initWithVideoItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

