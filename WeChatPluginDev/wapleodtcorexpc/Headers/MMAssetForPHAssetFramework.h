//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, AVAssetExportSession, EditImageAttr, EditImageLogicController, EditVideoAttr, NSNumber, NSString, NSURL, PHAsset;

@interface MMAssetForPHAssetFramework
{
    _Bool _isSpatialMedia;
    _Bool _hasCheckSpatialMedia;
    int m_displayRequestId;
    int m_videoRequestId;
    int m_bigImageRequestId;
    int _m_localVideoRequestId;
    EditImageAttr *m_editImageAttr;
    EditImageLogicController *m_editImageLogicController;
    NSURL *_videoAssetURL;
    PHAsset *_m_asset;
    AVAsset *_avAsset;
    AVAssetExportSession *_exportSession;
    EditVideoAttr *_editVideoAttr;
    NSNumber *_originalVideoFileSize;
    NSString *_urlString;
}

+ (id)genSquareThumbnailImage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(nonatomic) _Bool hasCheckSpatialMedia; // @synthesize hasCheckSpatialMedia=_hasCheckSpatialMedia;
@property(nonatomic) _Bool isSpatialMedia; // @synthesize isSpatialMedia=_isSpatialMedia;
@property(retain, nonatomic) NSNumber *originalVideoFileSize; // @synthesize originalVideoFileSize=_originalVideoFileSize;
@property(retain, nonatomic) EditVideoAttr *editVideoAttr; // @synthesize editVideoAttr=_editVideoAttr;
@property(retain, nonatomic) AVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
@property(retain, nonatomic) AVAsset *avAsset; // @synthesize avAsset=_avAsset;
@property(nonatomic) int m_localVideoRequestId; // @synthesize m_localVideoRequestId=_m_localVideoRequestId;
@property(retain, nonatomic) PHAsset *m_asset; // @synthesize m_asset=_m_asset;
@property(retain, nonatomic) NSURL *videoAssetURL; // @synthesize videoAssetURL=_videoAssetURL;
@property(nonatomic) __weak EditImageLogicController *m_editImageLogicController; // @synthesize m_editImageLogicController;
@property(retain, nonatomic) EditImageAttr *m_editImageAttr; // @synthesize m_editImageAttr;
@property(nonatomic) int m_bigImageRequestId; // @synthesize m_bigImageRequestId;
@property(nonatomic) int m_videoRequestId; // @synthesize m_videoRequestId;
@property(nonatomic) int m_displayRequestId; // @synthesize m_displayRequestId;
- (id)getOriginalAssetLocalIdentifier;
- (id)getEditVideoAttr;
- (id)getEditImageAttr;
- (_Bool)getIsEdited;
- (id)getDrawLayerArray;
- (void)asyncGetIsSpatial:(CDUnknownBlockType)arg1;
- (int)requestImageWithMgr:(id)arg1 targetSize:(struct CGSize)arg2 options:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (id)checkConvertRawImageData:(id)arg1;
- (int)requestImageDataWithMgr:(id)arg1 convertRawData:(_Bool)arg2 options:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (int)requestImageDataWithMgr:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)timerSourceWithTimeOutBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)requestAssetProgressHandler;
- (void)asyncGetMetadata:(CDUnknownBlockType)arg1;
- (struct CGSize)getImageRatioSize;
- (id)getImageManager;
- (id)getCreatedDate;
- (void)stopVideoRequest;
- (void)stopBigImageRequest;
- (void)stopDisplayRequest;
- (void)stopGetBigImageICloudActivity;
- (void)stopICloudActivity;
- (void)asyncExportVideoAsset:(id)arg1 toPath:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)asyncGetVideoAsset:(_Bool)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)asyncGetVideoAsset:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)asyncGetVideoAssetWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)asyncGetLivePhotoVideoWithSuccess:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)getVideoUrl;
- (void)asyncGetLocalVideoWithBlock:(CDUnknownBlockType)arg1;
- (void)getVideoDurationForDisplayWithCompletion:(CDUnknownBlockType)arg1;
- (void)asyncGetVideoFileSizeWithBlock:(CDUnknownBlockType)arg1;
- (id)videoDuration;
- (_Bool)isTimeLapseVideo;
- (_Bool)isSlowMotionVideo;
- (unsigned long long)originVideoSize;
- (_Bool)isVideo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)fetchLivePhotoInfoWithResultBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)asyncGetImageExifLogInfo:(CDUnknownBlockType)arg1;
- (void)asyncImageOriginSourceData:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)asyncGetOriginImageDataSizeWithBlock:(CDUnknownBlockType)arg1;
- (id)getOriginImageDataSize;
- (void)checkAndCallError:(CDUnknownBlockType)arg1 errorInfo:(id)arg2;
- (id)fetchErrorFromErrorInfo:(id)arg1;
- (_Bool)isiCloudError:(id)arg1;
- (id)uniformTypeIdentifier;
- (_Bool)isLivePhoto;
- (_Bool)isAVIF;
- (_Bool)isGif;
- (_Bool)isPicture;
- (double)longitude;
- (double)latitude;
- (_Bool)hasLocation;
- (id)alAssetReferenceUrl;
- (id)assetFileName;
- (id)assetId;
- (id)assetUrl;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize)arg1 andResult:(CDUnknownBlockType)arg2;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1 progress:(CDUnknownBlockType)arg2;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (id)tipForLoadingUncomplete;
- (id)getThumbnail;
- (id)getThumbImageWithSize:(struct CGSize)arg1;
- (id)getThumbImage;
- (unsigned long long)getImageFaceCount:(id)arg1;
- (void)getHighResolutionImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4 FaceCountBlock:(CDUnknownBlockType)arg5;
- (_Bool)canUseLivePhoto;
- (void)getDisplayLivePhotoWithResultBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)getDisplayImageWithCompressConfig:(id)arg1 ResultBlock:(CDUnknownBlockType)arg2 ErrorBlock:(CDUnknownBlockType)arg3;
- (void)getBigImageByImageDataWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4 progressHandler:(CDUnknownBlockType)arg5 resultImageSize:(struct CGSize)arg6;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4;
- (struct CGSize)retriveOriginImageSize;
- (_Bool)isPHAssetReachable;
- (id)initWithUrl:(id)arg1 IsNeedOrigin:(_Bool)arg2;
- (id)initWithPHAsset:(id)arg1 IsNeedOrigin:(_Bool)arg2;

@end

