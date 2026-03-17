//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJPublisherReporter : NSObject
{
}

+ (void)reportPublisherExitWithReason:(id)arg1 publisherSessionMetrics:(id)arg2 publisherContext:(id)arg3;
+ (void)reportPublisherEnterWithMetrics:(id)arg1 publisherContext:(id)arg2;
+ (void)reportMovieComposingExportFailedWithVM:(id)arg1 error:(id)arg2;
+ (void)reportMovieComposingExportAndPublishWithVM:(id)arg1;
+ (void)reportShootComposingAssetGenerateExportFailedWithVM:(id)arg1 error:(id)arg2;
+ (void)reportShootComposingAssetGenerateClipWithVM:(id)arg1 resultMediaFilePath:(id)arg2;
+ (void)reportShootComposingAssetGenerateCompleteWithVM:(id)arg1 resultMediaFilePath:(id)arg2;
+ (void)reportShootComposingStartAssetGenerateWithVM:(id)arg1 assetCount:(long long)arg2 imageCount:(long long)arg3 videoCount:(long long)arg4;
+ (void)reportShootComposingEndRecordWithVM:(id)arg1 resultMediaFilePath:(id)arg2 reachDurationLimit:(_Bool)arg3;
+ (void)reportShootComposingStartRecordWithVM:(id)arg1;
+ (void)reportShootComposingTouchFavoriteButtonWithVM:(id)arg1 templateItem:(id)arg2 isFavorite:(_Bool)arg3;
+ (void)reportShootComposingEndPreviewWithVM:(id)arg1;
+ (void)reportShootComposingStartPreviewWithVM:(id)arg1 templateItem:(id)arg2 templateTabID:(id)arg3 templateIndex:(long long)arg4 isTemplateSelectDefault:(_Bool)arg5 isMicrophoneOpened:(_Bool)arg6 isDuetShoot:(_Bool)arg7;
+ (void)reportShootComposingStartPreviewWithVM:(id)arg1 userSelectedTemplateItemReportModel:(id)arg2 isMicrophoneOpened:(_Bool)arg3 isDuetShoot:(_Bool)arg4;
+ (void)reportTemplateCreatingStartWithMJPublisher:(id)arg1 assetInfos:(id)arg2;
+ (void)reportShootComposingEnterAlbumForShootWithVM:(id)arg1;
+ (void)reportShootComposingEnterAlbumForMovieWithVM:(id)arg1;
+ (void)reportShootComposingEnterTemplateTabPanelWithVM:(id)arg1 templateTabID:(unsigned long long)arg2;
+ (void)reportShootComposingEnterTemplatePanelShowingModeWithVM:(id)arg1;
+ (void)reportShootComposingClickReplayWithVM:(id)arg1;
+ (void)reportMovieComposingTouchFeedbackButtonWithVM:(id)arg1;
+ (void)reportMovieComposingTouchSkipMovieTilteInputGuideButtonWithVM:(id)arg1;
+ (void)reportMovieComposingShowKeyboardForMovieTitleWithVM:(id)arg1;
+ (void)reportMovieComposingLeakedWithName:(id)arg1;
+ (void)reportPreloadCameraTemplateResourceWithTemplateInfo:(id)arg1 isHighPriority:(_Bool)arg2;
+ (void)reportAIGCRequestSucceedWithVM:(id)arg1 timeCost:(unsigned long long)arg2;
+ (void)reportAIGCRequestFailedWithVM:(id)arg1 timeCost:(unsigned long long)arg2 error:(id)arg3;
+ (void)reportAIGCRequestStartWithVM:(id)arg1;
+ (void)reportASREventWithParams:(id)arg1;
+ (void)reportDraftEventWithParams:(id)arg1;
+ (void)reportAssetsOriginFormatWithOriginAssets:(id)arg1;
+ (void)reportExportTooLong:(CDStruct_1b6d18a9)arg1;
+ (void)reportTimelineHasMutated:(_Bool)arg1;
+ (void)reportExportEventWithExportScene:(id)arg1 encodeParams:(id)arg2 otherParams:(id)arg3;
+ (void)reportExportEventWithExportScene:(id)arg1 encodeParams:(id)arg2;
+ (id)generateReportParamsFromVideoEncodeParams:(id)arg1;
+ (void)reportTrySkipTranscodeEventWithAVAssest:(id)arg1 result:(id)arg2;

@end

