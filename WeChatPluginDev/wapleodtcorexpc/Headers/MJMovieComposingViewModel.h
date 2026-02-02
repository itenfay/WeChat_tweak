//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderMusicReportInfo, MJAssetAnalysisReportInfo, MJAudioFileManager, MJLocationItem, MJMovieComposingAssetsClassifyHelper, MJMovieComposingConfiguration, MJMovieComposingDraft, MJMovieComposingDraftManager, MJMovieTemplateInfo, MJPlaybackViewModel, MJPublisherContext, MJSpeechManager, MJTimelineViewModel, MJVocalAdjustmentCache, MJVoiceInputManager, MMBGMSelectedMusicResult, NSArray, NSData, NSMapTable, NSMutableDictionary, NSNumber, NSString, OMCComposingSession, OMCExportSession, OMJAspectRatio, OMJAssetInfo, OMJMusicInfo, OMJPublisherSessionMetrics, UBBooleanSignal, VideoEncodeTask;

@interface MJMovieComposingViewModel : NSObject
{
    _Bool _isFromShootRecordInterrupted;
    _Bool _hasShownVoiceInspectorInTextInputNarration;
    _Bool _isFromDraft;
    _Bool _isMovieTitleSuggestionEnabled;
    _Bool _isPendingCancelExporting;
    _Bool _shouldSaveDraft;
    int _totalExportFrameCount;
    OMCComposingSession *_composingSession;
    MJTimelineViewModel *_timelineViewModel;
    MJPlaybackViewModel *_playbackViewModel;
    MJMovieComposingConfiguration *_configuration;
    NSNumber *_shootCoverImageStartTime;
    MJMovieComposingDraft *_composingDraft;
    MJMovieComposingDraftManager *_draftManager;
    MJAudioFileManager *_audioFileManager;
    MJVoiceInputManager *_voiceInputManager;
    MJSpeechManager *_speechManager;
    MJVocalAdjustmentCache *_vocalAdjustmentCache;
    OMJPublisherSessionMetrics *_publisherSessionMetrics;
    MJPublisherContext *_publisherContext;
    MMBGMSelectedMusicResult *_appliedMusicInfo;
    MJAssetAnalysisReportInfo *_realShotReportInfo;
    FinderMusicReportInfo *_shootMusicReportInfo;
    FinderMusicReportInfo *_editMusicReportInfo;
    OMJAssetInfo *_originAssetInfo;
    NSArray *_originAssetInfos;
    NSArray *_originAssets;
    NSMutableDictionary *_userAssetsByID;
    OMJAspectRatio *_originAspectRatio;
    MJMovieComposingAssetsClassifyHelper *_assetClassifyHelper;
    NSData *_assetClassifyResult;
    OMJMusicInfo *_followMusicInfo;
    MJMovieTemplateInfo *_movieTemplateInfo;
    UBBooleanSignal *_isManuallyCancelExportSupported;
    long long _movieTitleSuggestionMinWordCount;
    long long _movieTitleWordCountLimit;
    OMCExportSession *_exportSession;
    NSMapTable *_locationsBySegmentID;
    MJLocationItem *_userLocationItem;
    NSMapTable *_initialScaleFactorsBySegmentID;
    unsigned long long _startExportingTimestamp;
    VideoEncodeTask *_exportingTask;
}

+ (_Bool)_calcDiskSpaceAbleToSupportBackingExportWithVideoExportSize:(unsigned long long)arg1;
+ (unsigned long long)_calcEstimatedVideoSizeWithDuration:(double)arg1 exportSettings:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldSaveDraft; // @synthesize shouldSaveDraft=_shouldSaveDraft;
@property(nonatomic) __weak VideoEncodeTask *exportingTask; // @synthesize exportingTask=_exportingTask;
@property(nonatomic) unsigned long long startExportingTimestamp; // @synthesize startExportingTimestamp=_startExportingTimestamp;
@property _Bool isPendingCancelExporting; // @synthesize isPendingCancelExporting=_isPendingCancelExporting;
@property(retain, nonatomic) NSMapTable *initialScaleFactorsBySegmentID; // @synthesize initialScaleFactorsBySegmentID=_initialScaleFactorsBySegmentID;
@property(retain, nonatomic) MJLocationItem *userLocationItem; // @synthesize userLocationItem=_userLocationItem;
@property(retain, nonatomic) NSMapTable *locationsBySegmentID; // @synthesize locationsBySegmentID=_locationsBySegmentID;
@property(nonatomic) int totalExportFrameCount; // @synthesize totalExportFrameCount=_totalExportFrameCount;
@property(readonly, nonatomic) OMCExportSession *exportSession; // @synthesize exportSession=_exportSession;
@property(readonly, nonatomic) long long movieTitleWordCountLimit; // @synthesize movieTitleWordCountLimit=_movieTitleWordCountLimit;
@property(readonly, nonatomic) long long movieTitleSuggestionMinWordCount; // @synthesize movieTitleSuggestionMinWordCount=_movieTitleSuggestionMinWordCount;
@property(readonly, nonatomic) _Bool isMovieTitleSuggestionEnabled; // @synthesize isMovieTitleSuggestionEnabled=_isMovieTitleSuggestionEnabled;
@property(readonly, nonatomic) UBBooleanSignal *isManuallyCancelExportSupported; // @synthesize isManuallyCancelExportSupported=_isManuallyCancelExportSupported;
@property(retain, nonatomic) MJMovieTemplateInfo *movieTemplateInfo; // @synthesize movieTemplateInfo=_movieTemplateInfo;
@property(retain, nonatomic) OMJMusicInfo *followMusicInfo; // @synthesize followMusicInfo=_followMusicInfo;
@property(retain, nonatomic) NSData *assetClassifyResult; // @synthesize assetClassifyResult=_assetClassifyResult;
@property(retain, nonatomic) MJMovieComposingAssetsClassifyHelper *assetClassifyHelper; // @synthesize assetClassifyHelper=_assetClassifyHelper;
@property(readonly, nonatomic) OMJAspectRatio *originAspectRatio; // @synthesize originAspectRatio=_originAspectRatio;
@property(retain, nonatomic) NSMutableDictionary *userAssetsByID; // @synthesize userAssetsByID=_userAssetsByID;
@property(retain, nonatomic) NSArray *originAssets; // @synthesize originAssets=_originAssets;
@property(retain, nonatomic) NSArray *originAssetInfos; // @synthesize originAssetInfos=_originAssetInfos;
@property(retain, nonatomic) OMJAssetInfo *originAssetInfo; // @synthesize originAssetInfo=_originAssetInfo;
@property(retain, nonatomic) FinderMusicReportInfo *editMusicReportInfo; // @synthesize editMusicReportInfo=_editMusicReportInfo;
@property(retain, nonatomic) FinderMusicReportInfo *shootMusicReportInfo; // @synthesize shootMusicReportInfo=_shootMusicReportInfo;
@property(nonatomic) _Bool isFromDraft; // @synthesize isFromDraft=_isFromDraft;
@property(retain, nonatomic) MJAssetAnalysisReportInfo *realShotReportInfo; // @synthesize realShotReportInfo=_realShotReportInfo;
@property(retain, nonatomic) MMBGMSelectedMusicResult *appliedMusicInfo; // @synthesize appliedMusicInfo=_appliedMusicInfo;
@property(retain, nonatomic) MJPublisherContext *publisherContext; // @synthesize publisherContext=_publisherContext;
@property(retain, nonatomic) OMJPublisherSessionMetrics *publisherSessionMetrics; // @synthesize publisherSessionMetrics=_publisherSessionMetrics;
@property(nonatomic) _Bool hasShownVoiceInspectorInTextInputNarration; // @synthesize hasShownVoiceInspectorInTextInputNarration=_hasShownVoiceInspectorInTextInputNarration;
@property(retain, nonatomic) MJVocalAdjustmentCache *vocalAdjustmentCache; // @synthesize vocalAdjustmentCache=_vocalAdjustmentCache;
@property(retain, nonatomic) MJSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(retain, nonatomic) MJVoiceInputManager *voiceInputManager; // @synthesize voiceInputManager=_voiceInputManager;
@property(retain, nonatomic) MJAudioFileManager *audioFileManager; // @synthesize audioFileManager=_audioFileManager;
@property(readonly, nonatomic) MJMovieComposingDraftManager *draftManager; // @synthesize draftManager=_draftManager;
@property(retain, nonatomic) MJMovieComposingDraft *composingDraft; // @synthesize composingDraft=_composingDraft;
@property(nonatomic) _Bool isFromShootRecordInterrupted; // @synthesize isFromShootRecordInterrupted=_isFromShootRecordInterrupted;
@property(retain, nonatomic) NSNumber *shootCoverImageStartTime; // @synthesize shootCoverImageStartTime=_shootCoverImageStartTime;
@property(readonly, nonatomic) MJMovieComposingConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) MJPlaybackViewModel *playbackViewModel; // @synthesize playbackViewModel=_playbackViewModel;
@property(readonly, nonatomic) MJTimelineViewModel *timelineViewModel; // @synthesize timelineViewModel=_timelineViewModel;
@property(readonly, nonatomic) OMCComposingSession *composingSession; // @synthesize composingSession=_composingSession;
- (_Bool)shouldEnableMaasSDKBackExporting;
- (_Bool)calcComposingIsFromRealShootContent;
- (void)updateDraftWithNarrationType:(unsigned long long)arg1;
- (id)correctedShootCoverImageStartTime;
- (_Bool)checkIfStorylineEditedWithMediaFilePath:(id)arg1;
- (id)mediaFilePathOfStorylineFirstSegment;
- (_Bool)shouldShowSafeAreaTips;
- (void)registerInitialScaleFactor:(float)arg1 forSegmentWithID:(id)arg2;
- (float)initialScaleFactorForSegmentWithID:(id)arg1;
- (void)requestLocationItemForSegment:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)locationItemForSegment:(id)arg1;
- (_Bool)canRedo;
- (_Bool)canUndo;
- (void)takeSnapshotWithTitle:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 valueFormatter:(id)arg4;
- (void)redoWithCompletion:(CDUnknownBlockType)arg1;
- (void)undoWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldExitDirectly;
- (id)firstVideoFilePath;
- (id)_calcComposingSourceVideoPHAsset;
- (void)_doMaasSDKBackExportingIfNeededWithOutputFilePath:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_checkIfAspectRatioMutated;
- (void)_skipExportingIfNeededWithOriginAssetInfos:(id)arg1 outputFilePath:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_skipExportingIfNeededWithOriginAssets:(id)arg1 outputFilePath:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_skipExportingIfNeededWithOriginAssetInfo:(id)arg1 outputFilePath:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_skipExportingIfNeededWithOutputFilePath:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cancelExportingWithCompletion:(CDUnknownBlockType)arg1;
- (void)_doExportingWithOutputFilePath:(id)arg1 encodeParams:(id)arg2 exportSettings:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_doExportingWithOutputFilePath:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startExportingWithProgressHandler:(CDUnknownBlockType)arg1 exportCompletionHandler:(CDUnknownBlockType)arg2 asyncCompositionTaskHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool isRecording;
- (void)dealloc;
- (id)createActionPanelViewModel;
- (id)initWithComposingSession:(id)arg1 configuration:(id)arg2 composingDraft:(id)arg3 draftManager:(id)arg4;
- (id)initWithComposingSession:(id)arg1 configuration:(id)arg2 draftManager:(id)arg3 originAssets:(id)arg4;
- (id)initWithComposingSession:(id)arg1 configuration:(id)arg2 draftManager:(id)arg3 originAssetInfos:(id)arg4;
- (id)initWithComposingSession:(id)arg1 configuration:(id)arg2 draftManager:(id)arg3 originAssetInfo:(id)arg4;
- (id)initWithComposingSession:(id)arg1 configuration:(id)arg2 draftManager:(id)arg3;
- (void)removeDraftIfNeeded;
- (void)updateAndSaveDraftIfNeeded;
- (_Bool)calcShouldSaveDraft;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

