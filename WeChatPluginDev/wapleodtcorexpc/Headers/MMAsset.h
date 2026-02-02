//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMAsset
{
    _Bool _m_isNeedOriginImage;
    _Bool _m_isSupportHeif;
    _Bool _m_isFailedFromIcloud;
    _Bool _m_isLoadingFromIcloud;
    _Bool _m_isUseLivePhoto;
    double _m_progressFromIcloud;
    unsigned long long _m_indexInAlbum;
    unsigned long long _originVideoSize;
    NSString *_m_livePhotoVideoPath;
}

+ (_Bool)isAsset:(id)arg1 CreateWithInSecond:(double)arg2;
+ (struct CGSize)LongImageSizeWithOriginSize:(struct CGSize)arg1;
+ (id)decodeXmlString:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_isUseLivePhoto; // @synthesize m_isUseLivePhoto=_m_isUseLivePhoto;
@property(retain, nonatomic) NSString *m_livePhotoVideoPath; // @synthesize m_livePhotoVideoPath=_m_livePhotoVideoPath;
@property(nonatomic) unsigned long long originVideoSize; // @synthesize originVideoSize=_originVideoSize;
@property(nonatomic) unsigned long long m_indexInAlbum; // @synthesize m_indexInAlbum=_m_indexInAlbum;
@property(nonatomic) double m_progressFromIcloud; // @synthesize m_progressFromIcloud=_m_progressFromIcloud;
@property(nonatomic) _Bool m_isLoadingFromIcloud; // @synthesize m_isLoadingFromIcloud=_m_isLoadingFromIcloud;
@property(nonatomic) _Bool m_isFailedFromIcloud; // @synthesize m_isFailedFromIcloud=_m_isFailedFromIcloud;
@property(nonatomic) _Bool m_isSupportHeif; // @synthesize m_isSupportHeif=_m_isSupportHeif;
@property(nonatomic) _Bool m_isNeedOriginImage; // @synthesize m_isNeedOriginImage=_m_isNeedOriginImage;
- (_Bool)tryUpdateAsset;
- (void)fetchLivePhotoInfoWithResultBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)asyncGetImageExifLogInfo:(CDUnknownBlockType)arg1;
- (id)getOriginalAssetLocalIdentifier;
- (id)getEditVideoAttr;
- (_Bool)getIsEditedVideo;
- (id)getEditImageAttr;
- (_Bool)getIsEdited;
- (id)getDrawLayerArray;
- (void)setEditedImage:(id)arg1 withDrawLayer:(id)arg2 withEdited:(_Bool)arg3;
- (void)asyncGetMetadata:(CDUnknownBlockType)arg1;
- (void)stopGetBigImageICloudActivity;
- (void)stopICloudActivity;
- (struct CGSize)getImageRatioSize;
- (id)getCreatedDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)asyncGetIsSpatial:(CDUnknownBlockType)arg1;
- (void)asyncGetVideoFileSizeWithBlock:(CDUnknownBlockType)arg1;
- (void)asyncImageOriginSourceData:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)asyncGetLivePhotoVideoWithSuccess:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)asyncGetVideoAsset:(_Bool)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)asyncGetVideoAsset:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)asyncGetVideoAssetWithBlock:(CDUnknownBlockType)arg1;
- (id)getVideoUrl;
- (void)getVideoDurationForDisplayWithCompletion:(CDUnknownBlockType)arg1;
- (id)videoDuration;
- (_Bool)isTimeLapseVideo;
- (_Bool)isSlowMotionVideo;
- (_Bool)isVideo;
- (void)asyncGetOriginImageDataSizeWithBlock:(CDUnknownBlockType)arg1;
- (id)getOriginImageDataSize;
- (_Bool)isPictureForIncludeGif:(_Bool)arg1;
- (_Bool)isLivePhoto;
- (_Bool)isGif;
- (_Bool)isPicture;
- (id)uniformTypeIdentifier;
- (id)encodeXmlString;
- (double)longitude;
- (double)latitude;
- (_Bool)hasLocation;
- (id)alAssetReferenceUrl;
- (id)assetFileName;
- (id)assetId;
- (id)assetUrl;
- (id)tipForLoadingUncomplete;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize)arg1 andResult:(CDUnknownBlockType)arg2;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1 progress:(CDUnknownBlockType)arg2;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (id)getThumbImageWithSize:(struct CGSize)arg1;
- (id)getThumbnail;
- (id)getThumbImage;
- (void)getHighResolutionImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4 FaceCountBlock:(CDUnknownBlockType)arg5;
- (_Bool)canUseLivePhoto;
- (void)getDisplayLivePhotoWithResultBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)getDisplayImageWithCompressConfig:(id)arg1 ResultBlock:(CDUnknownBlockType)arg2 ErrorBlock:(CDUnknownBlockType)arg3;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4;
- (id)initWithUrl:(id)arg1 IsNeedOrigin:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

