//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat26WCFinderInterestFeedListVC
{
    MISSING_TYPE *vm;
    MISSING_TYPE *commentVC;
    MISSING_TYPE *$__lazy_storage_$_finderFeedListView;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)popSelf;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)useTransparentNavibar;
- (_Bool)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (_Bool)finderFeedListViewControllerForbidenDragDownClose;
- (id)minimizePageBizKey;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (void)finderFeedListView:(id)arg1 deleteContentVM:(id)arg2;
- (id)finderFeedList:(id)arg1 actionConfigureWithContentVM:(id)arg2;
- (_Bool)finderFeedListViewShowsMoreButton:(id)arg1;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (id)getCurMediaListObject;

@end

