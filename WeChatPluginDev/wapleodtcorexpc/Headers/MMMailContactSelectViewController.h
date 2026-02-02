//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCSearcher;
@protocol MMMailContactSelectViewDelegate;

@interface MMMailContactSelectViewController
{
    NSMutableArray *arrMailContact;
    NSMutableArray *arrKeys;
    NSMutableDictionary *dicContacts;
    NSMutableArray *arrSelection;
    _Bool m_bSearching;
    MMTableView *m_tableView;
    NSMutableArray *m_arrFilteredContacts;
    NSMutableSet *setSelectedContacts;
    id <MMMailContactSelectViewDelegate> _delegate;
    id _userInfo;
    WCSearcher *_searcher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCSearcher *searcher; // @synthesize searcher=_searcher;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <MMMailContactSelectViewDelegate> m_delegate; // @synthesize m_delegate=_delegate;
@property(retain, nonatomic) NSMutableSet *setSelectedContacts; // @synthesize setSelectedContacts;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)doSearch:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)onDone:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)initSearchBar;
- (void)initTableView;
- (void)initView;
- (void)initData;
- (void)viewDidLoad;
- (id)initWithMailContacts:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

