//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMTableView, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, WCSearcher;
@protocol WCPayContactSelectListBaseViewControllerDelegate;

@interface WCPayContactSelectListBaseViewController
{
    NSMutableArray *m_arrAllKey;
    _Bool m_bSearching;
    NSMutableArray *m_arrFilteredContacts;
    NSMutableDictionary *_dicMatchTip;
    _Bool m_isMultiple;
    _Bool _m_isHiddenAccessory;
    _Bool _shouldSeparateEnterpriseContact;
    MMTableView *m_tableView;
    NSMutableDictionary *m_dicMultiSelect;
    NSDictionary *m_dicExistContact;
    WCSearcher *m_searcher;
    NSMutableDictionary *m_dicAllContacts;
    id <WCPayContactSelectListBaseViewControllerDelegate> _m_delegate;
    CContact *_chatroomContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *chatroomContact; // @synthesize chatroomContact=_chatroomContact;
@property(nonatomic) __weak id <WCPayContactSelectListBaseViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool shouldSeparateEnterpriseContact; // @synthesize shouldSeparateEnterpriseContact=_shouldSeparateEnterpriseContact;
@property(nonatomic) _Bool m_isHiddenAccessory; // @synthesize m_isHiddenAccessory=_m_isHiddenAccessory;
@property(retain, nonatomic) NSMutableDictionary *m_dicAllContacts; // @synthesize m_dicAllContacts;
@property(retain, nonatomic) WCSearcher *m_searcher; // @synthesize m_searcher;
@property(retain, nonatomic) NSDictionary *m_dicExistContact; // @synthesize m_dicExistContact;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;
@property(nonatomic) _Bool m_isMultiple; // @synthesize m_isMultiple;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)sortResultContact:(id)arg1 matchTips:(id)arg2;
- (void)doSearch:(id)arg1;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)mmtableView:(id)arg1 accessibilityValueForSectionIndexTitle:(id)arg2;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (id)mmimageTableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (_Bool)isSelected:(id)arg1;
- (_Bool)isExisted:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadHeaderViewSelection;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadContacts;
- (id)addSectionKey:(id)arg1;
- (void)showContactInfoView:(id)arg1;
- (void)reloadDataTablew;
- (void)tryDeleteContactInSection:(id)arg1;
- (void)processNewContact:(id)arg1;
- (void)addContactInternal:(id)arg1;
- (id)parseContactKey:(id)arg1;
- (void)processContact:(id)arg1;
- (long long)compareContact:(id)arg1 withContact:(id)arg2;
- (long long)compareByContactKey:(id)arg1 withKey:(id)arg2;
- (double)getCellHeight;
- (double)getTableViewHeight;
- (void)setupContentView;
- (void)initView;
- (void)initTableHeaderView;
- (void)initSearchBar;
- (void)initTableView;
- (void)initTitleArea;
- (void)initData;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

