//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString, WCGroup, WCOpLog, WCSnsPrivacyReporter;

@interface WCClassifyMembersViewController
{
    WCGroup *_group;
    NSMutableArray *_arrGroupTempMember;
    NSString *_tempGroupName;
    NSMutableDictionary *_dicGroupOutsiderMember;
    NSMutableDictionary *_dicGroupMemberView;
    NSMutableArray *_arrGroupMember;
    MMTableView *_tableView;
    _Bool _deleteStatus;
    WCOpLog *_wcOpLog;
    _Bool m_hasAddMemberWhenOnDone;
    _Bool m_hasDelMemberWhenOnDone;
    _Bool m_hasReturnAddMemberResponse;
    _Bool m_hasReturnDelMemberResponse;
    double m_defaultGroupCellHeight;
    WCSnsPrivacyReporter *m_snsReporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicGroupOutsiderMember; // @synthesize dicGroupOutsiderMember=_dicGroupOutsiderMember;
@property(retain, nonatomic) NSString *tempGroupName; // @synthesize tempGroupName=_tempGroupName;
@property(retain, nonatomic) WCGroup *group; // @synthesize group=_group;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *arrGroupMember; // @synthesize arrGroupMember=_arrGroupMember;
@property(retain, nonatomic) NSMutableArray *arrGroupTempMember; // @synthesize arrGroupTempMember=_arrGroupTempMember;
@property(retain, nonatomic) NSMutableDictionary *dicGroupMemberView; // @synthesize dicGroupMemberView=_dicGroupMemberView;
- (void)doSnsReportAfterCgiSuccess;
- (void)initSnsReporter;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)getDefaultGroupCellHeight;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 indexPath:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)processModContact:(id)arg1;
- (void)onWCDeleteGroupReturn:(_Bool)arg1 groupID:(id)arg2;
- (void)onWCGroupRemoveMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)onWCGroupAddMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)setShowRemoveMember;
- (void)onLongPressEx:(id)arg1;
- (void)onDeleteMember:(id)arg1;
- (void)onAddMember:(id)arg1;
- (void)openContactInfo:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)OnWCCreatNewGroupName:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onDeleteGroup;
- (void)tryDeleteGroup;
- (void)showAlert:(id)arg1;
- (void)onSelectRoundCell;
- (void)onDone;
- (void)resetBlackListControlStatus;
- (void)modOutsiderGroup;
- (void)onCancel;
- (_Bool)shouldModGroup;
- (void)onDismiss;
- (id)initWithWCGroup:(id)arg1;
- (void)initGroupTempMember;
- (void)reloadMember:(id)arg1;
- (void)reloadMemberListAndView;
- (void)stopLoading;
- (void)startLoadingWithTitle:(id)arg1;
- (void)initView;
- (void)initFooterView;
- (void)initOutsiderFooterView;
- (void)initBlacklistFooterView;
- (void)initData;
- (void)loadOutsiderMembers;
- (void)loadMemberList;
- (void)makeGroupNameCell:(id)arg1;
- (long long)getColCount;
- (void)updateNavigation;
- (void)updateTitle;
- (id)getGroupName;
- (id)getDefaultGroupName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

