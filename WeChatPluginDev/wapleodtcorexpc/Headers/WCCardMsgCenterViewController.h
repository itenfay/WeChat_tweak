//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUIActivityIndicatorView, MMUIButton, MMUILabel, NSMutableArray, NSMutableDictionary, NSString, UIScrollView, WCNewShareCardConsumedView;

@interface WCCardMsgCenterViewController
{
    NSMutableArray *_msgList;
    NSMutableDictionary *_cellHeightDic;
    UIScrollView *_emptyView;
    MMTableView *_tableView;
    MMUIButton *_footerView;
    MMUIActivityIndicatorView *_activityView;
    MMUILabel *_loadLabel;
    unsigned int _curMinUpdateTime;
    NSString *_lastShareCardConsumedMsgCardID;
    WCNewShareCardConsumedView *_newConsumendView;
    _Bool _bForNewMsg;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bForNewMsg; // @synthesize bForNewMsg=_bForNewMsg;
@property(retain, nonatomic) NSMutableArray *msgList; // @synthesize msgList=_msgList;
- (void)onShareCardAfterConsumed:(_Bool)arg1;
- (void)onJumpUrl:(id)arg1;
- (void)onAcceptCard:(id)arg1;
- (void)onAction:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClearAllMsg;
- (void)onOperate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onLoadMore;
- (void)onFooterClicked;
- (_Bool)isAddedMsg:(id)arg1;
- (void)safeAddMsgList:(id)arg1;
- (void)initData;
- (void)reloadTableView;
- (void)hideEmptyView;
- (void)sortMsgList;
- (void)genNormalCell:(id)arg1 IndexPath:(id)arg2;
- (void)initEmptyView;
- (void)updateTableFooterHasMore:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)initTableView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)initNavigationBar;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

