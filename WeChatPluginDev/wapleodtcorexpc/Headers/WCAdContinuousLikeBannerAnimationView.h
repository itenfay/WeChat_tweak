//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdContinuousLikeBannerInfo, WCDataItem;

@interface WCAdContinuousLikeBannerAnimationView
{
    int _lastBannerStyle;
    WCAdContinuousLikeBannerInfo *_bannerInfo;
    WCDataItem *_dataItem;
    unsigned long long _contentItemScene;
    double _bannerX;
    double _topBannerY;
    double _bottomBannerY;
    double _animationOffsetX;
    double _animationOffsetY;
    double _lastBannerY;
}

- (void).cxx_destruct;
@property(nonatomic) double lastBannerY; // @synthesize lastBannerY=_lastBannerY;
@property(nonatomic) int lastBannerStyle; // @synthesize lastBannerStyle=_lastBannerStyle;
@property(nonatomic) double animationOffsetY; // @synthesize animationOffsetY=_animationOffsetY;
@property(nonatomic) double animationOffsetX; // @synthesize animationOffsetX=_animationOffsetX;
@property(nonatomic) double bottomBannerY; // @synthesize bottomBannerY=_bottomBannerY;
@property(nonatomic) double topBannerY; // @synthesize topBannerY=_topBannerY;
@property(nonatomic) double bannerX; // @synthesize bannerX=_bannerX;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCAdContinuousLikeBannerInfo *bannerInfo; // @synthesize bannerInfo=_bannerInfo;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)onContinuousLikeCountChanged:(id)arg1 contentItemScene:(unsigned long long)arg2 likeCount:(int)arg3;
- (id)fetchContinuousLikeReportInfo;
- (id)createBannerView:(int)arg1 bannerY:(double)arg2;
- (double)fetchBannerY;
- (void)playFirstLikeAnimationGroup;
- (void)playBannerAnimation:(double)arg1 bannerStyle:(int)arg2 ignoreCheckBottom:(_Bool)arg3 originOffsetX:(double)arg4 animationDuration:(double)arg5;
- (void)playBannerAnimation:(double)arg1 bannerStyle:(int)arg2;
- (void)calculateAnimationArea;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 bannerInfo:(id)arg2 dataItem:(id)arg3 contentItemScene:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

