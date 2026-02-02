//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class MMAlbum, MMAlbumAccessAuthView, MMTableView, NSArray, NSMutableArray, NSMutableSet, NSObject, NSString, UIView;
@protocol OS_dispatch_queue, SystemImagePickViewControllerDelegate;

@interface SystemImagePickViewController : UIViewController
{
    NSMutableArray *_imageDictionaries;
    NSMutableArray *_cacheDictionaries;
    double _assetWidth;
    double _realBottomBarHeight;
    _Bool canHybridSendAsset;
    _Bool canSendGif;
    _Bool canSendMultiImage;
    _Bool canSendMultiVideo;
    _Bool canSendOriginImage;
    _Bool forceSendOriginImage;
    _Bool isOriginalImage;
    _Bool videoDirectToEdit;
    _Bool disableVideoSelection;
    _Bool isOpenSendOriginVideo;
    _Bool _bPickerStyleForFile;
    _Bool _hasRegisterChangeObserver;
    _Bool _allAlbumsLoaded;
    _Bool _typeChanged;
    _Bool _isAccessLimited;
    int getPickerScene;
    int previewEditScene;
    NSString *finishWording;
    unsigned long long maxGifDataSize;
    unsigned long long maxCount;
    long long livePhotoMode;
    CDUnknownBlockType assetSelectedBlock;
    unsigned long long authScene;
    id <SystemImagePickViewControllerDelegate> _delegate;
    NSMutableArray *_selectedAssetInfos;
    double _heightsize;
    double _widthsize;
    NSString *_appId;
    NSString *_albumid;
    NSString *_type;
    NSString *_mode;
    unsigned long long _countLimit;
    NSArray *_deviceAlbums;
    long long _colNum;
    MMTableView *_tableView;
    MMAlbum *_m_album;
    NSString *_currentAlbum;
    NSMutableSet *_limitAssetIds;
    MMAlbumAccessAuthView *_accessAuthView;
    UIView *_accessLimitTipView;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_currVideoPath;
    struct UIEdgeInsets _additionalTableViewInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currVideoPath; // @synthesize currVideoPath=_currVideoPath;
@property(nonatomic) _Bool isAccessLimited; // @synthesize isAccessLimited=_isAccessLimited;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) UIView *accessLimitTipView; // @synthesize accessLimitTipView=_accessLimitTipView;
@property(nonatomic) _Bool typeChanged; // @synthesize typeChanged=_typeChanged;
@property(nonatomic) _Bool allAlbumsLoaded; // @synthesize allAlbumsLoaded=_allAlbumsLoaded;
@property(nonatomic) _Bool hasRegisterChangeObserver; // @synthesize hasRegisterChangeObserver=_hasRegisterChangeObserver;
@property(retain, nonatomic) MMAlbumAccessAuthView *accessAuthView; // @synthesize accessAuthView=_accessAuthView;
@property(retain, nonatomic) NSMutableSet *limitAssetIds; // @synthesize limitAssetIds=_limitAssetIds;
@property(retain, nonatomic) NSString *currentAlbum; // @synthesize currentAlbum=_currentAlbum;
@property(retain, nonatomic) MMAlbum *m_album; // @synthesize m_album=_m_album;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) struct UIEdgeInsets additionalTableViewInsets; // @synthesize additionalTableViewInsets=_additionalTableViewInsets;
@property(nonatomic) _Bool bPickerStyleForFile; // @synthesize bPickerStyleForFile=_bPickerStyleForFile;
@property(nonatomic) long long colNum; // @synthesize colNum=_colNum;
@property(copy, nonatomic) NSArray *deviceAlbums; // @synthesize deviceAlbums=_deviceAlbums;
@property(nonatomic) unsigned long long countLimit; // @synthesize countLimit=_countLimit;
@property(retain, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *albumid; // @synthesize albumid=_albumid;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) double widthsize; // @synthesize widthsize=_widthsize;
@property(nonatomic) double heightsize; // @synthesize heightsize=_heightsize;
@property(retain, nonatomic) NSMutableArray *selectedAssetInfos; // @synthesize selectedAssetInfos=_selectedAssetInfos;
@property(nonatomic) __weak id <SystemImagePickViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long authScene; // @synthesize authScene;
@property(nonatomic) _Bool isOpenSendOriginVideo; // @synthesize isOpenSendOriginVideo;
@property(copy, nonatomic) CDUnknownBlockType assetSelectedBlock; // @synthesize assetSelectedBlock;
@property(nonatomic) _Bool disableVideoSelection; // @synthesize disableVideoSelection;
@property(nonatomic) long long livePhotoMode; // @synthesize livePhotoMode;
@property(nonatomic) _Bool videoDirectToEdit; // @synthesize videoDirectToEdit;
@property(nonatomic) int previewEditScene; // @synthesize previewEditScene;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount;
@property(nonatomic) unsigned long long maxGifDataSize; // @synthesize maxGifDataSize;
@property(nonatomic) _Bool isOriginalImage; // @synthesize isOriginalImage;
@property(nonatomic) int getPickerScene; // @synthesize getPickerScene;
@property(nonatomic) _Bool forceSendOriginImage; // @synthesize forceSendOriginImage;
@property(retain, nonatomic) NSString *finishWording; // @synthesize finishWording;
@property(nonatomic) _Bool canSendOriginImage; // @synthesize canSendOriginImage;
@property(nonatomic) _Bool canSendMultiVideo; // @synthesize canSendMultiVideo;
@property(nonatomic) _Bool canSendMultiImage; // @synthesize canSendMultiImage;
@property(nonatomic) _Bool canSendGif; // @synthesize canSendGif;
@property(nonatomic) _Bool canHybridSendAsset; // @synthesize canHybridSendAsset;
- (id)createImageLocalId:(id)arg1;
- (id)createVideoLocalId:(id)arg1 videoSize:(unsigned int)arg2;
- (void)initBottomAccessLimitTipView;
- (void)photoLibraryDidChange:(id)arg1;
- (void)onJumpToSystemSetting:(id)arg1;
- (void)onAlbumChanged:(id)arg1 changeInfo:(id)arg2;
- (void)onRemoveSelectedInfoWithAssetId:(id)arg1;
- (void)removeAssetsInChangeInfo:(id)arg1;
- (void)backgroundUpdateAlbums:(id)arg1;
- (void)onAlbumAssetsChange:(id)arg1;
- (void)unregisterChangeObserver;
- (void)registerChangeObserver;
- (void)dispatchAction:(CDUnknownBlockType)arg1;
- (void)requestWechatAuthAndLoadAlbum;
- (void)onAccessAuthOpenWechatSetting;
- (void)onAccessAuthShowLimitedPhotos;
- (void)openSystemSetting;
- (void)onAccessAuthOpenSystemSetting;
- (void)authorizeError;
- (void)tryInitAccessAuthView;
- (_Bool)isPhotoAuthorized;
- (_Bool)isWechatAuthorized;
- (void)onAlbumChangeEvent;
- (void)postOnChangeEvent;
- (void)onChangeEvent:(_Bool)arg1 LiteAppAssetInfo:(id)arg2;
- (void)getImageInfo:(id)arg1 image:(id)arg2 data:(id)arg3;
- (void)getVideoInfo:(id)arg1 video:(id)arg2 filePath:(id)arg3;
- (id)createItemInfo:(int)arg1 height:(int)arg2 size:(unsigned int)arg3 duration:(int)arg4 framerate:(int)arg5;
- (void)compressAndSaveVideo:(id)arg1 needInsert:(_Bool)arg2;
- (void)postCompressAndSaveVideo:(id)arg1 assetInfo:(id)arg2 path:(id)arg3 needInsert:(_Bool)arg4;
- (void)convertHDRToStandard:(id)arg1 outputURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isAssetHDR:(id)arg1;
- (id)saveCoverFile:(id)arg1 fileName:(id)arg2;
- (id)getCacheFilePath:(_Bool)arg1;
- (id)getCacheFilePathWithName:(_Bool)arg1 fileName:(id)arg2;
- (id)assetCachePath;
- (id)getFromLocalCache:(id)arg1;
- (void)postOnClickEvent:(id)arg1;
- (void)onClickEvent:(id)arg1;
- (void)onInsertSelectedInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)onRemoveSelectedInfo:(id)arg1;
- (void)viewStopLoading;
- (void)viewStartLoadingNonBlock;
- (_Bool)isAssetSelectable:(id)arg1;
- (_Bool)hasSelectVideoAsset;
- (_Bool)hasSelectImageAsset;
- (unsigned long long)selectedAssetInfosCount;
- (unsigned long long)selectedImageInfosCount;
- (void)clearSelectedItems;
- (long long)indexInSelectedAssetInfosForAssetInfo:(id)arg1;
- (void)scrollToBottom;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)cellHeight;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)assetsForIndexPath:(id)arg1;
- (_Bool)canShowAddButton;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onOpenCamera;
- (void)onPickMorePhoto;
- (int)isExsitInCache:(id)arg1;
- (void)updateNewSelectedItems;
- (void)updateSelectedIds:(id)arg1;
- (void)updateCountLimit:(unsigned long long)arg1;
- (void)updateMode:(id)arg1;
- (void)updateType:(id)arg1;
- (void)selectAlbum:(id)arg1;
- (void)getUserAlbums;
- (void)startLoadAlbum;
- (void)tryStartLoadAlbum;
- (struct UIEdgeInsets)getTableViewContentInset;
- (void)updateTableViewContentInset;
- (void)reloadPhotoViewWithAnimated:(_Bool)arg1 scrollToBottom:(_Bool)arg2;
- (void)initTableView;
- (void)setupConfig;
- (void)initView;
- (void)initData;
- (_Bool)shouldInteractiveDismiss;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

