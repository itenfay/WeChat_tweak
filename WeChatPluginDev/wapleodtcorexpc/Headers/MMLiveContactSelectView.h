//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView, WCContactSelectFixedSearcher;

@interface MMLiveContactSelectView
{
    unsigned long long _enterType;
    long long _preferredCellAccessoryType;
    WCContactSelectFixedSearcher *_liveContactSearcher;
    UIView *_searchContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *searchContainerView; // @synthesize searchContainerView=_searchContainerView;
@property(retain, nonatomic) WCContactSelectFixedSearcher *liveContactSearcher; // @synthesize liveContactSearcher=_liveContactSearcher;
@property(nonatomic) long long preferredCellAccessoryType; // @synthesize preferredCellAccessoryType=_preferredCellAccessoryType;
@property(nonatomic) unsigned long long enterType; // @synthesize enterType=_enterType;
- (void)updateWithConfig:(id)arg1;
- (void)liveContactDidSearchViewTableSelect:(id)arg1;
- (id)liveContactCellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)liveContactCancelSearch;
- (void)liveContactDoSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)liveContactBeginSearch;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateSearchingState:(id)arg1;
- (void)updateSearchResult:(id)arg1;
- (void)initSearchBar;
- (void)initTableView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

