//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CgiReportDataController, CgiReportDataSender, CgiReportFlowGuarder, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface CgiReportDataService
{
    _Bool _needRptKv;
    _Bool _useMMKV;
    NSMutableDictionary *_routerMap;
    NSMutableArray *_waitingQueue;
    NSMutableSet *_sendingQueue;
    NSMutableDictionary *_collectMap;
    NSMutableDictionary *_waitToReqSvrMap;
    NSDictionary *_clientKvMap;
    CgiReportFlowGuarder *_flowGuarder;
    CgiReportDataSender *_sender;
    CgiReportDataController *_controller;
}

+ (id)sharedSerialQueue;
- (void).cxx_destruct;
@property(retain, nonatomic) CgiReportDataController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) CgiReportDataSender *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) CgiReportFlowGuarder *flowGuarder; // @synthesize flowGuarder=_flowGuarder;
@property(retain, nonatomic) NSDictionary *clientKvMap; // @synthesize clientKvMap=_clientKvMap;
@property(nonatomic) _Bool useMMKV; // @synthesize useMMKV=_useMMKV;
@property(nonatomic) _Bool needRptKv; // @synthesize needRptKv=_needRptKv;
@property(retain, nonatomic) NSMutableDictionary *waitToReqSvrMap; // @synthesize waitToReqSvrMap=_waitToReqSvrMap;
@property(retain, nonatomic) NSMutableDictionary *collectMap; // @synthesize collectMap=_collectMap;
@property(retain, nonatomic) NSMutableSet *sendingQueue; // @synthesize sendingQueue=_sendingQueue;
@property(retain, nonatomic) NSMutableArray *waitingQueue; // @synthesize waitingQueue=_waitingQueue;
@property(retain, nonatomic) NSMutableDictionary *routerMap; // @synthesize routerMap=_routerMap;
- (id)compressReportData:(id)arg1 andMaxLength:(unsigned int)arg2;
- (void)clientKvReport:(id)arg1 andBusinessId:(unsigned int)arg2;
- (id)mmkvMapID;
- (id)readFromMMKV;
- (void)saveToMMKV:(id)arg1 andTrace:(id)arg2;
- (void)removeUnReqItemBySendSuccess:(id)arg1;
- (void)setUnReqSvrItem:(id)arg1;
- (void)onExptItemListChange;
- (id)createDefaultRouterInfo:(unsigned int)arg1;
- (id)checkToGetRouteInfo:(unsigned int)arg1;
- (void)readExptConfig;
- (_Bool)isSendingQueueFull;
- (id)getAndRemoveWaitingData;
- (void)sendSuccess:(id)arg1;
- (void)sendFail:(id)arg1;
- (void)onCgiTaskEnd:(int)arg1 andTask:(id)arg2;
- (void)checkToSend;
- (void)putToQueue:(id)arg1;
- (_Bool)sendReportData:(id)arg1;
- (id)createCollectKey:(unsigned int)arg1 andItemId:(id)arg2 andEventId:(id)arg3;
- (void)collectToSend:(id)arg1;
- (void)checkToReportAllCollectMap:(id)arg1;
- (_Bool)sendReportDataAutoCollect:(unsigned int)arg1 andItemType:(unsigned int)arg2 andItemId:(id)arg3 andCurrPage:(id)arg4 andSourcePage:(id)arg5 andRefPage:(id)arg6 andSdkSessionId:(id)arg7 andEventId:(id)arg8 andCliTimeMs:(unsigned long long)arg9 andData:(id)arg10;
- (_Bool)sendReportData:(unsigned int)arg1 andItemType:(unsigned int)arg2 andItemId:(id)arg3 andCurrPage:(id)arg4 andSourcePage:(id)arg5 andRefPage:(id)arg6 andSdkSessionId:(id)arg7 andEventId:(id)arg8 andCliTimeMs:(unsigned long long)arg9 andData:(id)arg10;
- (_Bool)sendLiteAppReportData:(unsigned int)arg1 andIsBatchReport:(_Bool)arg2 andJsonArray:(id)arg3;
- (id)checkToReturnCollectMapItem:(unsigned int)arg1 andItemId:(id)arg2 andEventId:(id)arg3;
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

