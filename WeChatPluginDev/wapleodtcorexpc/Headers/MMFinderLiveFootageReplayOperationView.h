//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFootageReplayModel, MMFinderLiveReplayBarrageView, MMFinderLiveReplayMessageSource, MMUIButton, NSString;
@protocol MMFinderLiveFootageReplayOperationViewDelegate;

@interface MMFinderLiveFootageReplayOperationView
{
    _Bool _supressMessageUpdate;
    _Bool _replayExplicitlyPaused;
    id <MMFinderLiveFootageReplayOperationViewDelegate> _footageReplayOperationViewDelegate;
    MMFinderLiveReplayMessageSource *_messageSource;
    unsigned long long _lastMessageUpdateTime;
    MMFinderLiveFootageReplayModel *_footageReplayModel;
    MMFinderLiveReplayBarrageView *_barrageView;
    MMUIButton *_orientationButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool replayExplicitlyPaused; // @synthesize replayExplicitlyPaused=_replayExplicitlyPaused;
@property(retain, nonatomic) MMUIButton *orientationButton; // @synthesize orientationButton=_orientationButton;
@property(retain, nonatomic) MMFinderLiveReplayBarrageView *barrageView; // @synthesize barrageView=_barrageView;
@property(retain, nonatomic) MMFinderLiveFootageReplayModel *footageReplayModel; // @synthesize footageReplayModel=_footageReplayModel;
@property(nonatomic) _Bool supressMessageUpdate; // @synthesize supressMessageUpdate=_supressMessageUpdate;
@property(nonatomic) unsigned long long lastMessageUpdateTime; // @synthesize lastMessageUpdateTime=_lastMessageUpdateTime;
@property(retain, nonatomic) MMFinderLiveReplayMessageSource *messageSource; // @synthesize messageSource=_messageSource;
@property(nonatomic) __weak id <MMFinderLiveFootageReplayOperationViewDelegate> footageReplayOperationViewDelegate; // @synthesize footageReplayOperationViewDelegate=_footageReplayOperationViewDelegate;
- (void)barrageView:(id)arg1 reportCommentItem:(id)arg2;
- (void)barrageViewDidHideOperationMenu:(id)arg1;
- (void)barrageViewDidShowOperationMenu:(id)arg1;
- (void)onGetVideoSize:(struct CGSize)arg1;
- (void)onVideoSizeChange:(struct CGSize)arg1;
- (void)onCurrentTimeUpdate:(unsigned int)arg1;
- (double)toolViewBottom;
- (void)onScrubberPlayButtonTapped;
- (void)onScrubberPauseButtonTapped;
- (void)onSliderSeekToTime:(float)arg1 isAtGreateTime:(_Bool)arg2;
- (void)onSliderSeekBegin;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onOrientationButtonClicked;
- (void)updateLiveMessageAtTime:(unsigned int)arg1;
- (void)updateOrientationButtonForCurrentOrientation;
- (void)layoutOrientationButton;
- (void)layoutBarrageView;
- (void)hideContents;
- (void)showContents;
- (void)createReplayControlView;
- (void)layoutUI;
- (void)onEnterLive;
- (_Bool)shouldHideMaskWhenCLeanScreen;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (id)initWithTaskId:(id)arg1 footageReplayModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

