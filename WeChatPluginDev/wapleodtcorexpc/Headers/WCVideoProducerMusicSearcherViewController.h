//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditVideoBGMPlayer, NSData, NSIndexPath, NSString, UIButton, UICollectionView, UITextField, UIView, WCVideoProducerDataSource, WCVideoProducerLoadMoreView;
@protocol WCVideoProducerMusicSearcherDelegate;

@interface WCVideoProducerMusicSearcherViewController
{
    _Bool _isSearchingAfterInputEnabled;
    _Bool _isSearching;
    _Bool _lastSearchSequence;
    id <WCVideoProducerMusicSearcherDelegate> _delegate;
    unsigned long long _searchScene;
    UIView *_contentContainerView;
    UIView *_contentContainerBackgroundView;
    UIButton *_finishButton;
    UITextField *_searchInputField;
    UICollectionView *_searchResultCollectionView;
    WCVideoProducerLoadMoreView *_loadMoreView;
    EditVideoBGMPlayer *_musicPlayer;
    WCVideoProducerDataSource *_cellVMData;
    NSData *_lastSearchRequestBuffer;
    NSString *_lastSearchKey;
    NSIndexPath *_selectedIndex;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSString *lastSearchKey; // @synthesize lastSearchKey=_lastSearchKey;
@property(retain, nonatomic) NSData *lastSearchRequestBuffer; // @synthesize lastSearchRequestBuffer=_lastSearchRequestBuffer;
@property(nonatomic) _Bool lastSearchSequence; // @synthesize lastSearchSequence=_lastSearchSequence;
@property(nonatomic) _Bool isSearching; // @synthesize isSearching=_isSearching;
@property(retain, nonatomic) WCVideoProducerDataSource *cellVMData; // @synthesize cellVMData=_cellVMData;
@property(retain, nonatomic) EditVideoBGMPlayer *musicPlayer; // @synthesize musicPlayer=_musicPlayer;
@property(retain, nonatomic) WCVideoProducerLoadMoreView *loadMoreView; // @synthesize loadMoreView=_loadMoreView;
@property(retain, nonatomic) UICollectionView *searchResultCollectionView; // @synthesize searchResultCollectionView=_searchResultCollectionView;
@property(retain, nonatomic) UITextField *searchInputField; // @synthesize searchInputField=_searchInputField;
@property(retain, nonatomic) UIButton *finishButton; // @synthesize finishButton=_finishButton;
@property(retain, nonatomic) UIView *contentContainerBackgroundView; // @synthesize contentContainerBackgroundView=_contentContainerBackgroundView;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=_searchScene;
@property(nonatomic) __weak id <WCVideoProducerMusicSearcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isSearchingAfterInputEnabled; // @synthesize isSearchingAfterInputEnabled=_isSearchingAfterInputEnabled;
- (double)_getMusicSearcherSafeHeight;
- (void)_initResultListView;
- (void)_initSearchBarView;
- (void)_initTopBarView;
- (void)_initContentView;
- (void)_initBackgroundCloseView;
- (void)_initView;
- (void)_relayoutView;
- (void)_onTextFieldEditingChange:(id)arg1;
- (void)_onClickClearSearchInputButton:(id)arg1;
- (void)_onClickFinishButton:(id)arg1;
- (void)_onClickCancelButton:(id)arg1;
- (void)_updateLoadMoreViewState:(unsigned long long)arg1 isError:(_Bool)arg2;
- (id)_createOMJMusicInfoFrom:(id)arg1;
- (_Bool)_isMusicExistsInCellVMData:(id)arg1;
- (void)_replayMusic;
- (_Bool)_playMusicForMusicCellVM:(id)arg1;
- (void)_onMusicAtIndex:(id)arg1 changedSelectTo:(_Bool)arg2;
- (void)_onMusicDataUpdated;
- (void)_ensureLoadMoreCellVMForInitialState:(unsigned long long)arg1;
- (void)_handleSearchResultWithSearchKey:(id)arg1 error:(id)arg2 requestBuffer:(id)arg3 musicList:(id)arg4 hasMore:(_Bool)arg5;
- (void)_interruptSearchRequest;
- (void)_requestSearchCgiWithKeyword:(id)arg1 andResignInputField:(_Bool)arg2;
- (void)onScrolledToLoading;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onEditVideoBGMPlayerTimeControlStatusChange:(long long)arg1;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)onEditVideoBGMPlayerReadyToPlay;
- (void)mmTextFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)updateMusicPlayerMuted:(_Bool)arg1;
- (void)selectMusicById:(id)arg1;
- (void)_resetSearchResultData;
- (void)_resetSearchBar;
- (void)resetSearching;
- (_Bool)becomeFirstResponder;
- (void)viewWillPopOrDismiss:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)setViewTop:(double)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (double)getContentHeightWhenShowing;
- (void)onRelayoutViews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

