//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImagePreviewBrowserController, MMMusicEditVideoCellView, MMMusicEditorModeView, MMMusicLiveCGIMgr, MMMusicLiveLyricDisplayView, MMMusicMVEditorCardCell, MMMusicMVEditorCollectionView, MMMusicMVModel, MMMusicNoDotSelectItemDisplayView, MMMusicPostVideoAnimHelper, MMMusicPostVideoViewController, MMTimer, MMUIButton, MVImagePreviewControlCenter, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIView;
@protocol MMImagePreviewBrowserControllerDataSource, MMMusicMVEditorViewControllerDelegate;

@interface MMMusicMVEditorViewController
{
    _Bool _seekSpecifyTimeFlag;
    _Bool _isEditVideoMode;
    _Bool _markedVideoOffsetDirty;
    _Bool _isFirstAppear;
    _Bool _isInFlexClipMode;
    id <MMMusicMVEditorViewControllerDelegate> _delegate;
    unsigned long long _currentIndex;
    NSString *_songId;
    MMMusicMVEditorCollectionView *_collectionView;
    MMUIButton *_cancelButton;
    MMUIButton *_doneButton;
    MMMusicEditorModeView *_changeModeView;
    MMMusicLiveLyricDisplayView *_lyricView;
    MMTimer *_musicMonitorTimer;
    UIView *_videoTransitionMask;
    MMMusicPostVideoViewController *_videoSourceViewController;
    MMMusicEditVideoCellView *_editVideoCellView;
    MMMusicMVEditorCardCell *_lastPlayingCardCell;
    MMMusicMVModel *_mvModel;
    MMMusicLiveCGIMgr *_cgiMgr;
    MMMusicPostVideoAnimHelper *_postAnimhelper;
    unsigned long long _fromScene;
    NSString *_mvClipFillStatus;
    NSMutableSet *_userInteractionSubviewSet;
    NSMutableArray *_clipRecords;
    MMMusicNoDotSelectItemDisplayView *_selectItemDisplayView;
    NSMutableArray *_selectItemViewModelArr;
    id <MMImagePreviewBrowserControllerDataSource> _imagePreviewDataSource;
    MVImagePreviewControlCenter *_previewControlCenter;
    MMImagePreviewBrowserController *_currentImagePreviewViewController;
    NSMutableDictionary *_imagePreviewDataSourceMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *imagePreviewDataSourceMap; // @synthesize imagePreviewDataSourceMap=_imagePreviewDataSourceMap;
@property(nonatomic) __weak MMImagePreviewBrowserController *currentImagePreviewViewController; // @synthesize currentImagePreviewViewController=_currentImagePreviewViewController;
@property(retain, nonatomic) MVImagePreviewControlCenter *previewControlCenter; // @synthesize previewControlCenter=_previewControlCenter;
@property(retain, nonatomic) id <MMImagePreviewBrowserControllerDataSource> imagePreviewDataSource; // @synthesize imagePreviewDataSource=_imagePreviewDataSource;
@property(retain, nonatomic) NSMutableArray *selectItemViewModelArr; // @synthesize selectItemViewModelArr=_selectItemViewModelArr;
@property(retain, nonatomic) MMMusicNoDotSelectItemDisplayView *selectItemDisplayView; // @synthesize selectItemDisplayView=_selectItemDisplayView;
@property(nonatomic) _Bool isInFlexClipMode; // @synthesize isInFlexClipMode=_isInFlexClipMode;
@property(retain, nonatomic) NSMutableArray *clipRecords; // @synthesize clipRecords=_clipRecords;
@property(retain, nonatomic) NSMutableSet *userInteractionSubviewSet; // @synthesize userInteractionSubviewSet=_userInteractionSubviewSet;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(retain, nonatomic) NSString *mvClipFillStatus; // @synthesize mvClipFillStatus=_mvClipFillStatus;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) _Bool markedVideoOffsetDirty; // @synthesize markedVideoOffsetDirty=_markedVideoOffsetDirty;
@property(retain, nonatomic) MMMusicPostVideoAnimHelper *postAnimhelper; // @synthesize postAnimhelper=_postAnimhelper;
@property(retain, nonatomic) MMMusicLiveCGIMgr *cgiMgr; // @synthesize cgiMgr=_cgiMgr;
@property(retain, nonatomic) MMMusicMVModel *mvModel; // @synthesize mvModel=_mvModel;
@property(nonatomic) _Bool isEditVideoMode; // @synthesize isEditVideoMode=_isEditVideoMode;
@property(nonatomic) __weak MMMusicMVEditorCardCell *lastPlayingCardCell; // @synthesize lastPlayingCardCell=_lastPlayingCardCell;
@property(retain, nonatomic) MMMusicEditVideoCellView *editVideoCellView; // @synthesize editVideoCellView=_editVideoCellView;
@property(retain, nonatomic) MMMusicPostVideoViewController *videoSourceViewController; // @synthesize videoSourceViewController=_videoSourceViewController;
@property(nonatomic) _Bool seekSpecifyTimeFlag; // @synthesize seekSpecifyTimeFlag=_seekSpecifyTimeFlag;
@property(retain, nonatomic) UIView *videoTransitionMask; // @synthesize videoTransitionMask=_videoTransitionMask;
@property(retain, nonatomic) MMTimer *musicMonitorTimer; // @synthesize musicMonitorTimer=_musicMonitorTimer;
@property(retain, nonatomic) MMMusicLiveLyricDisplayView *lyricView; // @synthesize lyricView=_lyricView;
@property(retain, nonatomic) MMMusicEditorModeView *changeModeView; // @synthesize changeModeView=_changeModeView;
@property(retain, nonatomic) MMUIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMMusicMVEditorCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak id <MMMusicMVEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)mmMusicNoDotSelectItemDisplayView:(id)arg1 noDotSelectItemView:(id)arg2 onDelete:(id)arg3;
- (void)updateViewModelArrFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)getSelectItemViewModelArr;
- (void)getSelectItemViewModelArrImgCount:(unsigned int *)arg1 andVideoCount:(unsigned int *)arg2;
- (_Bool)canAddMoreItemInFlexModeAndShowTipsIfNeedWithUniqueId:(id)arg1;
- (void)updateVideoSourceDataWhenTabAlbumChanged;
- (void)updateVideoSourceData;
- (void)mmMusicEditorModeViewDidClick:(id)arg1 mode:(unsigned long long)arg2;
- (void)onMMMusicEditVideoCellViewFinish:(id)arg1;
- (void)onMMMusicEditVideoCellViewCancel:(id)arg1 extInfo:(id)arg2;
- (void)onMusicLiveGetSongStatusWithIsSuccess:(_Bool)arg1 resp:(id)arg2;
- (void)onPostPublishLogicFinishedCancelPublishing;
- (void)onPostPublishLogicFinishedPosting:(id)arg1 createdFinder:(_Bool)arg2;
- (void)onPostPublishLogicFinishedSavingAsDraft:(id)arg1 createdFinder:(_Bool)arg2;
- (void)onPostPublishLogicClickPost;
- (void)stopMusicAndRemoveMinimizedTaskWhenExit;
- (void)updateMvClipFillStatus;
- (id)userInterationSubviewSet;
- (void)resetSubviewUserInteraction;
- (void)setSubviewUserInteraction;
- (void)onClickDoneBtn;
- (void)onClickCancelBtn;
- (void)updateMusicPlayProressInFixMode;
- (void)checkVideoStatus;
- (void)resumeCurrentEditVideo;
- (void)resumeCurrentCollectionVideo;
- (double)currentVideoOffset;
- (void)pauseCurrentEditVideo;
- (void)pauseCurrentCollectionVideo;
- (_Bool)shouldPlayVideo;
- (id)trackItems;
- (void)onMusicPlayStatusChanged;
- (void)onLyricService:(id)arg1 curentLyricChangeTo:(id)arg2 timeToNext:(double)arg3 currIndex:(unsigned int)arg4;
- (_Bool)isMusicMVEditorCardCellInUse:(id)arg1;
- (void)setupLyricForCellIfNeeded:(id)arg1;
- (void)scrollEpisodeToIndex:(unsigned long long)arg1;
- (void)updateCurrentIndexAndPlayTime:(unsigned long long)arg1;
- (void)reloadData;
- (void)updateVideoPlayingCell:(id)arg1;
- (void)updateVideoViewLayer:(id)arg1 isCurrentIndex:(_Bool)arg2;
- (void)refreshFixModeVisibleItemsPlayState;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)clickCropButton:(id)arg1;
- (void)revertPostForTrack:(id)arg1;
- (void)setupCreateMVState;
- (id)getSelectedArr;
- (void)imagePreviewBrowserController:(id)arg1 onAssetCollectionViewSelected:(id)arg2;
- (_Bool)isSendButtonEnable;
- (_Bool)canSelectAssetInPreview:(id)arg1;
- (struct CGRect)assetViewFrameGlobal:(id)arg1;
- (void)sendImageFromScene:(long long)arg1;
- (unsigned long long)selectedAssetInfosCount;
- (long long)indexInSelectedAssetInfosForAssetInfo:(id)arg1;
- (void)onMoveSelectedInfo:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)onInsertSelectedInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)reloadPreviewDataSourceSelectedItems;
- (void)onRemoveSelectedInfo:(id)arg1;
- (_Bool)imagePreviewBrowserController:(id)arg1 shouldContinueSelectButtonWithAssetInfo:(id)arg2 isCurrentSelected:(_Bool)arg3;
- (id)generateDefaultPreviewDataSourceForModel:(id)arg1;
- (void)openPreviewWithSelectedModel:(id)arg1 index:(long long)arg2;
- (void)postVideoViewController:(id)arg1 onFinderVideoSelectedBtnChecked:(id)arg2;
- (void)addToPreviewSourceMapWithId:(id)arg1 source:(id)arg2;
- (void)postVideoViewController:(id)arg1 onLocalVideoAssetSelectedBtnChecked:(id)arg2;
- (void)postVideoViewControllerModeChange:(id)arg1 fromMode:(unsigned long long)arg2 toMode:(unsigned long long)arg3;
- (void)onPostVideoTabAlbumAssetsChanged:(id)arg1;
- (void)fix_onPostVideoShortVideoTaken:(id)arg1 localIdentifier:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)flex_onPostVideoShortVideoTaken:(id)arg1 localIdentifier:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)onPostVideoShortVideoTaken:(id)arg1 localIdentifier:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)fix_onSelectLocalVideoAsset:(id)arg1 thumbImage:(id)arg2 thumbFrameInVC:(struct CGRect)arg3;
- (void)flex_onSelectLocalVideoAsset:(id)arg1 thumbImage:(id)arg2 thumbFrameInVC:(struct CGRect)arg3;
- (void)onSelectLocalVideoAsset:(id)arg1 thumbImage:(id)arg2 thumbFrameInVC:(struct CGRect)arg3;
- (void)fix_onSelectFinderVideo:(id)arg1 thumbImage:(id)arg2 cellFrameInVC:(struct CGRect)arg3;
- (void)removeSelectedModel:(id)arg1;
- (void)addSelectedModel:(id)arg1;
- (void)flex_onSelectFinderVideo:(id)arg1 thumbImage:(id)arg2 cellFrameInVC:(struct CGRect)arg3;
- (void)onSelectFinderVideo:(id)arg1 thumbImage:(id)arg2 cellFrameInVC:(struct CGRect)arg3;
- (void)onTabFinderSearch:(id)arg1;
- (void)didReceiveAppWillEnterForeground:(id)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)setupMusicMonitorTimer;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)handleTap:(id)arg1;
- (void)resetEditVideoCellView;
- (void)initEditVideoCellView;
- (void)setupSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)draftFinderDataItemForTid:(id)arg1;
- (void)dealloc;
- (id)initWithMVModel:(id)arg1 fromScene:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

