//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GWHaowanAlbumBadNetView, GameRecommendVideoListView, MMAlbumForGameHaowan, MMUIButton, NSArray, NSMutableArray, NSMutableSet, NSString, UICollectionView, UIView;
@protocol GameVideoAlbumControllerDelegate;

@interface GameVideoAlbumController
{
    MMAlbumForGameHaowan *_haowanAlum;
    NSMutableArray *_sectionInfos;
    NSArray *_albumInfos;
    NSMutableSet *_reportExposureCells;
    unsigned long long _currentAssetIndex;
    _Bool _ignoreVideoPreview;
    id <GameVideoAlbumControllerDelegate> _delegate;
    unsigned long long _galleryType;
    UIView *_emptyView;
    UICollectionView *_collectionView;
    UIView *_bottomBar;
    MMUIButton *_skipBtn;
    UIView *_bottomBarBlurView;
    UIView *_navBarBlurView;
    NSArray *_recommendVideoList;
    GameRecommendVideoListView *_recommendListView;
    GWHaowanAlbumBadNetView *_badNetView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GWHaowanAlbumBadNetView *badNetView; // @synthesize badNetView=_badNetView;
@property(retain, nonatomic) GameRecommendVideoListView *recommendListView; // @synthesize recommendListView=_recommendListView;
@property(copy, nonatomic) NSArray *recommendVideoList; // @synthesize recommendVideoList=_recommendVideoList;
@property(retain, nonatomic) UIView *navBarBlurView; // @synthesize navBarBlurView=_navBarBlurView;
@property(retain, nonatomic) UIView *bottomBarBlurView; // @synthesize bottomBarBlurView=_bottomBarBlurView;
@property(retain, nonatomic) MMUIButton *skipBtn; // @synthesize skipBtn=_skipBtn;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) _Bool ignoreVideoPreview; // @synthesize ignoreVideoPreview=_ignoreVideoPreview;
@property(nonatomic) unsigned long long galleryType; // @synthesize galleryType=_galleryType;
@property(nonatomic) __weak id <GameVideoAlbumControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)buildTrackEventProps:(CDUnknownBlockType)arg1;
- (id)reportObjWithPosition:(long long)arg1 action:(long long)arg2;
- (void)trackEventClickForVideo:(id)arg1 appId:(id)arg2 index:(int)arg3;
- (void)trackEventExplosuredForVideo:(id)arg1 appId:(id)arg2 index:(int)arg3;
- (void)trackEventShowGuideTips;
- (void)trackEventEmptyData;
- (void)trackEventExit;
- (void)trackEventExplosured;
- (id)setupNewUserTipsBanner;
- (void)showNewUserTipsDialogIfNeed;
- (void)hideNewUserTipsBanner:(id)arg1;
- (void)showNewUserTipsBannerIfNeed;
- (void)showNewUserTipsIfNeed;
- (void)gameVideoEditController:(id)arg1 didFailedWithError:(id)arg2;
- (void)gameVideoEditController:(id)arg1 didFinishWithFilePath:(id)arg2 withExtra:(id)arg3;
- (void)gameVideoGallery:(id)arg1 didPerformActionWithIndex:(long long)arg2 andData:(id)arg3;
- (id)calculateSectionTitle:(id)arg1;
- (void)didGameDataChanged:(id)arg1;
- (void)navigateToGameEditWithIndex:(long long)arg1 andData:(id)arg2;
- (void)navigateToGalleryWithIndex:(long long)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)didRecommendVideoSelectAsset:(id)arg1 isPublish:(_Bool)arg2;
- (void)haowanAlbumBadNetReloadAction;
- (void)loadingTimeoutToShowBadNetView;
- (void)setupDataModel;
- (void)setupEmptyView;
- (void)setupBottomView;
- (void)setupCollectionView;
- (void)OnSkipBtnClick:(id)arg1;
- (void)setupViews;
- (double)bottomBarHeight;
- (void)onClose;
- (_Bool)useTransparentNavibar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAlbumInfos:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

