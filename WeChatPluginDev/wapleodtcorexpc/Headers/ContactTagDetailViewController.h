//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactTagData, MMTableViewInfo, NSMutableArray, NSMutableSet, NSString, UILabel, UITextField;
@protocol ContactTagDetailViewControllerDelegate;

@interface ContactTagDetailViewController
{
    ContactTagData *_contactTagData;
    int _actionType;
    unsigned int _uiJobID;
    MMTableViewInfo *m_tableViewInfo;
    NSMutableArray *m_arrMemberList;
    unsigned long long m_nCellCnt;
    _Bool m_bDeleteStatus;
    UITextField *m_tagNameTextField;
    UILabel *m_WarningTextLabel;
    id <ContactTagDetailViewControllerDelegate> m_delegate;
    NSString *m_title;
    NSString *m_leftBarButtonTitle;
    _Bool isAlreadyPopKeyBoardWhenCreate;
    _Bool isShowWarningText;
    _Bool isAlreadyDisMissSelf;
    _Bool isTagNameOverLimit;
    NSMutableSet *m_contactSetImportFromGroup;
    NSMutableSet *m_contactSetNotImportFromGroup;
    int TagCountOfMutiSelectScene;
    _Bool m_bIsFromContactTagHelloWorld;
    NSString *ns_CurTagNameTextFieldValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_leftBarButtonTitle; // @synthesize m_leftBarButtonTitle;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title;
@property(nonatomic) _Bool m_bIsFromContactTagHelloWorld; // @synthesize m_bIsFromContactTagHelloWorld;
@property(retain, nonatomic) NSString *ns_CurTagNameTextFieldValue; // @synthesize ns_CurTagNameTextFieldValue;
@property(nonatomic) __weak id <ContactTagDetailViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)onDeleteContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)updateContactLabelName:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)reloadMemberListAndView:(id)arg1 isChatRoomList:(_Bool)arg2;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1 selectContactFromGroup:(id)arg2;
- (void)openContactInfo:(id)arg1;
- (void)onDeleteMember:(id)arg1;
- (void)onLongPressEx:(id)arg1;
- (void)setShowRemoveMember;
- (void)addMember;
- (void)ShowMultiSelectContactsViewController:(id)arg1;
- (void)onTagNameChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)onDeleteComfirm;
- (void)onEditComfirm;
- (unsigned int)JobForContactTagChanged;
- (unsigned int)JobForTagNameWithServer;
- (_Bool)isTagNameEmpty:(id)arg1;
- (_Bool)isTagNameEmptyOrExist:(id)arg1;
- (_Bool)isContactTagListChanged;
- (_Bool)isTagNameChanged;
- (_Bool)isTagNameCreated;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)SetSaveButtonEnable:(_Bool)arg1;
- (void)onSave:(id)arg1;
- (void)onDismiss:(id)arg1;
- (void)InternalDisMissSelfAnimated:(_Bool)arg1;
- (void)initView;
- (void)reloadTableData;
- (void)makeDeleteBtnCell:(id)arg1 CellInfo:(id)arg2;
- (void)onTagDeleteButtonPress:(id)arg1;
- (id)makeDeleteBtnSection;
- (id)makeMemListSection;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (long long)getColCount;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)updateToNormalStatusEx;
- (void)updateMemberView;
- (void)HideWarningText;
- (void)ShowWarningText:(id)arg1;
- (void)makeWarningTextCell:(id)arg1 CellInfo:(id)arg2;
- (id)makeInfoHeaderSection;
- (void)makeTagNameCell:(id)arg1 CellInfo:(id)arg2;
- (void)initData;
- (void)LoadMemberList;
- (void)sortTagContacts;
- (id)initWithMembers:(id)arg1;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

