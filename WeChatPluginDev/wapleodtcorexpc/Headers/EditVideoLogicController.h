//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSLock, NSMutableDictionary;

@interface EditVideoLogicController
{
    NSMutableDictionary *_dicEditAsset;
    NSLock *_lock;
}

+ (void)adjustDebugParams:(id)arg1 forScene:(unsigned long long)arg2;
+ (void)adjustAnimationToolIfNeeded:(id)arg1 attr:(id)arg2 videoSize:(struct CGSize)arg3;
+ (id)_realStartMAVVideoCompositionWithAsset:(id)arg1 inputPath:(id)arg2 attr:(id)arg3 exportPath:(id)arg4 originalVideoPaths:(id)arg5 mmAssets:(id)arg6 videoEncodeTaskParams:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
+ (id)startMAVVideoCompositionWithMMAsset:(id)arg1 avAsset:(id)arg2 avAssetUrl:(id)arg3 attr:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (unsigned long long)composeSceneFromSightPickerScene:(unsigned long long)arg1;
+ (void)reportVideoCompressionInfoWithOutputPath:(id)arg1 inputPath:(id)arg2 compressionTime:(double)arg3 params:(id)arg4 entranceType:(unsigned long long)arg5 videoScoreParams:(id)arg6 resultError:(id)arg7 scene:(unsigned long long)arg8 reportInfo:(id)arg9;
+ (void)reportVideoCompressionFailedInfoWithOutputPath:(id)arg1 inputPath:(id)arg2 entranceType:(unsigned long long)arg3 resultError:(id)arg4 reportInfo:(id)arg5;
+ (void)reportVideoCompressionResult:(_Bool)arg1 scene:(unsigned long long)arg2;
+ (id)compressInformationsOfVideoWithParams:(id)arg1;
+ (void)configureMMAssetExportSession:(id)arg1 forEncodeScene:(unsigned long long)arg2;
+ (_Bool)canSkipCompressForEncodeScene:(unsigned long long)arg1;
+ (id)adaptiveBitrateAdjustment:(id)arg1 urls:(id)arg2 attr:(id)arg3 scene:(unsigned long long)arg4 isEdited:(_Bool)arg5 enableABA:(_Bool)arg6 videoEncodeParams:(id)arg7;
+ (id)adaptiveBitrateAdjustment:(id)arg1 assets:(id)arg2 attr:(id)arg3 scene:(unsigned long long)arg4 videoEncodeParams:(id)arg5 isEdited:(_Bool)arg6 enableABA:(_Bool)arg7;
+ (void)adjustAudioBitrate:(id)arg1 params:(id)arg2;
+ (struct CGSize)adjustRenderSize:(struct CGSize)arg1;
+ (struct CGRect)previewFrameWithVideoSize:(id)arg1;
+ (id)genAdjustVideoCompositionWithAsset:(id)arg1 attr:(id)arg2 param:(id)arg3;
+ (void)__NewVideoCompositionWithAsset:(id)arg1 inputPath:(id)arg2 withAttr:(id)arg3 withExportPath:(id)arg4 originalVideoPaths:(id)arg5 mmAssets:(id)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;
+ (void)checkUseSWTranscoding:(unsigned long long)arg1 avAsset:(id)arg2 withAttr:(id)arg3 pathNum:(unsigned long long)arg4 assetsNum:(unsigned long long)arg5 isVCEdit:(_Bool)arg6 VideoEncodeParams:(id)arg7 isUsingMAV:(_Bool)arg8;
+ (void)__NewVideoBGMCompositionWithAsset:(id)arg1 inputPath:(id)arg2 withAttr:(id)arg3 withExportPath:(id)arg4 originalVideoPaths:(id)arg5 mmAssets:(id)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;
+ (void)NewVideoCompostionWithAvAsset:(id)arg1 inputUrl:(id)arg2 path:(id)arg3 andThumbImage:(id)arg4 withAttr:(id)arg5 originalVideoPaths:(id)arg6 mmAssets:(id)arg7 withCompletionHandler:(CDUnknownBlockType)arg8;
+ (void)finderNewVideoCompostionWithAvAsset:(id)arg1 inputUrl:(id)arg2 path:(id)arg3 andThumbImage:(id)arg4 withAttr:(id)arg5 originalVideoPaths:(id)arg6 mmAssets:(id)arg7 withCompletionHandler:(CDUnknownBlockType)arg8;
+ (void)NewVideoComposition:(id)arg1 withAttr:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)getParamsForEntranceType:(unsigned long long)arg1 withAsset:(id)arg2 naturalSize:(struct CGSize)arg3 extraInfo:(id)arg4;
+ (struct CGAffineTransform)getTransformFromAsset:(id)arg1;
+ (void)__imageCompositionWithAsset:(id)arg1 toFilePath:(id)arg2 defaultImg:(id)arg3 overlayImage:(id)arg4 cropTimeRange:(CDStruct_e83c9415)arg5;
+ (void)__imageCompositionWithAsset:(id)arg1 withDefaultImg:(id)arg2 withAttr:(id)arg3 toFilePath:(id)arg4;
+ (void)saveEditedThumbImageWithAsset:(id)arg1 requestUneditedAsset:(_Bool)arg2 editAttr:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (void)videoCompositionAtPath:(id)arg1 andThumbImage:(id)arg2 withAttr:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (struct CGSize)adjustSizeToEvenSize:(struct CGSize)arg1;
+ (long long)adjustLenToEven:(double)arg1;
+ (id)finderVideoCompositionWithVideoComposition:(id)arg1 originVideoPaths:(id)arg2 attr:(id)arg3 emotionOffset:(struct CGPoint)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)finderVideoCompositionWithAVAsset:(id)arg1 paths:(id)arg2 assets:(id)arg3 attr:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)videoComposition:(id)arg1 withAttr:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)getEditVideoAttr:(id)arg1;
- (void)removeEditedAsset:(id)arg1;
- (id)modifyAsset:(id)arg1 withEditVideoAttr:(id)arg2;
- (id)modifyAsset:(id)arg1 withEditImageAttr:(id)arg2 withEditedTimeRange:(CDStruct_e83c9415)arg3;
- (id)init;

@end

