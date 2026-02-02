//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLocationUISearchBar, MMTableView, NSMutableArray, NSString, UIViewController;
@protocol MMLocationSearchBarDelegate, MMLocationSearchResultTableViewDelegate;

@interface MMLocationSearchBar
{
    _Bool _isSearching;
    MMLocationUISearchBar *_m_searchBar;
    MMTableView *_m_searchResultTableView;
    long long _m_returnKeyType;
    id <MMLocationSearchBarDelegate> _m_SearchBarDelegate;
    id <MMLocationSearchResultTableViewDelegate> _m_tableViewDelegate;
    NSMutableArray *_m_arrFilteredObject;
    UIViewController *_m_viewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *m_viewController; // @synthesize m_viewController=_m_viewController;
@property(retain, nonatomic) NSMutableArray *m_arrFilteredObject; // @synthesize m_arrFilteredObject=_m_arrFilteredObject;
@property(readonly, nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(nonatomic) __weak id <MMLocationSearchResultTableViewDelegate> m_tableViewDelegate; // @synthesize m_tableViewDelegate=_m_tableViewDelegate;
@property(nonatomic) __weak id <MMLocationSearchBarDelegate> m_SearchBarDelegate; // @synthesize m_SearchBarDelegate=_m_SearchBarDelegate;
@property(nonatomic) long long m_returnKeyType; // @synthesize m_returnKeyType=_m_returnKeyType;
@property(retain, nonatomic) MMTableView *m_searchResultTableView; // @synthesize m_searchResultTableView=_m_searchResultTableView;
@property(retain, nonatomic) MMLocationUISearchBar *m_searchBar; // @synthesize m_searchBar=_m_searchBar;
- (void)setIsSearching:(_Bool)arg1;
- (void)enableButton:(id)arg1;
- (_Bool)isSearchBarFirstResponder;
- (void)searchBarResignFirstResponder;
- (void)finishSearch;
- (void)clearSearch;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)clearFilteredObjects;
- (void)addFilteredObject:(id)arg1;
- (unsigned long long)getObjectCount;
- (void)updateAddrForShow:(id)arg1;
- (void)setFilteredObjects:(id)arg1;
- (id)getObjectFor:(unsigned long long)arg1;
- (void)UISplitViewWillChangeSplitMode;
- (void)adjustContentView;
- (void)reloadSearchResultData;
- (void)addNotifications;
- (void)initData;
- (void)dealloc;
- (id)initWithSearchBar:(id)arg1 tableView:(id)arg2 ContentsController:(id)arg3 change:(_Bool)arg4;
- (id)initWithSearchBar:(id)arg1 tableView:(id)arg2 ContentsController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

