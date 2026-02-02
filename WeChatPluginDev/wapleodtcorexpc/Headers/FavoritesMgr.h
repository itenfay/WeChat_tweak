//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavForwardLogicController, FavSecurityLogic, FavoritesBatchDelMgr, FavoritesBatchGetMgr, FavoritesDownloadMgr, FavoritesItemDB, FavoritesRepairSvrDataLogic, FavoritesReportLogic, FavoritesSetting, FavoritesSyncMgr, FavoritesTagMgr, FavoritesUploadMgr, MyFavoritesDB, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_semaphore;

@interface FavoritesMgr
{
    NSMutableDictionary *_dispatchQueueDic;
    NSMutableDictionary *_dispatchQueueRerefenceDic;
    FavoritesItemDB *_favItemDB;
    MyFavoritesDB *_favDB;
    FavoritesUploadMgr *_favUploadMgr;
    FavoritesDownloadMgr *_favDownloadMgr;
    FavoritesTagMgr *_favTagMgr;
    FavoritesSyncMgr *_favSyncMgr;
    FavoritesUploadMgr *_favAsyncUploadMgr;
    FavoritesBatchDelMgr *_batchDelMgr;
    FavoritesBatchGetMgr *_batchGetMgr;
    FavoritesRepairSvrDataLogic *_repairSvrDataLogic;
    FavSecurityLogic *_securityLogic;
    FavoritesSetting *_setting;
    _Bool _isSyncingTag;
    _Bool m_enableNewOrderList;
    _Bool m_wenoteCrossPlatformEnable;
    _Bool m_wenoteCrossPlatformEditModeEnable;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    _Bool m_enableNoteLazyDownload;
    _Bool m_forceAddToContainerView;
    FavoritesReportLogic *_reportLogic;
    FavForwardLogicController *_forwardLogic;
}

+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
- (void).cxx_destruct;
@property(retain, nonatomic) FavForwardLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) FavoritesReportLogic *reportLogic; // @synthesize reportLogic=_reportLogic;
@property(retain, nonatomic) FavoritesSetting *setting; // @synthesize setting=_setting;
- (void)tryReUploadCapacityExeedFavItem;
- (unsigned long long)preGetUploadMgrCleanCache;
- (unsigned long long)uploadMgrCleanCache;
- (_Bool)isHasUploadingItem;
- (_Bool)isFavMusicExist:(id)arg1;
- (void)delFavMusicByMusicId:(id)arg1;
- (void)delFavMusicItems:(id)arg1;
- (void)addFavMusicItemIfNeeded:(id)arg1;
- (void)addFavMusicItemsIfNeeded:(id)arg1;
- (_Bool)hasFavoritePOI:(id)arg1;
- (_Bool)clearFavSearchContent;
- (unsigned int)getUnBatchGetFavItemCount;
- (unsigned int)getLastFavItemLocalId;
- (id)getFavoritesItemByLocalIdArr:(id)arg1;
- (id)getFavoritesItemByLocalId:(unsigned int)arg1;
- (id)getFavoritesItemBySourceId:(id)arg1;
- (id)getFavoritesItemByfavId:(unsigned int)arg1;
- (id)getUnsyncFavoritesItemFrom:(unsigned int)arg1 Limit:(int)arg2;
- (id)getFavoritesItemFromUpdateSeq:(unsigned int)arg1 Limit:(int)arg2;
- (id)getFavoritesItemFrom:(unsigned int)arg1 Limit:(int)arg2;
- (void)onFTSFavResultChanged:(id)arg1;
- (id)syncSearch:(id)arg1 byType:(long long)arg2 tags:(id)arg3;
- (void)asyncSearch:(id)arg1 byType:(long long)arg2 tags:(id)arg3 taskKey:(id)arg4;
- (void)cancelSearch:(id)arg1;
- (unsigned int)getTotalSearchCountForTaskKey:(id)arg1 searchContent:(id)arg2;
- (void)loadMoreSearchContent:(id)arg1;
- (_Bool)hasSearchDoneForTaskKey:(id)arg1 searchContent:(id)arg2;
- (id)getSearchKeyword:(id)arg1;
- (id)genSearchTaskKey;
- (id)getTagsFromIdList:(id)arg1;
- (void)updateItems:(id)arg1 tags:(id)arg2 mode:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)updateItems:(id)arg1 tags:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateItemInFavItemDB:(id)arg1;
- (void)updateTag:(id)arg1 to:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)getTagsMatch:(id)arg1;
- (id)getAllTags;
- (void)tryFixTagIndex;
- (_Bool)processTagsFromServer:(id)arg1;
- (void)onSecurityCheckFail:(int)arg1;
- (void)onSecurityCheckOK:(int)arg1;
- (void)releaseDispatchQueueWithSrcDataPath:(id)arg1;
- (id)getDispatchQueueWithSrcDataPath:(id)arg1;
- (id)getSemaphore;
- (void)OnNeedUpdateFavInfo;
- (void)OnSyncResult:(int)arg1 selector:(int)arg2;
- (id)GetNextBatchGetList;
- (_Bool)checkNeedAsyncUploadAfterBatchDownload:(id)arg1;
- (_Bool)checkSvrUploading:(id)arg1;
- (void)batchDownloadItemList:(id)arg1;
- (void)onBatchGetBySourceIdFailedWith:(id)arg1;
- (void)onBatchGetBySourceIdSuccessfullyWithReqFilterArr:(id)arg1 existFilterArr:(id)arg2 unExistFilterArr:(id)arg3 existItemArr:(id)arg4;
- (void)onBatchGetNewItem:(id)arg1 UpdateItemList:(id)arg2 ErrCode:(int)arg3;
- (void)onBatchDelItemBySourceIdFailedWith:(id)arg1;
- (void)onBatchDelItemBySourceIdSuccessfully;
- (void)onDownloadFavoritesItemFinished:(id)arg1 ErrCode:(int)arg2;
- (void)onUploadFavoritesItemFinished:(id)arg1 ErrCode:(int)arg2 MgrType:(unsigned long long)arg3;
- (void)onUsedCapacityUpdate:(unsigned long long)arg1;
- (void)BroadcastAddFavoritesItemResult:(id)arg1 ErrCode:(int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleGetFavInfoResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleModifyFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (id)tryRecoverSourcePathAndDeepCopyIfFavItemIsUploading:(id)arg1;
- (_Bool)getFavCapacityEntryFlag;
- (int)getWeNoteMaxObjectCount;
- (unsigned int)getFavIndexByUpdateTime:(unsigned int)arg1;
- (_Bool)isSaveNoteAsImageEnable;
- (_Bool)isNoteShareMomentEnable;
- (unsigned long long)getTotalCapacity;
- (unsigned long long)getUsedCapacity;
- (void)cancelCheckNoteSecurity:(unsigned int)arg1;
- (void)checkNoteSecurity:(id)arg1;
- (_Bool)batchDelFavItemBySourceIdFilterList:(id)arg1;
- (void)batchGetFavItemBySourceIdFilterList:(id)arg1;
- (void)batchGetFavItem:(id)arg1;
- (id)getDownloadingItemList;
- (id)getUploadingItemList;
- (id)getUploadFailedItemList;
- (_Bool)hasBeforeAsyncUploadingItem;
- (void)startDownloadFavoritesItem:(id)arg1 IsPriority:(_Bool)arg2;
- (void)startUploadFavoritesItem:(id)arg1 IsPriority:(_Bool)arg2;
- (void)updateFavSetting;
- (void)checkBatchDelQueue;
- (id)genFavSessionId;
- (id)getAllCapacityType;
- (void)decreItemUsedTimes:(unsigned int)arg1;
- (void)updateItemUsedTimes:(unsigned int)arg1;
- (void)updateItemUpdateTime:(id)arg1;
- (void)stopUploadItem:(id)arg1;
- (_Bool)batchDelFavoritesItem:(id)arg1;
- (void)removeItemFile:(id)arg1 withDataList:(id)arg2;
- (void)removeItemFile:(id)arg1;
- (_Bool)delFavoritesItems:(id)arg1;
- (_Bool)delFavoritesItem:(id)arg1;
- (_Bool)delFavoritesItemByFavId:(id)arg1;
- (_Bool)updateFavoritesItem:(id)arg1 delayUpload:(_Bool)arg2;
- (_Bool)updateFavoritesItem:(id)arg1;
- (_Bool)addFavoritesItem:(id)arg1 delayUpload:(_Bool)arg2;
- (_Bool)addFavoritesItem:(id)arg1;
- (_Bool)tryCalculateFavItemSize;
- (unsigned long long)getFaildItemCapcitySize;
- (void)getNextPageFavoritesByType:(int)arg1 andSortType:(int)arg2 andMinDataSize:(unsigned long long)arg3 andUsedTimes:(unsigned int)arg4 andCurMinUpdateTime:(unsigned int)arg5;
- (void)getFirstPageFavoritesByType:(int)arg1 andSortType:(int)arg2;
- (void)getNextPageFavoritesList:(int)arg1 byCurMinUpdateTime:(unsigned int)arg2;
- (void)checkInvalidNote:(id)arg1 batchgetList:(id)arg2;
- (_Bool)checkCanReUploadItem:(id)arg1;
- (void)tryFixUploadStatus;
- (void)getFirstPageFavoritesList:(int)arg1;
- (void)SyncByNotify:(unsigned int)arg1;
- (void)SyncFromUI;
- (void)dealloc;
- (void)saveSetting;
- (void)loadNeedCacheWebItems;
- (void)loadFavoritesSetting;
- (void)initDB:(id)arg1;
- (_Bool)enableNoteLazyDownload;
- (void)onServiceClearData;
- (_Bool)forceAddToContainerView;
- (_Bool)enableFlutterNoteEditMode;
- (_Bool)enableFlutterNote;
- (_Bool)enableNewOrderList;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

