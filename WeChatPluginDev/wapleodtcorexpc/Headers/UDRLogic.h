//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMIlinkCheckResourceMgr, NSMutableDictionary, NSObject, NSString, UDRResourceDBMgr;
@protocol OS_dispatch_queue;

@interface UDRLogic
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_paramsMap;
    UDRResourceDBMgr *_udrDBMgr;
    MMIlinkCheckResourceMgr *_resourceMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMIlinkCheckResourceMgr *resourceMgr; // @synthesize resourceMgr=_resourceMgr;
@property(retain, nonatomic) UDRResourceDBMgr *udrDBMgr; // @synthesize udrDBMgr=_udrDBMgr;
- (void)onReceiveGetSpecifiedResource:(id)arg1 name:(id)arg2 version:(unsigned int)arg3 extInfo:(id)arg4;
- (void)onReceiveCheckUpdateBackend:(id)arg1 nameList:(id)arg2;
- (void)onReceiveBugFixCDN:(id)arg1;
- (void)onReceiveCheckResource:(id)arg1 resources:(id)arg2;
- (void)onSpecifiedCheckResource:(id)arg1 resources:(id)arg2 blockTime:(unsigned int)arg3 errorType:(unsigned long long)arg4 errorCode:(int)arg5 timeStamp:(unsigned int)arg6 extInfo:(id)arg7;
- (void)onPeriodCheckResource:(id)arg1 resourcesDic:(id)arg2 noUpdateProjectIds:(id)arg3 errorProjectIds:(id)arg4 errorType:(unsigned long long)arg5 errorCode:(int)arg6 timeStamp:(unsigned int)arg7 nextUpdateInterval:(int)arg8 isFinish:(int)arg9 newOffset:(id)arg10;
- (void)onBatchCheckResource:(id)arg1 resourcesDic:(id)arg2 blockTimeDic:(id)arg3 noUpdateProjectIds:(id)arg4 errorProjectIds:(id)arg5 errorType:(unsigned long long)arg6 errorCode:(int)arg7 timeStamp:(unsigned int)arg8;
- (void)onCheckResource:(id)arg1 resources:(id)arg2 blockTime:(unsigned int)arg3 errorType:(unsigned long long)arg4 errorCode:(int)arg5 isBatch:(_Bool)arg6 timeStamp:(unsigned int)arg7;
- (void)configParameters:(void *)arg1;
- (void)dealFailResourceCallback:(id)arg1 name:(id)arg2 version:(int)arg3 errorType:(int)arg4 errorCode:(int)arg5 timeStamp:(unsigned int)arg6 scene:(long long)arg7 sampleRate:(float)arg8;
- (void)dealResourceCallback:(id)arg1 infos:(id)arg2 blockTime:(unsigned int)arg3 errorType:(int)arg4 errorCode:(int)arg5 timeStamp:(unsigned int)arg6 extInfo:(id)arg7 scene:(long long)arg8 reqItems:(id)arg9;
- (id)getResourceDescriptionReqItem:(id)arg1 nameList:(id)arg2 qos:(int)arg3 parameter:(id)arg4;
- (void)setBlockTime:(id)arg1 block:(unsigned int)arg2;
- (void)setIntervalTime:(unsigned int)arg1;
- (_Bool)postCheckExpireTime:(id)arg1 node:(id)arg2;
- (_Bool)preCheckBlockTime:(id)arg1;
- (_Bool)checkIsIntervalTime;
- (void)checkSpecifiedResource:(id)arg1 name:(id)arg2 version:(unsigned int)arg3 extInfo:(id)arg4;
- (void)periodCheckResource:(id)arg1 parameterMap:(id)arg2 offset:(id)arg3;
- (void)batchCheckResource:(id)arg1 nameMap:(id)arg2 qos:(int)arg3 parameterMap:(id)arg4;
- (void)checkResource:(id)arg1 nameList:(id)arg2 qos:(int)arg3 parameter:(id)arg4;
- (void)updateResource:(id)arg1;
- (void)removeResource:(id)arg1;
- (id)getWxResource:(id)arg1 name:(id)arg2;
- (id)getWxResourceList:(id)arg1;
- (id)getResourceList:(id)arg1;
- (id)getResource:(id)arg1 name:(id)arg2;
- (id)getAllResource;
- (void)alive:(id)arg1;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

