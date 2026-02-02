//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MyWCDB, NSArray, NSCache, NSDate, NSMutableArray, NSMutableDictionary, NSString, WCAdvertiseDataHelper, WCAdvertiseLogicMgr, WCMicroMerchantFeedsMgr, WCMicroMerchantFoldMgr, WCTimelineDataProvider;
@protocol WCTimelineDelegate;

@interface WCTimelineMgr
{
    NSCache *_dataItemCacheForPrediction;
    _Bool _hasUpdateHead;
    _Bool _isJumping;
    _Bool _isMicroMerchantUserUnfoldable;
    _Bool _isUnfoldMicroMerchantUsernameChangedFromLastRequest;
    _Bool _isRequestNextPageForMicroMerchantUnfoldUsernamesChangeEnabled;
    _Bool _needSaveItemsUpdateTime;
    _Bool _needLoadItemsUpdateTime;
    WCMicroMerchantFoldMgr *_microMerchantFoldMgr;
    id <WCTimelineDelegate> _delegate;
    MyWCDB *_database;
    NSDate *_sessionTime;
    WCAdvertiseDataHelper *_adDataHelper;
    WCAdvertiseLogicMgr *_adLogicMgr;
    WCMicroMerchantFeedsMgr *_microMerchantFeedsMgr;
    WCTimelineDataProvider *_dataProvider;
    NSMutableArray *_cache;
    NSMutableArray *_timelineDataList;
    NSMutableArray *_advertiseDataList;
    NSMutableArray *_timelineDataListBeforeJumpToMissRead;
    unsigned long long _preUpdateItemId;
    unsigned long long _updateFirstPageId;
    NSArray *_lastUnfoldMicroMerchantUsernames;
    NSMutableDictionary *_itemsUpdateTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *itemsUpdateTime; // @synthesize itemsUpdateTime=_itemsUpdateTime;
@property(nonatomic) _Bool needLoadItemsUpdateTime; // @synthesize needLoadItemsUpdateTime=_needLoadItemsUpdateTime;
@property(nonatomic) _Bool needSaveItemsUpdateTime; // @synthesize needSaveItemsUpdateTime=_needSaveItemsUpdateTime;
@property(nonatomic) _Bool isRequestNextPageForMicroMerchantUnfoldUsernamesChangeEnabled; // @synthesize isRequestNextPageForMicroMerchantUnfoldUsernamesChangeEnabled=_isRequestNextPageForMicroMerchantUnfoldUsernamesChangeEnabled;
@property(nonatomic) _Bool isUnfoldMicroMerchantUsernameChangedFromLastRequest; // @synthesize isUnfoldMicroMerchantUsernameChangedFromLastRequest=_isUnfoldMicroMerchantUsernameChangedFromLastRequest;
@property(copy, nonatomic) NSArray *lastUnfoldMicroMerchantUsernames; // @synthesize lastUnfoldMicroMerchantUsernames=_lastUnfoldMicroMerchantUsernames;
@property(nonatomic) _Bool isMicroMerchantUserUnfoldable; // @synthesize isMicroMerchantUserUnfoldable=_isMicroMerchantUserUnfoldable;
@property(nonatomic) unsigned long long updateFirstPageId; // @synthesize updateFirstPageId=_updateFirstPageId;
@property(nonatomic) unsigned long long preUpdateItemId; // @synthesize preUpdateItemId=_preUpdateItemId;
@property(nonatomic) _Bool isJumping; // @synthesize isJumping=_isJumping;
@property(nonatomic) _Bool hasUpdateHead; // @synthesize hasUpdateHead=_hasUpdateHead;
@property(retain, nonatomic) NSMutableArray *timelineDataListBeforeJumpToMissRead; // @synthesize timelineDataListBeforeJumpToMissRead=_timelineDataListBeforeJumpToMissRead;
@property(retain, nonatomic) NSMutableArray *advertiseDataList; // @synthesize advertiseDataList=_advertiseDataList;
@property(retain, nonatomic) NSMutableArray *timelineDataList; // @synthesize timelineDataList=_timelineDataList;
@property(retain, nonatomic) NSMutableArray *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) WCTimelineDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) WCMicroMerchantFeedsMgr *microMerchantFeedsMgr; // @synthesize microMerchantFeedsMgr=_microMerchantFeedsMgr;
@property(retain, nonatomic) WCAdvertiseLogicMgr *adLogicMgr; // @synthesize adLogicMgr=_adLogicMgr;
@property(retain, nonatomic) WCAdvertiseDataHelper *adDataHelper; // @synthesize adDataHelper=_adDataHelper;
@property(readonly, nonatomic) NSDate *sessionTime; // @synthesize sessionTime=_sessionTime;
@property(retain, nonatomic) MyWCDB *database; // @synthesize database=_database;
@property(nonatomic) __weak id <WCTimelineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCMicroMerchantFoldMgr *microMerchantFoldMgr; // @synthesize microMerchantFoldMgr=_microMerchantFoldMgr;
- (void)reportExceptionWithDataItem:(id)arg1;
- (void)updateLastUnfoldMicroMerchantUsernames:(id)arg1;
- (_Bool)shouldUseFreshUnfoldDataWithPageType:(long long)arg1 foldSettings:(id)arg2;
- (void)setupMicroMerchantFoldInfoWithTimelineRequest:(id)arg1 pageType:(long long)arg2;
- (void)updateMicroMerchantFoldConfigurations;
- (id)exportWsFeedIdsOfDataList:(id)arg1;
- (void)onMicroMerchantDataListUpdate:(id)arg1 group:(id)arg2;
- (void)preloadNextPageRelativeMircoMerchantGroups:(id)arg1;
- (void)updateMicroMerchantGroupsCacheWithGroupDict:(id)arg1 dataList:(id)arg2;
- (id)updateMicroMerchantGroupsCache:(id)arg1 dataList:(id)arg2;
- (void)mergeFeedIdx:(id)arg1;
- (id)foldSyncContext;
- (id)mergeMicroMerchantFeeds:(id)arg1 feedList:(id)arg2;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onAdPullWithAdDatas:(id)arg1;
- (void)onTimelineServerError;
- (void)onNoMoreTimelineData;
- (void)checkPrePageResultOrder:(id)arg1;
- (void)onPrePageUpdated:(unsigned long long)arg1 datas:(id)arg2 adDatas:(id)arg3 changedTime:(unsigned int)arg4 wsInfos:(id)arg5;
- (void)onNextPageUpdated:(unsigned long long)arg1 datas:(id)arg2 adDatas:(id)arg3 changedTime:(unsigned int)arg4 wsInfos:(id)arg5;
- (void)onFirstPageUpdated:(unsigned long long)arg1 dataChanged:(_Bool)arg2 datas:(id)arg3 adDatas:(id)arg4 changedTime:(unsigned int)arg5 feedIds:(id)arg6 feedFlags:(id)arg7 wsInfos:(id)arg8;
- (void)onPageRequestPrepared:(id)arg1 pageType:(long long)arg2;
- (void)deleteUserDataItem:(id)arg1;
- (void)commonProcessDataAfterUpdate:(id)arg1 newAdItems:(id)arg2 changedTime:(unsigned int)arg3;
- (void)updateChangeItems:(id)arg1 oldItems:(id)arg2 added:(id)arg3 changed:(id)arg4 deleted:(id)arg5;
- (id)getNextPageAfter:(id)arg1;
- (void)tryToProcessWithNewAdList:(id)arg1;
- (void)tryUpdateAddedAdItemsInfo:(id)arg1 newAdItems:(id)arg2 svrRetAdItems:(id)arg3;
- (void)updateAdvertiseDataList:(id)arg1;
- (void)updateCache;
- (void)preDownloadSharedCanvas:(id)arg1;
- (void)tryRemoveCachesOfLikeUserWithNewTimelineList:(id)arg1;
- (void)removeCachesOfContentWithAdDataItemList:(id)arg1;
- (void)setLandingTimeForNewAdList:(id)arg1;
- (void)dumpLikeAndCommentInfoForAdDatas:(id)arg1;
- (void)tryResetToNotJumpData;
- (void)clearJumpState;
- (_Bool)isJumpState;
- (_Bool)prepareJumpToMissReadItem:(id)arg1;
- (_Bool)prepareScrollToMissReadItem:(id)arg1;
- (unsigned int)getNextPageCount;
- (unsigned int)getFirstPageCount;
- (void)deleteAdvertiseDateItemList:(id)arg1;
- (void)deleteAdvertiseDataItem:(id)arg1;
- (unsigned long long)onServiceCleanCache;
- (id)findDataItemInCacheByItemID:(id)arg1;
- (void)modifyCache:(id)arg1;
- (void)deleteDataItem:(id)arg1 inDataItems:(id)arg2;
- (void)deleteDataItem:(id)arg1 notify:(_Bool)arg2;
- (void)modifyDataItem:(id)arg1 inDataItems:(id)arg2;
- (void)modifyDataItem:(id)arg1 notify:(_Bool)arg2;
- (_Bool)preUpdateData:(unsigned long long)arg1;
- (_Bool)updateDataTail;
- (_Bool)updateDataPrePage;
- (_Bool)updateDataHead;
@property(readonly, nonatomic) unsigned long long firstCachedItemID;
- (id)getCache;
@property(readonly, nonatomic) _Bool isInSession;
- (void)clearExtraData;
- (void)endSession;
- (void)beginSession;
- (void)dealloc;
- (id)init;
- (id)pathForDataItemUpdateTime;
- (void)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)tryDeleteDataItemUpdateTimeCache;
- (void)setChangedTimeForDatas:(id)arg1 withChangedTime:(unsigned int)arg2;
- (unsigned int)getMinChangedTimeBetween:(id)arg1 andMinID:(id)arg2;
- (void)trySaveDataItemUpdateTime;
- (void)tryLoadDataItemUpdateTime;
- (void)Prediction_cacheDataItems:(id)arg1;
- (id)fetchCachedDataItemsForUsername:(id)arg1 withMaxCount:(long long)arg2;
- (void)predictVideoSourceWithDataItems:(id)arg1 fromServer:(_Bool)arg2;
- (void)_initPrediction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

