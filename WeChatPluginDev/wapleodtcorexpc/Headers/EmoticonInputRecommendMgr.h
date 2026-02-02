//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonGetWordListCGI, EmoticonRemoteRecommendTable, EmoticonWordListMeta, MMAsyncBlockOperation, MemoryMappedKV, NSArray, NSMutableDictionary, NSMutableSet, NSNumber, NSObject, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface EmoticonInputRecommendMgr
{
    _Bool _enableRemoteRecommend;
    _Bool _loading;
    _Bool _hasPullwordListAfterLaunch;
    _Bool _hasClearUnReferenceRecordAfterLaunch;
    _Bool _enableShuffleStragy;
    _Bool _enableWordListUpdate;
    _Bool _shouldPauseBackgroundTask;
    _Bool _hasCalLocalEmojiOcr;
    _Bool _shouldResumeLocalEmojiOcr;
    unsigned int _wordListUpdateInterval;
    unsigned int _localTopN;
    unsigned int _preloadIntervalForQuery;
    double _searchDelay;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableSet *_recommendBoardCgis;
    NSArray *_recommendWraps;
    NSString *_lastedQuery;
    NSMutableDictionary *_tasks;
    NSMutableSet *_remoteWordList;
    EmoticonWordListMeta *_remoteWordListMeta;
    EmoticonGetWordListCGI *_fetchWordListCGI;
    EmoticonRemoteRecommendTable *_recommendTable;
    NSNumber *_localEmojiRecommendSwitchValue;
    NSNumber *_ocrHasInitSuccessedValue;
    NSOperationQueue *_calOcrQueue;
    MMAsyncBlockOperation *_lastCalOcrOperation;
    MemoryMappedKV *_localEmojiOcrResultKV;
}

+ (void)clearAllCachedData;
+ (id)adjustOcrResult:(id)arg1;
+ (id)cpkeyForOcrMd5:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *localEmojiOcrResultKV; // @synthesize localEmojiOcrResultKV=_localEmojiOcrResultKV;
@property(nonatomic) __weak MMAsyncBlockOperation *lastCalOcrOperation; // @synthesize lastCalOcrOperation=_lastCalOcrOperation;
@property(retain, nonatomic) NSOperationQueue *calOcrQueue; // @synthesize calOcrQueue=_calOcrQueue;
@property(nonatomic) _Bool shouldResumeLocalEmojiOcr; // @synthesize shouldResumeLocalEmojiOcr=_shouldResumeLocalEmojiOcr;
@property(retain, nonatomic) NSNumber *ocrHasInitSuccessedValue; // @synthesize ocrHasInitSuccessedValue=_ocrHasInitSuccessedValue;
@property(nonatomic) _Bool hasCalLocalEmojiOcr; // @synthesize hasCalLocalEmojiOcr=_hasCalLocalEmojiOcr;
@property(retain, nonatomic) NSNumber *localEmojiRecommendSwitchValue; // @synthesize localEmojiRecommendSwitchValue=_localEmojiRecommendSwitchValue;
@property(nonatomic) _Bool shouldPauseBackgroundTask; // @synthesize shouldPauseBackgroundTask=_shouldPauseBackgroundTask;
@property(nonatomic) unsigned int preloadIntervalForQuery; // @synthesize preloadIntervalForQuery=_preloadIntervalForQuery;
@property(nonatomic) unsigned int localTopN; // @synthesize localTopN=_localTopN;
@property(nonatomic) unsigned int wordListUpdateInterval; // @synthesize wordListUpdateInterval=_wordListUpdateInterval;
@property(nonatomic) _Bool enableWordListUpdate; // @synthesize enableWordListUpdate=_enableWordListUpdate;
@property(nonatomic) _Bool enableShuffleStragy; // @synthesize enableShuffleStragy=_enableShuffleStragy;
@property(nonatomic) _Bool hasClearUnReferenceRecordAfterLaunch; // @synthesize hasClearUnReferenceRecordAfterLaunch=_hasClearUnReferenceRecordAfterLaunch;
@property(nonatomic) _Bool hasPullwordListAfterLaunch; // @synthesize hasPullwordListAfterLaunch=_hasPullwordListAfterLaunch;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) EmoticonRemoteRecommendTable *recommendTable; // @synthesize recommendTable=_recommendTable;
@property(retain, nonatomic) EmoticonGetWordListCGI *fetchWordListCGI; // @synthesize fetchWordListCGI=_fetchWordListCGI;
@property(retain, nonatomic) EmoticonWordListMeta *remoteWordListMeta; // @synthesize remoteWordListMeta=_remoteWordListMeta;
@property(retain, nonatomic) NSMutableSet *remoteWordList; // @synthesize remoteWordList=_remoteWordList;
@property(retain, nonatomic) NSMutableDictionary *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) NSString *lastedQuery; // @synthesize lastedQuery=_lastedQuery;
@property(retain, nonatomic) NSArray *recommendWraps; // @synthesize recommendWraps=_recommendWraps;
@property(retain, nonatomic) NSMutableSet *recommendBoardCgis; // @synthesize recommendBoardCgis=_recommendBoardCgis;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(nonatomic) double searchDelay; // @synthesize searchDelay=_searchDelay;
@property(nonatomic) _Bool enableRemoteRecommend; // @synthesize enableRemoteRecommend=_enableRemoteRecommend;
- (_Bool)dirIsEmpty:(id)arg1;
- (void)onGetEmoticonDescNoResult:(id)arg1;
- (void)onGetEmoticonDesc:(id)arg1 emoticonWrapList:(id)arg2;
- (_Bool)shouldReloadResGlobalWordList;
- (void)onEmoticonResUpdateForSubType:(unsigned int)arg1 dirPath:(id)arg2;
- (void)onLimitedModeChanged;
- (void)onProfileChange;
- (void)onAddBackupEmoticonOK:(id)arg1 addEmoticonWrap:(id)arg2;
- (void)onEmoticonBackUpMgrRecoverNotifyProgressForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverPartSyncFinishedForType:(unsigned int)arg1;
- (void)onOCRFirstTimeInitSuccess;
- (void)realCalLocalEmojiOcrWithPartCallBackBlock:(CDUnknownBlockType)arg1;
- (void)tryCalLocalEmojiOcrFromUpdate:(_Bool)arg1;
- (void)checkOcrInitStatus;
- (id)getAllLocalEmojiOcrResult;
- (void)clearAllOcrResult;
- (void)removeOcrResultForMd5:(id)arg1;
- (id)ocrResultInfoForMd5:(id)arg1;
- (void)saveOcrResult:(id)arg1 forMd5:(id)arg2;
- (id)ocrResultMappedID;
- (void)onUpdateLocalEmojiRecommendSwitchValueWithForceNotify:(_Bool)arg1;
- (_Bool)isLocalEmojiRecommendSwitchOpenedWithNeedUpdate:(_Bool)arg1;
- (_Bool)isLocalEmojiRecommendSwitchOpened;
- (_Bool)isSupportLocalEmojiRecommend;
- (void)tryResetPrivacy;
- (void)switchAllPrivacySettingWithIsOpen:(_Bool)arg1 hasShowPolicy:(_Bool)arg2;
- (void)switchAllPrivacySettingWithIsOpen:(_Bool)arg1;
- (void)switchPersonalizedRecommendWithIsOpen:(_Bool)arg1;
- (void)switchLocalOcrRecommendWithIsOpen:(_Bool)arg1;
- (void)switchRemoteRecommendWithIsOpen:(_Bool)arg1;
- (_Bool)shouldShowEmojiPrivacySectionWithIsFromStore:(_Bool)arg1;
- (_Bool)needShowEmojiPrivacyPageSheet;
- (_Bool)hasShowEmojiPrivacyPageSheet;
- (_Bool)isRemoteRecommendSwithOpened;
- (_Bool)isEmojiRecommendPersonalizedWithStrict:(_Bool)arg1;
- (_Bool)isSupportEmojiPrivacySettingExpt;
- (_Bool)isSupportEmojiPrivacySetting;
- (unsigned int)getExptVal:(id)arg1 withDefaultVal:(unsigned int)arg2 andMinVal:(unsigned int)arg3;
- (_Bool)isWordListUpdateEnable;
- (unsigned int)getPreloadIntervalForQuery;
- (unsigned int)getSearchLocalTopN;
- (unsigned int)getWordListUpdateInterval;
- (_Bool)isShuffleStragyEnable;
- (_Bool)isRemoteRecommendEnable;
- (double)getSearchDelay;
- (_Bool)isInLocalWordList:(id)arg1;
- (_Bool)isInSvrWordList:(id)arg1;
- (_Bool)shouldUpdateWordList;
- (void)saveWordListToCache:(id)arg1 type:(unsigned int)arg2 version:(unsigned long long)arg3;
- (void)updateWordListFromSvrIfNeeded;
- (void)onEmoticonRecommendBoardCgiFailed:(id)arg1;
- (void)onEmoticonRecommendBoardCgiOk:(id)arg1 recommendWraps:(id)arg2;
- (void)updatePreloadSearchRes:(id)arg1 svrRecommendWraps:(id)arg2 sessionID:(id)arg3;
- (void)searchRemoteSvrForPreload:(id)arg1 sessionId:(id)arg2 localSearchResMd5:(id)arg3;
- (void)onAsyncRecommendTaskEnd:(id)arg1;
- (void)onRemoteTaskFinish:(id)arg1 remoteList:(id)arg2 recSessionId:(id)arg3;
- (void)onLocalTaskFinish:(id)arg1 localList:(id)arg2;
- (void)updateRemoteRecommendSwitch;
- (void)searchInLocalSvr:(id)arg1 sessionId:(id)arg2;
- (_Bool)updateEmoticon:(id)arg1 withMd5:(id)arg2 usedTime:(unsigned int)arg3;
- (void)requestForRecommendEmotion:(id)arg1;
- (void)clearNoReferencedCachedRecordsIfNeeded;
- (void)onLoadCacheFinish:(id)arg1 meta:(id)arg2;
- (void)reloadWordListAndSearchRecordFromCache;
- (void)asyncReloadWordListAndSearchRecordFromCache;
- (void)onServiceResumeBackgroundTask:(unsigned long long)arg1;
- (void)onServicePauseBackgroundTask:(unsigned long long)arg1;
- (void)loadDynamicConfig;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

