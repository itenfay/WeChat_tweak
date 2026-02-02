//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJPublisherUtilities : NSObject
{
}

+ (id)bestFrameRateForAssetFrameRateInfos:(id)arg1;
+ (double)fpsWithFrameRateType:(unsigned long long)arg1;
+ (unsigned long long)regulatedFrameRateType:(unsigned long long)arg1;
+ (id)nameForFrameRateType:(unsigned long long)arg1;
+ (void)dismissInspector:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)dismissInspector:(id)arg1;
+ (void)presentInspector:(id)arg1 onViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (struct CGSize)sizeWithDimensionLevel:(unsigned long long)arg1 aspectRatio:(double)arg2;
+ (struct CGSize)regulateCustomizedAspectRatioWithPixelSize:(struct CGSize)arg1;
+ (id)bestAspectRatioForMJAssetInfo:(id)arg1;
+ (id)bestAspectRatioForMJAssetInfos:(id)arg1;
+ (id)calcBestAspectRatioImplForAssetInfos:(id)arg1;
+ (id)bestAspectRatioForAssets:(id)arg1;
+ (id)calcBestAspectRatioImplForAssets:(id)arg1;
+ (id)maxAspectRatio;
+ (id)minAspectRatio;
+ (id)parseFormattedAspectRatio:(id)arg1;
+ (id)nameForAspectRatio:(unsigned long long)arg1;
+ (unsigned long long)regulateAspectRatio:(unsigned long long)arg1;
+ (CDStruct_1b6d18a9)timeWithProgress:(double)arg1 inRange:(CDStruct_e83c9415)arg2;
+ (void)asyncExportUsingMaasCompositionWithEnterScene:(unsigned long long)arg1 srcPHAsset:(id)arg2 duration:(CDStruct_1b6d18a9)arg3 previewThumbImageSize:(struct CGSize)arg4 exportInfo:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)asyncExportOriginAssestUsingFinderComposition:(id)arg1 enterScene:(unsigned long long)arg2 duration:(CDStruct_1b6d18a9)arg3 previewThumbImageSize:(struct CGSize)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)cancelSyncExportWithTask:(id)arg1;
+ (void)syncExportOriginAssestUsingFinderComposition:(id)arg1 duration:(CDStruct_1b6d18a9)arg2 outputFilePath:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 taskHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)loadAsset:(id)arg1 fallbackDuration:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (_Bool)isAssetSatisfiedDirectPublishCondition:(id)arg1;
+ (id)abaParamsWithURL:(id)arg1 videoEncodeParams:(id)arg2 isEdited:(_Bool)arg3 hasStickers:(_Bool)arg4 forceHWTranscoding:(_Bool)arg5;
+ (void)fetchABAParamsWithTimelineVM:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)fetchABAParamsWithURL:(id)arg1 videoEncodeParams:(id)arg2 isEdited:(_Bool)arg3 hasStickers:(_Bool)arg4 forceHWTranscoding:(_Bool)arg5 workingQueue:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (id)videoEncodeParamsWithAsset:(id)arg1 videoSize:(struct CGSize)arg2;
+ (id)abaParamsWithURLAsset:(id)arg1 isEdited:(_Bool)arg2 hasStickers:(_Bool)arg3 forceHWTranscoding:(_Bool)arg4;
+ (void)fetchABAParamsWithAssest:(id)arg1 isEdited:(_Bool)arg2 hasStickers:(_Bool)arg3 forceHWTranscoding:(_Bool)arg4 workingQueue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)fetchABAParamsWithAssest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)videoEncodeParamsDescription:(id)arg1;
+ (id)defaultVideoEncodeParams;
+ (void)adjustMovieTitleDurationIfNeededWithSegmentVM:(id)arg1;
+ (double)movieTitleDefaultDurationSecondsWithStyleID:(id)arg1 animPresetID:(id)arg2;
+ (_Bool)isMovieTitleDurationAdjustedByUserWithSegmentVM:(id)arg1;
+ (void)markMovieTitleDurationAdjustedByUserWithSegmentVM:(id)arg1;
+ (_Bool)hasAnimationWithMovieTitleStyleID:(id)arg1 animPresetID:(id)arg2;
+ (_Bool)hasCompoAnimWithAnimPresetID:(id)arg1;
+ (_Bool)hasBuiltinAnimWithMovieTitleStyleID:(id)arg1;
+ (void)loadLatestMovieComposingDraftWithEntryScene:(long long)arg1 draftManager:(id)arg2 publisherSessionMetrics:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (void)_asyncRegisterDefaultMaterialsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)_registerDefaultMaterials;
+ (_Bool)_shouldAutoDownloadMusicWithAssetInfos:(id)arg1;
+ (void)_applyOriginContentScaleModesForTimeline:(id)arg1;
+ (void)_adjustImageDurationIfNeeded:(id)arg1;
+ (void)_prepareMovieComposingWithMJAssetInfos:(id)arg1 publisher:(id)arg2 musicInfo:(id)arg3 musicFilePath:(id)arg4 configuration:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)_prepareMovieComposingForJustPicturesWithMJAssetInfos:(id)arg1 publisher:(id)arg2 configuration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)prepareMovieComposingWithFilePaths:(id)arg1 mediaType:(long long)arg2 publisher:(id)arg3 configuration:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)prepareMovieComposingWithMJAssetInfo:(id)arg1 draftManager:(id)arg2 assetsClassifyHelper:(id)arg3 configuration:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)_prepareMovieComposingWithWithPHAssets:(id)arg1 mmAssets:(id)arg2 publisher:(id)arg3 musicInfo:(id)arg4 musicFilePath:(id)arg5 configuration:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)copyMusicFileWithMusicID:(id)arg1 fromFilePath:(id)arg2 toFilePath:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)genMusicFilePathWithMusicID:(id)arg1 musicFilePath:(id)arg2;
+ (void)prepareMovieComposingWithAssetInfos:(id)arg1 publisher:(id)arg2 musicInfo:(id)arg3 musicFilePath:(id)arg4 configuration:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)prepareMovieComposingWithAssetInfos:(id)arg1 publisher:(id)arg2 followMusicIDs:(id)arg3 configuration:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)_prepareMovieComposingForJustPicturesWithAssetInfos:(id)arg1 publisher:(id)arg2 configuration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)prepareMovieComposingWithAssetInfos:(id)arg1 publisher:(id)arg2 configuration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)prepareMovieComposingSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)prepareMaasCoreWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)captionFilePathWithAudioID:(id)arg1;
+ (id)captionDirectory;

@end

