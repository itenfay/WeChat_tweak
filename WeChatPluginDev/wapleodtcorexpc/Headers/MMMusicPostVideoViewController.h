//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicMVModel, MMMusicPostVideoTabAlbumController, MMMusicPostVideoTabFinderController, MMMusicPostVideoTabView, MMScrollView, MMUIButton, NSMutableArray, NSString;
@protocol MMMusicPostVideoDelegate, MMMusicPostVideoVCDataSource;

@interface MMMusicPostVideoViewController
{
    MMMusicPostVideoTabView *_tabView;
    MMScrollView *_scrollView;
    NSMutableArray *_arrPageInfo;
    unsigned long long _curMode;
    long long _curTabIndex;
    struct CGPoint startLocation;
    MMUIButton *m_searchBtn;
    _Bool isInFinderSearchMode;
    MMMusicMVModel *_mvModel;
    _Bool _canAlbumShowPhoto;
    _Bool _canMultiSelect;
    id <MMMusicPostVideoVCDataSource> _postVideoDataSource;
    id <MMMusicPostVideoDelegate> _postVideoDelegate;
    double _minDuration;
    MMMusicPostVideoTabAlbumController *_tabAlbumVC;
    MMMusicPostVideoTabFinderController *_tabFinderVC;
}

+ (double)getHeightByMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicPostVideoTabFinderController *tabFinderVC; // @synthesize tabFinderVC=_tabFinderVC;
@property(retain, nonatomic) MMMusicPostVideoTabAlbumController *tabAlbumVC; // @synthesize tabAlbumVC=_tabAlbumVC;
@property(nonatomic) double minDuration; // @synthesize minDuration=_minDuration;
@property(nonatomic) _Bool canMultiSelect; // @synthesize canMultiSelect=_canMultiSelect;
@property(nonatomic) _Bool canAlbumShowPhoto; // @synthesize canAlbumShowPhoto=_canAlbumShowPhoto;
@property(nonatomic) __weak id <MMMusicPostVideoDelegate> postVideoDelegate; // @synthesize postVideoDelegate=_postVideoDelegate;
@property(nonatomic) __weak id <MMMusicPostVideoVCDataSource> postVideoDataSource; // @synthesize postVideoDataSource=_postVideoDataSource;
- (id)generatePreviewDataSoruce;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)onPanGes:(id)arg1;
- (void)onTapGes:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)doClickCloseWithNeedAnimated:(_Bool)arg1 action:(long long)arg2;
- (void)onPageSelectVideo:(id)arg1 thumbImage:(id)arg2 cellFrameInVCAcquireBlock:(CDUnknownBlockType)arg3 contentOffsetResetBlock:(CDUnknownBlockType)arg4;
- (void)handleSearchBtnTap;
- (void)handleTabSelected:(long long)arg1 tabConfig:(id)arg2 manualyTappedType:(unsigned long long)arg3 doubleClicked:(_Bool)arg4;
- (id)tabFinderGetSelectedArr;
- (void)mmMusicPostVideoTabFinderController:(id)arg1 onFinderCellSelectedBtnChecked:(id)arg2;
- (void)onSelectFinderSearchResultVideo:(id)arg1 thumbImage:(id)arg2 cellFrameInVCAcquireBlock:(CDUnknownBlockType)arg3 contentOffsetResetBlock:(CDUnknownBlockType)arg4;
- (void)onSelectFinderResultVideo:(id)arg1 thumbImage:(id)arg2 cellFrameInVCAcquireBlock:(CDUnknownBlockType)arg3 contentOffsetResetBlock:(CDUnknownBlockType)arg4;
- (void)onExitTabFinderSearchMode;
- (void)enterSearchModeHeight;
- (void)onEnterTabFinderSearchMode;
- (void)onTabFinderSearch:(id)arg1;
- (id)tabAlbumGetSelectedArr;
- (void)onTabAlbumAssetsChange:(id)arg1;
- (void)mmMusicPostVideoTabAlbumController:(id)arg1 onLocalVideoAssetSelectedBtnChecked:(id)arg2;
- (void)onTabAlbumVCShortVideoTaken:(id)arg1 localIdentifier:(id)arg2 thumbImg:(id)arg3 editVideoAttr:(id)arg4 paramModel:(id)arg5;
- (void)onSelectLocalVideoAsset:(id)arg1 thumbImage:(id)arg2 thumbFrameInVCAcquireBlock:(CDUnknownBlockType)arg3 contentOffsetResetBlock:(CDUnknownBlockType)arg4;
- (void)reloadVisibleCellSelectedStatus;
- (void)reload;
- (_Bool)updateDataSelectedStatusByUniqueId:(id)arg1;
- (void)updateDataSelectedStatus;
- (void)updateCurrEposideDuration:(double)arg1;
- (void)setCurrEposideDuration:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)initData;
- (void)initPageInfo;
- (void)initView;
- (void)setHalfModeWithoutAnim;
- (void)setEditModeWithoutAnim;
- (void)setModeWithoutAnim:(unsigned long long)arg1;
- (_Bool)isFullScreenMode;
- (void)setMode:(unsigned long long)arg1 alongside:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setMode:(unsigned long long)arg1;
- (id)currentSelectedViewController;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithMVModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

