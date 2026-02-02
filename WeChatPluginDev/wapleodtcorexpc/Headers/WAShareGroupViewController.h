//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSArray, NSMutableArray, NSMutableSet, NSString, WCCreateNewGroupDemoViewController;
@protocol WAShareGroupViewControllerDelegate;

@interface WAShareGroupViewController
{
    NSMutableArray *m_arrAllLabelName;
    MMTableView *m_tableView;
    _Bool m_bShowDetail;
    WCCreateNewGroupDemoViewController *newGroup;
    NSMutableSet *m_contactSetImportFromGroup;
    NSMutableSet *m_contactSetNotImportFromGroup;
    unsigned int _createTagEventId;
    id <WAShareGroupViewControllerDelegate> m_delegate;
    NSString *m_title;
    long long m_privacy;
    NSArray *m_cells;
    NSMutableSet *m_labelNameSet;
    NSArray *m_contactList;
    NSString *_createTagName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *createTagName; // @synthesize createTagName=_createTagName;
@property(nonatomic) unsigned int createTagEventId; // @synthesize createTagEventId=_createTagEventId;
@property(retain, nonatomic) NSArray *m_contactList; // @synthesize m_contactList;
@property(retain, nonatomic) NSMutableSet *m_labelNameSet; // @synthesize m_labelNameSet;
@property(retain, nonatomic) NSArray *m_cells; // @synthesize m_cells;
@property(nonatomic) long long m_privacy; // @synthesize m_privacy;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title;
@property(nonatomic) __weak id <WAShareGroupViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)handleCreateContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)handleCreateToSetContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAllTagNameUpdate;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (void)onSkipSavingTag;
- (void)onSaveTag;
- (void)onMultiSelectContactCancelForSns;
- (void)onMultiSelectContactReturnForSns:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1 selectContactFromGroup:(id)arg2;
- (void)selectContacts;
- (void)editContactLabels;
- (void)onDone;
- (void)onReturn;
- (void)onDataChange;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
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
- (void)initView;
- (void)initData;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCells:(id)arg1 title:(id)arg2 privacy:(long long)arg3 labelNameList:(id)arg4 contactList:(id)arg5;
- (id)initWithCells:(id)arg1 title:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

