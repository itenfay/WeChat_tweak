//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJPublisherMovieCompositionTask, MMUIButton, MMUIImageView, NSString, UILabel, UIView, WCFinderFeedContentVM, WCFinderFullInteractivePanelView, WCFinderInteractivePanelConfigParamsModel, WCFinderLandscapeProgressPanelView, WCFinderPortraitProgressPanelView, WCFinderPostSessionModel, WCFinderProgressControlPanelConfigParamsModel, WCFinderTableViewParamModel;

@interface MJClipBundlePlayerViewController
{
    _Bool _isVideoPlaying;
    _Bool _isDragGREnding;
    WCFinderFeedContentVM *_contentVM;
    WCFinderPostSessionModel *_postSession;
    MJPublisherMovieCompositionTask *_compositeTask;
    UIView *_renderViewContainer;
    UIView *_bottomViewContainer;
    UIView *_gestureCaptureView;
    MMUIImageView *_playIconView;
    WCFinderTableViewParamModel *_tableViewParamModel;
    WCFinderFullInteractivePanelView *_interactivePanelView;
    WCFinderInteractivePanelConfigParamsModel *_interactivePanelConfigModel;
    unsigned long long _toolbarConfig;
    WCFinderPortraitProgressPanelView *_portraitProgressPanelView;
    WCFinderLandscapeProgressPanelView *_landscapeProgressPanelView;
    WCFinderProgressControlPanelConfigParamsModel *_progressControlConfigModel;
    UILabel *_longVideoEntry;
    double _currentTimeInSeconds;
    double _durationInSeconds;
    MMUIButton *_closeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) _Bool isDragGREnding; // @synthesize isDragGREnding=_isDragGREnding;
@property(nonatomic) _Bool isVideoPlaying; // @synthesize isVideoPlaying=_isVideoPlaying;
@property(nonatomic) double durationInSeconds; // @synthesize durationInSeconds=_durationInSeconds;
@property(nonatomic) double currentTimeInSeconds; // @synthesize currentTimeInSeconds=_currentTimeInSeconds;
@property(retain, nonatomic) UILabel *longVideoEntry; // @synthesize longVideoEntry=_longVideoEntry;
@property(retain, nonatomic) WCFinderProgressControlPanelConfigParamsModel *progressControlConfigModel; // @synthesize progressControlConfigModel=_progressControlConfigModel;
@property(retain, nonatomic) WCFinderLandscapeProgressPanelView *landscapeProgressPanelView; // @synthesize landscapeProgressPanelView=_landscapeProgressPanelView;
@property(retain, nonatomic) WCFinderPortraitProgressPanelView *portraitProgressPanelView; // @synthesize portraitProgressPanelView=_portraitProgressPanelView;
@property(nonatomic) unsigned long long toolbarConfig; // @synthesize toolbarConfig=_toolbarConfig;
@property(retain, nonatomic) WCFinderInteractivePanelConfigParamsModel *interactivePanelConfigModel; // @synthesize interactivePanelConfigModel=_interactivePanelConfigModel;
@property(retain, nonatomic) WCFinderFullInteractivePanelView *interactivePanelView; // @synthesize interactivePanelView=_interactivePanelView;
@property(retain, nonatomic) WCFinderTableViewParamModel *tableViewParamModel; // @synthesize tableViewParamModel=_tableViewParamModel;
@property(retain, nonatomic) MMUIImageView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) UIView *gestureCaptureView; // @synthesize gestureCaptureView=_gestureCaptureView;
@property(retain, nonatomic) UIView *bottomViewContainer; // @synthesize bottomViewContainer=_bottomViewContainer;
@property(retain, nonatomic) UIView *renderViewContainer; // @synthesize renderViewContainer=_renderViewContainer;
@property(readonly, nonatomic) MJPublisherMovieCompositionTask *compositeTask; // @synthesize compositeTask=_compositeTask;
@property(readonly, nonatomic) WCFinderPostSessionModel *postSession; // @synthesize postSession=_postSession;
@property(readonly, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
- (_Bool)useTransparentNavibar;
- (id)lightWhiteColor;
- (void)updateLongVideoEntryLayout;
- (void)updateLongVideoEntryVideoDuration:(double)arg1 currentPlayPosition:(double)arg2;
- (void)setLongVideoEntryHidden:(_Bool)arg1;
- (void)updateLongVideoEntryHiddenStatus;
- (void)updateLongVideoEntryAnimated:(_Bool)arg1;
- (void)updateLongVideoEntry;
- (void)progressControlPanelClickPlayButton:(id)arg1;
- (double)immersiveProgressControlBottom;
- (void)progressControlPanelCurPlayPrecent:(double)arg1 dragState:(unsigned long long)arg2 dragType:(unsigned long long)arg3;
- (void)progressControlPanelClickPauseButton:(id)arg1;
- (id)progressControlPanelGetMediaCollectionView;
- (id)progressControlPanelGetLongVideoEntry;
- (struct CGRect)progressHotRect;
- (_Bool)isPanGesEnable:(struct CGPoint)arg1;
- (_Bool)currentSceneIsLandSpace;
- (id)progressControlPanelView;
- (void)configProgressPanelViewVisible;
- (_Bool)isInSubScene;
- (id)feedCellViewParamModelWithContentVM:(id)arg1;
- (void)checkInteractivePanelViewProgressExtend;
- (void)replayAndHideProgressControlPanelView;
- (unsigned long long)getStartImmersiveProgressBarDragStyle;
- (void)updateProgressBarAndPlayTimeLabelWithCurrentPlayDuration:(double)arg1 videoDuration:(double)arg2 forbidProgressBarMovAnim:(_Bool)arg3 manual:(_Bool)arg4;
- (void)updatePanelViewShowState:(long long)arg1;
- (void)layoutCurProgressBar;
- (void)reversePauseLikeProgressViewsHiddenStateWithPauseSelectState:(_Bool)arg1;
- (void)reversePauseLikeProgressViewsHiddenState;
- (void)updateVideoState:(_Bool)arg1;
- (void)manualTriggerPauseVideoAction;
- (void)triggerPauseVideoAction;
- (void)handleTapGR:(id)arg1;
- (void)onCloseButtonClicked;
- (void)onApplicationDidEnterBackgroundNotification:(id)arg1;
- (void)onApplicationWillEnterForegroundNotification:(id)arg1;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (void)templateMoviePlayer:(id)arg1 playbackTimeDidChange:(CDStruct_1b6d18a9)arg2 mediaTimeRange:(CDStruct_e83c9415)arg3;
- (void)templateMoviePlayerWillStopPlaying:(id)arg1;
- (void)templateMoviePlayer:(id)arg1 didChangePlayStatus:(unsigned long long)arg2;
- (void)_shutdownPlayback;
- (void)_pauseVideoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_pauseVideo;
- (void)_playVideoWithStartTime:(double)arg1;
- (void)_playVideo;
- (void)setupViews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPostSession:(id)arg1 contentVM:(id)arg2 toolbarConfig:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

