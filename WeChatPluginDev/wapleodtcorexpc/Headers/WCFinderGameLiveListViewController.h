//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderGameLiveStarterViewModel, MMFinderGameLiveTabPageViewModel, MMFinderLiveGameSearchViewModel, MMFinderLiveGameUserInfo, MMLiveGameRecentlyPalyedView, MMLiveTaskId, MMTableView, MMUIActivityIndicatorView, MMUIButton, MMUISearchBar, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, UIButton, UILabel, UIView, WCFinderGameLiveListHeaderView, WCFinderLiveStarterReporter, WCFinderTabPageView, WCTimeLineFooterView;
@protocol WCFinderGameLiveListViewControllerDelegate;

@interface WCFinderGameLiveListViewController
{
    _Bool _showSearch;
    _Bool _isShowGameSearchResult;
    _Bool _isSearchVC;
    id <WCFinderGameLiveListViewControllerDelegate> _delegate;
    MMLiveTaskId *_liveTaskId;
    MMTableView *_tableView;
    WCTimeLineFooterView *_footerView;
    UILabel *_noSearchResultTipsLabel;
    UIView *_tableTopSeperator;
    UIView *_backgroundView;
    MMUISearchBar *_searchBar;
    UIButton *_closeButton;
    MMUIButton *_searchButton;
    UILabel *_headerTitle;
    NSMutableArray *_gameUserInfoList;
    NSMutableArray *_initialGameUserInfoList;
    NSMutableArray *_recentlyPlayGameUserInfoList;
    NSString *_appId;
    NSIndexPath *_lastSelectedIndexPath;
    MMFinderGameLiveStarterViewModel *_gameLiveVM;
    WCFinderLiveStarterReporter *_reporter;
    MMFinderLiveGameSearchViewModel *_searchViewModel;
    MMUIActivityIndicatorView *_activityIndicatorView;
    MMLiveGameRecentlyPalyedView *_recentlyPalyedView;
    long long _gameLiveEntryScene;
    WCFinderGameLiveListHeaderView *_headerView;
    MMFinderLiveGameUserInfo *_selectGameUserInfo;
    WCFinderTabPageView *_tabPageView;
    MMFinderGameLiveTabPageViewModel *_viewModel;
    NSMutableDictionary *_pageAdapterDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *pageAdapterDict; // @synthesize pageAdapterDict=_pageAdapterDict;
@property(retain, nonatomic) MMFinderGameLiveTabPageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderTabPageView *tabPageView; // @synthesize tabPageView=_tabPageView;
@property(retain, nonatomic) MMFinderLiveGameUserInfo *selectGameUserInfo; // @synthesize selectGameUserInfo=_selectGameUserInfo;
@property(retain, nonatomic) WCFinderGameLiveListHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool isSearchVC; // @synthesize isSearchVC=_isSearchVC;
@property(nonatomic) long long gameLiveEntryScene; // @synthesize gameLiveEntryScene=_gameLiveEntryScene;
@property(retain, nonatomic) MMLiveGameRecentlyPalyedView *recentlyPalyedView; // @synthesize recentlyPalyedView=_recentlyPalyedView;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) MMFinderLiveGameSearchViewModel *searchViewModel; // @synthesize searchViewModel=_searchViewModel;
@property(retain, nonatomic) WCFinderLiveStarterReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) MMFinderGameLiveStarterViewModel *gameLiveVM; // @synthesize gameLiveVM=_gameLiveVM;
@property(retain, nonatomic) NSIndexPath *lastSelectedIndexPath; // @synthesize lastSelectedIndexPath=_lastSelectedIndexPath;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) _Bool isShowGameSearchResult; // @synthesize isShowGameSearchResult=_isShowGameSearchResult;
@property(retain, nonatomic) NSMutableArray *recentlyPlayGameUserInfoList; // @synthesize recentlyPlayGameUserInfoList=_recentlyPlayGameUserInfoList;
@property(retain, nonatomic) NSMutableArray *initialGameUserInfoList; // @synthesize initialGameUserInfoList=_initialGameUserInfoList;
@property(retain, nonatomic) NSMutableArray *gameUserInfoList; // @synthesize gameUserInfoList=_gameUserInfoList;
@property(retain, nonatomic) UILabel *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain, nonatomic) MMUIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *tableTopSeperator; // @synthesize tableTopSeperator=_tableTopSeperator;
@property(retain, nonatomic) UILabel *noSearchResultTipsLabel; // @synthesize noSearchResultTipsLabel=_noSearchResultTipsLabel;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) _Bool showSearch; // @synthesize showSearch=_showSearch;
@property(nonatomic) __weak id <WCFinderGameLiveListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onHeaderAction;
- (id)geBackButton;
- (id)geCloseButton;
- (id)getCurrentLeftButton;
- (id)getScrollView;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onMaskTap;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onRecentlyPlayGameClicked:(id)arg1;
- (void)onGetMostRecentlyPlayGames:(id)arg1;
- (void)handleAfterGetSearchResultWithNextFlag:(_Bool)arg1;
- (void)onGetGameContinueSearchResult:(id)arg1 hasNext:(_Bool)arg2;
- (void)gameSearchBarWillSearch:(id)arg1 searchText:(id)arg2;
- (void)gameSearchBarClear:(id)arg1;
- (void)gameSearchBarCancel:(id)arg1;
- (void)gameBeginBeginEditing;
- (void)gameSearchBarTextDidBeginEditing:(id)arg1;
- (void)onSearchVMModelUpdateFinished;
- (void)showTableViewWithSearchGameList;
- (void)showTableViewWithInitialGameList;
- (void)showRecentlyPlayGameView;
- (_Bool)canJumpToGamePrepareLiveView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onListViewControllerDidelectWithgameUserInfo:(id)arg1 gamePageViewManager:(id)arg2;
- (id)managerAtTabIndex:(unsigned long long)arg1 filterIndex:(unsigned long long)arg2;
- (id)managerAtTabIndex:(unsigned long long)arg1;
- (void)finderTabPageView:(id)arg1 willSelectFilterAtIndex:(unsigned long long)arg2;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 gamePageViewManager:(id)arg3 gameUserInfo:(id)arg4;
- (id)emptyTipsConfigInFinderTabPagView:(id)arg1;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 tabViewAtIndex:(unsigned long long)arg2;
- (double)heightForTabViewContainerInFinderTabPageView:(id)arg1;
- (id)tabViewContainerInFinderTabPageView:(id)arg1;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (void)internalStartGameLive;
- (void)startGameLive;
- (id)topNavigationController;
- (void)onSelectGameToStartLive;
- (void)onBackButtonClicked;
- (void)mmsearchBarBecomeActive;
- (void)mmsearchBarResignActive;
- (void)onSearchButtonClicked;
- (id)genTableHeaderView;
- (void)stopSearchLoading;
- (void)startSearchLoading;
- (void)layoutActivityIndicatorView;
- (void)updateFooterView:(unsigned long long)arg1;
- (void)hideFooterView;
- (id)createSearchTableFooterView;
- (void)layoutNoSearchResultTipsLabel;
- (void)addGestureToResignInputView:(id)arg1;
- (void)initBackgroundView;
- (void)layoutUI;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithTaskId:(id)arg1 gameCategoryList:(id)arg2 gameUserInfoList:(id)arg3 isSearchVC:(_Bool)arg4 selectGameUserInfo:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

