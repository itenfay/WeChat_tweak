//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LVDiffableDataSource, NSString, UITableView, WCFinderDataLoadTips, WCFinderLongVideoSeeLaterListVM, WCFinderStreamFooterView;

@interface WCFinderLongVideoSeeLaterListVC
{
    UITableView *_tableView;
    LVDiffableDataSource *_tableViewSource;
    WCFinderDataLoadTips *_dataLoadTips;
    WCFinderStreamFooterView *_footer;
    WCFinderLongVideoSeeLaterListVM *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLongVideoSeeLaterListVM *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderStreamFooterView *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) WCFinderDataLoadTips *dataLoadTips; // @synthesize dataLoadTips=_dataLoadTips;
@property(retain, nonatomic) LVDiffableDataSource *tableViewSource; // @synthesize tableViewSource=_tableViewSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)registerYReportSdk;
- (void)onFullScreenDidEndPlayContentVM:(id)arg1 finderPlayerReport:(id)arg2;
- (_Bool)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (int)commentScene;
- (void)layoutLoadTips;
- (void)onListLoadingStateModified;
- (int)seeLaterCellGetCommentScene;
- (void)onSeeLaterCellClickDeleteWithContentVM:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)diffableDataSource:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadData;
- (void)setupLoadingState;
- (void)setupDataSource;
- (void)setupUI;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidPushOrPresent:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

