//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUISearchBar, NSString, UILabel, UITableView, WCFinderAnimationLoadingView, WCFinderMentionUserActionSheetViewModel;

@interface WCFinderMentionUserActionSheet
{
    _Bool _tapDeleteKey;
    WCFinderMentionUserActionSheetViewModel *_viewModel;
    MMUISearchBar *_searchBar;
    UITableView *_tableView;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_stateLabel;
    CDUnknownBlockType _complete;
    unsigned long long _searchKey;
    unsigned long long _scene;
}

+ (id)sheetWithScene:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long searchKey; // @synthesize searchKey=_searchKey;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(nonatomic) _Bool tapDeleteKey; // @synthesize tapDeleteKey=_tapDeleteKey;
@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) WCFinderMentionUserActionSheetViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateFooterState;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)requestNextPage;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)_clickCleanButton;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)_delaySearch;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)mentionSheetVMResultChanged:(id)arg1;
- (void)onClickMore:(id)arg1;
- (void)beginSearch:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)createSearchBar;
- (id)createTableView:(struct CGRect)arg1;
- (void)viewDidLoad;
- (id)loadContentView;
- (id)initWithContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

