//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel, UITableView, WCFinderAnimationLoadingView, WCFinderGroupMemberViewModel, WCFinderRefreshTableFooterView;

@interface WCFinderGroupMemberViewController
{
    UITableView *_tableView;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderAnimationLoadingView *_loadingView;
    WCFinderGroupMemberViewModel *_viewModel;
    UILabel *_headerTitleLabel;
    UILabel *_headerViewTitleLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *headerViewTitleLabel; // @synthesize headerViewTitleLabel=_headerViewTitleLabel;
@property(nonatomic) __weak UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(retain, nonatomic) WCFinderGroupMemberViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTitleCount:(unsigned long long)arg1;
- (void)viewDidLoad;
- (id)initWithFinderContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

