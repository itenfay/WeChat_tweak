//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString, UITableView, WCTogetherHistoryReportSession, WCTogetherHistoryViewModel;

@interface WCTogetherHistoryViewController
{
    CContact *_contact;
    WCTogetherHistoryViewModel *_viewModel;
    UITableView *_tableView;
    WCTogetherHistoryReportSession *_historyReportSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTogetherHistoryReportSession *historyReportSession; // @synthesize historyReportSession=_historyReportSession;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WCTogetherHistoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void)onModifyTogetherFinished:(long long)arg1 itemID:(id)arg2 dataItem:(id)arg3;
- (void)userListViewController:(id)arg1 didSelectUserContact:(id)arg2;
- (void)onDeleteData;
- (void)onRestartUpload;
- (void)togetherViewModel:(id)arg1 viewItemDidClickFriendsInfo:(id)arg2;
- (void)togetherViewModel:(id)arg1 viewItem:(id)arg2 didClickMediaWithDataItem:(id)arg3 mediaItem:(id)arg4;
- (void)togetherViewModel:(id)arg1 viewItem:(id)arg2 didClickContentDetailWithDataItem:(id)arg3;
- (void)togetherViewModel:(id)arg1 viewItem:(id)arg2 didClickLocationInfoWithDataItem:(id)arg3;
- (void)togetherViewModel:(id)arg1 viewItem:(id)arg2 didClickContactInfoWithDataItem:(id)arg3 contact:(id)arg4;
- (void)togetherViewModelDidReloadData:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isSetNormalToBlackStyle;
- (void)handleModifyTogetherFinished:(long long)arg1 itemID:(id)arg2 dataItem:(id)arg3;
- (void)modifyTogetherListWithDataItem:(id)arg1;
- (void)confirmToModifyTogetherListWithDataItem:(id)arg1;
- (void)alertThatDataItemBlocked:(id)arg1;
- (void)openMultipleImageViewControllerWithViewItem:(id)arg1 dataItem:(id)arg2 mediaItem:(id)arg3;
- (_Bool)isDataItemPrivate:(id)arg1;
- (void)openDetailViewControllerWithDataItem:(id)arg1;
- (void)openUserProfileViewControllerWithContact:(id)arg1;
- (void)loadNavigationBar;
- (void)resizeTableFooterView;
- (void)reloadDataForTableView;
- (void)loadTableView;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

