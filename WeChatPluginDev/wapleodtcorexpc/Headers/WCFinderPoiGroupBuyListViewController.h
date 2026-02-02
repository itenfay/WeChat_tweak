//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UITableView, WCFinderPoiGroupBuyListViewModel, WCFinderRefreshTableFooterView;

@interface WCFinderPoiGroupBuyListViewController
{
    WCFinderPoiGroupBuyListViewModel *_viewModel;
    UITableView *_tableView;
    WCFinderRefreshTableFooterView *_footerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCFinderPoiGroupBuyListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)registerYReportSdk;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (_Bool)finderFooterStatrLoadingWithoutDragging;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)onPoiGroupBuyActionButtonDidClick:(id)arg1;
- (void)finderPoiGroupBuyRequestFailWithErrorCode:(int)arg1;
- (void)finderPoiGroupBuyNoMoreData;
- (void)finderPoiGroupBuyAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderPoiGroupBuyReloadAllData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithOpenParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

