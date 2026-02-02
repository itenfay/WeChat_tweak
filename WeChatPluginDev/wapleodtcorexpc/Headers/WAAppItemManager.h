//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CommUseAppInfo_CommUseConfig, NSString, WAAppOperateLogic, WAGetWxaUsageRecordRequestInfo;

@interface WAAppItemManager
{
    WAAppOperateLogic *m_operateLogic;
    unsigned int m_localUpdateTimeOfLastVisibleItem;
    unsigned int m_updateTimeOfFirstVisibleItem;
    unsigned int m_remoteUpdateTimeOfLastVisibleItem;
    unsigned int m_biggestUpdateTimeOfStarItem;
    unsigned long long _taskbarCommonUseWeAppItemsCount;
    WAGetWxaUsageRecordRequestInfo *_lastTaskBarRequestInfo;
    CommUseAppInfo_CommUseConfig *_commuseConfig;
}

+ (unsigned long long)getAppUserStateByUsername:(id)arg1;
+ (unsigned long long)getAppUserStateByUsername:(id)arg1 appType:(unsigned int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CommUseAppInfo_CommUseConfig *commuseConfig; // @synthesize commuseConfig=_commuseConfig;
@property(retain, nonatomic) WAGetWxaUsageRecordRequestInfo *lastTaskBarRequestInfo; // @synthesize lastTaskBarRequestInfo=_lastTaskBarRequestInfo;
@property(nonatomic) unsigned long long taskbarCommonUseWeAppItemsCount; // @synthesize taskbarCommonUseWeAppItemsCount=_taskbarCommonUseWeAppItemsCount;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)showUserGuideWithSessionId:(id)arg1;
- (void)clearState;
- (id)getCurrentAppStarItemsInLimits:(unsigned int)arg1;
- (_Bool)deleteStarItemFromDatabaseWithAppItem:(id)arg1;
- (_Bool)deleteHistoryItemFromDatabaseWithAppItem:(id)arg1;
- (_Bool)updateStarItemToDatabaseWithItem:(id)arg1;
- (_Bool)updateHistoryItemToDatabaseWithItem:(id)arg1;
- (void)handleUnStarOperation:(id)arg1 errCode:(int)arg2;
- (void)handleStarOperation:(id)arg1 errCode:(int)arg2;
- (void)onOprationExcuted:(id)arg1 errCode:(int)arg2;
- (void)operateStarItemsForReason:(unsigned int)arg1;
- (double)calSortFactorWithPreItem:(id)arg1 nextItem:(id)arg2;
- (void)batchMoveStarItemsWithContext:(id)arg1;
- (void)moveStarItem:(id)arg1 toPositionWithPreItem:(id)arg2 nextItem:(id)arg3 inScene:(unsigned int)arg4;
- (void)unStarWeAppItem:(id)arg1 inScene:(unsigned int)arg2;
- (void)deleteCommonUseItem:(id)arg1 inScene:(unsigned int)arg2;
- (void)starWeAppItem:(id)arg1 toPositionWithPreItem:(id)arg2 nextItem:(id)arg3 inScene:(unsigned int)arg4;
- (id)getAllCommonUseWeAppItems;
- (void)showStarForbiddenTips;
- (_Bool)checkWeAppCanBeStared:(id)arg1;
- (unsigned int)getStarNumberLimitation;
- (_Bool)isReachStarCountLimit;
- (void)starWeAppItem:(id)arg1 inScene:(unsigned int)arg2;
- (_Bool)updateWeAppStarStatus:(id)arg1 isStared:(_Bool)arg2;
- (void)checkWeAppItemStarStatus:(id)arg1 withResultAction:(CDUnknownBlockType)arg2;
- (void)saveEditStarResult:(id)arg1;
- (id)getAllAppStarItems;
- (_Bool)isItemStared:(id)arg1;
- (void)onDeleteWeAppItemSilently:(id)arg1;
- (void)onDeleteWeAppItem:(id)arg1;
- (void)onOpenWeAppItem:(id)arg1 scene:(unsigned long long)arg2 sessionId:(id)arg3 isAlreadyRunning:(_Bool)arg4 isUpdateMainFrameTask:(_Bool)arg5 migrateFromUsername:(id)arg6 reason:(unsigned int)arg7;
- (void)onOpenWeAppItem:(id)arg1 scene:(unsigned long long)arg2 sessionId:(id)arg3 isAlreadyRunning:(_Bool)arg4 isUpdateMainFrameTask:(_Bool)arg5 migrateFromUsername:(id)arg6;
- (void)onExpandEmbedWeAppItem:(id)arg1 scene:(unsigned long long)arg2 sessionId:(id)arg3 isUpdateMainFrameTask:(_Bool)arg4;
- (id)getLatestAppListItemWithMaxUpdateTime:(unsigned int)arg1 minUpdateTime:(unsigned int)arg2 includeStar:(_Bool)arg3;
- (id)getLatestAppListItemWithMaxUpdateTime:(unsigned int)arg1 minUpdateTime:(unsigned int)arg2;
- (id)getLatestAppListItemOverUpdateTime:(unsigned int)arg1 includeStar:(_Bool)arg2;
- (id)getLatestAppListItemOverUpdateTime:(unsigned int)arg1;
- (void)updateFirstVisibleItemUpdateTimeIfNeededWithListItems:(id)arg1;
- (id)getLatestAppListItemWithCount:(unsigned int)arg1 includeStar:(_Bool)arg2;
- (id)getLatestAppListItemWithCount:(unsigned int)arg1;
- (id)getAllAppListItemByUsername:(id)arg1;
- (id)getAllAppListItemsIsIncludeStar:(_Bool)arg1;
- (id)getAllAppListItems;
- (void)reverseArray:(id)arg1;
- (id)preCheckStarAppList:(id)arg1;
- (id)preCheckAppList:(id)arg1;
- (unsigned int)commonuseNextReqInterval;
- (unsigned int)lastUpdateCommonuseTimeInSec;
- (void)updateLastUpdateCommonuseTime;
- (void)updateCommuseConfig:(id)arg1;
- (void)onUpdateCommonUseNextReqInterval:(unsigned int)arg1;
- (void)onGetLatestAppItemsFromSvrByCommonUse:(id)arg1 commuseConfig:(id)arg2 scene:(unsigned int)arg3 errCode:(int)arg4;
- (void)onGetLatestAppItemsFromSvrByRecordList:(id)arg1 scene:(unsigned int)arg2 hasMore:(_Bool)arg3 errCode:(int)arg4;
- (void)onGetLatestAppItemsFromSvrByStarList:(id)arg1 scene:(unsigned int)arg2 errCode:(int)arg3;
- (void)onAuthOK;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)tryReqCommonUseDataWithScene:(unsigned int)arg1;
- (void)getStarAppItemsFromSvrInScene:(unsigned int)arg1;
- (void)getLatestUsageAppItemsFromSvrInScene:(unsigned int)arg1;
- (unsigned int)getLatestAppItemsFormSvrByUpdateTime:(unsigned int)arg1 withCommonUse:(_Bool)arg2 requestInfo:(id)arg3 inScene:(unsigned int)arg4;
- (unsigned int)getLatestAppItemsFormSvrByUpdateTime:(unsigned int)arg1 inScene:(unsigned int)arg2;
- (unsigned int)getValidStarBiggestUpdateTime;
- (unsigned int)getValidListTopUpdateTime;
- (id)getCommonUseConfigReportOverviewExtraData;
- (unsigned int)getCommonUseConfigReportGetLocaltionWaitMs;
- (_Bool)getCommonUseConfigReportLocation;
- (_Bool)getCommonUseConfigReportSSID;
- (_Bool)getCommonUseConfigUpdateLoadingWaitMs;
- (id)getCommonUseConfigNextReqExtraData;
- (unsigned int)getCommonUseConfigMaxShowCountForHistorySection;
- (unsigned int)getCommonUseConfigMaxShowCount;
- (id)getCommonUseTagWordingWithReferId:(unsigned int)arg1;
- (id)init;
- (id)internalGetAllAppContactListItemsWithAppType:(unsigned int)arg1;
- (id)getAllAppContactListItemsWithAppType:(unsigned int)arg1;
- (id)getAllNormalAppContactListItems;
- (id)getAllAppContactListItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

