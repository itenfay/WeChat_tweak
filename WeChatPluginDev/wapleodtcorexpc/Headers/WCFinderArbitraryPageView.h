//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMNavBarInteractiveConfig, MMUIViewController, NSArray, NSMutableDictionary, NSString, UILabel, UIScrollView, UIViewController, WCFinderAnimationLoadingView, WCFinderArbitraryPageScrollProcess, WCFinderArbitraryResueItem, WCFinderTabSwitchView;
@protocol WCFinderArbitraryPageViewDataDelegate, WCFinderArbitraryPageViewDataSource;

@interface WCFinderArbitraryPageView : UIView
{
    _Bool _autoAdjustsScrollViewInsets;
    _Bool _autoFadeNavBarWhenHasHeader;
    _Bool _autoSetupScrollViewNeverAdjustInset;
    _Bool _autoAdjustScrollViewMinContentSize;
    _Bool _tabViewBlurBG;
    _Bool _headerPinTop;
    _Bool _hasInitialized;
    _Bool _beforeScrollHasCallWillDisappear;
    id <WCFinderArbitraryPageViewDataSource> _dataSource;
    id <WCFinderArbitraryPageViewDataDelegate> _delegate;
    long long _statusBarConfig;
    WCFinderTabSwitchView *_tabView;
    UIView *_headerView;
    double _fadeNavBarOffset;
    NSArray *_tabIdList;
    NSArray *_tabObjectList;
    UIScrollView *_scrollView;
    UILabel *_statusLabel;
    WCFinderAnimationLoadingView *_loadingView;
    NSMutableDictionary *_bannerCreatorMap;
    NSMutableDictionary *_pageCreatorMap;
    NSMutableDictionary *_pageVCMetaMap;
    NSMutableDictionary *_pageInfoMap;
    WCFinderArbitraryResueItem *_reuseHead;
    long long _dequeueProcessIndex;
    NSString *_dequeueViewIdentifier;
    long long _willDisplayIdx;
    long long _beforeScrollIdx;
    WCFinderArbitraryPageScrollProcess *_scrollProcess;
    double _headerViewHeight;
    UIView *_headerBGView;
    UIView *_tabBGView;
    UIViewController *_selfVC;
    MMUIViewController *_selfMMVC;
    UIView *_vcTitleView;
    MMNavBarInteractiveConfig *_navBarConfig;
    id *_tmpPageInfos;
    struct CGSize _layoutSize;
}

- (void).cxx_destruct;
@property(nonatomic) id *tmpPageInfos; // @synthesize tmpPageInfos=_tmpPageInfos;
@property(nonatomic) __weak MMNavBarInteractiveConfig *navBarConfig; // @synthesize navBarConfig=_navBarConfig;
@property(nonatomic) __weak UIView *vcTitleView; // @synthesize vcTitleView=_vcTitleView;
@property(nonatomic) __weak MMUIViewController *selfMMVC; // @synthesize selfMMVC=_selfMMVC;
@property(nonatomic) __weak UIViewController *selfVC; // @synthesize selfVC=_selfVC;
@property(retain, nonatomic) UIView *tabBGView; // @synthesize tabBGView=_tabBGView;
@property(retain, nonatomic) UIView *headerBGView; // @synthesize headerBGView=_headerBGView;
@property(nonatomic) double headerViewHeight; // @synthesize headerViewHeight=_headerViewHeight;
@property(retain, nonatomic) WCFinderArbitraryPageScrollProcess *scrollProcess; // @synthesize scrollProcess=_scrollProcess;
@property(nonatomic) _Bool beforeScrollHasCallWillDisappear; // @synthesize beforeScrollHasCallWillDisappear=_beforeScrollHasCallWillDisappear;
@property(nonatomic) long long beforeScrollIdx; // @synthesize beforeScrollIdx=_beforeScrollIdx;
@property(nonatomic) long long willDisplayIdx; // @synthesize willDisplayIdx=_willDisplayIdx;
@property(nonatomic) _Bool hasInitialized; // @synthesize hasInitialized=_hasInitialized;
@property(retain, nonatomic) NSString *dequeueViewIdentifier; // @synthesize dequeueViewIdentifier=_dequeueViewIdentifier;
@property(nonatomic) long long dequeueProcessIndex; // @synthesize dequeueProcessIndex=_dequeueProcessIndex;
@property(retain, nonatomic) WCFinderArbitraryResueItem *reuseHead; // @synthesize reuseHead=_reuseHead;
@property(retain, nonatomic) NSMutableDictionary *pageInfoMap; // @synthesize pageInfoMap=_pageInfoMap;
@property(retain, nonatomic) NSMutableDictionary *pageVCMetaMap; // @synthesize pageVCMetaMap=_pageVCMetaMap;
@property(retain, nonatomic) NSMutableDictionary *pageCreatorMap; // @synthesize pageCreatorMap=_pageCreatorMap;
@property(retain, nonatomic) NSMutableDictionary *bannerCreatorMap; // @synthesize bannerCreatorMap=_bannerCreatorMap;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(retain, nonatomic) NSArray *tabObjectList; // @synthesize tabObjectList=_tabObjectList;
@property(retain, nonatomic) NSArray *tabIdList; // @synthesize tabIdList=_tabIdList;
@property(nonatomic) _Bool headerPinTop; // @synthesize headerPinTop=_headerPinTop;
@property(nonatomic) double fadeNavBarOffset; // @synthesize fadeNavBarOffset=_fadeNavBarOffset;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WCFinderTabSwitchView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) _Bool tabViewBlurBG; // @synthesize tabViewBlurBG=_tabViewBlurBG;
@property(nonatomic) long long statusBarConfig; // @synthesize statusBarConfig=_statusBarConfig;
@property(nonatomic) _Bool autoAdjustScrollViewMinContentSize; // @synthesize autoAdjustScrollViewMinContentSize=_autoAdjustScrollViewMinContentSize;
@property(nonatomic) _Bool autoSetupScrollViewNeverAdjustInset; // @synthesize autoSetupScrollViewNeverAdjustInset=_autoSetupScrollViewNeverAdjustInset;
@property(nonatomic) _Bool autoFadeNavBarWhenHasHeader; // @synthesize autoFadeNavBarWhenHasHeader=_autoFadeNavBarWhenHasHeader;
@property(nonatomic) _Bool autoAdjustsScrollViewInsets; // @synthesize autoAdjustsScrollViewInsets=_autoAdjustsScrollViewInsets;
@property(nonatomic) __weak id <WCFinderArbitraryPageViewDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WCFinderArbitraryPageViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)notifyPageDidDisappear:(id)arg1 animated:(_Bool)arg2;
- (void)notifyPageWillDisappear:(id)arg1 animated:(_Bool)arg2;
- (void)notifyPageDidAppear:(id)arg1 animated:(_Bool)arg2;
- (void)notifyPageWillAppear:(id)arg1 animated:(_Bool)arg2;
- (unsigned long long)tabSwitchView:(id)arg1 unreadCountForTabAtIndex:(long long)arg2;
- (id)tabSwitchView:(id)arg1 uniqueObjectForIndex:(unsigned long long)arg2;
- (id)tabSwitchView:(id)arg1 titleForTabAtIndex:(long long)arg2;
- (id)tabSwitchView:(id)arg1 customTabViewAtIndex:(long long)arg2;
- (long long)numberOfTabSwitchView:(id)arg1;
- (void)_swizzleUseTransparentNavibar:(id)arg1;
- (void)emptyViewLifeTimeMethod:(_Bool)arg1;
- (void)_swizzleVC:(id)arg1 lifeTimeMethod:(SEL)arg2;
- (void)_fillLifeCycleMethodForPageInfo:(id)arg1;
- (void)_swizzleVCLifeTimeMethod:(id)arg1;
- (void)_swizzleVC:(id)arg1;
- (void)_swizzleHostVC:(id)arg1;
- (void)positionHeaderViewWithPageInfo:(id)arg1;
- (void)onPageScrollViewDidScroll:(id)arg1 index:(long long)arg2;
- (void)emptyImplScrollViewDidScroll:(id)arg1;
- (void)addScrollViewDidSrollMethod:(id)arg1 delegate:(id)arg2;
- (void)hookScrollView:(id)arg1 index:(long long)arg2;
- (long long)backForwardSelected;
- (void)onClickRetry;
- (void)setupLoadingView:(_Bool)arg1;
- (double)blank30PercentPos;
- (double)blankHeight;
- (void)setupStatusLabelWithText:(id)arg1;
- (void)showError:(id)arg1;
- (void)showEmpty;
- (void)showLoading;
- (void)notifyPageVCEndDrag;
- (void)_onDraggingScrollViewDidScroll:(id)arg1;
- (void)withEndScrollProcess:(CDUnknownBlockType)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_handleEndDrag:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (struct ConfigOffset)createContentOffsetAlignView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)runCollectionAction:(CDUnknownBlockType)arg1 animate:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onTabSwitchView:(id)arg1 selectedIndexChangedFrom:(long long)arg2 to:(long long)arg3;
- (_Bool)onTabSwitchViewUserSelectIdx:(long long)arg1 oldIdx:(long long)arg2 animated:(_Bool)arg3 context:(void *)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_findScrollViewInPageView:(id)arg1;
- (id)_dequeuePageViewVC:(id)arg1 index:(long long)arg2;
- (id)dequeuePageViewVC:(id)arg1 index:(long long)arg2;
- (id)_dequeuePageView:(id)arg1 index:(long long)arg2;
- (id)dequeuePageViewWithIdentifier:(id)arg1 index:(long long)arg2;
- (id)dequeuePageView:(Class)arg1 index:(long long)arg2;
- (id)getPageInfo:(_Bool)arg1 idx:(long long)arg2;
@property(readonly, nonatomic) long long currentIndex;
- (unsigned long long)indexForVC:(id)arg1;
- (unsigned long long)indexForBanner:(id)arg1;
- (id)pageViewAtIndex:(long long)arg1;
- (id)dequeueTabView:(id)arg1;
- (id)_dequeueBannerView:(Class)arg1 index:(long long)arg2;
- (id)dequeueBannerView:(Class)arg1 index:(long long)arg2;
- (id)_ensureBannerForPage:(long long)arg1;
- (void)_enqueuePageVC:(id)arg1 identifier:(id)arg2;
- (void)_enqueuePageView:(id)arg1 identifier:(id)arg2;
- (id)_findReuseVCForIdentifier:(id)arg1;
- (id)_findReuseViewForIdentifier:(id)arg1;
- (void)updateTabViewPos;
- (double)calculateContentInsetTop;
- (void)onHeaderViewFrameChange;
- (void)adjustPositionForHeaders:(id)arg1;
- (void)moveHeadersToView:(id)arg1;
- (_Bool)isSetNormalToBlackStyle;
- (id)normalTintColor;
- (id)fadeTintColor;
- (void)updateStatusBarConfig;
- (void)setupVCNavBar:(id)arg1;
- (void)setupVCNavBar;
- (id)accessibilityElements;
- (void)unloadUnDisplayPages;
- (void)displayViewsInArea:(double)arg1 right:(double)arg2 returnPages:(id *)arg3;
- (void)refreshTabs;
- (void)selectedPageAtIdx:(long long)arg1 animated:(_Bool)arg2;
- (void)ensurePage:(long long)arg1 invokeUnloadVC:(_Bool)arg2;
- (void)unloadPageViewAtIdex:(long long)arg1;
- (void)reloadPageViewForIdx:(long long)arg1;
- (void)reloadTabViewForIdx:(long long)arg1;
- (void)reloadBannerViewForIdx:(long long)arg1;
- (void)reloadBannerView;
- (void)setupScrollView;
- (void)reload;
- (id)createTabIdList:(id)arg1;
- (void)apply:(id)arg1;
- (void)applyWithIds:(id)arg1;
- (void)cleanReusePageView:(id)arg1;
- (void)registerTabView:(Class)arg1 forIdentifier:(id)arg2 configer:(CDUnknownBlockType)arg3 updater:(CDUnknownBlockType)arg4;
- (void)registerBannerClass:(Class)arg1 setter:(CDUnknownBlockType)arg2;
- (void)registerBannerClass:(Class)arg1;
- (void)registerPageVCClass:(Class)arg1 identifier:(id)arg2;
- (void)registerPageClass:(Class)arg1 identifier:(id)arg2 setter:(CDUnknownBlockType)arg3;
- (void)registerPageClass:(Class)arg1 identifier:(id)arg2;
- (void)registerPageClass:(Class)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)layoutSubviews;
@property(nonatomic) _Bool bounce;
@property(readonly, nonatomic) long long pageNumber;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

