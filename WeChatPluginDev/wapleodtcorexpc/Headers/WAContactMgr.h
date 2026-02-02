//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WAContactMgr
{
    NSObject<OS_dispatch_queue> *_worker_queue;
    NSMutableDictionary *_dicContactCache;
    NSMutableDictionary *_dicAppid2UsernameCache;
    NSMutableArray *_arrSingleAttrSyncWait;
    NSMutableArray *_arrSingleAttrSyncRequest;
    unsigned int _singleAttrSyncRequestInterval;
    unsigned int _singleAttrSyncRequestIntervalWhenHitInvalidateContactCmd;
    NSMutableArray *_arrBatchAttrSyncWait;
    NSMutableSet *_setBatchAttrSyncRequest;
    unsigned int _batchAttrSyncRequestInterval;
}

+ (_Bool)isKeyValidWithKey:(id)arg1 keyType:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)getUsernameForAppid:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)workThread_processBatchWxaAttrSyncWithRequestedBufferDic:(id)arg1 response:(id)arg2 completeHandlerOnMainThread:(CDUnknownBlockType)arg3;
- (void)processBatchWxaAttrSyncWithRequestedBufferDic:(id)arg1 response:(id)arg2 completeHandlerOnMainThread:(CDUnknownBlockType)arg3;
- (void)onResponseBatchWxaAttrSync:(id)arg1;
- (_Bool)requestBatchWxaAttrSync:(id)arg1 versionList:(id)arg2;
- (void)checkBatchWxaAttrSyncWaitQueue;
- (void)mainThread_batchUpdateWeAppContact:(id)arg1;
- (void)mainThread_batchUpdateWeAppContactWithArrAppid:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setHeadImageStatusForNewContact:(id)arg1 withOldContact:(id)arg2;
- (void)workThread_processWxaAttrSyncResponse:(id)arg1 withUserName:(id)arg2 requestBuffer:(id)arg3 completeHandlerOnMainThread:(CDUnknownBlockType)arg4;
- (void)processWxaAttrSyncResponse:(id)arg1 completeHandlerOnMainThread:(CDUnknownBlockType)arg2;
- (_Bool)checkResponseVersion:(id)arg1 username:(id)arg2 report:(unsigned int)arg3;
- (void)executeIssueContactCmd:(id)arg1;
- (void)reportResponse:(id)arg1;
- (void)onResponseWxaAttrSync:(id)arg1;
- (_Bool)requestWxaAttrSync:(id)arg1;
- (id)getDBBizAttrSyncBufferForUsername:(id)arg1;
- (id)getLocalBizAttrSyncBufferForUsername:(id)arg1;
- (_Bool)isUsernameHasHigherRemoteContactVersion:(id)arg1 getReportId:(unsigned int *)arg2;
- (_Bool)isBufferInUpdateIntervalByPrefetchInvalidateContact:(id)arg1;
- (_Bool)isBufferInBatchUpdateInterval:(id)arg1;
- (_Bool)isBufferInUpdateInterval:(id)arg1;
- (_Bool)isUsernameInContactUpdateInterval:(id)arg1;
- (_Bool)isContactInUpdateInterval:(id)arg1;
- (void)removeUpdateTask:(id)arg1;
- (void)checkWxaAttrSyncWaitQueue;
- (_Bool)checkIsInQueue:(id)arg1 withTask:(id)arg2;
- (_Bool)checkIsInSingleWaitingQueue:(id)arg1;
- (_Bool)checkIsInSingleRequestingQueue:(id)arg1;
- (void)markWaitTaskBeForcedUpdated:(id)arg1;
- (void)mainThread_updateWeAppContact:(id)arg1;
- (void)updateContact:(id)arg1 withBizAttr:(id)arg2;
- (id)getNewContactWithUserName:(id)arg1 bizAttr:(id)arg2;
- (void)loadWxaAttrSyncRequestInterval;
- (void)reloadOnConfigUpdated;
- (void)removeContactListInCache:(id)arg1;
- (void)setContactListToCache:(id)arg1;
- (id)getContactFromCacheWithAppid:(id)arg1;
- (id)getContactFromCache:(id)arg1;
- (id)getContactFromCacheWithKey:(id)arg1 type:(unsigned long long)arg2;
- (void)mainthread_callExtensionDeleteContact:(id)arg1;
- (void)mainthread_callExtensionModifyContactList:(id)arg1;
- (void)mainthread_callExtensionModifyContact:(id)arg1;
- (void)notifyContactListModify:(id)arg1;
- (_Bool)updateContactListToDBAndCache:(id)arg1;
- (void)updateContactCacheAndCallModifyContact:(id)arg1;
- (_Bool)modifyLastLaunchTime:(unsigned int)arg1 withUserName:(id)arg2;
- (_Bool)modifyHeadImageStatus:(id)arg1 withUserName:(id)arg2;
- (_Bool)modifyWxAppOptWithBitMask:(unsigned int)arg1 bitValue:(unsigned int)arg2 userName:(id)arg3;
- (void)batchUpdateWeAppContactWithArrAppid:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)batchUpdateWeAppContact:(id)arg1;
- (void)updateWeAppContactWithAppid:(id)arg1 isForce:(_Bool)arg2;
- (void)updateWeAppContactWithAppid:(id)arg1;
- (void)updateWeAppContact:(id)arg1 isForce:(_Bool)arg2;
- (void)updateWeAppContact:(id)arg1;
- (void)updateWeAppContactWithKey:(id)arg1 updateType:(unsigned long long)arg2 isForce:(_Bool)arg3 requestSource:(id)arg4;
- (void)updateWeAppContactWithKey:(id)arg1 updateType:(unsigned long long)arg2;
- (void)deleteWeAppContactList:(id)arg1;
- (id)getAllWeAppUserName;
- (id)getAllWeAppContact;
- (id)getWeAppContactWithUsrName:(id)arg1 appId:(id)arg2;
- (id)getWeAppContact:(id)arg1;
- (id)getWeAppContactWithKey:(id)arg1 type:(unsigned long long)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)getAllCContactOfWeApp;
- (id)getCContactWithWeAppUserName:(id)arg1;
- (_Bool)deleteLocalBackUpContactWithUsername:(id)arg1;
- (_Bool)saveLocalBackUpContact:(id)arg1;
- (id)getLocalBackUpContactWithAppid:(id)arg1;
- (id)getLocalBackUpContactWithUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

