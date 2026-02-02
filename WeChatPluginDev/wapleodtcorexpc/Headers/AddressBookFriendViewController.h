//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AddressBookFriend, CContactVerifyLogic, CContactVerifyPreCheckBusinessLogic, ContactInfoViewController, MMTableView, NSMutableArray, NSMutableDictionary, NSString, UIButton, UITextField, WCSearcher;

@interface AddressBookFriendViewController
{
    MMTableView *m_tableView;
    UITextField *m_searchTextField;
    UIButton *m_searchBtn;
    AddressBookFriend *m_oCurrentFriendWrap;
    NSMutableArray *m_arrAddressBookFriendList;
    NSMutableDictionary *m_dicNicknameToFriends;
    NSMutableArray *m_arrFilteredFriendList;
    ContactInfoViewController *m_CurrentFriendItemView;
    CContactVerifyLogic *m_oContactVerifyLogic;
    NSMutableArray *m_arrKey;
    NSMutableDictionary *m_dicFriendList;
    CContactVerifyPreCheckBusinessLogic *m_verifyPreCheckBusinessLogic;
    NSMutableDictionary *m_cacheContactDic;
    WCSearcher *_searcher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCSearcher *searcher; // @synthesize searcher=_searcher;
@property(retain, nonatomic) ContactInfoViewController *m_CurrentFriendItemView; // @synthesize m_CurrentFriendItemView;
@property(retain, nonatomic) AddressBookFriend *m_oCurrentFriendWrap; // @synthesize m_oCurrentFriendWrap;
- (id)getViewController;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)wcsSearchBarShouldBeginEditing:(id)arg1;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)bindPhoneReturn;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)onUpdateContact:(id)arg1;
- (void)onRemoveContact;
- (void)onAddContact;
- (id)getVerifyPreCheckBusinessLogic;
- (void)onContactVerifyPreCheckBusinessSuccess:(id)arg1 opcode:(unsigned int)arg2;
- (void)onContactsItemViewRightButtonClick:(id)arg1;
- (void)verifyContact:(id)arg1;
- (void)onContactVerifyFillVerifyMsg:(id)arg1;
- (void)onSendVerifyMsgCancel;
- (void)contactSendRequestOk:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)onContactVerifyFail;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeAddressBookFriendCell:(id)arg1 row:(unsigned long long)arg2 section:(unsigned long long)arg3 tableView:(id)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)newAddressBookFriendArrived;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)loadData:(_Bool)arg1;
- (void)trySyncAddressBook;
- (void)sortFriendList;
- (void)stopLoading;
- (void)startLoading;
- (_Bool)canSyncAddressBook;
- (void)dealloc;
- (id)init;
- (_Bool)isForbidPageSheet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

