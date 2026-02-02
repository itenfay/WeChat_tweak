//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface RoamManager : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct RoamManagerCppCover cpp_cover;
    struct weak_ptr<affroam::RoamManagerDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setScheduleLevel:(int)arg1;
- (void)triggerAutoBackupCheck;
- (_Bool)doDebugCmd:(unsigned long long)arg1 arguments:(id)arg2;
- (id)getDebugInfo;
- (id)getAllStandAlonePackageInfo;
- (void)setAutoBackupLastSuccessTime:(unsigned long long)arg1 lastSuccessTime:(unsigned long long)arg2;
- (void)setPauseAutoBackupForTimes:(unsigned long long)arg1 pauseTime:(unsigned long long)arg2;
- (id)getStandAlonePackageInfo:(unsigned long long)arg1;
- (id)getBackupRecord:(unsigned long long)arg1;
- (id)getReportData:(unsigned long long)arg1;
- (id)checkIncompleteTask;
- (void)unsubscribeDeviceStartConnectEvent:(id)arg1;
- (void)subscribeDeviceStartConnectEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeDeviceStartConnectEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (void)unsubscribeResumeQuitedTaskEventEvent:(id)arg1;
- (void)subscribeResumeQuitedTaskEventEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeResumeQuitedTaskEventEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (void)unsubscribeDeleteBackupDataProgressEvent:(id)arg1;
- (void)subscribeDeleteBackupDataProgressEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeDeleteBackupDataProgressEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (void)unsubscribeAutoBackupEventEvent:(id)arg1;
- (void)subscribeAutoBackupEventEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeAutoBackupEventEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (void)unsubscribeDeviceDiscoveredEvent:(id)arg1;
- (void)subscribeDeviceDiscoveredEvent:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (void)subscribeDeviceDiscoveredEvent:(id)arg1 on:(id)arg2 eventBlock:(CDUnknownBlockType)arg3;
- (void)appBackupUIStateChanged:(_Bool)arg1;
- (void)appForegroundStateChanged:(_Bool)arg1;
- (void)setOuterAutoTestMode:(_Bool)arg1;
- (void)networkChanged:(id)arg1;
- (void)scanDevices;
- (void)unInit;
- (int)initialize:(id)arg1 userId:(id)arg2 phoneId:(id)arg3 isWebdevice:(_Bool)arg4;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_322d64af)getDispatcher;

@end

