//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CEnterpriseContact, MMTableView, NSMutableArray, NSString, WCDataSearcher;
@protocol EnterpriseRoomContactSelectDelegate;

@interface EnterpriseRoomContactSelectViewController
{
    CEnterpriseContact *_contact;
    NSMutableArray *_aryMemberContact;
    NSMutableArray *_aryFilteredMemberContact;
    MMTableView *_tableView;
    WCDataSearcher *_searcher;
    id <EnterpriseRoomContactSelectDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EnterpriseRoomContactSelectDelegate> delegate; // @synthesize delegate;
- (id)GetCompareStrByContact:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (void)initSearchBar;
- (void)initTableView;
- (void)initData;
- (id)initWithEnterpriseContact:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

