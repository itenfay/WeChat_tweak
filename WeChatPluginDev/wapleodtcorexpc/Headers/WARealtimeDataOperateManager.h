//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject, NSString, WARealtimeDataOperationBufferPool;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WARealtimeDataOperateManager
{
    _Bool _isRequesting;
    unsigned int _lastUploadTimeStamp;
    WARealtimeDataOperationBufferPool *_operationPool;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_workerQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(nonatomic) unsigned int lastUploadTimeStamp; // @synthesize lastUploadTimeStamp=_lastUploadTimeStamp;
@property(retain, nonatomic) WARealtimeDataOperationBufferPool *operationPool; // @synthesize operationPool=_operationPool;
- (void)willEnterForeground;
- (void)removeNotification;
- (void)addNotification;
- (void)onWXARealtimeReportResponse:(id)arg1;
- (void)resetTimer;
- (void)releaseTimer;
- (void)mainthread_callExtensionWithAppid:(id)arg1 operationsIdList:(id)arg2 errCode:(int)arg3 errMsg:(id)arg4 dataSize:(unsigned long long)arg5;
- (void)notifyOperationsResultWithAppid:(id)arg1 operationsIdList:(id)arg2 errCode:(int)arg3 errMsg:(id)arg4 dataSize:(unsigned long long)arg5;
- (void)callResultForOperations:(id)arg1 errCode:(int)arg2 errMsg:(id)arg3;
- (void)abandonOperations:(id)arg1 errCode:(int)arg2 errMsg:(id)arg3;
- (void)reenqueueOperations:(id)arg1;
- (void)reportWithOperation:(id)arg1 action:(unsigned long long)arg2;
- (void)processFailedOperations:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)operateRealtimeData:(id)arg1;
- (void)workerThread_checkOperationPool;
- (void)checkOperationPool;
- (void)timerCheck;
- (_Bool)shouldUploadOperations;
- (_Bool)hasImmediateOperation;
- (_Bool)reachUploadTimeGap;
- (_Bool)bufferSizeReachLimit;
- (void)workerThreadAddOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

