//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveKTVBoardItem, MMFinderLiveTaskId, MMTableView, MMUIActivityIndicatorView, MMUILabel, MMUISearchBar, NSData, NSMutableArray, NSMutableSet, NSString, UICollectionView, UIView, WCFinderLiveAnchorLogReporter, WCTimeLineFooterView;

@interface MMFinderLiveKTVRequestSongPanel
{
    _Bool _searchHasNext;
    _Bool _searchTextAutoFilled;
    _Bool _hasKgAuthorized;
    _Bool _isShowing;
    MMFinderLiveTaskId *_taskId;
    MMUISearchBar *_searchBar;
    NSString *_curSearchID;
    NSString *_curSearchText;
    NSData *_searchLastBuffer;
    WCTimeLineFooterView *_footerView;
    MMUIActivityIndicatorView *_loadingView;
    MMUILabel *_loadingLabel;
    UICollectionView *_boardCollectionView;
    UICollectionView *_subBoardCollectionView;
    UIView *_tabIndicatorView;
    MMTableView *_songTable;
    NSMutableArray *_boardItems;
    MMFinderLiveKTVBoardItem *_selectedBoard;
    NSMutableArray *_songItems;
    unsigned long long _state;
    WCFinderLiveAnchorLogReporter *_anchorReporter;
    NSMutableSet *_reportedSongUniqueIdSet;
}

+ (id)showWithTaskId:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *reportedSongUniqueIdSet; // @synthesize reportedSongUniqueIdSet=_reportedSongUniqueIdSet;
@property(retain, nonatomic) WCFinderLiveAnchorLogReporter *anchorReporter; // @synthesize anchorReporter=_anchorReporter;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool hasKgAuthorized; // @synthesize hasKgAuthorized=_hasKgAuthorized;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *songItems; // @synthesize songItems=_songItems;
@property(retain, nonatomic) MMFinderLiveKTVBoardItem *selectedBoard; // @synthesize selectedBoard=_selectedBoard;
@property(retain, nonatomic) NSMutableArray *boardItems; // @synthesize boardItems=_boardItems;
@property(retain, nonatomic) MMTableView *songTable; // @synthesize songTable=_songTable;
@property(retain, nonatomic) UIView *tabIndicatorView; // @synthesize tabIndicatorView=_tabIndicatorView;
@property(retain, nonatomic) UICollectionView *subBoardCollectionView; // @synthesize subBoardCollectionView=_subBoardCollectionView;
@property(retain, nonatomic) UICollectionView *boardCollectionView; // @synthesize boardCollectionView=_boardCollectionView;
@property(retain, nonatomic) MMUILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool searchTextAutoFilled; // @synthesize searchTextAutoFilled=_searchTextAutoFilled;
@property(nonatomic) _Bool searchHasNext; // @synthesize searchHasNext=_searchHasNext;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSData *searchLastBuffer; // @synthesize searchLastBuffer=_searchLastBuffer;
@property(retain, nonatomic) NSString *curSearchText; // @synthesize curSearchText=_curSearchText;
@property(retain, nonatomic) NSString *curSearchID; // @synthesize curSearchID=_curSearchID;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidAppear;
- (void)getSmartBoxResult;
- (void)getSearchResult;
- (void)getSongListForBoard:(id)arg1 subBoardItem:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)checkAndReportCellExpose:(id)arg1;
- (void)reportBoardExpose;
- (void)initBoard:(id)arg1 lastBuffer:(id)arg2 continueFlag:(unsigned int)arg3 boardItems:(id)arg4 hasKgAuthorized:(_Bool)arg5;
- (void)initData;
- (id)liveTask;
- (void)onRequestSongItemReturned:(id)arg1 success:(_Bool)arg2;
- (void)onLiveKTVSongOperationRequestSongBlockedAndDismissPanel;
- (void)onLiveKTVSongOperationNotifyStartSingCurrentSong;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onClearForExitLiveWithLiveTask:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)doSearchWithText:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)updateFooterView:(unsigned long long)arg1;
- (void)updateBoardFooter;
- (void)onLeftButtonTapped;
- (id)leftNavButton;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

