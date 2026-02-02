//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIView, WCAdFinderLiveLogic, WCAdFinderLivePlayerView, WCAdLiveDisplayView, WCAdLiveLikeAnimationView, WCImageView, WCSightView;

@interface WCTimeLineAdCombinedGridView
{
    unsigned int _liveStatus;
    UIView *_mainMediaHolder;
    WCSightView *_mainSightView;
    WCImageView *_mainImageView;
    UIButton *_mainTouchButton;
    UIView *_gridView;
    WCAdLiveDisplayView *_liveDisplayView;
    WCAdLiveLikeAnimationView *_liveLikeAnimationView;
    WCAdFinderLivePlayerView *_finderLivePlayerView;
    WCAdFinderLiveLogic *_finderLiveLogic;
}

+ (_Bool)isBigMode:(id)arg1;
+ (id)fetchAnimationViewForView:(id)arg1 isFromTimeline:(_Bool)arg2 dataItem:(id)arg3;
+ (double)heightForGridViewForDataItem:(id)arg1;
+ (double)heightForDataItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdFinderLiveLogic *finderLiveLogic; // @synthesize finderLiveLogic=_finderLiveLogic;
@property(retain, nonatomic) WCAdFinderLivePlayerView *finderLivePlayerView; // @synthesize finderLivePlayerView=_finderLivePlayerView;
@property(retain, nonatomic) WCAdLiveLikeAnimationView *liveLikeAnimationView; // @synthesize liveLikeAnimationView=_liveLikeAnimationView;
@property(retain, nonatomic) WCAdLiveDisplayView *liveDisplayView; // @synthesize liveDisplayView=_liveDisplayView;
@property(nonatomic) unsigned int liveStatus; // @synthesize liveStatus=_liveStatus;
@property(retain, nonatomic) UIView *gridView; // @synthesize gridView=_gridView;
@property(retain, nonatomic) UIButton *mainTouchButton; // @synthesize mainTouchButton=_mainTouchButton;
@property(retain, nonatomic) WCImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property(retain, nonatomic) WCSightView *mainSightView; // @synthesize mainSightView=_mainSightView;
@property(retain, nonatomic) UIView *mainMediaHolder; // @synthesize mainMediaHolder=_mainMediaHolder;
- (void)addFinderLivePlayer:(id)arg1;
- (id)createFinderLivePlayer:(id)arg1;
- (void)stopLiveLikeAnimation;
- (void)tryStartLiveLikeAnimation;
- (void)updateLiveStatus:(int)arg1;
- (id)createLiveLikeAnimationView;
- (void)initLiveInfoView:(id)arg1;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (void)onClickWCImage:(id)arg1;
- (void)onCombinedGridClickedIsMainItem:(_Bool)arg1 index:(long long)arg2 clickedView:(id)arg3;
- (void)onClickMainButton:(id)arg1 forEvent:(id)arg2;
- (void)appendActionIconToView:(id)arg1 clickActionInfo:(id)arg2 isMain:(_Bool)arg3;
- (id)generateImageViewForMediaItem:(id)arg1;
- (void)appendGridItemsToView:(id)arg1;
- (id)createSightView:(id)arg1;
- (void)contentItemBecomeInvisible;
- (void)contentItemDidEndDisplaying;
- (void)contentItemWillDisplay;
- (void)autoPauseWithoutSound;
- (void)autoPlayWithoutSound;
- (id)getMainContentView;
- (void)addSightViewWithMediaItem:(id)arg1;
- (void)addImageViewWithMediaItem:(id)arg1;
- (void)addMediaViewForItem:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

