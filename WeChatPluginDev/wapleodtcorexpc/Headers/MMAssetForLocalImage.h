//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMAssetForLocalImage
{
    NSString *_localAssetId;
    NSString *_localFilePath;
    long long _imageDataType;
}

- (void).cxx_destruct;
@property(nonatomic) long long imageDataType; // @synthesize imageDataType=_imageDataType;
@property(retain, nonatomic) NSString *localFilePath; // @synthesize localFilePath=_localFilePath;
@property(retain, nonatomic) NSString *localAssetId; // @synthesize localAssetId=_localAssetId;
- (void)asyncGetVideoAsset:(_Bool)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)asyncGetVideoAsset:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)asyncGetVideoAssetWithBlock:(CDUnknownBlockType)arg1;
- (id)videoDuration;
- (id)getVideoUrl;
- (id)_safeLoadImageData;
- (id)_getImageForType:(long long)arg1 fromData:(id)arg2;
- (long long)_getImageTypeFromData:(id)arg1;
- (id)_syncLoadImage;
- (void)asyncGetImageWithCompletion:(CDUnknownBlockType)arg1;
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

