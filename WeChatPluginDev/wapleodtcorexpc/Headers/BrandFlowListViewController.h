//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandFlowListLogic, BrandFlowListReportHelperItem, NSMutableArray, NSMutableDictionary, NSString, UIScreenEdgePanGestureRecognizer, WCFinderFeedListView;
@protocol BrandFlowListViewControllerDelegate;

@interface BrandFlowListViewController
{
    _Bool _hasSendExposeEventAfterEnter;
    _Bool _hasPreloadTemplateTypeCommonShare;
    unsigned int _currentShowIndex;
    int _needDeleteIndex;
    id <BrandFlowListViewControllerDelegate> _delegate;
    BrandFlowListReportHelperItem *_reportHelperItem;
    WCFinderFeedListView *_feedListView;
    NSMutableDictionary *_url2webviewVC;
    unsigned long long _navbarScene;
    NSMutableArray *_arrCellData;
    BrandFlowListLogic *_flowListLogic;
    UIScreenEdgePanGestureRecognizer *_webviewScreenEdgePanGesture;
}

- (void).cxx_destruct;
@property(nonatomic) int needDeleteIndex; // @synthesize needDeleteIndex=_needDeleteIndex;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *webviewScreenEdgePanGesture; // @synthesize webviewScreenEdgePanGesture=_webviewScreenEdgePanGesture;
@property(nonatomic) _Bool hasPreloadTemplateTypeCommonShare; // @synthesize hasPreloadTemplateTypeCommonShare=_hasPreloadTemplateTypeCommonShare;
@property(nonatomic) _Bool hasSendExposeEventAfterEnter; // @synthesize hasSendExposeEventAfterEnter=_hasSendExposeEventAfterEnter;
@property(retain, nonatomic) BrandFlowListLogic *flowListLogic; // @synthesize flowListLogic=_flowListLogic;
@property(retain, nonatomic) NSMutableArray *arrCellData; // @synthesize arrCellData=_arrCellData;
@property(nonatomic) unsigned long long navbarScene; // @synthesize navbarScene=_navbarScene;
@property(nonatomic) unsigned int currentShowIndex; // @synthesize currentShowIndex=_currentShowIndex;
@property(retain, nonatomic) NSMutableDictionary *url2webviewVC; // @synthesize url2webviewVC=_url2webviewVC;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(retain, nonatomic) BrandFlowListReportHelperItem *reportHelperItem; // @synthesize reportHelperItem=_reportHelperItem;
@property(nonatomic) __weak id <BrandFlowListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onBrandFlowListItemBeDisliked:(id)arg1;
- (void)report30755ForAction:(unsigned long long)arg1 cellModel:(id)arg2 stayTime:(unsigned long long)arg3;
- (void)report30752;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)updateTopBarWithScene:(unsigned long long)arg1;
- (void)changeToNewIndex:(unsigned int)arg1;
- (void)commonHandleScrollEnd:(id)arg1;
- (void)finderFeedListViewDidEndScrollingAnimation:(id)arg1;
- (void)finderFeedListViewDidEndDecelerating:(id)arg1;
- (void)finderFeedListView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (id)finderFeedListView:(id)arg1 customCellForRowAtIndexPath:(id)arg2;
- (_Bool)finderFeedListView:(id)arg1 customViewAtSection:(long long)arg2;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (void)relayoutWebContentWithFullScreen:(_Bool)arg1;
- (id)onWebViewPassHandleDeviceInfoWithAction:(id)arg1 params:(id)arg2 Webview:(id)arg3;
- (_Bool)onWebViewCanPassHandleDeviceInfoWithAction:(id)arg1 Webview:(id)arg2;
- (id)currentShownWebviewVC;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)onClickDislikeMenuWithWebview:(id)arg1;
- (_Bool)shouldShowDislikeMenuWithWebview:(id)arg1;
- (id)parentNavigationItemWithWebview:(id)arg1;
- (void)brandFlowListHandleScreenEdgePanGesture:(id)arg1;
- (void)onWebViewControllerRecieveImmerseFoldFullArticleEvent:(id)arg1;
- (void)onWebViewController:(id)arg1 setDisableWebInterativePop:(_Bool)arg2;
- (void)enableInteractivePopForAllWebviewIfNeeded;
- (void)disableInteractivePopForAllWebviewIfNeeded;
- (void)onWebViewControllerRecieveImmerseReadFullArticleEvent:(id)arg1;
- (unsigned int)itemShowTypeWithIndex:(long long)arg1;
- (void)deleteUnSupplyModels;
- (void)replaceWithSupplyModel:(id)arg1;
- (_Bool)isNeedSupply;
- (id)articleUrlWithIndex:(long long)arg1;
- (unsigned long long)indexOfArticleUrl:(id)arg1;
- (void)tryReleaseFarAwayWebview;
- (id)webviewVCWithIndex:(unsigned int)arg1;
- (void)sendExposeArticleEventWithIndex:(unsigned int)arg1 isExpose:(_Bool)arg2;
- (id)createWebviewWithUrl:(id)arg1 itemShowType:(unsigned int)arg2 articleCellModel:(id)arg3;
- (void)tryPreloadNextWebview;
- (_Bool)forbidCreateNavHeader;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (_Bool)m_bInteractivePopEnabled;
- (id)navigationBarBackgroundColor;
- (_Bool)isShowArticle;
- (void)configureTableView;
- (void)initView;
- (void)onNavBarLeftCloseButtonClicked;
- (void)onNavBarLeftBackButtonClicked;
- (void)onOperate:(id)arg1;
- (void)updateNavbarWithScene:(unsigned long long)arg1;
- (void)initNavbar;
- (void)requestRecommendDataWithScene:(unsigned long long)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)tryPreloadNeededTemplateWithModels:(id)arg1;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)dealloc;
- (id)initWithOftenReadModels:(id)arg1 index:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

