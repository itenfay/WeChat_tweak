//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesCDNInfoDB, FavoritesItemDB, FavoritesUploadBaseProccessor, FavoritesUploadFileSaver, FavoritesUploadVideoCompressor, NSMutableArray, NSString;
@protocol FavoritesUploadMgrDelegate;

@interface FavoritesUploadMgr
{
    NSMutableArray *m_failedQueue;
    FavoritesCDNInfoDB *m_favCdnDB;
    FavoritesItemDB *m_favItemDB;
    unsigned long long m_type;
    FavoritesUploadVideoCompressor *m_videoCompressor;
    FavoritesUploadFileSaver *m_fileSaver;
    FavoritesUploadBaseProccessor *m_uploador;
    id <FavoritesUploadMgrDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavoritesUploadMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)triggerCapacityExeedFavItemListReUpload:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (unsigned long long)preCleanGetCacheSize;
- (_Bool)checkHasUnsafeTempFile:(id)arg1;
- (unsigned long long)cleanCache;
- (void)onRepairCheckFavItemAvailable:(unsigned int)arg1 occupied:(_Bool *)arg2;
- (_Bool)deleteCdnInfo:(id)arg1;
- (_Bool)updateCdnInfo:(id)arg1;
- (void)reUploadFavItem:(id)arg1;
- (void)updateFavoritesItemCDNInfo:(id)arg1 inItem:(id)arg2;
- (_Bool)needDownloadMsgOfData:(id)arg1 inItem:(id)arg2;
- (_Bool)needUploadData:(id)arg1 ofType:(int)arg2 inItem:(id)arg3;
- (void)updateCdnInfoInItem:(id)arg1;
- (void)onUsedCapacityUpdate:(unsigned long long)arg1;
- (id)getNextUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (void)saveCdnInfoInData:(id)arg1 forItem:(id)arg2 isThumb:(_Bool)arg3 withState:(int)arg4;
- (void)clearCdnInfo:(id)arg1;
- (void)onProccessItem:(id)arg1 inType:(unsigned long long)arg2 ErrCode:(int)arg3;
- (_Bool)isFavItemOnUploading:(id)arg1;
- (void)stopUploadAllFavItem;
- (void)delUploadItem:(id)arg1;
- (void)removeItemInFailQueue:(id)arg1;
- (void)updateTagForItem:(id)arg1;
- (void)realStopUploadItem:(id)arg1;
- (void)tryRecoverSourcePath:(id)arg1;
- (id)tryRecoverSourcePathAndDeepCopyIfFavItemIsUploading:(id)arg1;
- (_Bool)tryFixUrlThumbPath:(id)arg1;
- (void)realAddUploadItem:(id)arg1 isPrior:(_Bool)arg2;
- (void)stopUploadItem:(id)arg1;
- (void)addUploadItem:(id)arg1 isPrior:(_Bool)arg2;
- (id)getUploadingItemList;
- (id)getUploadFailedItemList;
- (void)loadFailedQueue;
- (void)loadUploadingItems;
- (void)initDB:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

