//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactTagData, ContactsAuthorityManageModifyContactLogic, ContactsSearchController, MMTableView, MMUIButton, MMUIView, MMUIViewController, NSMutableArray, NSMutableDictionary, NSString, RichTextView, UIView;
@protocol ContactsAuthorityManageDetailViewControllerDelegate;

@interface ContactsAuthorityManageDetailViewController
{
    double m_tagDetailEditHeaderHeight;
    MMUIView *m_tableViewFooterView;
    MMUIViewController *m_selectedViewController;
    MMUIView *m_bottomToolView;
    UIView *m_emptyView;
    MMUIButton *m_deleteBtn;
    MMUIButton *m_editeBtn;
    NSMutableArray *m_contactUserNameList;
    NSMutableDictionary *m_dicMatchTip;
    unsigned int m_authorityManageSelectionType;
    unsigned int m_authorityManageselectionCount;
    unsigned int m_arrAllCanSelectContactCount;
    _Bool _bIsAlreadyDisMissSelf;
    unsigned int _m_uiFromScene;
    unsigned int _curEventID;
    unsigned long long _commonSearchScene;
    unsigned long long _reportBizType;
    id <ContactsAuthorityManageDetailViewControllerDelegate> _m_delegate;
    MMTableView *_tableView;
    ContactTagData *_contactTagData;
    NSMutableArray *_curMemberContactList;
    NSMutableArray *_contactsKeyArray;
    NSMutableDictionary *_contactsDict;
    long long _contactItemClickNum;
    NSMutableArray *_originalMemberContactNameList;
    RichTextView *_titleTextView;
    ContactsSearchController *_searchController;
    ContactsAuthorityManageModifyContactLogic *_contactsAuthorityManageModifyContactLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ContactsAuthorityManageModifyContactLogic *contactsAuthorityManageModifyContactLogic; // @synthesize contactsAuthorityManageModifyContactLogic=_contactsAuthorityManageModifyContactLogic;
@property(retain, nonatomic) ContactsSearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) RichTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) NSMutableArray *originalMemberContactNameList; // @synthesize originalMemberContactNameList=_originalMemberContactNameList;
@property(nonatomic) long long contactItemClickNum; // @synthesize contactItemClickNum=_contactItemClickNum;
@property(retain, nonatomic) NSMutableDictionary *contactsDict; // @synthesize contactsDict=_contactsDict;
@property(retain, nonatomic) NSMutableArray *contactsKeyArray; // @synthesize contactsKeyArray=_contactsKeyArray;
@property(nonatomic) _Bool bIsAlreadyDisMissSelf; // @synthesize bIsAlreadyDisMissSelf=_bIsAlreadyDisMissSelf;
@property(nonatomic) unsigned int curEventID; // @synthesize curEventID=_curEventID;
@property(retain, nonatomic) NSMutableArray *curMemberContactList; // @synthesize curMemberContactList=_curMemberContactList;
@property(retain, nonatomic) ContactTagData *contactTagData; // @synthesize contactTagData=_contactTagData;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <ContactsAuthorityManageDetailViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) unsigned long long reportBizType; // @synthesize reportBizType=_reportBizType;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene=_m_uiFromScene;
@property(nonatomic) unsigned long long commonSearchScene; // @synthesize commonSearchScene=_commonSearchScene;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)deleteContactInTag:(id)arg1;
- (void)deleteSnsBlackAndReload:(id)arg1;
- (_Bool)hadContactsAuthority:(id)arg1;
- (void)handleModifyContactChange:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (double)cellSeparatorLeftInsetForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)reloadMemberListAndView:(id)arg1 isChatRoomList:(_Bool)arg2;
- (void)onNewContactTagAddContactAllCanSelectContact:(id)arg1;
- (void)onNewContactTagAddContactSelectContactReturn:(id)arg1;
- (id)getViewController;
- (void)reloadAuthorityDetailDeleteContactWithDicMultiSelect:(id)arg1 andDicExistContact:(id)arg2;
- (void)onNewContactAuthorityDeleteContactSuccess:(id)arg1;
- (void)onNewContactAuthorityAddContactSuccess:(id)arg1;
- (void)doRemoveContact:(id)arg1;
- (void)handleDeleteContactAtIndexPath:(id)arg1;
- (id)getButton:(id)arg1 Action:(SEL)arg2 Target:(id)arg3;
- (void)onClickManageBtn;
- (void)onClickDeleteBtn;
- (void)onClickAddBtn;
- (void)setSaveButtonEnable:(_Bool)arg1;
- (void)onClickContactItemCellWithIndexPath:(id)arg1;
- (void)makeMemberContactCellContent:(id)arg1 contact:(id)arg2;
- (void)makeMemberContactCellContent:(id)arg1 WithIndexPath:(id)arg2;
- (void)onDismissBarButtonPress:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (void)loadHeaderViewSelection;
- (void)scrollViewDidScroll:(id)arg1;
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
- (id)getTableTipString;
- (void)resetViewBackgroundColor;
- (id)getTableTipsView;
- (id)getEmptyTipsView;
- (id)getHeaderTipsRichTextViewWithTips:(id)arg1 center:(_Bool)arg2;
- (void)initEmptyView;
- (void)initBottomToolView;
- (void)initSearchBar;
- (void)reloadTableView;
- (void)initView;
- (void)reloadData;
- (void)reloadContactTagData;
- (void)initData;
- (id)initViewControllerWithContactTagData:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

