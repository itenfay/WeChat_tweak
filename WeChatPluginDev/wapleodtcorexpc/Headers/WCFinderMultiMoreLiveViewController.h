//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MultiMoreLiveEnterParams, NSMutableDictionary, NSString, UIColor, WCFinderDiscoveryLiveTabPageViewModel, WCFinderEmptyTipsView, WCFinderLivePageStayReporter, WCFinderTabPageView;

@interface WCFinderMultiMoreLiveViewController
{
    WCFinderTabPageView *_tabPageView;
    WCFinderEmptyTipsView *_emptyTipsView;
    NSMutableDictionary *_tabId2pageManagerDict;
    UIColor *_navigationBarColor;
    WCFinderDiscoveryLiveTabPageViewModel *_viewModel;
    MultiMoreLiveEnterParams *_customEnterParams;
    unsigned long long _initSelectedTabId;
    unsigned long long _initSelectedSubTabId;
    WCFinderLivePageStayReporter *_exposeReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLivePageStayReporter *exposeReporter; // @synthesize exposeReporter=_exposeReporter;
@property(nonatomic) unsigned long long initSelectedSubTabId; // @synthesize initSelectedSubTabId=_initSelectedSubTabId;
@property(nonatomic) unsigned long long initSelectedTabId; // @synthesize initSelectedTabId=_initSelectedTabId;
@property(retain, nonatomic) MultiMoreLiveEnterParams *customEnterParams; // @synthesize customEnterParams=_customEnterParams;
@property(retain, nonatomic) WCFinderDiscoveryLiveTabPageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIColor *navigationBarColor; // @synthesize navigationBarColor=_navigationBarColor;
@property(retain, nonatomic) NSMutableDictionary *tabId2pageManagerDict; // @synthesize tabId2pageManagerDict=_tabId2pageManagerDict;
@property(retain, nonatomic) WCFinderEmptyTipsView *emptyTipsView; // @synthesize emptyTipsView=_emptyTipsView;
@property(retain, nonatomic) WCFinderTabPageView *tabPageView; // @synthesize tabPageView=_tabPageView;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (id)finderMoreLivePageViewMangerChannelExtra:(id)arg1 tid:(id)arg2 isFold:(_Bool)arg3 index:(unsigned long long)arg4;
- (void)finderMoreLivePageViewMangerEnterLive:(id)arg1 dataItem:(id)arg2 isFold:(_Bool)arg3 index:(unsigned long long)arg4 isAutoPlaying:(_Bool)arg5;
- (_Bool)finderMoreLivePageAlwaysDarkStyle;
- (id)finderMoreLiveFeedViewBgColor;
- (void)finderMoreLivePageViewManger:(id)arg1 jumpToTabInfo:(id)arg2;
- (void)onFinderGetLiveTabsInfoFinished:(_Bool)arg1;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)finderTabPageView:(id)arg1 alphaOfTabContainerChanged:(double)arg2;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (id)emptyTipsConfigInFinderTabPagView:(id)arg1;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (double)finderTabPageView:(id)arg1 heightForTabViewAtIndex:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 tabViewAtIndex:(unsigned long long)arg2;
- (double)heightForTabViewContainerInFinderTabPageView:(id)arg1;
- (id)tabViewContainerInFinderTabPageView:(id)arg1;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (void)updateTitle;
- (unsigned int)getTabType;
- (void)checkUpdateSubTabContextId:(unsigned long long)arg1;
- (void)reportExposeTabInfo:(id)arg1 toTabInfo:(id)arg2 isEnter:(_Bool)arg3;
- (id)reportPassInfoDict;
- (void)reloadTabPage:(unsigned long long)arg1;
- (id)currentStyleColor:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (id)navigationBarBackgroundColor;
- (long long)preferredStatusBarStyle;
- (id)channelExtraWithManager:(id)arg1 isClick:(_Bool)arg2 dataItem:(id)arg3 index:(unsigned long long)arg4 isAutoPlaying:(_Bool)arg5;
- (unsigned long long)defaultSelectedTabIndex;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onBackButtonClicked:(id)arg1;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCustomEnterParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

