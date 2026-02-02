//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSRecursiveLock, WCContactCacheOptimizeInfo, WCContactCacheSliceRecordInfo;

@interface CContactCacheOptimizeMgr
{
    WCContactCacheSliceRecordInfo *m_contactCacheSliceRecordInfo;
    WCContactCacheOptimizeInfo *m_contactCacheOptimizeInfo;
    NSRecursiveLock *m_lock;
    _Bool m_isContactCacheOptimizeSwitch;
    NSMutableDictionary *m_dicStateMachine;
    unsigned int m_isContactCacheOptimizeMinMemCount;
    NSRecursiveLock *m_recordUseLock;
}

- (void).cxx_destruct;
- (void)onManulLogOut;
- (void)onPreQuit;
- (void)onKickQuit;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)p_reportIDKeyChatRoomListScale;
- (id)p_getFirstRecordCacheOptimizeInfoEveryDayId;
- (id)p_getCalculateAllChatRoomStrangerCountEveryDayId;
- (id)p_getRemoveOverdueEveryDayId;
- (void)p_saveContactCacheOptimizeInfoToDataFileInternal;
- (void)p_loadContactCacheOptimizeInfoInternal;
- (id)p_getContactCacheOptimizeInfoPath;
- (void)p_saveContactCacheOptimizeSliceRecordInfoToDataFileInternal;
- (void)p_loadContactCacheOptimizeSliceRecordInfoInternal;
- (id)p_getContactCacheOptimizeSliceRecordInfoDataPathWithDateStr:(id)arg1;
- (id)p_getContactCacheOptimizeDirPath;
- (id)getContactCacheOptimizeInfo;
- (void)calculateFirstRecordCacheOptimizeInfoEveryDay;
- (void)calculateAllChatRoomStrangerCountEveryDay;
- (unsigned int)getAllChatRoomStrangerCountSwitch;
- (unsigned int)getMinRecordDayInterval;
- (unsigned int)getMaxDayInterval;
- (_Bool)checkEnoughRecordCacheOptimizeInfoWithCurrentTimeDayZero:(unsigned int)arg1;
- (void)removeOverdueRecordEveryDay:(unsigned int)arg1;
- (_Bool)isCheckContactCacheOptimizeFeatureIsMatchBestCacheOptimizeStrategyFeature:(id)arg1 bestCacheOptimizeStrategyFeature:(id)arg2;
- (id)accordGroupUserNameListWithBestCacheOptimizeStrategyFeature:(id)arg1 operateTime:(unsigned int)arg2 listScale:(id *)arg3;
- (id)getBestCacheOptimizeStrategyFeature:(double)arg1;
- (id)coverSearchGroupFeatureToStrategyFeature:(id)arg1;
- (unsigned int)parseCondValueWithStrategyFeature:(id)arg1 condtion:(unsigned long long)arg2;
- (id)genContactCacheAccessUserFeatureRecrodWithUserName:(id)arg1 operateTime:(unsigned int)arg2 cacheOptimizeFeature:(id)arg3;
- (id)genContactCacheOptimizeFeatureWithUserName:(id)arg1 operateTime:(unsigned int)arg2;
- (void)clearBestLoadArrUserName;
- (void)doSaveSliceRecordInfoDataToDB;
- (void)doRecordContactCacheOptimizeStrategy;
- (void)syncFTSContactDataProviderInit;
- (void)recordContactCacheOptimizeStrategy;
- (void)asyncRecordUseContactUserName:(id)arg1;
- (void)recordUseContactUserName:(id)arg1;
- (id)getContactCacheOptimizeBestLoadArrUserName;
- (_Bool)isOpenContactCacheOptimize;
- (void)registerMethod;
- (void)dealloc;
- (void)initData;
- (id)init;

@end

