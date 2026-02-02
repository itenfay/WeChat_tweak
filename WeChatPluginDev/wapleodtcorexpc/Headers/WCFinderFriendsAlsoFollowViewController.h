//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UITableView, WCFinderAnimationLoadingView, WCFinderFriendsAlsoFollowViewModel, WCFinderRefreshTableFooterView;

@interface WCFinderFriendsAlsoFollowViewController
{
    unsigned long long _enterTime;
    WCFinderFriendsAlsoFollowViewModel *_viewModel;
    WCFinderAnimationLoadingView *_customLoadingView;
    UITableView *_tableView;
    WCFinderRefreshTableFooterView *_footerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCFinderAnimationLoadingView *customLoadingView; // @synthesize customLoadingView=_customLoadingView;
@property(retain, nonatomic) WCFinderFriendsAlsoFollowViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (void)registerYReportSdk;
- (int)feedViewControllerScene;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)onContactFollowStateUpdate:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)finderFriendsAlsoFollowCellDidClickFollowButton:(id)arg1;
- (void)finderFriendsAlsoFollowCell:(id)arg1 didClickCoverAtIndex:(unsigned long long)arg2 clickCell:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)makeReportUDFKV:(long long)arg1 clickItem:(long long)arg2 username:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)pushToProfileVCWithContactIndex:(unsigned long long)arg1 feedIndex:(unsigned long long)arg2 followCell:(id)arg3 clickFlowCell:(id)arg4;
- (void)setupUI;
- (void)refetchData;
- (void)fetchData;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;
- (id)initWithUsername:(id)arg1 fromUsername:(id)arg2 commentScene:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

