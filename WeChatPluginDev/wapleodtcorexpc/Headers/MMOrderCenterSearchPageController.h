//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMOrderCenterSearchDataProvider, MMOrderCenterTableViewController, MMTableView, MMUISearchBar, NSArray, NSString;
@protocol MMOrderCenterReporter;

@interface MMOrderCenterSearchPageController
{
    id <MMOrderCenterReporter> _reporter;
    MMUISearchBar *_searchBar;
    NSArray *_searchHistoryItems;
    MMTableView *_historyTableView;
    MMOrderCenterSearchDataProvider *_dataProvider;
    MMOrderCenterTableViewController *_resultTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMOrderCenterTableViewController *resultTable; // @synthesize resultTable=_resultTable;
@property(retain, nonatomic) MMOrderCenterSearchDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) MMTableView *historyTableView; // @synthesize historyTableView=_historyTableView;
@property(retain, nonatomic) NSArray *searchHistoryItems; // @synthesize searchHistoryItems=_searchHistoryItems;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) id <MMOrderCenterReporter> reporter; // @synthesize reporter=_reporter;
- (void)reportSearch;
- (void)reportEntry;
- (void)clearSearchHistory;
- (void)removeSearchHistory:(id)arg1;
- (void)addSearchHistory:(id)arg1;
- (void)startSearchWithKeyword:(id)arg1;
- (void)configureViewToShowResult:(_Bool)arg1;
- (void)onRemoveKeyword:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFilteringAppId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

