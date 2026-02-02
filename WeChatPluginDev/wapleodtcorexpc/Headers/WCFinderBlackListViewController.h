//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, UITableView, UITapGestureRecognizer, WCFinderBlackListViewModel, WCFinderRefreshTableFooterView;

@interface WCFinderBlackListViewController
{
    UITableView *_tableView;
    WCFinderBlackListViewModel *_viewModel;
    WCFinderRefreshTableFooterView *_footerView;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderBlackListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)revertBlackContactDidFail;
- (void)revertBlackContactDidSuccess;
- (void)finderBlackListFetchFailWithErrorCode:(int)arg1;
- (void)finderBlackListViewModelNeedReloadDataWithContinueFlag:(_Bool)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resetDetailToInitStatusWithRetry:(_Bool)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)configureTableView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

