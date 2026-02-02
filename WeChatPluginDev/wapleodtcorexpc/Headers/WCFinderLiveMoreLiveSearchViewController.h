//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTagTextField, MMTitleView, NSString, UICollectionView, UIImageView, UILabel, UIPanGestureRecognizer, UITapGestureRecognizer, WCFinderAnimationLoadingView, WCFinderMoreLiveSearchHistoryView, WCFinderMoreLiveSearchViewModel, WCFinderStreamFooterView, WCFinderStreamLayout;

@interface WCFinderLiveMoreLiveSearchViewController
{
    MMTagTextField *_navSearchTextField;
    MMTitleView *_titleView;
    WCFinderMoreLiveSearchViewModel *_viewModel;
    UICollectionView *_collectionView;
    WCFinderStreamLayout *_streamLayout;
    WCFinderStreamFooterView *_refreshFooterView;
    WCFinderMoreLiveSearchHistoryView *_historyListView;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    UIImageView *_retryImageView;
    unsigned long long _footerRefreshState;
    UIPanGestureRecognizer *_fakePopViewGesture;
    NSString *_searchText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) UIPanGestureRecognizer *fakePopViewGesture; // @synthesize fakePopViewGesture=_fakePopViewGesture;
@property(nonatomic) unsigned long long footerRefreshState; // @synthesize footerRefreshState=_footerRefreshState;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderMoreLiveSearchHistoryView *historyListView; // @synthesize historyListView=_historyListView;
@property(retain, nonatomic) WCFinderStreamFooterView *refreshFooterView; // @synthesize refreshFooterView=_refreshFooterView;
@property(retain, nonatomic) WCFinderStreamLayout *streamLayout; // @synthesize streamLayout=_streamLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) WCFinderMoreLiveSearchViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MMTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MMTagTextField *navSearchTextField; // @synthesize navSearchTextField=_navSearchTextField;
- (void)registerYReportSdk;
- (void)exposeItemViewAppear;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onSearchContactCollectionViewCell:(id)arg1 LiveNowViewDidClick:(id)arg2;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onHistoryViewDeleteSearchRecord:(id)arg1;
- (void)onHistoryViewClearAllSerchHistory;
- (void)doSearchAction:(id)arg1;
- (void)onHistoryViewSelectSearchRecord:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadDataWrap;
- (void)onFinderMoreLiveSearchResultReload:(id)arg1;
- (void)onFinderMoreLiveSearchResultNetxPageError;
- (void)onFinderMoreLiveSearchResultNoMore;
- (void)onFinderMoreLiveSearchResultError;
- (void)onFinderMoreLiveSearchResultAppendInfos:(id)arg1;
- (void)onFinderMoreLiveSearchResultAppendData:(id)arg1;
- (void)onFinderMoreLiveSearchResultChanged;
- (void)onFinderMoreLiveSearchResultEmpty;
- (void)onFinderMoreLiveSearchContactHeaderClickMore;
- (void)onMoreLiveSearchClickCoverContact:(id)arg1 dataItem:(id)arg2;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)hideSearchView;
- (void)showSearchResultView;
- (void)showHistoryView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 decorationHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (long long)overrideUserInterfaceStyle;
- (id)navigationBarBackgroundColor;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;
- (void)onTapClearButton;
- (void)stateRetryGestureAction:(id)arg1;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)showKeyboard;
- (unsigned long long)viewState;
- (void)onTextFieldChanged:(id)arg1;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)handleFakePopGesture:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupHistoryListView;
- (void)setupLayoutAndCollectionView;
- (void)initNaviBar;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

