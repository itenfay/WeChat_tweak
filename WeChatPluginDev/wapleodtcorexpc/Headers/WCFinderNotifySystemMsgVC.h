//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UITableView, UITableViewDiffableDataSource, WCFinderDataLoadTips, WCFinderNotifySystemMsgVM, WCFinderRefreshTableFooterView;

@interface WCFinderNotifySystemMsgVC
{
    UITableView *_tableView;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderDataLoadTips *_dataLoadTips;
    UITableViewDiffableDataSource *_tableViewDataSource;
    WCFinderNotifySystemMsgVM *_vm;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderNotifySystemMsgVM *vm; // @synthesize vm=_vm;
@property(retain, nonatomic) UITableViewDiffableDataSource *tableViewDataSource; // @synthesize tableViewDataSource=_tableViewDataSource;
@property(retain, nonatomic) WCFinderDataLoadTips *dataLoadTips; // @synthesize dataLoadTips=_dataLoadTips;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void)registerYReportSdk;
- (void)onListLoadingStateModified;
- (void)onNotifySystemMsgDataChanged;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)onDataLoadTipsClickRetry;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)showMentionDetailViewController:(id)arg1 navigationTitle:(id)arg2 viewModel:(id)arg3 shouldShowLikeList:(_Bool)arg4;
- (void)showDataItemWasPrivateSetTips;
- (void)showDataItemWasDeletedTips;
- (void)showDataItemDetailVCActionWithViewModel:(id)arg1 shouldShowLikeList:(_Bool)arg2;
- (void)showNotifyLinkActionWithViewModel:(id)arg1;
- (void)reportPrivateMsgJumperWithViewModel:(id)arg1 eventType:(long long)arg2;
- (void)reloadTableData;
- (void)updateLoadingState;
- (void)layoutLoadTips;
- (void)setupLoadingState;
- (id)cellWithIndexPath:(id)arg1 itemID:(id)arg2;
- (void)setupDataSource;
- (void)setupTableView;
- (void)viewDidLoad;
- (id)initWithFinderUsername:(id)arg1 identityScene:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

