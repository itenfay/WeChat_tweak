//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImagePickerCacheObj, NSRecursiveLock, NSString;

@interface MMImagePickerCacheMgr
{
    _Bool _isEnableCache;
    MMImagePickerCacheObj *_cacheObj;
    long long _currentOption;
    NSRecursiveLock *_lock;
    long long _maxAssetCacheCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long maxAssetCacheCount; // @synthesize maxAssetCacheCount=_maxAssetCacheCount;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) long long currentOption; // @synthesize currentOption=_currentOption;
@property(retain, nonatomic) MMImagePickerCacheObj *cacheObj; // @synthesize cacheObj=_cacheObj;
@property(nonatomic) _Bool isEnableCache; // @synthesize isEnableCache=_isEnableCache;
- (void)dispatchIOAction:(CDUnknownBlockType)arg1;
- (void)saveAssetForId:(id)arg1;
- (void)updateAlbumsForCurrOption:(id)arg1;
- (id)albumsForCurrOption;
- (id)findAlbumForIdentifier:(id)arg1;
- (void)tryLoadFromLocal;
- (void)saveToLocal;
- (void)updateIsVideo:(_Bool)arg1 isGif:(_Bool)arg2 videoDuration:(double)arg3 forAsset:(id)arg4;
- (void)updateThumbImage:(id)arg1 forAsset:(id)arg2;
- (void)updateAsset:(id)arg1 inAlbum:(id)arg2 index:(unsigned long long)arg3;
- (id)fetchAssetWithId:(id)arg1;
- (void)updateTitle:(id)arg1 forAlbum:(id)arg2;
- (void)updateThumbPhotoCount:(unsigned long long)arg1 forAlbum:(id)arg2;
- (void)updateThumbImage:(id)arg1 forAlbum:(id)arg2;
- (void)updateAlbums:(id)arg1;
- (id)fetchLastEntryAlbum;
- (void)updateLastEntryAlbum:(id)arg1;
- (id)fetchAlbums;
- (void)setupMaxCacheAssetCount:(long long)arg1;
- (void)didLeaveImagePicker;
- (void)didEnterImagePickerWithOption:(long long)arg1;
- (void)onServiceMemoryWarning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

