//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString, UILabel, WACommentListFooterTipView, WCTimeLineFooterView;

@interface TextStateNotifyMsgListViewController
{
    _Bool _isUnReadMode;
    _Bool _hasMoreReadMessage;
    double _cellHeight;
    NSString *_nsCurStateID;
    MMTableView *_tableView;
    NSMutableArray *_arrInfo;
    UILabel *_emptyLabel;
    WCTimeLineFooterView *_footerView;
    WACommentListFooterTipView *_footer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasMoreReadMessage; // @synthesize hasMoreReadMessage=_hasMoreReadMessage;
@property(retain, nonatomic) WACommentListFooterTipView *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) NSMutableArray *arrInfo; // @synthesize arrInfo=_arrInfo;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *nsCurStateID; // @synthesize nsCurStateID=_nsCurStateID;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) _Bool isUnReadMode; // @synthesize isUnReadMode=_isUnReadMode;
- (void)registerYReportSdk;
- (void)onReceiveCommentItem:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onClickHeadImageWithInfo:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onClickReadMore;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)openStateDetailPageWith:(id)arg1 refCommendId:(unsigned long long)arg2 popupLikePage:(_Bool)arg3;
- (void)openStateDetailPageWithId:(id)arg1 refCommendId:(unsigned long long)arg2 popupLikePage:(_Bool)arg3;
- (void)markAllNewMessageRead;
- (void)clearNotifications;
- (void)onTapClearNavigationItem;
- (void)onLoadMoreData:(id)arg1 loadCount:(unsigned int)arg2;
- (void)loadMoreData;
- (void)reloadTableView;
- (void)initView;
- (void)loadAllData;
- (void)initData;
- (void)initFooterView;
- (void)viewDidTransitionToNewSize;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

