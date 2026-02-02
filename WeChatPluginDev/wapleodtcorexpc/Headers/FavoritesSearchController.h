//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavBarButton, FavBaseTableDataController, FavClickStreamData, FavMultiSelectToolView, MMScrollView, MMSearchPanGestureController, MMUIButton, MMUILabel, NSArray, NSMutableArray, NSString, UILabel, UITextField, UIView, WCSearcher;
@protocol FavSearchControllerDelegate;

@interface FavoritesSearchController
{
    FavMultiSelectToolView *m_multiSelectToolView;
    MMUIButton *m_multiSelectCancelBtn;
    MMUILabel *m_multiSelectTitle;
    UIView *m_multiSelectTopCoverView;
    UIView *m_loadingView;
    UILabel *m_loadingLabel;
    FavClickStreamData *m_clickData;
    FavBaseTableDataController *m_dataController;
    NSString *m_tagText;
    NSMutableArray *m_internalSearchTags;
    _Bool m_bSearching;
    _Bool m_bInSearchSession;
    UIView *m_filterContainView;
    MMScrollView *m_scrollView;
    FavBarButton *m_favBarBtn;
    WCSearcher *m_searcher;
    UITextField *m_searchField;
    MMSearchPanGestureController *m_panCancelGesture;
    int m_deleteType;
    MMUILabel *m_tipsLabel;
    NSString *m_searchTaskKey;
    unsigned int _entranceScene;
    id <FavSearchControllerDelegate> _delegate;
    NSString *_searchText;
    NSArray *_searchTags;
    unsigned long long _currentSearchType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int entranceScene; // @synthesize entranceScene=_entranceScene;
@property(nonatomic) unsigned long long currentSearchType; // @synthesize currentSearchType=_currentSearchType;
@property(retain, nonatomic) NSArray *searchTags; // @synthesize searchTags=_searchTags;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) __weak id <FavSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTriggerToCancelMove;
- (void)onTriggerToMoveRight;
- (void)resetPanGesture;
- (void)preparePanGesture;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onShowFavContext:(id)arg1 DataItem:(id)arg2 NeedReport:(_Bool)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(id)arg6;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3 fromScene:(unsigned int)arg4 favIndex:(unsigned int)arg5 searchText:(id)arg6 withCell:(id)arg7;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)OnForwardDone;
- (id)getFavForawrdViewController;
- (_Bool)updateTagSearchResult;
- (void)OnSearch:(id)arg1 taskKey:(id)arg2;
- (void)onMultiSelectDone;
- (void)onMultiSelectEdit;
- (void)deleteData:(id)arg1;
- (void)onDeleteData;
- (void)onForwardData;
- (void)forwardDataAndItems:(id)arg1;
- (_Bool)isOnSearch;
- (void)canNotSelecteDueToExceedCount;
- (void)onLoadMore;
- (id)getCurrentViewController;
- (void)onSelectRowAtIndexPath:(id)arg1;
- (void)performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2;
- (void)commitEditingStyle:(long long)arg1 forRowAtIndexPath:(id)arg2;
- (void)onShowEmptyView;
- (void)tryHideSearchInternalBlackView;
- (void)hideKeyboard;
- (void)doSearch;
- (void)onUpdateTag:(id)arg1 to:(id)arg2 fromFilter:(id)arg3;
- (void)deselectTag:(id)arg1 fromFilter:(id)arg2;
- (void)selectTag:(id)arg1 fromFilter:(id)arg2;
- (void)selectTag:(id)arg1;
- (void)cancelSearch;
- (void)cancelSearchByTap;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)resetTypingAttributes;
- (id)getTextFromType:(long long)arg1;
- (void)initTipsView;
- (void)updateSearchFieldText;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBarTextDidBeginEditing:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)wcsSearchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (double)getContentViewY;
- (void)searchControllerWillDisappear;
- (void)hideVisibleCellMenu;
- (void)searchControllerWillAppear;
- (void)onViewBePoped;
- (void)UISplitViewWillChangeSplitMode;
- (void)relayoutSubviews;
- (void)dealloc;
- (void)goToCapacityViewController;
- (id)getCapacityString;
- (void)initTagFilterView;
- (void)initMultiSelectToolView;
- (id)searcher;
- (id)dataController;
- (void)set_delegate:(id)arg1;
- (id)initWithViewController:(id)arg1 SuperView:(id)arg2;
- (_Bool)isSearchActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

