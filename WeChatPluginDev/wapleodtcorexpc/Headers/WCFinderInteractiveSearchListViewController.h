//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderFeedListView, WCFinderInteractiveSearchListViewModel;

@interface WCFinderInteractiveSearchListViewController
{
    WCFinderInteractiveSearchListViewModel *_viewModel;
    WCFinderFeedListView *_listView;
    long long _openInitialIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long openInitialIndex; // @synthesize openInitialIndex=_openInitialIndex;
@property(retain, nonatomic) WCFinderFeedListView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) WCFinderInteractiveSearchListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (_Bool)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (void)removeContentVM:(id)arg1;
- (void)finderFeedList:(id)arg1 scrollActionSheet:(id)arg2 delContentVM:(id)arg3;
- (void)updateLoadState;
- (void)onSearchVMSectionEmpty;
- (void)onSearchVMSectionLoadingStateChanged:(id)arg1;
- (void)onSearchVMSecitonChanged:(id)arg1;
- (_Bool)useTransparentNavibar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithViewModel:(id)arg1 index:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

