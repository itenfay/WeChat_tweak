//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ContactSelectSearcherConfig, MMTableView, MMUISearchBar, NSMutableArray, NSString;
@protocol WCContactSelectFixedSearcherDelegate;

@interface WCContactSelectFixedSearcher : NSObject
{
    _Bool _isSearching;
    MMUISearchBar *_searchBar;
    MMTableView *_tableView;
    NSString *_lastQuery;
    NSMutableArray *_arrResult;
    id <WCContactSelectFixedSearcherDelegate> _searchDelegate;
    ContactSelectSearcherConfig *_config;
}

+ (double)preferSearchTableHeight;
+ (double)preferSearchTableWidth;
+ (double)preferSearchBarHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) ContactSelectSearcherConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <WCContactSelectFixedSearcherDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
@property(retain, nonatomic) NSMutableArray *arrResult; // @synthesize arrResult=_arrResult;
@property(retain, nonatomic) NSString *lastQuery; // @synthesize lastQuery=_lastQuery;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
- (void)setLoadingFooterView:(id)arg1;
- (void)setNoResultFooterView:(id)arg1;
- (void)setEmptyFooterView;
- (id)getSearchBarTextField;
- (void)clearData;
- (void)initData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)updateWithConfig:(id)arg1;
- (void)createSearchBar;
- (void)dealloc;
- (id)initWithSearchResultTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

