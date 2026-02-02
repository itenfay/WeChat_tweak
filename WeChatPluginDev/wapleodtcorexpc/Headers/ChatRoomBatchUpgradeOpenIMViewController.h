//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatRoomBatchUpgradeOpenIMLogic, ContactsDataLogic, GroupSelectContactsViewController, MMTableView, NSMutableArray, NSMutableDictionary, NSString, UIButton;

@interface ChatRoomBatchUpgradeOpenIMViewController
{
    ChatRoomBatchUpgradeOpenIMLogic *m_chatRoomBatchUpgradeOpenIMLogic;
    MMTableView *m_tableView;
    NSMutableArray *m_needUpgradeOpenIMChatRoomAr;
    NSMutableDictionary *m_dicMultiSelect;
    GroupSelectContactsViewController *m_groupSelectContactsViewController;
    _Bool m_isHadCanUpgradeOpenIMGroupContact;
    UIButton *m_iSelectedBtn;
    NSMutableArray *m_upgradeOpenIMChatRoomUsrNameAr;
    NSMutableArray *m_normalChatRoomUsrNameAr;
    _Bool m_isDoAccept;
    _Bool m_isSeletedNormalChatRoom;
    ContactsDataLogic *m_contactsDataLogic;
    _Bool m_isHadReport;
    NSString *_chatRoomBatchUpgradeOpenIMTicket;
    NSString *_chatRoomBatchUpgradeOpenIMExtInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *chatRoomBatchUpgradeOpenIMExtInfo; // @synthesize chatRoomBatchUpgradeOpenIMExtInfo=_chatRoomBatchUpgradeOpenIMExtInfo;
@property(retain, nonatomic) NSString *chatRoomBatchUpgradeOpenIMTicket; // @synthesize chatRoomBatchUpgradeOpenIMTicket=_chatRoomBatchUpgradeOpenIMTicket;
- (id)navigationBarBackgroundColor;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (void)showErrorMessage:(id)arg1;
- (void)OnGetChatRoomBatchUpgradeOpenIMInfoWithTopTitleText:(id)arg1 andTitleText:(id)arg2 andContentText:(id)arg3;
- (void)onGroupSelectContactReturn:(id)arg1;
- (_Bool)onShouldSelectContact:(id)arg1;
- (void)openSelectGroup;
- (void)onCancel;
- (void)doIAccept;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getCellImage:(id)arg1;
- (void)makeCell:(id)arg1 ForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)makeEmptyTipCell:(id)arg1 ForRowAtIndexPath:(id)arg2;
- (void)makeAddSelectChatRoomCell:(id)arg1 ForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)genFooterView;
- (void)reloadTableData;
- (id)genHeaderView;
- (void)initTableView;
- (void)reportBatchUpgradeAssociateChatRoom;
- (_Bool)checkIsShowEmptyTipCell;
- (id)getBeUpgradeContactsListMaxCount:(unsigned int)arg1;
- (_Bool)checkMaxNeedUpgradeOpenIMChatRoomArCount;
- (_Bool)isSelected:(id)arg1;
- (void)reloadData;
- (void)resetSelectedBtnOriAcceptBtn;
- (void)layoutISelectedBtn;
- (void)layoutView;
- (void)initData;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

