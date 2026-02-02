//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, FinderLiveKtvPlayCountInfo, MMFinderLiveKTVBoardItem, MMFinderLiveKTVSongItem, MMFinderLiveTaskId, MMTableView, MMUIButton, MMUILabel, MMWebImageView, NSMutableArray, NSMutableSet, NSString, PAGView, UICollectionView, UIView, WCFinderHeadImageView, WCFinderLiveAnchorLogReporter, WCTimeLineFooterView;

@interface MMFinderLiveKTVRequestedSongPanel
{
    _Bool _currPauseState;
    _Bool _isShowing;
    _Bool _isNoContentViewReported;
    _Bool _isPlayingSongReported;
    MMFinderLiveTaskId *_taskId;
    WCFinderLiveAnchorLogReporter *_anchorReporter;
    unsigned long long _state;
    FinderLiveKtvPlayCountInfo *_playCountInfo;
    NSMutableArray *_boardItems;
    MMFinderLiveKTVBoardItem *_selectedBoard;
    UICollectionView *_boardCollectionView;
    UIView *_tabIndicatorView;
    MMTableView *_songTable;
    WCTimeLineFooterView *_footerView;
    UIView *_emptyContentView;
    MMWebImageView *_microphoneLabel;
    MMUILabel *_noSongLabel;
    MMUILabel *_requestSongLabel;
    MMFinderLiveKTVSongItem *_playingSongItem;
    UIView *_playingContainerView;
    MMUILabel *_playingLabel;
    UIView *_playingSongContainerView;
    MMWebImageView *_coverImageView;
    MMUILabel *_musicNameLabel;
    MMUILabel *_musicAnchorLabel;
    MMUILabel *_durationLabel;
    WCFinderHeadImageView *_avatorImageView;
    MMUILabel *_musicSingerLabel;
    MMUIButton *_operationButton;
    MMUIButton *_endPlayButton;
    PAGView *_singingAniView;
    CAGradientLayer *_gradientLayer;
    long long _currSongOperateAuthorityOptions;
    unsigned long long _anchorReportTab;
    unsigned long long _audienceReportTab;
    NSMutableSet *_reportedSongUniqueIdSet;
}

+ (id)showWithTaskId:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *reportedSongUniqueIdSet; // @synthesize reportedSongUniqueIdSet=_reportedSongUniqueIdSet;
@property(nonatomic) _Bool isPlayingSongReported; // @synthesize isPlayingSongReported=_isPlayingSongReported;
@property(nonatomic) _Bool isNoContentViewReported; // @synthesize isNoContentViewReported=_isNoContentViewReported;
@property(nonatomic) unsigned long long audienceReportTab; // @synthesize audienceReportTab=_audienceReportTab;
@property(nonatomic) unsigned long long anchorReportTab; // @synthesize anchorReportTab=_anchorReportTab;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool currPauseState; // @synthesize currPauseState=_currPauseState;
@property(nonatomic) long long currSongOperateAuthorityOptions; // @synthesize currSongOperateAuthorityOptions=_currSongOperateAuthorityOptions;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) PAGView *singingAniView; // @synthesize singingAniView=_singingAniView;
@property(retain, nonatomic) MMUIButton *endPlayButton; // @synthesize endPlayButton=_endPlayButton;
@property(retain, nonatomic) MMUIButton *operationButton; // @synthesize operationButton=_operationButton;
@property(retain, nonatomic) MMUILabel *musicSingerLabel; // @synthesize musicSingerLabel=_musicSingerLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatorImageView; // @synthesize avatorImageView=_avatorImageView;
@property(retain, nonatomic) MMUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) MMUILabel *musicAnchorLabel; // @synthesize musicAnchorLabel=_musicAnchorLabel;
@property(retain, nonatomic) MMUILabel *musicNameLabel; // @synthesize musicNameLabel=_musicNameLabel;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *playingSongContainerView; // @synthesize playingSongContainerView=_playingSongContainerView;
@property(retain, nonatomic) MMUILabel *playingLabel; // @synthesize playingLabel=_playingLabel;
@property(retain, nonatomic) UIView *playingContainerView; // @synthesize playingContainerView=_playingContainerView;
@property(retain, nonatomic) MMFinderLiveKTVSongItem *playingSongItem; // @synthesize playingSongItem=_playingSongItem;
@property(retain, nonatomic) MMUILabel *requestSongLabel; // @synthesize requestSongLabel=_requestSongLabel;
@property(retain, nonatomic) MMUILabel *noSongLabel; // @synthesize noSongLabel=_noSongLabel;
@property(retain, nonatomic) MMWebImageView *microphoneLabel; // @synthesize microphoneLabel=_microphoneLabel;
@property(retain, nonatomic) UIView *emptyContentView; // @synthesize emptyContentView=_emptyContentView;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMTableView *songTable; // @synthesize songTable=_songTable;
@property(retain, nonatomic) UIView *tabIndicatorView; // @synthesize tabIndicatorView=_tabIndicatorView;
@property(retain, nonatomic) UICollectionView *boardCollectionView; // @synthesize boardCollectionView=_boardCollectionView;
@property(retain, nonatomic) MMFinderLiveKTVBoardItem *selectedBoard; // @synthesize selectedBoard=_selectedBoard;
@property(retain, nonatomic) NSMutableArray *boardItems; // @synthesize boardItems=_boardItems;
@property(retain, nonatomic) FinderLiveKtvPlayCountInfo *playCountInfo; // @synthesize playCountInfo=_playCountInfo;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) WCFinderLiveAnchorLogReporter *anchorReporter; // @synthesize anchorReporter=_anchorReporter;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidAppear;
- (_Bool)changeCurrSongPauseState:(_Bool)arg1 songItem:(id)arg2;
- (void)endSong:(id)arg1;
- (void)modSongList:(int)arg1 withSongItem:(id)arg2;
- (void)getFinishedSongList:(id)arg1 onlyMySong:(_Bool)arg2 isContinue:(_Bool)arg3;
- (void)getSongList:(int)arg1 boardItem:(id)arg2 onlyMySong:(_Bool)arg3;
- (id)getBoardName:(id)arg1 count:(unsigned int)arg2;
- (unsigned int)getBoardSongListSize:(id)arg1;
- (void)updateBoardIfNeeded:(id)arg1;
- (void)initData;
- (_Bool)onSelfMode;
- (id)parseDuration:(int)arg1;
- (id)myDoneSubBoard;
- (id)myWaitSubBoard;
- (void)checkAndReportCellExpose:(id)arg1;
- (id)liveTask;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 pauseActionStateUpdated:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 songItemUpdated:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 pauseChanged:(_Bool)arg3;
- (void)onLiveKTVPendingSongItemsUpdate:(id)arg1 source:(long long)arg2 taskId:(id)arg3;
- (void)onKtvSongListChangeNotification:(id)arg1 fromUser:(id)arg2 taskId:(id)arg3;
- (void)onClearForExitLiveWithLiveTask:(id)arg1;
- (void)onLiveKTVSongOperationRequestSongBlockedAndDismissPanel;
- (void)onLiveKTVSongOperationNotifyStartSingCurrentSong;
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
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)updateFooterView:(unsigned long long)arg1;
- (void)updateBoardFooter;
- (void)onClickedOperationBtn:(id)arg1;
- (void)onClickedCut;
- (void)onRightButtonTapped;
- (void)onRequestPanelTapped;
- (void)onLeftButtonTapped;
- (void)refreshPauseBtnEnabled;
- (_Bool)getCurrPauseState;
- (void)updateCurrPauseState:(_Bool)arg1;
- (void)refreshOperationBtnPauseState;
- (void)changeOperationBtnPauseState:(_Bool)arg1;
- (void)refreshUIForCurrSongOperateAuthority;
- (void)updateCurrSongOperateAuthority;
- (void)refreshPlayingData:(id)arg1;
- (void)layoutNoContentView;
- (void)layoutMainContentView;
- (void)layoutPlayingSongView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)dealloc;
- (void)initMainView;
- (void)initPlayingSongView;
- (void)initEmptyContentView;
- (void)initSubviews;
- (id)rightNavButton;
- (id)leftNavButton;
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

