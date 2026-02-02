//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString;

@interface WCEditGroupViewController
{
    MMTableView *m_tableView;
    NSMutableArray *m_arrMyGroup;
}

- (void).cxx_destruct;
- (void)onWCGroupUpdatedReturn:(_Bool)arg1;
- (void)onWCGroupUpdated;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onNewGroup;
- (void)OnEditDone;
- (void)OnEdit;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)stopLoading;
- (void)startLoadingWithTitle:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateView;
- (void)initView;
- (void)initTableView;
- (void)initFooterView;
- (void)initData;
- (void)loadMyGroups;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

