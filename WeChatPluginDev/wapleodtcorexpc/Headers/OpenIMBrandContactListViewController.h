//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactsDataLogic, MMTableView, MMTitleView, NSDictionary, NSMutableArray, NSString, UISearchBar;

@interface OpenIMBrandContactListViewController
{
    MMTitleView *_titleView;
    MMTableView *_tableView;
    ContactsDataLogic *_contactsDataLogic;
    NSMutableArray *_sectionKeyArray;
    NSDictionary *_allOpenIMContactsDic;
    NSString *_openIMAcctype;
    UISearchBar *_searchBar;
    NSMutableArray *m_arrAccountDeletedOpenIMContact;
}

- (void).cxx_destruct;
- (void)registerYReportSdk;
- (void)onGetOpenImResourceDone:(id)arg1;
- (void)showContactInfoView:(id)arg1;
- (id)getOpenIMContactClassifyInSession:(long long)arg1;
- (_Bool)isAccountDeletedSession:(long long)arg1;
- (id)getCContactUsingIndexPath:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateNewContactsItemCell:(id)arg1 contact:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadTableView;
- (void)reportQuit;
- (void)reportEnter;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableView;
- (void)initTitleView;
- (void)tryUpdateResource;
- (id)initWithOpenIMAcctype:(id)arg1 contactsDataSourceLogic:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

