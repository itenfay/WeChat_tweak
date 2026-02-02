//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UITableView, UITableViewDiffableDataSource, UIView, WCFinderDataLoadTips, WCFinderRefreshTableFooterView;

@interface WCFinderProfilePaidCollectionPage
{
    UITableView *_tableView;
    WCFinderRefreshTableFooterView *_footerView;
    UITableViewDiffableDataSource *_tableViewDataSource;
    WCFinderDataLoadTips *_emptyTips;
    UIView *_topSeperator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *topSeperator; // @synthesize topSeperator=_topSeperator;
@property(retain, nonatomic) WCFinderDataLoadTips *emptyTips; // @synthesize emptyTips=_emptyTips;
@property(retain, nonatomic) UITableViewDiffableDataSource *tableViewDataSource; // @synthesize tableViewDataSource=_tableViewDataSource;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)onDataLoadTipsClickRetry;
- (void)reportPaidCollectionWithIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onListLoadingStateModified;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)onProfilePaidCollectionVMDataChanged;
- (void)layoutEmptyTips;
- (void)updateLoadingState;
- (void)setupDataSource;
- (void)viewWillApear;
- (void)viewDidLoad;
- (id)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

