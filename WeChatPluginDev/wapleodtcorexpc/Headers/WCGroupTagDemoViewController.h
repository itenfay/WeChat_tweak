//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCCreateNewGroupDemoViewController;
@protocol WCGroupTagViewControllerDelegate;

@interface WCGroupTagDemoViewController
{
    long long m_originPrivacy;
    long long m_currentPrivacy;
    _Bool m_privacyGroupHidden;
    NSMutableArray *m_arrAllLabelName;
    NSMutableSet *m_currentLabelName;
    NSMutableSet *m_originLabelName;
    MMTableView *m_tableView;
    _Bool m_hasTryTransferLabel;
    NSMutableDictionary *m_dicGroupLabel;
    unsigned int m_transferEventId;
    long long m_transferPrivacy;
    double m_originContentOffset;
    _Bool m_bShowDetail;
    WCCreateNewGroupDemoViewController *newGroup;
    NSMutableSet *m_contactSetImportFromGroup;
    NSMutableSet *m_contactSetNotImportFromGroup;
    _Bool m_privacyGroupAndVisibleHidden;
    _Bool _isImportTagFromGroupEnable;
    _Bool _isMultiSelectOpenForChatroom;
    unsigned int _createTagEventId;
    id <WCGroupTagViewControllerDelegate> m_delegate;
    NSString *m_title;
    NSArray *_tmpSelectContact;
    unsigned long long _sourceScene;
    NSString *_createTagName;
    NSArray *_undeterminedTempContacts;
    NSArray *_originTmpSelectContacts;
    NSArray *_tmpSelectChatroomContacts;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isMultiSelectOpenForChatroom; // @synthesize isMultiSelectOpenForChatroom=_isMultiSelectOpenForChatroom;
@property(retain, nonatomic) NSArray *tmpSelectChatroomContacts; // @synthesize tmpSelectChatroomContacts=_tmpSelectChatroomContacts;
@property(nonatomic) _Bool isImportTagFromGroupEnable; // @synthesize isImportTagFromGroupEnable=_isImportTagFromGroupEnable;
@property(retain, nonatomic) NSArray *originTmpSelectContacts; // @synthesize originTmpSelectContacts=_originTmpSelectContacts;
@property(retain, nonatomic) NSArray *undeterminedTempContacts; // @synthesize undeterminedTempContacts=_undeterminedTempContacts;
@property(retain, nonatomic) NSString *createTagName; // @synthesize createTagName=_createTagName;
@property(nonatomic) unsigned int createTagEventId; // @synthesize createTagEventId=_createTagEventId;
@property(nonatomic) unsigned long long sourceScene; // @synthesize sourceScene=_sourceScene;
@property(retain, nonatomic) NSArray *tmpSelectContact; // @synthesize tmpSelectContact=_tmpSelectContact;
@property(nonatomic) _Bool m_privacyGroupAndVisibleHidden; // @synthesize m_privacyGroupAndVisibleHidden;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title;
@property(nonatomic) _Bool m_privacyGroupHidden; // @synthesize m_privacyGroupHidden;
@property(nonatomic) __weak id <WCGroupTagViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)reportSaveNewGroupAlertAction:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (void)handleCreateToSetContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (id)contactNamesComponentsJoinedByComma:(id)arg1;
- (void)handleCreateContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)deleteOldSnsGroup;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)sortAndSaveSnsGroupLabel;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (void)onMultiSelectContactCancelForSns;
- (void)onSaveAsNewGroup;
- (void)onMultiSelectContactReturnForSns:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1 selectContactFromGroup:(id)arg2;
- (void)createNewLabel:(id)arg1;
- (void)selectContacts;
- (void)onAllTagNameUpdate;
- (void)editContactLabels;
- (void)openAddFromChatroom;
- (void)onDone;
- (void)onReturn;
- (_Bool)hasChangePrivacy;
- (void)onDataChange;
- (_Bool)canSelectPrivacySetting:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onShowTransferTipConfirm;
- (void)showTransferTip;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)isSelected:(int)arg1 postPrivacy:(long long)arg2 indexPath:(id)arg3;
- (int)getCellType:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)loadAllTagNameList;
- (void)willShow;
- (void)onWCGroupUpdated;
- (void)reloadAllTableView;
- (id)getAllTmpSelectArray;
- (void)initView;
- (void)initData;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOriginPrivacy:(long long)arg1 originContact:(id)arg2 originLabel:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

