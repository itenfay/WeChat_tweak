//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, MAVVideoComposition, NSArray, VideoEncodeTask;

@interface WCFinderPreviewEditVideoCompositionTask
{
    _Bool _shouldUseMAVCompositionLib;
    _Bool _isPreCompressUpload;
    CDUnknownBlockType _doneBlock;
    CDUnknownBlockType _videoProgressCallback;
    MAVVideoComposition *_mavLibComposition;
    NSArray *_mavLibOriginalVideoPathList;
    NSArray *_selectedPreviewAssetInfoList;
    AVAsset *_compositedPreviewVideoAsset;
    VideoEncodeTask *_encodeTask;
    unsigned long long _preCompressCount;
    unsigned long long _enterScene;
    struct CGSize _previewThumbSize;
    struct CGPoint _mavLibEmotionOffset;
}

+ (id)generateFinderConstrainFromMergedImageFromImageList:(id)arg1 forSize:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) unsigned long long preCompressCount; // @synthesize preCompressCount=_preCompressCount;
@property(nonatomic) _Bool isPreCompressUpload; // @synthesize isPreCompressUpload=_isPreCompressUpload;
@property(retain, nonatomic) VideoEncodeTask *encodeTask; // @synthesize encodeTask=_encodeTask;
@property(retain, nonatomic) AVAsset *compositedPreviewVideoAsset; // @synthesize compositedPreviewVideoAsset=_compositedPreviewVideoAsset;
@property(copy, nonatomic) NSArray *selectedPreviewAssetInfoList; // @synthesize selectedPreviewAssetInfoList=_selectedPreviewAssetInfoList;
@property(nonatomic) struct CGPoint mavLibEmotionOffset; // @synthesize mavLibEmotionOffset=_mavLibEmotionOffset;
@property(copy, nonatomic) NSArray *mavLibOriginalVideoPathList; // @synthesize mavLibOriginalVideoPathList=_mavLibOriginalVideoPathList;
@property(retain, nonatomic) MAVVideoComposition *mavLibComposition; // @synthesize mavLibComposition=_mavLibComposition;
@property(nonatomic) _Bool shouldUseMAVCompositionLib; // @synthesize shouldUseMAVCompositionLib=_shouldUseMAVCompositionLib;
@property(nonatomic) struct CGSize previewThumbSize; // @synthesize previewThumbSize=_previewThumbSize;
@property(copy, nonatomic) CDUnknownBlockType videoProgressCallback; // @synthesize videoProgressCallback=_videoProgressCallback;
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
- (id)generatePreviewImage;
- (void)reportCompositionFailed;
- (id)getThumbImageForEditVideoFromPath:(id)arg1;
- (void)onTaskDetached;
- (void)onTaskInterrupted;
- (void)onTaskStoppedWithResult:(id)arg1 session:(id)arg2;
- (void)onTaskStarted;
- (void)onTaskReady;
- (void)onTaskPending;
- (_Bool)isValid;
- (long long)taskType;
- (id)taskId;
- (void)_prepareEditAttrWithResultBlock:(CDUnknownBlockType)arg1;
- (struct CGSize)_getEditedAssetSize;
- (id)generatePreviewImageAtStartTime:(double)arg1;
- (_Bool)removeLocalCache;
- (void)prepareTaskWithBlock:(CDUnknownBlockType)arg1;
- (id)getPreparedAssetFileURL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)yy_modelDeepCopyWithConfigTag:(id)arg1;
- (id)initWithTaskId:(id)arg1 srcPHAsset:(id)arg2 editVideoAttr:(id)arg3 compositionAttr:(id)arg4 previewThumbImageSize:(struct CGSize)arg5;

@end

