//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactTagData, ContactsSearchController, MMTableView, MMUIViewController, NSMutableArray, NSMutableDictionary, NSString, UIView;
@protocol ContactTagNewDetailViewControllerDelegate;

@interface ContactTagNewDetailViewController
{
    _Bool _isNoNeedAddButtonInEmptyView;
    _Bool _isRemovingMember;
    unsigned int _m_uiFromScene;
    unsigned int _curEventID;
    unsigned long long _commonSearchScene;
    ContactTagData *_contactTagData;
    id <ContactTagNewDetailViewControllerDelegate> _m_delegate;
    long long _curActionType;
    MMTableView *_tableView;
    NSMutableArray *_curMemberContactList;
    NSMutableArray *_contactsKeyArray;
    NSMutableDictionary *_contactsDict;
    UIView *_bottomBar;
    UIView *_emptyView;
    MMUIViewController *_selectContactViewController;
    ContactsSearchController *_searchController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ContactsSearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) _Bool isRemovingMember; // @synthesize isRemovingMember=_isRemovingMember;
@property(nonatomic) __weak MMUIViewController *selectContactViewController; // @synthesize selectContactViewController=_selectContactViewController;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) NSMutableDictionary *contactsDict; // @synthesize contactsDict=_contactsDict;
@property(retain, nonatomic) NSMutableArray *contactsKeyArray; // @synthesize contactsKeyArray=_contactsKeyArray;
@property(nonatomic) unsigned int curEventID; // @synthesize curEventID=_curEventID;
@property(retain, nonatomic) NSMutableArray *curMemberContactList; // @synthesize curMemberContactList=_curMemberContactList;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isNoNeedAddButtonInEmptyView; // @synthesize isNoNeedAddButtonInEmptyView=_isNoNeedAddButtonInEmptyView;
@property(nonatomic) long long curActionType; // @synthesize curActionType=_curActionType;
@property(nonatomic) __weak id <ContactTagNewDetailViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) ContactTagData *contactTagData; // @synthesize contactTagData=_contactTagData;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene=_m_uiFromScene;
@property(nonatomic) unsigned long long commonSearchScene; // @synthesize commonSearchScene=_commonSearchScene;
- (void)deleteContactInTag:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (double)cellSeparatorLeftInsetForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)OnNewContactTagCreateTagWithTagId:(unsigned int)arg1 result:(_Bool)arg2 isRename:(_Bool)arg3;
- (void)onTapDeleteTag;
- (void)onOperate:(id)arg1;
- (void)onDeleteContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)realDoRemoveTagMembers:(id)arg1;
- (void)doRemoveTagMembers:(id)arg1;
- (void)doAddTagMembers:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1 selectContactFromGroup:(id)arg2;
- (void)onClickContactItemCellWithIndexPath:(id)arg1;
- (void)onClickRemoveMember;
- (void)onClickAddMember;
- (void)makeMemberContactCellContent:(id)arg1 contact:(id)arg2;
- (void)makeMemberContactCellContent:(id)arg1 WithIndexPath:(id)arg2;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (void)loadHeaderViewSelection;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handleDeleteContactAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)sortTagContacts;
- (id)addContactSectionKey:(id)arg1;
- (void)processContactSectionData:(id)arg1;
- (id)getEmptyViewStr;
- (void)initEmptyView;
- (void)initBottomBar;
- (void)initSearchBar;
- (void)initView;
- (void)reloadDataAndView;
- (void)initData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initViewControllerWithContactTagData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

