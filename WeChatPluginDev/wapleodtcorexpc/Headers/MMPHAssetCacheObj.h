//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImage;

@interface MMPHAssetCacheObj
{
    _Bool _isVideoAsset;
    _Bool _isGifAsset;
    _Bool _isUpdated;
    NSString *_identifier;
    double _videoAssetDuration;
    UIImage *_thumbImage;
}

+ (void)initialize;
+ (void)PBArrayAdd_isGifAsset;
+ (void)PBArrayAdd_videoAssetDuration;
+ (void)PBArrayAdd_isVideoAsset;
+ (void)PBArrayAdd_identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(nonatomic) _Bool isUpdated; // @synthesize isUpdated=_isUpdated;
@property(nonatomic) double videoAssetDuration; // @synthesize videoAssetDuration=_videoAssetDuration;
@property(nonatomic) _Bool isGifAsset; // @synthesize isGifAsset=_isGifAsset;
@property(nonatomic) _Bool isVideoAsset; // @synthesize isVideoAsset=_isVideoAsset;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)getThumbImage;
- (id)getThumbnail;
- (void)getHighResolutionImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4 FaceCountBlock:(CDUnknownBlockType)arg5;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4;
- (id)videoDuration;
- (_Bool)isPictureForIncludeGif:(_Bool)arg1;
- (_Bool)isGif;
- (_Bool)isVideo;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (_Bool)tryUpdateAsset;
- (void)tryLoadPHAsset;
- (void)updateThumbImage:(id)arg1;
- (id)fetchThumbImage;
- (void)onMemoryWarning;
- (id)initWithIdentifer:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

