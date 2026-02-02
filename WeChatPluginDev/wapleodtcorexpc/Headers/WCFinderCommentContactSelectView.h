//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UIView, WCContactSelectFixedSearcher;

@interface WCFinderCommentContactSelectView
{
    NSArray *_latestCommentMentionedContacts;
    WCContactSelectFixedSearcher *_contactSearcher;
    UIView *_searchContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *searchContainerView; // @synthesize searchContainerView=_searchContainerView;
@property(retain, nonatomic) WCContactSelectFixedSearcher *contactSearcher; // @synthesize contactSearcher=_contactSearcher;
@property(retain, nonatomic) NSArray *latestCommentMentionedContacts; // @synthesize latestCommentMentionedContacts=_latestCommentMentionedContacts;
- (void)liveContactDidSearchViewTableSelect:(id)arg1;
- (id)liveContactCellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)liveContactCancelSearch;
- (void)liveContactDoSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)liveContactBeginSearch;
- (_Bool)hasLastestContact;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)updateSearchingState:(id)arg1;
- (void)updateSearchResult:(id)arg1;
- (void)initSearchBar;
- (void)resignResponder;
- (void)reloadLatestCommentMentionedContacts;
- (void)initData:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

