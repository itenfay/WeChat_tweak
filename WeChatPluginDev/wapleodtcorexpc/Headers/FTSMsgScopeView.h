//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSArray, NSMutableArray, NSMutableDictionary, NSString, SearchMatchTip;

@interface FTSMsgScopeView
{
    CContact *_session;
    NSArray *_arrTargetSessionMsgItems;
    CContact *_talkerContact;
    SearchMatchTip *_talkerMatchTip;
    NSString *_talkerQuery;
    NSMutableArray *_arrExpandStatus;
    NSMutableDictionary *m_dicWeakMedia;
    _Bool _asCluster;
    NSString *_taskKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool asCluster; // @synthesize asCluster=_asCluster;
@property(copy, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
- (id)ftsResultGetWCSearchContainerView;
- (void)setExpandStatus:(_Bool)arg1 forSection:(long long)arg2;
- (_Bool)isExpandingForSection:(long long)arg1;
- (_Bool)isMoreCellAtIndexPath:(id)arg1;
- (_Bool)shouldDisplayMoreCellInSection:(long long)arg1;
- (void)onFTSRestrictSearchResultChanged:(id)arg1;
- (void)openWWKFSessionView;
- (void)openWeAppSessionView;
- (void)selectMsgEntry:(id)arg1;
- (void)selectMsgItems:(id)arg1 withInTalkerContact:(id)arg2 andTalkerMatchTip:(id)arg3;
- (void)selectMsgItem:(id)arg1;
- (void)hideKeyboard;
- (void)onLoadMore;
- (_Bool)hasMoreData;
- (_Bool)hasSearchDone:(id)arg1;
- (id)getSearchSectionArray:(id)arg1;
- (id)getSearchArray:(id)arg1;
- (_Bool)isSearchRunning;
- (_Bool)isUseSectionResult;
- (long long)getRowCountForSection:(long long)arg1;
- (long long)getSectionCount;
- (_Bool)needNoResultTableFooterView;
- (_Bool)needSeperatedFooterInSection:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)makeFinderCellWithTableView:(id)arg1 finderMsgItem:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)popForSubResultView:(_Bool)arg1;
- (void)pop;
- (void)prePopHandle;
- (_Bool)isSessionPage;
- (unsigned long long)convertPageType;
- (_Bool)isDisplayTalkerSearchEntry;
- (_Bool)isTalkerSearchEntry:(long long)arg1;
- (void)cancelSearch;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)handleTextChanged:(id)arg1 immediately:(_Bool)arg2;
- (void)delaySearch:(id)arg1 slowMode:(_Bool)arg2;
- (_Bool)delaySearchImp:(id)arg1;
- (void)configTagSearchLogicForSession:(id)arg1 asCluster:(_Bool)arg2 andSessionResult:(id)arg3 andTalkerContact:(id)arg4 andTalkerMatchTip:(id)arg5 andTalkerQuery:(id)arg6 andSearchText:(id)arg7 bSessionFirst:(_Bool)arg8;
- (void)initData;
- (id)initWithSearchPage:(id)arg1;
- (id)initWithSearchBar:(id)arg1 frame:(struct CGRect)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

