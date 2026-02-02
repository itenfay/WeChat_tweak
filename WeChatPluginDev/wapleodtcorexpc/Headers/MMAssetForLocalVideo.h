//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, NSString;

@interface MMAssetForLocalVideo
{
    NSString *_localAssetId;
    NSString *_localFilePath;
    AVAsset *_avAsset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAsset *avAsset; // @synthesize avAsset=_avAsset;
@property(retain, nonatomic) NSString *localFilePath; // @synthesize localFilePath=_localFilePath;
@property(retain, nonatomic) NSString *localAssetId; // @synthesize localAssetId=_localAssetId;
- (void)_asyncGetVideoAsset:(_Bool)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)asyncGetVideoAsset:(_Bool)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)asyncGetVideoAsset:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)asyncGetVideoAssetWithBlock:(CDUnknownBlockType)arg1;
- (id)videoDuration;
- (id)getVideoUrl;
- (id)_convertImage:(id)arg1 toMaxSize:(struct CGSize)arg2 cropToSquare:(_Bool)arg3;
- (id)_getAssetImageWithMaxSize:(struct CGSize)arg1 cropToSquare:(_Bool)arg2;
- (id)_getAssetImage;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1 progress:(CDUnknownBlockType)arg2;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (id)getThumbnail;
- (id)getThumbImageWithSize:(struct CGSize)arg1;
- (id)getThumbImage;
- (_Bool)isTimeLapseVideo;
- (_Bool)isSlowMotionVideo;
- (_Bool)isVideo;
- (_Bool)isGif;
- (_Bool)isPicture;
- (id)assetFileName;
- (id)assetUrl;
- (id)assetId;
- (id)initWithAssetId:(id)arg1 localFilePath:(id)arg2 isNeedOrigin:(_Bool)arg3;
- (id)initWithUrl:(id)arg1 IsNeedOrigin:(_Bool)arg2;

@end

