//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAsset, NSString;
@protocol GameHaowanAsset;

@interface MMAssetForGameHaowan
{
    MMAsset<GameHaowanAsset> *_impl;
}

- (void).cxx_destruct;
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
- (id)getThumbImage;
- (id)assetUrl;
- (id)videoItem;
- (_Bool)isOnlineVideo;
- (id)appId;
- (id)gameName;
- (id)subtitle;
- (id)title;
- (id)initWithAssetImpl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

