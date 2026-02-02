//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavBaseTableDataController, FavClickStreamData, FavMultiSelectToolView, FavoritesSearchController, MMTableView, NSString, UILabel, UIView;
@protocol FavBaseSearchViewControllerDelegate;

@interface FavBaseSearchViewController
{
    _Bool _bReceiveSearchResult;
    int _deleteType;
    id <FavBaseSearchViewControllerDelegate> _delegate;
    NSString *_searchTitle;
    long long _searchType;
    MMTableView *_tableView;
    UIView *_headerView;
    FavBaseTableDataController *_dataController;
    FavoritesSearchController *_searchController;
    FavMultiSelectToolView *_multiSelectToolView;
    UIView *_loadingView;
    UILabel *_loadingLabel;
    NSString *_searchTaskKey;
    FavClickStreamData *_clickData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FavClickStreamData *clickData; // @synthesize clickData=_clickData;
@property(nonatomic) _Bool bReceiveSearchResult; // @synthesize bReceiveSearchResult=_bReceiveSearchResult;
@property(nonatomic) int deleteType; // @synthesize deleteType=_deleteType;
@property(retain, nonatomic) NSString *searchTaskKey; // @synthesize searchTaskKey=_searchTaskKey;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) FavMultiSelectToolView *multiSelectToolView; // @synthesize multiSelectToolView=_multiSelectToolView;
@property(retain, nonatomic) FavoritesSearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) FavBaseTableDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long searchType; // @synthesize searchType=_searchType;
@property(retain, nonatomic) NSString *searchTitle; // @synthesize searchTitle=_searchTitle;
@property(nonatomic) __weak id <FavBaseSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFavTagEditCancel;
- (void)onFavTagEditOK;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)processSearchResultDone;
- (void)OnForwardDone;
- (id)getFavForawrdViewController;
- (void)OnSearch:(id)arg1 taskKey:(id)arg2;
- (void)onLoadMore;
- (void)onDidEndSearch;
- (void)onWillBeginSearch;
- (void)onShowFavContext:(id)arg1 DataItem:(id)arg2 NeedReport:(_Bool)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(id)arg6;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3 fromScene:(unsigned int)arg4 favIndex:(unsigned int)arg5 searchText:(id)arg6 withCell:(id)arg7;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)resetHeaderView:(id)arg1;
- (id)getCurrentViewController;
- (_Bool)itemEditable;
- (unsigned int)entranceScene;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
- (void)onShowEmptyView;
- (void)hideSearchBar;
- (void)showSearchBar;
- (void)hideSelectToolView;
- (void)onMultiSelectDone;
- (void)setTableViewBottomInset:(double)arg1;
- (void)onMultiSelect;
- (void)deleteData:(id)arg1;
- (void)onDeleteData;
- (void)addTagForItems;
- (void)onForwardData;
- (void)forwardDataAndItems:(id)arg1;
- (void)onReturn;
- (int)getPageType;
- (void)initData;
- (void)initMultiSelectToolView;
- (void)initLoadingView;
- (void)initHeaderView;
- (void)initNavigationBar;
- (void)initTableView;
- (void)clearSearch;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)hideVisibleCellMenu;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

