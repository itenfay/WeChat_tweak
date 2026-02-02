//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSObject, NSString, UILabel, UIView, WCDataSearcher;
@protocol MemberDataLogicProtocol;

@interface MemberListViewController
{
    MMTableView *m_tableView;
    UIView *m_viewLabel;
    UILabel *m_countLabel;
    NSObject<MemberDataLogicProtocol> *m_memberData;
    WCDataSearcher *_searcher;
    _Bool m_needIndexBar;
}

- (void).cxx_destruct;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)usrNameConvertToOContacts:(id)arg1;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (_Bool)hasNoSearchResult;
- (id)viewForFooterInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForFooterInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (id)cellForHandleVoiceSearchViewTable:(id)arg1 index:(id)arg2;
- (void)makeResultCell:(id)arg1 contact:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)cellHeight;
- (long long)getEditingStyleForIndexPath:(id)arg1;
- (void)showContactInfoView:(id)arg1;
- (void)setMemberLogic:(id)arg1;
- (void)reloadTable;
- (void)initSearchBar;
- (void)initTableView;
- (void)initCountLabel:(id)arg1;
- (void)updateCount;
- (_Bool)isSeachActive;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

