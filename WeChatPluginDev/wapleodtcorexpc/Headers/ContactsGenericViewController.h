//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString, WCSearcher;
@protocol contactsDelegate;

@interface ContactsGenericViewController
{
    MMTableView *m_tableView;
    NSMutableDictionary *m_dicAllContacts;
    NSMutableArray *m_arrAllKey;
    _Bool m_bSearching;
    WCSearcher *_searcher;
    NSMutableArray *m_arrFilteredContacts;
    NSMutableDictionary *_dicMatchTip;
    long long m_iViewType;
    NSString *m_nsDomain;
    _Bool m_bPopUp;
    id <contactsDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bPopUp; // @synthesize m_bPopUp;
@property(retain, nonatomic) NSString *m_nsDomain; // @synthesize m_nsDomain;
@property(nonatomic) long long m_iViewType; // @synthesize m_iViewType;
@property(nonatomic) __weak id <contactsDelegate> m_delegate; // @synthesize m_delegate;
- (double)getVisibleHeight;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)doSearch:(id)arg1;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initSearchBar;
- (void)initTableView;
- (void)initTitleArea;
- (void)initData;
- (void)onDone:(id)arg1;
- (void)loadContacts;
- (id)addSectionKey:(id)arg1;
- (void)showContactInfoView:(id)arg1;
- (void)reloadData;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)processNewContact:(id)arg1;
- (void)addContactInternal:(id)arg1;
- (void)tryDeleteContactInSection:(id)arg1;
- (void)deleteContact:(id)arg1 deleteInDB:(_Bool)arg2;
- (id)parseContactKey:(id)arg1;
- (void)processContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

