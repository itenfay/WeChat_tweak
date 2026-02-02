//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PAGView, UIView, WCAdFireworkCheerAnimationView, WCAdPagView, WCDataItem;

@interface WCAdSocialLikeLogic
{
    _Bool _attractingViewPlayed;
    _Bool _attractingViewErrorReported;
    _Bool _fireworkCheerAttractingPlayed;
    _Bool _fireworkCheerHideButtonIconPendingFlag;
    _Bool _fireworkCheerLikePendingFlag;
    _Bool _fireworkCheerCommentAnimationPendingFlag;
    _Bool _mainMediaPlayingFlag;
    int _continuousLikeState;
    int _continuousLikeCount;
    UIView *_playerViewCache;
    UIView *_attractingViewCache;
    UIView *_attractingIconCache;
    UIView *_bannerAnimationViewCache;
    PAGView *_fireworkCheerAttractingViewCache;
    PAGView *_fireworkCheerLikeIconCache;
    WCAdPagView *_patIconPagCache;
    WCAdPagView *_patIconPagDarkCache;
    WCDataItem *_dataItem;
    unsigned long long _contentItemScene;
    WCAdFireworkCheerAnimationView *_fullScreenAnimationView;
}

+ (id)getSocialLikeLogicWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdFireworkCheerAnimationView *fullScreenAnimationView; // @synthesize fullScreenAnimationView=_fullScreenAnimationView;
@property(nonatomic) _Bool mainMediaPlayingFlag; // @synthesize mainMediaPlayingFlag=_mainMediaPlayingFlag;
@property(nonatomic) _Bool fireworkCheerCommentAnimationPendingFlag; // @synthesize fireworkCheerCommentAnimationPendingFlag=_fireworkCheerCommentAnimationPendingFlag;
@property(nonatomic) _Bool fireworkCheerLikePendingFlag; // @synthesize fireworkCheerLikePendingFlag=_fireworkCheerLikePendingFlag;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCAdPagView *patIconPagDarkCache; // @synthesize patIconPagDarkCache=_patIconPagDarkCache;
@property(retain, nonatomic) WCAdPagView *patIconPagCache; // @synthesize patIconPagCache=_patIconPagCache;
@property(nonatomic) _Bool fireworkCheerHideButtonIconPendingFlag; // @synthesize fireworkCheerHideButtonIconPendingFlag=_fireworkCheerHideButtonIconPendingFlag;
@property(retain, nonatomic) PAGView *fireworkCheerLikeIconCache; // @synthesize fireworkCheerLikeIconCache=_fireworkCheerLikeIconCache;
@property(retain, nonatomic) PAGView *fireworkCheerAttractingViewCache; // @synthesize fireworkCheerAttractingViewCache=_fireworkCheerAttractingViewCache;
@property(nonatomic) _Bool fireworkCheerAttractingPlayed; // @synthesize fireworkCheerAttractingPlayed=_fireworkCheerAttractingPlayed;
@property(nonatomic) int continuousLikeCount; // @synthesize continuousLikeCount=_continuousLikeCount;
@property(nonatomic) int continuousLikeState; // @synthesize continuousLikeState=_continuousLikeState;
@property(retain, nonatomic) UIView *bannerAnimationViewCache; // @synthesize bannerAnimationViewCache=_bannerAnimationViewCache;
@property(nonatomic) _Bool attractingViewErrorReported; // @synthesize attractingViewErrorReported=_attractingViewErrorReported;
@property(retain, nonatomic) UIView *attractingIconCache; // @synthesize attractingIconCache=_attractingIconCache;
@property(retain, nonatomic) UIView *attractingViewCache; // @synthesize attractingViewCache=_attractingViewCache;
@property(nonatomic) _Bool attractingViewPlayed; // @synthesize attractingViewPlayed=_attractingViewPlayed;
@property(retain, nonatomic) UIView *playerViewCache; // @synthesize playerViewCache=_playerViewCache;
- (void)onFireworkCheerAnimationFinished:(id)arg1;
- (_Bool)playFullScreenAnimation:(id)arg1 canCloseDelayTime:(double)arg2 vibrateDelayTime:(double)arg3;
- (_Bool)isMainMediaPlaying;
- (void)notifyMainMediaPlayStateChanged;
- (void)mainMediaStop;
- (void)mainMediaPlay;
- (_Bool)isFireworkCheerCommentPendingToAnimation;
- (void)notifyFireworkCheerCommentAnimationStarted;
- (void)fireworkCheerRealLike;
- (void)notifyFireworkCheerRealLike;
- (void)fireworkCheerPendingLike;
- (_Bool)isFireworkCheerAnimationPlaying;
- (_Bool)playFireworkCheerAnimation;
- (void)notifyContinuousLikeCountChanged;
- (void)notifyContinuousLikeStateChanged;
- (void)exitContinuousLikingState;
- (void)continuousLikeCancel;
- (void)continuousLike;
- (void)dealloc;
- (id)initWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

