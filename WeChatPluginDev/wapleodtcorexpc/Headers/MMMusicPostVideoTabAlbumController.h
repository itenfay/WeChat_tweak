//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAlbum, MMAlbumDropPickerController, MMAssetForPHAssetFramework, MMDropableTitleView, MMMusicPostVideoImagePickerControlCenter, NSMutableArray, NSObject, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol MMMusicPostVideoTabAlbumControllerDataSource, MMMusicPostVideoTabAlbumControllerDelegate, OS_dispatch_queue;

@interface MMMusicPostVideoTabAlbumController
{
    MMAlbumDropPickerController *_dropController;
    MMMusicPostVideoImagePickerControlCenter *_controlCenter;
    MMAlbum *_album;
    NSMutableArray *modelLists;
    UICollectionView *_listView;
    UICollectionViewFlowLayout *_flowLayout;
    double _currEposideDuration;
    _Bool _bResumeMusicAfterTakeVideo;
    _Bool _canAlbumShowPhoto;
    _Bool _canMultiSelect;
    id <MMMusicPostVideoTabAlbumControllerDataSource> _dataSource;
    id <MMMusicPostVideoTabAlbumControllerDelegate> _delegate;
    MMDropableTitleView *_titleView;
    MMAssetForPHAssetFramework *_sightCameraTakenAsset;
    NSObject<OS_dispatch_queue> *_albumExecuteQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *albumExecuteQueue; // @synthesize albumExecuteQueue=_albumExecuteQueue;
@property(nonatomic) _Bool canMultiSelect; // @synthesize canMultiSelect=_canMultiSelect;
@property(nonatomic) _Bool canAlbumShowPhoto; // @synthesize canAlbumShowPhoto=_canAlbumShowPhoto;
@property(retain, nonatomic) MMAssetForPHAssetFramework *sightCameraTakenAsset; // @synthesize sightCameraTakenAsset=_sightCameraTakenAsset;
@property(retain, nonatomic) MMDropableTitleView *titleView; // @synthesize titleView=_titleView;
@property __weak id <MMMusicPostVideoTabAlbumControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMMusicPostVideoTabAlbumControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)generatePreviewDataSource;
- (void)onClickDropableTitleView:(id)arg1;
- (void)readAlbumsErrorWithAlbumDropPicker:(id)arg1;
- (void)authorizeErrorWithAlbumDropPicker:(id)arg1;
- (void)albumDropPicker:(id)arg1 didSelectAtAlbum:(id)arg2 isDefault:(_Bool)arg3;
- (id)getAlbumTitleView;
- (void)generateModelListAndReloadDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)onShortVideoTakenFailedToSaveToLibrary:(id)arg1;
- (void)onShortVideoTakenHasSavedToLibrary:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)mmMusicPostVideoTabAlbumVideoCell:(id)arg1 onSelectedBtnClicked:(id)arg2;
- (void)endLoading;
- (void)startLoadingBlocked;
- (void)showFinderCameraViewController;
- (_Bool)isSelectedWithModel:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)assetCount;
- (id)generateModelList;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)layoutWithFrame:(struct CGRect)arg1;
- (void)reloadData;
- (_Bool)updateDataSelectedStatusByUniqueId:(id)arg1;
- (void)reloadVisibleCellSelectedStatus;
- (void)updateDataSelectedStatus;
- (void)updateCurrEposideDuration:(double)arg1;
- (void)setCurrEposideDuration:(double)arg1;
- (void)updateCanAlbumShowPhoto:(_Bool)arg1;
- (void)updateCanMultiSelect:(_Bool)arg1;
- (id)arrPanGestures;
- (id)initWithViewController:(id)arg1 canAlbumShowPhoto:(_Bool)arg2 canMultiSelect:(_Bool)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

