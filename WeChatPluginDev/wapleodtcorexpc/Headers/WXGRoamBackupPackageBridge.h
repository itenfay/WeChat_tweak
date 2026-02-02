//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AffRoamProviderCallback, NSMutableDictionary, NSOperationQueue, NSRecursiveLock, NSString, WXGRoamBackendHandler, WXGRoamCloudHandler;
@protocol OS_dispatch_queue, WXGRoamBackupPackageBridgeDelegate;

@interface WXGRoamBackupPackageBridge : NSObject
{
    id <WXGRoamBackupPackageBridgeDelegate> _delegate;
    AffRoamProviderCallback *_affRoamCallback;
    NSMutableDictionary *_backupperMap;
    NSMutableDictionary *_taskMap;
    NSMutableDictionary *_deviceMap;
    NSMutableDictionary *_modelMap;
    NSMutableDictionary *_importQueueMap;
    NSMutableDictionary *_packageHandlerMap;
    WXGRoamBackendHandler *_backendHandler;
    WXGRoamCloudHandler *_cloudHandler;
    NSObject<OS_dispatch_queue> *_bridgeQueue;
    NSObject<OS_dispatch_queue> *_blockQueue;
    NSObject<OS_dispatch_queue> *_getPakageQueue;
    NSObject<OS_dispatch_queue> *_filterQueue;
    NSObject<OS_dispatch_queue> *_loadMediaQueue;
    NSOperationQueue *_getPackageOperationQueue;
    NSRecursiveLock *_mapLock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *mapLock; // @synthesize mapLock=_mapLock;
@property(retain, nonatomic) NSOperationQueue *getPackageOperationQueue; // @synthesize getPackageOperationQueue=_getPackageOperationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loadMediaQueue; // @synthesize loadMediaQueue=_loadMediaQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *filterQueue; // @synthesize filterQueue=_filterQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *getPakageQueue; // @synthesize getPakageQueue=_getPakageQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *blockQueue; // @synthesize blockQueue=_blockQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *bridgeQueue; // @synthesize bridgeQueue=_bridgeQueue;
@property(retain, nonatomic) WXGRoamCloudHandler *cloudHandler; // @synthesize cloudHandler=_cloudHandler;
@property(retain, nonatomic) WXGRoamBackendHandler *backendHandler; // @synthesize backendHandler=_backendHandler;
@property(retain, nonatomic) NSMutableDictionary *packageHandlerMap; // @synthesize packageHandlerMap=_packageHandlerMap;
@property(retain, nonatomic) NSMutableDictionary *importQueueMap; // @synthesize importQueueMap=_importQueueMap;
@property(retain, nonatomic) NSMutableDictionary *modelMap; // @synthesize modelMap=_modelMap;
@property(retain, nonatomic) NSMutableDictionary *deviceMap; // @synthesize deviceMap=_deviceMap;
@property(retain, nonatomic) NSMutableDictionary *taskMap; // @synthesize taskMap=_taskMap;
@property(retain, nonatomic) NSMutableDictionary *backupperMap; // @synthesize backupperMap=_backupperMap;
@property(retain, nonatomic) AffRoamProviderCallback *affRoamCallback; // @synthesize affRoamCallback=_affRoamCallback;
@property(nonatomic) __weak id <WXGRoamBackupPackageBridgeDelegate> delegate; // @synthesize delegate=_delegate;
- (id)convertModelToPackage:(id)arg1;
- (id)convertPackageToModel:(id)arg1;
- (void)roamTaskSubscribeEvent:(id)arg1;
- (void)onRoamImportOneDirFinished:(unsigned long long)arg1;
- (void)onRoamBackendGetRoamBackupPackagesSetResponse:(id)arg1 success:(_Bool)arg2 invokeID:(unsigned long long)arg3;
- (void)onRoamBackendGetRoamBackupPackagesGetResponse:(id)arg1 success:(_Bool)arg2 invokeID:(unsigned long long)arg3;
- (void)onRoamBackendGetSeruceTunnelResponse:(id)arg1 success:(_Bool)arg2 invokeID:(unsigned long long)arg3;
- (void)onRoamBackendGetDeviceNetworkInfo:(id)arg1 success:(_Bool)arg2 invokeID:(unsigned long long)arg3;
- (void)onRoamBackendBuildRelationSession:(id)arg1 success:(_Bool)arg2 invokeID:(unsigned long long)arg3;
- (void)onRoamBackendGenNewEncrytKey:(id)arg1 success:(_Bool)arg2 invokeID:(unsigned long long)arg3;
- (void)onRoamBackendGetEncrytKey:(id)arg1 success:(_Bool)arg2 invokeID:(unsigned long long)arg3;
- (void)filterRestoreMediaAsync:(unsigned long long)arg1 convId:(id)arg2 svrIdList:(id)arg3 mediaIdList:(id)arg4 mediaTypeList:(id)arg5;
- (void)getNetworkInfosAsync:(unsigned long long)arg1;
- (void)getDeviceAvailableStorageSpaceAsync:(unsigned long long)arg1;
- (void)getDeviceNetworkInfosAsync:(unsigned long long)arg1;
- (void)setRoamBackupPackagesAsync:(unsigned long long)arg1 request:(id)arg2;
- (void)getRoamBackupPackagesAsync:(unsigned long long)arg1 request:(id)arg2;
- (void)insertChatPackageAsync:(unsigned long long)arg1 packageId:(unsigned long long)arg2 convId:(id)arg3 chatPackage:(id)arg4;
- (void)getChatPackageAsync:(unsigned long long)arg1 packageId:(unsigned long long)arg2 conversationId:(id)arg3 fromTime:(unsigned long long)arg4 toTime:(unsigned long long)arg5 offset:(unsigned long long)arg6 limit:(int)arg7;
- (void)getIlinkDeviceBindingSessionAsync:(unsigned long long)arg1 request:(id)arg2;
- (void)getAdamTunnelCryptoInfoAsync:(unsigned long long)arg1 cryptoMaterial:(id)arg2;
- (void)getRoamFileEncKeyAsync:(unsigned long long)arg1 encIds:(id)arg2 createNew:(_Bool)arg3;
- (void)setCallback:(id)arg1;
- (void)deletePackageWithModels:(id)arg1;
- (void)updatePackageWithModels:(id)arg1;
- (void)createPackageWithModels:(id)arg1;
- (id)getPackageById:(unsigned long long)arg1;
- (void)getAllPackageModels:(_Bool)arg1 isFirstTime:(_Bool)arg2;
- (id)getTransferStatWithModel:(id)arg1;
- (id)getTaskErrorLogWithModel:(id)arg1;
- (int)getTaskTypeWithModel:(id)arg1;
- (void)stopWithModel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)pauseWithModel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)resumeWithModel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)startRestoreWithModel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)startBackupWithModel:(id)arg1 isAuto:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (void)prepareWithModel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)deleteBackupWithModel:(id)arg1 fromTime:(unsigned long long)arg2 toTime:(unsigned long long)arg3 deleteConvs:(id)arg4 deleteAll:(_Bool)arg5;
- (void)getBackedUpConversationListWithModel:(id)arg1 fromTime:(unsigned long long)arg2 toTime:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setupAutoBackupEventWithModel:(id)arg1 checkDelay:(unsigned long long)arg2;
- (void)cloudloadMediaForMessage:(id)arg1 localPath:(id)arg2 username:(id)arg3 dataID:(id)arg4 listModels:(id)arg5;
- (void)triggerAutoBackupCheck;
- (void)notifyAppForegroundStateChanged:(_Bool)arg1;
- (void)notifyNetworkStateChanged:(_Bool)arg1 ssid:(id)arg2;
- (id)getDebugInfo;
- (void)setScheduleLevel:(int)arg1;
- (id)checkIncompleteTasks;
- (void)setAutoBackupLastSuccessTime:(id)arg1 lastSuccessTime:(unsigned long long)arg2;
- (void)setPauseAutoBackupForTimes:(id)arg1 pauseTime:(unsigned long long)arg2;
- (id)getStandAlonePackageInfo:(id)arg1;
- (void)setAppBackupUIStateChanged:(_Bool)arg1;
- (void)setupManager;
- (void)getDeviceInfo:(id)arg1;
- (void)disconnect:(id)arg1;
- (void)connect:(id)arg1;
- (void)connectAsync:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)getReportData:(unsigned long long)arg1;
- (id)getAutoTestPackage;
- (void)setAutoTestMode:(_Bool)arg1;
- (void)uinit;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

