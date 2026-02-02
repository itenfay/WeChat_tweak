//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString, UITableView, WCCreateNewGroupDemoViewController, WCMomentsPrivacyParams;
@protocol WCMomentsPrivacyViewControllerDelegate;

@interface WCMomentsPrivacyViewController
{
    _Bool _showFastItem;
    unsigned int _createTagEventId;
    id <WCMomentsPrivacyViewControllerDelegate> _delegate;
    WCMomentsPrivacyParams *_params;
    unsigned long long _sourceScene;
    UITableView *_tableView;
    WCCreateNewGroupDemoViewController *_groupVC;
    NSString *_createTagName;
    NSMutableSet *_undeterminedContactSet;
    NSMutableSet *_contactSetImportFromGroup;
    NSMutableSet *_contactSetNotImportFromGroup;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *contactSetNotImportFromGroup; // @synthesize contactSetNotImportFromGroup=_contactSetNotImportFromGroup;
@property(retain, nonatomic) NSMutableSet *contactSetImportFromGroup; // @synthesize contactSetImportFromGroup=_contactSetImportFromGroup;
@property(retain, nonatomic) NSMutableSet *undeterminedContactSet; // @synthesize undeterminedContactSet=_undeterminedContactSet;
@property(nonatomic) unsigned int createTagEventId; // @synthesize createTagEventId=_createTagEventId;
@property(retain, nonatomic) NSString *createTagName; // @synthesize createTagName=_createTagName;
@property(retain, nonatomic) WCCreateNewGroupDemoViewController *groupVC; // @synthesize groupVC=_groupVC;
@property(nonatomic) _Bool showFastItem; // @synthesize showFastItem=_showFastItem;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long sourceScene; // @synthesize sourceScene=_sourceScene;
@property(retain, nonatomic) WCMomentsPrivacyParams *params; // @synthesize params=_params;
@property(nonatomic) __weak id <WCMomentsPrivacyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onTagNameEditViewControllerRetWithTagName:(id)arg1;
- (_Bool)onMultiSelectContactCompleted:(id)arg1 finished:(_Bool)arg2;
- (void)onMultiSelectContactCancelForSns;
- (void)onMultiSelectContactReturn:(id)arg1 selectContactFromGroup:(id)arg2;
- (void)onMultiSelectContactReturnForSns:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)contactTagListViewController:(id)arg1 didSelectContactTag:(id)arg2;
- (_Bool)canSelectPrivacySetting:(long long)arg1;
- (void)openAddFromFriend;
- (void)openAddFromTag;
- (void)showHasChangeShareScopeAlert;
- (void)showShouldSelectOneLeastAlert;
- (void)onDone;
- (void)onReturn;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resizeTableFooterView;
- (void)reloadTableView;
- (void)updateWithSaveAsTag:(id)arg1;
- (void)updateWithSelectedContactSet:(id)arg1;
- (void)updateWithParams:(id)arg1;
- (id)currentItem;
@property(readonly, nonatomic) long long currentPrivacy;
- (void)initTableView;
- (void)initNavBarButton;
- (void)initView;
- (void)updateViewModel;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithParams:(id)arg1;
- (void)reportSaveNewGroupAlertAction:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (void)handleCreateToSetContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (id)contactNamesComponentsJoinedByComma:(id)arg1;
- (void)handleCreateContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)handleTagNameEditViewControllerRetWithTagName:(id)arg1;
- (void)handleMultiSelectContactReturn:(id)arg1 selectContactFromGroup:(id)arg2;
- (void)handleMultiSelectContactReturn:(id)arg1;
- (void)handleMultiSelectContactReturnForSns:(id)arg1;
- (void)onSaveAsNewTag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

