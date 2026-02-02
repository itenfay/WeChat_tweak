//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJMovieComposingMediator : NSObject
{
}

+ (id)requestVoiceToAllTTSAdjustableSegmentsWithRoleID:(id)arg1 roleName:(id)arg2 originRoleID:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)postProcessTTSForSegmentVM:(id)arg1 shouldTakeSnapshot:(_Bool)arg2 shouldAutoPlay:(_Bool)arg3;
+ (void)postProcessTTSForTTSRequestItems:(id)arg1 shouldTakeSnapshot:(_Bool)arg2 shouldAutoPlay:(_Bool)arg3;
+ (void)requestTTSForSegmentVM:(id)arg1 takeSnapshot:(_Bool)arg2 autoPlay:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)updateAllNarrationSegmentsVocalAdjustmentIfNeeded;
+ (void)applyVoiceToAllNarrationSegmentsWithRoleID:(id)arg1 roleName:(id)arg2 originRoleID:(id)arg3;
+ (long long)_stsRequestCount;
+ (void)postProcessChangeVoiceForNarrationSegmentVM:(id)arg1 shouldTakeSnapshot:(_Bool)arg2 shouldAutoPlay:(_Bool)arg3;
+ (id)audioFileManager;
+ (id)speechManager;
+ (id)publisherSessionMetrics;
+ (void)applyAdjustmentValuesToAllSegmentsConformsToProtocols:(id)arg1 referenceToObject:(id)arg2 strictTypeCheck:(_Bool)arg3;
+ (void)redoWithCompletion:(CDUnknownBlockType)arg1;
+ (void)undoWithCompletion:(CDUnknownBlockType)arg1;
+ (void)takeTimelineSnapshotWithTitle:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 valueFormatter:(id)arg4;
+ (void)takeTimelineSnapshotWithTitle:(id)arg1;
+ (double)currentTimeScaleInPoints;
+ (id)anchorFancyTextSegmentWithMaterialID:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 shouldAutoFocus:(_Bool)arg4 targetEditingState:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)anchorContentDescSegmentWithMaterialID:(id)arg1 belongingSegmentID:(id)arg2 shouldAutoFocus:(_Bool)arg3 targetEditingState:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)anchorMovieTitleSegmentWithMaterialID:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 shouldAutoFocus:(_Bool)arg4 targetEditingState:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)anchorNarrationSegmentWithFilePath:(id)arg1 audioFileID:(id)arg2 captionTexts:(id)arg3 atTime:(CDStruct_1b6d18a9)arg4 narrationType:(unsigned long long)arg5 shouldTakeSnapshot:(_Bool)arg6 shouldAutoFocus:(_Bool)arg7 targetEditingState:(unsigned long long)arg8 recognitionState:(unsigned long long)arg9 completion:(CDUnknownBlockType)arg10;
+ (void)anchorMusicSegmentWithMusicInfo:(id)arg1 musicFilePath:(id)arg2 isLyricEnabled:(_Bool)arg3 atTime:(CDStruct_1b6d18a9)arg4 shouldTakeSnapshot:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)timelineViewConfiguration;
+ (long long)movieTitleWordCountLimit;
+ (long long)movieTitleSuggestionMinWordCount;
+ (_Bool)isMovieTitleSuggestionEnabled;
+ (void)updateTTSVoiceSyncWithSegmentVM:(id)arg1;
+ (_Bool)isTTSVoiceSynced;
+ (void)updateNarrationVoiceSyncWithSegmentVM:(id)arg1;
+ (_Bool)isNarrationVoiceSynced;
+ (_Bool)isNarrationCaptionStyleSynced;
+ (_Bool)isOSTCaptionStyleSynced;
+ (_Bool)isContentDescStyleSynced;
+ (_Bool)canSetAllStorySegmentsDurationToOrigin;
+ (_Bool)canSetAllStorySegmentsDurationTo:(CDStruct_1b6d18a9)arg1;
+ (void)splitSegmentWithID:(id)arg1 shouldTakeSnapshot:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)updateStartTimeKeepingDurationForSegmentVM:(id)arg1 startTime:(CDStruct_1b6d18a9)arg2 shouldTakeSnapshot:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)takeTimelineSnapshotForSegmentRemovalWithType:(unsigned long long)arg1;
+ (unsigned long long)targetEditingStateAfterSegmentRemoval:(id)arg1;
+ (_Bool)canAutoFocusAfterSegmentRemoval:(id)arg1;
+ (void)removeSegmentsWithIDs:(id)arg1 shouldTakeSnapshot:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)removeSegmentWithID:(id)arg1 shouldTakeSnapshot:(_Bool)arg2 shouldAutoFocus:(_Bool)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)removeSegmentWithID:(id)arg1 shouldTakeSnapshot:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)retriveTimelineMutationInfoWithOptions:(unsigned long long)arg1;
+ (void)dismissProgressToast;
+ (void)showInfiniteProgressToast;
+ (void)removeHandleBox;
+ (void)showHandleBoxWithSegmentVM:(id)arg1 options:(unsigned long long)arg2;
+ (void)adjustClipSkimmingToRefreshVideoFrame;
+ (void)endClipSkimming;
+ (void)beginClipSkimmingWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)stopPlayingAndSkimToSegmentHeadTime:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)stopPlayingAndSkimToSegmentHeadTime:(id)arg1;
+ (void)commitTimelineUpdateWithPreviewTime:(CDStruct_1b6d18a9)arg1 shouldForceUpdatePreview:(_Bool)arg2 isFullUpdate:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)commitTimelineUpdateWithPreviewTime:(CDStruct_1b6d18a9)arg1;
+ (void)commitTimelineUpdateUsingLastVideoFrameTime;
+ (void)commitTimelineUpdateUsingPlayheadTime;
+ (void)commitTimelineUpdate;
+ (void)exitTrimPrepareIfNeeded;
+ (void)registerMovieComposingVC:(id)arg1;

@end

