//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveActivityView, MMFinderLiveLimitModeLiveInfoEnsurer, MMLiveCDNPlayerView, NSDate, NSString, RichTextView, UIImageView, UILabel, UIView, WCDataItem, WCFinderLiveNowView, WCFinderLiveShareCardExposeReportAdapter, WCFinderLiveShareCellFullStatusView;
@protocol WCFinderShareLiveViewDelegate;

@interface WCFinderShareLiveView
{
    _Bool _canShowLiveActivityView;
    _Bool _isAutoPlayingPeriod;
    id <WCFinderShareLiveViewDelegate> itemViewDelegate;
    UIImageView *_imageView;
    WCDataItem *_oWCDataItem;
    MMLiveCDNPlayerView *_playerView;
    WCFinderLiveNowView *_logoView;
    UIView *_liveMaskView;
    WCFinderLiveShareCellFullStatusView *_liveMaskTipsView;
    UILabel *_coverEffectLabel;
    MMFinderLiveActivityView *_liveActivityView;
    NSString *_logoViewLabel;
    MMFinderLiveLimitModeLiveInfoEnsurer *_liveInfoEnsurer;
    RichTextView *_mediaTitleTextView;
    UIImageView *_bottomGradientView;
    NSDate *_startAutoPlay;
    WCFinderLiveShareCardExposeReportAdapter *_exposeReportAdapter;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
+ (struct CGSize)sizeForContentItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveShareCardExposeReportAdapter *exposeReportAdapter; // @synthesize exposeReportAdapter=_exposeReportAdapter;
@property(retain, nonatomic) NSDate *startAutoPlay; // @synthesize startAutoPlay=_startAutoPlay;
@property(retain, nonatomic) UIImageView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) RichTextView *mediaTitleTextView; // @synthesize mediaTitleTextView=_mediaTitleTextView;
@property(retain, nonatomic) MMFinderLiveLimitModeLiveInfoEnsurer *liveInfoEnsurer; // @synthesize liveInfoEnsurer=_liveInfoEnsurer;
@property(nonatomic) _Bool isAutoPlayingPeriod; // @synthesize isAutoPlayingPeriod=_isAutoPlayingPeriod;
@property(retain, nonatomic) NSString *logoViewLabel; // @synthesize logoViewLabel=_logoViewLabel;
@property(retain, nonatomic) MMFinderLiveActivityView *liveActivityView; // @synthesize liveActivityView=_liveActivityView;
@property(nonatomic) _Bool canShowLiveActivityView; // @synthesize canShowLiveActivityView=_canShowLiveActivityView;
@property(retain, nonatomic) UILabel *coverEffectLabel; // @synthesize coverEffectLabel=_coverEffectLabel;
@property(retain, nonatomic) WCFinderLiveShareCellFullStatusView *liveMaskTipsView; // @synthesize liveMaskTipsView=_liveMaskTipsView;
@property(retain, nonatomic) UIView *liveMaskView; // @synthesize liveMaskView=_liveMaskView;
@property(retain, nonatomic) WCFinderLiveNowView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) MMLiveCDNPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) WCDataItem *oWCDataItem; // @synthesize oWCDataItem=_oWCDataItem;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <WCFinderShareLiveViewDelegate> itemViewDelegate; // @synthesize itemViewDelegate;
- (void)exposeExtStatsReportWhenDisappearFrom:(id)arg1;
- (void)hideViewWhenShowFullScreenAnimationEnd;
- (void)showViewWhenCloseFullScreenAnimationEnd;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)onCollapseAnimationDidEnd:(id)arg1;
- (void)onMinimizeInteractiveDidEnd:(id)arg1;
- (void)onExtendAnimationDidEndWithLiveTask:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)onPlayBegin;
- (void)onFinderLiveFeedCoverInfoUpdate:(unsigned long long)arg1 coverInfo:(id)arg2;
- (void)onFinderLiveReplaySettingUpdated:(id)arg1 replayEnabled:(_Bool)arg2;
- (void)onFinderLiveReplayStatusUpdated:(id)arg1 replayStatus:(unsigned int)arg2;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)onFinderLiveShareViewReplayStatusUpdated:(id)arg1 liveInfo:(id)arg2;
- (void)onFinderLiveShareViewUpdateLiveInfo:(id)arg1;
@property(readonly, nonatomic) _Bool isLiveAutoPlayEnabled;
- (void)updateImageViewAlpha;
- (void)updatePlayerViewAlpha:(double)arg1;
- (void)updatePlayerViewHidden:(_Bool)arg1;
- (void)stopPlay;
- (void)startPlayLiveStream;
- (_Bool)isCurrentDataItemOpenedLiveTask:(id)arg1;
- (void)showImageView;
- (void)showViewIfNeededWithTask:(id)arg1;
- (void)hideComponentIfNeededWithTask:(id)arg1;
- (void)autoPauseWithoutSound;
- (void)autoPlayWithoutSound;
- (id)getMainContentView;
- (void)contentItemDidEndDisplaying;
- (void)contentItemWillDisplay;
- (void)layoutLiveActivityView;
- (void)refreshLiveMaskEffect;
- (void)prepareForMorphTransition;
- (void)_doJumpToLive;
- (void)reportEcsData:(id)arg1 dataItem:(id)arg2;
- (void)throwUrlMessage;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (_Bool)isPaidLive:(id)arg1;
- (_Bool)isLiveReplayGenerating:(id)arg1;
- (_Bool)isLiveReplay:(id)arg1;
- (_Bool)isLiveEnded:(id)arg1;
- (id)spliceFinderLiveStatusVoiceOverStrWithStatus:(id)arg1 andNickname:(id)arg2 andFinderLiveStatusFormat:(id)arg3;
- (void)layoutDefaultV2:(id)arg1;
- (void)changeLiveNowViewType:(long long)arg1;
- (void)preLoad:(id)arg1;
- (void)initViewsWithWCContentItem:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

