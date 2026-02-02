//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface EditVideoUtil
{
}

+ (void)resetLyricsLayersTimeOffset:(id)arg1;
+ (void)resetLyricsLayerTimeOffsetRecursive:(id)arg1;
+ (void)recordObject:(id)arg1 timeOffset:(double)arg2;
+ (_Bool)MAV_canSoftEncodeOverlayLayerBGMAsset;
+ (_Bool)MAV_forceCreateAnimationToolForHDRAsset;
+ (_Bool)isMusicRecommendUsingMass;
+ (_Bool)isVideoAssetFileValid:(id)arg1;
+ (_Bool)isMavEncodeTaskAutoRetryEnabled;
+ (_Bool)isMavEncodeTaskKeepsProcessInBackgroundEnabled;
+ (_Bool)isBackgroundTaskEnabled;
+ (id)genAnimationToolWithOverlayLayer:(id)arg1 videoSize:(struct CGSize)arg2 isProportionalScale:(_Bool)arg3;
+ (id)genAnimationToolWithAttr:(id)arg1 videoSize:(struct CGSize)arg2 isForceCreate:(_Bool)arg3;
+ (id)genVideoCompositionOutputConfigWithVideoEncodeParams:(id)arg1 videoCompositionAttr:(id)arg2 videoComposition:(id)arg3 VideoEncodeTaskParams:(id)arg4;
+ (_Bool)isSearchMusicAfterInputEnabled;
+ (id)genVideoCompositionWithVideoPath:(id)arg1 avAsset:(id)arg2 attr:(id)arg3;
+ (id)genVideoCompositionWithVideoPath:(id)arg1 avAsset:(id)arg2 attr:(id)arg3 targetSize:(struct CGSize)arg4;
+ (void)saveEditedVideoByFilePath:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2;
+ (void)saveEditedVideoByFilePath:(id)arg1;
+ (_Bool)isNeedSaveEditedVideo;
+ (id)getEditVideoThumbFilePathByUrl:(id)arg1;
+ (id)getEditVideoFilePathByUrl:(id)arg1;
+ (id)getAssetTmpDirByUrl:(id)arg1;
+ (id)getEditVideoTmpDir;
+ (id)infomationStrWithParamsResult:(id)arg1;
+ (void)asyncGetInformationStrOfVideoWithAsset:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)asyncGetInformationOfVideoWithAsset:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)asyncGetInformationOfVideoWithPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

