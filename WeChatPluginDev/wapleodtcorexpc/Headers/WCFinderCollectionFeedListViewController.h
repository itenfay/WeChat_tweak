//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderCollectionFeedListVCParams, WCFinderCollectionFeedListViewModel, WCFinderEmptyTipsView, WCFinderFeedListView;
@protocol WCFinderCollectionFeedListViewControllerDelegate;

@interface WCFinderCollectionFeedListViewController
{
    _Bool _shouldPresentCollectionListAutomatically;
    id <WCFinderCollectionFeedListViewControllerDelegate> _delegate;
    WCFinderFeedListView *_feedListView;
    WCFinderCollectionFeedListViewModel *_viewModel;
    WCFinderEmptyTipsView *_emptyTipsView;
    WCFinderCollectionFeedListVCParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCollectionFeedListVCParams *params; // @synthesize params=_params;
@property(retain, nonatomic) WCFinderEmptyTipsView *emptyTipsView; // @synthesize emptyTipsView=_emptyTipsView;
@property(retain, nonatomic) WCFinderCollectionFeedListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(nonatomic) _Bool shouldPresentCollectionListAutomatically; // @synthesize shouldPresentCollectionListAutomatically=_shouldPresentCollectionListAutomatically;
@property(nonatomic) __weak id <WCFinderCollectionFeedListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionHalfListWillAppear:(id)arg1;
- (id)fetchCollectionHalfListSheetWithContentVM:(id)arg1 paidCollection:(id)arg2;
- (id)fetchCollectionHalfListSheetWithContentVM:(id)arg1 collectionInfo:(id)arg2;
- (void)handleNeedPayFeedClickWithContentVM:(id)arg1;
- (_Bool)collectionHalfList:(id)arg1 handleConsumeSuccessWithTargetTid:(id)arg2;
- (_Bool)collectionHalfList:(id)arg1 handleClickContentVM:(id)arg2;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)updateLoaddingState;
- (void)updateNoMoreDataState;
- (void)onFeedArrayDataChange:(id)arg1 context:(id)arg2;
- (void)finderFeedListViewClickCollectionBubble:(id)arg1;
- (_Bool)finderFeedListView:(id)arg1 processingHeaderClick:(id)arg2 avatarType:(unsigned long long)arg3 contentVM:(id)arg4;
- (_Bool)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)finderFeedList:(id)arg1 actionConfigureWithContentVM:(id)arg2;
- (_Bool)finderFeedListViewShowsMoreButton:(id)arg1;
- (_Bool)isInSubScene;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)tryAutoPlayNextFeedWithContentVM:(id)arg1;
- (void)finderFeedListMediaCellBrowsePhotoLongTime:(id)arg1;
- (void)finderFeedListMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (_Bool)finderFeedListViewEnableSwipeGesturePushProfilePage:(id)arg1;
- (void)finderFeedListViewHeaderFetchMoreData:(id)arg1;
- (_Bool)finderFeedListViewHeaderCanFetchData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (id)finderFeedListView:(id)arg1 customCellForRowAtIndexPath:(id)arg2;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (_Bool)finderFeedListView:(id)arg1 customViewAtSection:(long long)arg2;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (void)presentCollectionHalfScreenListWithContentVM:(id)arg1;
- (void)showPaidCollectionSkipToastWithContentVM:(id)arg1;
- (void)tryGoDestinationFeedAndPresentHalfScreen;
- (void)configureNavigationTitle;
- (void)configureTableView;
- (void)_setupPageReport;
- (void)viewDidTransitionToNewSize;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)updateLandSpace:(struct CGSize)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)useTransparentNavibar;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)setupFeedListDataSource;
- (void)viewDidLoad;
- (void)viewWillBePoped:(_Bool)arg1;
- (_Bool)shouldHideNavigationBar;
- (id)initWithViewModel:(id)arg1 withParams:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

