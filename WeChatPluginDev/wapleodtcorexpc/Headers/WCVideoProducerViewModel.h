//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJTemplateMovieSession, MJVideoTemplate, NSString, OMJMusicInfo, OMJTemplateInfo, UIImage, UIView, WCMomentsPostReportSession, WCVideoProducerActionRecorder, WCVideoProducerDataManager, WCVideoProducerExportSettingsLoader, WCVideoProducerFlavors, WCVideoProducerOptions;
@protocol WCVideoProducerDataProxy, WCVideoProducerViewModelDelegate;

@interface WCVideoProducerViewModel : NSObject
{
    CDUnknownBlockType _templateComparatorBlock;
    UIImage *_firstAssetThumbImage;
    _Bool _delaysCreation;
    _Bool _shouldStartCreationAfterPresented;
    _Bool _isStartAssetClipping;
    _Bool _isStopAssetClipping;
    _Bool _shouldShowNewBGMPanel;
    _Bool _canRecreateWhileLoading;
    _Bool _fetchExtRecommendMusicEnabled;
    _Bool _isStartingPlayingVideo;
    _Bool _isStoppingPlayingVideo;
    WCVideoProducerOptions *_options;
    id <WCVideoProducerDataProxy> _dataProxy;
    WCMomentsPostReportSession *_postReportSession;
    WCVideoProducerExportSettingsLoader *_exportSettingsLoader;
    NSString *_initialTemplateID;
    NSString *_initialMusicID;
    NSString *_initialFeedMusicID;
    NSString *_initialAIModelType;
    long long _delayCreationState;
    MJVideoTemplate *_changingTemplate;
    OMJMusicInfo *_changingMusic;
    OMJMusicInfo *_currentRenderingMusicInfo;
    OMJTemplateInfo *_currentRenderingTemplateInfo;
    id <WCVideoProducerViewModelDelegate> _delegate;
    WCVideoProducerDataManager *_dataManager;
    WCVideoProducerFlavors *_flavors;
    MJTemplateMovieSession *_sessionAssistant;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isStoppingPlayingVideo; // @synthesize isStoppingPlayingVideo=_isStoppingPlayingVideo;
@property(nonatomic) _Bool isStartingPlayingVideo; // @synthesize isStartingPlayingVideo=_isStartingPlayingVideo;
@property(retain, nonatomic) MJTemplateMovieSession *sessionAssistant; // @synthesize sessionAssistant=_sessionAssistant;
@property(retain, nonatomic) WCVideoProducerFlavors *flavors; // @synthesize flavors=_flavors;
@property(retain, nonatomic) WCVideoProducerDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(nonatomic) __weak id <WCVideoProducerViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool fetchExtRecommendMusicEnabled; // @synthesize fetchExtRecommendMusicEnabled=_fetchExtRecommendMusicEnabled;
@property(readonly, nonatomic) _Bool canRecreateWhileLoading; // @synthesize canRecreateWhileLoading=_canRecreateWhileLoading;
@property(readonly, nonatomic) _Bool shouldShowNewBGMPanel; // @synthesize shouldShowNewBGMPanel=_shouldShowNewBGMPanel;
@property(nonatomic) _Bool isStopAssetClipping; // @synthesize isStopAssetClipping=_isStopAssetClipping;
@property(nonatomic) _Bool isStartAssetClipping; // @synthesize isStartAssetClipping=_isStartAssetClipping;
@property(retain, nonatomic) OMJTemplateInfo *currentRenderingTemplateInfo; // @synthesize currentRenderingTemplateInfo=_currentRenderingTemplateInfo;
@property(retain, nonatomic) OMJMusicInfo *currentRenderingMusicInfo; // @synthesize currentRenderingMusicInfo=_currentRenderingMusicInfo;
@property(retain, nonatomic) OMJMusicInfo *changingMusic; // @synthesize changingMusic=_changingMusic;
@property(retain, nonatomic) MJVideoTemplate *changingTemplate; // @synthesize changingTemplate=_changingTemplate;
@property(nonatomic) long long delayCreationState; // @synthesize delayCreationState=_delayCreationState;
@property(nonatomic) _Bool shouldStartCreationAfterPresented; // @synthesize shouldStartCreationAfterPresented=_shouldStartCreationAfterPresented;
@property(readonly, nonatomic) _Bool delaysCreation; // @synthesize delaysCreation=_delaysCreation;
@property(readonly, copy, nonatomic) NSString *initialAIModelType; // @synthesize initialAIModelType=_initialAIModelType;
@property(readonly, copy, nonatomic) NSString *initialFeedMusicID; // @synthesize initialFeedMusicID=_initialFeedMusicID;
@property(readonly, copy, nonatomic) NSString *initialMusicID; // @synthesize initialMusicID=_initialMusicID;
@property(readonly, copy, nonatomic) NSString *initialTemplateID; // @synthesize initialTemplateID=_initialTemplateID;
@property(retain, nonatomic) WCVideoProducerExportSettingsLoader *exportSettingsLoader; // @synthesize exportSettingsLoader=_exportSettingsLoader;
@property(retain, nonatomic) WCMomentsPostReportSession *postReportSession; // @synthesize postReportSession=_postReportSession;
@property(retain, nonatomic) id <WCVideoProducerDataProxy> dataProxy; // @synthesize dataProxy=_dataProxy;
@property(retain, nonatomic) WCVideoProducerOptions *options; // @synthesize options=_options;
- (id)_maasSession;
@property(readonly, nonatomic) WCVideoProducerActionRecorder *actionRecorder;
@property(readonly, nonatomic) CDStruct_1b6d18a9 renderingVideoDuration;
@property(readonly, nonatomic) OMJMusicInfo *currentMusicInfo;
@property(readonly, nonatomic) OMJTemplateInfo *currentTemplateInfo;
@property(readonly, nonatomic) UIView *previewRenderView;
@property(readonly, nonatomic) double previewRenderRatio;
@property(readonly, nonatomic) UIImage *previewThumbImage;
@property(readonly, nonatomic) NSString *sessionKey;
- (void)onAudioModuleAbilityChanged:(_Bool)arg1;
- (void)_loadExportSettingsWithVideoTemplate:(id)arg1 withProgressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_preloadMusicsStartWithId:(id)arg1;
- (void)_preloadTemplatesStartWithId:(id)arg1;
- (void)_applyMovieOptions;
- (void)_prepareMovieOptions:(id)arg1 forTemplateWithId:(id)arg2;
- (id)_generatePreviewOptionsForTemplateWithId:(id)arg1;
- (id)_generateExportOptions;
- (CDStruct_e83c9415)_generateTimeRangeForExporting;
- (CDStruct_e83c9415)_generateTimeRangeForPlaying;
- (id)_getRecommendSceneStr;
- (void)didExportWithTemplateInfo:(id)arg1 musicInfo:(id)arg2;
- (void)didCancelEditingAsset:(id)arg1 withClipSegment:(id)arg2 atIndex:(long long)arg3;
- (void)didFinishEditingAsset:(id)arg1 withClipSegment:(id)arg2 atIndex:(long long)arg3;
- (void)didStopEditingSegment;
- (void)didStartEditingSegmentWithTemplateInfo:(id)arg1;
- (void)didStopPlayingMusicSearchResult;
- (void)didStartPlayingSelectedSearchResultMusic;
- (void)didSelectMusicSearchResult:(id)arg1 atIndex:(long long)arg2;
- (void)didShowMusicSearchResult:(id)arg1 atIndex:(long long)arg2;
- (void)didSearchMusicByKey:(id)arg1;
- (void)didExitSearchingMusic;
- (void)didEnterSearchingMusic;
- (void)didFetchExtRecommendMusicWithRequestID:(unsigned long long)arg1;
- (void)didStartPlayingSelectedMusicFromBelonger:(long long)arg1;
- (void)didSelectMusic:(id)arg1 atIndex:(long long)arg2 fromBelonger:(long long)arg3;
- (void)didShowMusic:(id)arg1 atIndex:(long long)arg2;
- (void)didLaunchMJApp;
- (void)didClickLaunchMJApp;
- (void)didCheckJumpToMJAppRegular:(long long)arg1;
- (void)didSwitchOST:(_Bool)arg1 fromBelonger:(long long)arg2;
- (void)didSwitchBGM:(_Bool)arg1 fromBelonger:(long long)arg2;
- (void)didStopPlayingSelectedTemplateFromBelonger:(long long)arg1;
- (void)didStartPlayingSelectedTemplateWithDuration:(CDStruct_1b6d18a9)arg1 fromBelonger:(long long)arg2;
- (void)didSelectTemplate:(id)arg1 atIndex:(long long)arg2 fromBelonger:(long long)arg3;
- (void)didShowTemplate:(id)arg1 atIndex:(long long)arg2 fromBelonger:(long long)arg3;
- (void)didProvideTemplate:(id)arg1 fromBelonger:(long long)arg2;
- (id)_getTemplateOperationCtxFromBelonger:(long long)arg1;
- (void)handleMusicBarShowed;
- (void)_onBGMPanelVCShowed;
- (void)_onMusicBarVCShowed;
- (void)updateVideoProducerFlavorsToEnableExternalPlayback:(_Bool)arg1;
- (void)updateVideoProducerFlavorsToEnablePreviewBGM:(_Bool)arg1;
- (void)updateVideoProducerFlavorsToEnablePreviewOST:(_Bool)arg1;
- (void)updateVideoProducerFlavorsToMuteAllPreview:(_Bool)arg1;
- (void)updateVideoProducerFlavorsToEnableAudioModule:(_Bool)arg1;
- (void)updatePreloadConfigs:(id)arg1;
- (void)updateVideoProducerOptionsToEnableOST:(_Bool)arg1 enableBGM:(_Bool)arg2 enableLyrics:(_Bool)arg3;
- (void)fetchExtRecommendMusicsFromTemplateIdIfNeeded:(id)arg1;
- (id)seekAssetSegmentWithId:(id)arg1 toTimeInClip:(CDStruct_1b6d18a9)arg2;
- (_Bool)canSeekAssetSegment;
- (id)getAllAssetClipSegment;
- (_Bool)stopAssetClippingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)canStopAssetClipping;
- (_Bool)startAssetClippingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)canStartAssetClipping;
- (_Bool)isChangingMusic:(id)arg1;
- (void)changeMusicInfo:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isChangingTemplate:(id)arg1;
- (void)changeTemplateWithTemplate:(id)arg1 musicID:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)isPlayingVideo;
- (void)stopPlayWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startPlayingSegmentWithId:(id)arg1 forTimeRange:(CDStruct_e83c9415)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startPlayWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cleanUpWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)exportTemplate:(id)arg1 atIndex:(long long)arg2 withProgressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)loadMoreRecommendTemplatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)createVideoWithCompleteBlock:(CDUnknownBlockType)arg1 updateBlock:(CDUnknownBlockType)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)prepareWithStartupBlock:(CDUnknownBlockType)arg1;
- (void)filterLocalResourceWithCompleteBlock:(CDUnknownBlockType)arg1;
- (id)findTemplateForID:(id)arg1;
- (void)_initInitialTemplateMetadata;
- (void)_initData;
- (void)dealloc;
- (id)initWithAssetInfoList:(id)arg1 options:(id)arg2 postReportSession:(id)arg3;
- (id)initWithAssetInfoList:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

