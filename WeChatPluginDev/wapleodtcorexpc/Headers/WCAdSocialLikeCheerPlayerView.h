//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PAGView, UIView, WCAdSocialLikeInfo, WCAdSocialLikeLogic, WCDataItem;
@protocol WCAdSocialLikeCheerPlayerViewDelegate;

@interface WCAdSocialLikeCheerPlayerView
{
    _Bool _bTimelineScene;
    id <WCAdSocialLikeCheerPlayerViewDelegate> _delegate;
    WCAdSocialLikeInfo *_adSocialLikeInfo;
    WCDataItem *_dataItem;
    PAGView *_cheerPlayer;
    UIView *_cheerPlayerContainer;
    PAGView *_attractingPlayer;
    PAGView *_fireworkCheerAttractingView;
    struct CGRect _likeBottomFrame;
    struct CGRect _referenceFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PAGView *fireworkCheerAttractingView; // @synthesize fireworkCheerAttractingView=_fireworkCheerAttractingView;
@property(retain, nonatomic) PAGView *attractingPlayer; // @synthesize attractingPlayer=_attractingPlayer;
@property(retain, nonatomic) UIView *cheerPlayerContainer; // @synthesize cheerPlayerContainer=_cheerPlayerContainer;
@property(retain, nonatomic) PAGView *cheerPlayer; // @synthesize cheerPlayer=_cheerPlayer;
@property(nonatomic) struct CGRect referenceFrame; // @synthesize referenceFrame=_referenceFrame;
@property(nonatomic) struct CGRect likeBottomFrame; // @synthesize likeBottomFrame=_likeBottomFrame;
@property(nonatomic) _Bool bTimelineScene; // @synthesize bTimelineScene=_bTimelineScene;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCAdSocialLikeInfo *adSocialLikeInfo; // @synthesize adSocialLikeInfo=_adSocialLikeInfo;
@property(nonatomic) __weak id <WCAdSocialLikeCheerPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cleanUpFireworkCheerAttractingView;
- (void)tryToResumeFireworkCheerAttractingView;
- (void)updateFireworkCheerAttractingViewFrame;
- (void)initFireworkCheerAttractingView;
- (void)playFireworkCheerAttracting;
- (void)reportAttractingAnimationPlayedWithErrorCode:(int)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationStart:(id)arg1;
- (void)playAttractingIconAnimation:(_Bool)arg1 uponLikeView:(id)arg2;
- (void)cleanUpAttractingIconPlayer;
- (id)fetchAttractingIconPlayer;
- (void)generateAttractingIconPlayer;
- (id)fetchAttractingIconPAGFile;
- (void)hideAttractingView:(_Bool)arg1;
- (void)playAttractingAnimation;
- (void)tryToResumeAttractingPlayer;
- (void)updateAttractingPlayerFrame;
- (void)configAttractingPlayer;
- (void)cleanUpAttractingPlayer;
- (_Bool)generateAttractingPlayer;
- (id)fetchAttractingPAGFile;
@property(readonly, nonatomic) WCAdSocialLikeLogic *socialLikeLogic;
- (id)fetchPAGFilePath;
- (void)resumeOrCreatePlayerView;
- (void)createPlayerView;
- (void)tryResumePlayerViewFromCache;
- (struct CGRect)calcPlayerFrameWithPagWidth:(double)arg1 pagHeight:(double)arg2 rangeFrame:(struct CGRect)arg3 offsetY:(double)arg4;
- (_Bool)isPlaying;
- (void)stop;
- (void)play;
- (void)setFrame:(struct CGRect)arg1 likeBottomFrame:(struct CGRect)arg2 referenceFrame:(struct CGRect)arg3;
- (id)initWithFrame:(struct CGRect)arg1 adSocialLikeInfo:(id)arg2 dataItem:(id)arg3 bTimelineScene:(_Bool)arg4 likeBottomFrame:(struct CGRect)arg5 referenceFrame:(struct CGRect)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

