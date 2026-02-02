//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCDragDecorateView, MMWebViewController, NSString;
@protocol GameCenterBannerManagerDelegate, GameCenterBannerNavBarProtocol;

@interface GameCenterBannerManager
{
    _Bool _isBannerEnabled;
    _Bool _keepNavIconDark;
    _Bool _isBannerShow;
    _Bool _anotherScrollViewOriginBounces;
    MMWebViewController *_bannerWebController;
    long long _bannerState;
    id <GameCenterBannerManagerDelegate> _delegate;
    id <GameCenterBannerNavBarProtocol> _navDelegate;
    double _panStartBannerBottom;
    double _bannerHwRatio;
    double _bannerCapsuleHeight;
    double _lastAnotherScrollViewContentOffsetY;
    GCDragDecorateView *_dragDecorateView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool anotherScrollViewOriginBounces; // @synthesize anotherScrollViewOriginBounces=_anotherScrollViewOriginBounces;
@property(nonatomic) _Bool isBannerShow; // @synthesize isBannerShow=_isBannerShow;
@property(retain, nonatomic) GCDragDecorateView *dragDecorateView; // @synthesize dragDecorateView=_dragDecorateView;
@property(nonatomic) double lastAnotherScrollViewContentOffsetY; // @synthesize lastAnotherScrollViewContentOffsetY=_lastAnotherScrollViewContentOffsetY;
@property(nonatomic) double bannerCapsuleHeight; // @synthesize bannerCapsuleHeight=_bannerCapsuleHeight;
@property(nonatomic) double bannerHwRatio; // @synthesize bannerHwRatio=_bannerHwRatio;
@property(nonatomic) double panStartBannerBottom; // @synthesize panStartBannerBottom=_panStartBannerBottom;
@property(nonatomic) __weak id <GameCenterBannerNavBarProtocol> navDelegate; // @synthesize navDelegate=_navDelegate;
@property(nonatomic) __weak id <GameCenterBannerManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool keepNavIconDark; // @synthesize keepNavIconDark=_keepNavIconDark;
@property(nonatomic) long long bannerState; // @synthesize bannerState=_bannerState;
@property(retain, nonatomic) MMWebViewController *bannerWebController; // @synthesize bannerWebController=_bannerWebController;
@property(nonatomic) _Bool isBannerEnabled; // @synthesize isBannerEnabled=_isBannerEnabled;
- (_Bool)shouldDisplayImmediately;
- (id)getBannerWebCache;
- (void)saveBannerWebCache:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)setLayoutUnderNavBar:(_Bool)arg1;
- (void)updateTopBarAlpah:(double)arg1 isIconDark:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)anotherPartScrollViewDidScroll:(id)arg1;
- (void)disableScrollViewInteractionForShort;
- (void)capsuleBanner;
- (void)expandBanner;
- (void)hideBanner;
- (void)loadBannerTimeout;
- (void)showBannerWithAutoExpand:(_Bool)arg1 isCacheInit:(_Bool)arg2;
- (void)destoryBanner;
- (void)updateDecorateViewShow:(_Bool)arg1;
- (void)updateDecorateViewRadius:(double)arg1;
- (void)changeBannerCapsuleHeight:(double)arg1;
- (void)changeBannerViewHeightRatio:(double)arg1;
- (void)embedWebBannerIn:(id)arg1;
- (void)loadWebBannerConfig:(id)arg1;
- (id)getHandledBannerUrl;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

