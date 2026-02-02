//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ChatRoomMemMsgDataLogic, MMTableView, NSMutableArray, NSMutableDictionary, NSString, WCTimeLineFooterView;

@interface ChatRoomMemMsgListViewController
{
    MMTableView *m_tableView;
    WCTimeLineFooterView *m_footerView;
    NSMutableArray *m_arrMsg;
    NSMutableDictionary *m_dicMsgView;
    ChatRoomMemMsgDataLogic *m_logic;
    _Bool m_bHasMoreItems;
    NSString *m_nsChatName;
    CContact *m_oMemContact;
    _Bool m_bLoading;
}

- (void).cxx_destruct;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)getMoreData;
- (void)onChatRoomMemMsgDataDone:(id)arg1 End:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getViewFor:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)onBackButtonClicked:(id)arg1;
- (void)updateTableFooterHeaderView;
- (id)initWithChat:(id)arg1 memContact:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

