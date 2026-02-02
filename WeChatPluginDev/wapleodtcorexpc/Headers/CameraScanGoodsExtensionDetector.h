//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CSCScanSessionReportFFEInfo, CameraScanGoodsExtensionDetectorConfig, MMTimer, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSRecursiveLock, NSString;
@protocol CameraScanGoodsExtensionDetectorDelegate, OS_dispatch_queue;

@interface CameraScanGoodsExtensionDetector
{
    _Bool _isActive;
    id <CameraScanGoodsExtensionDetectorDelegate> _delegate;
    CameraScanGoodsExtensionDetectorConfig *_config;
    NSObject<OS_dispatch_queue> *_engineQueue;
    void *_focusEngine;
    struct RerankStrategy *_rerankStrategy;
    long long _fullImageTrackID;
    unsigned long long _sessionId;
    MMTimer *_checkQueueTimer;
    NSMutableSet *_setTrackIdDetected;
    NSMutableArray *_arrTaskActiveRecord;
    NSMutableArray *_arrWaitingCGITask;
    NSMutableDictionary *_dictActiveCGITasks;
    NSMutableDictionary *_dictTrackId2ReqKey;
    NSMutableDictionary *_dictTrackId2ExchangeInfo;
    unsigned long long _popAndRequestTaskCount;
    CSCScanSessionReportFFEInfo *_engineLogInfo;
    NSRecursiveLock *_detectedTrackIdLock;
}

+ (void)logInfoFFEConfig:(struct Config)arg1 prefix:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *detectedTrackIdLock; // @synthesize detectedTrackIdLock=_detectedTrackIdLock;
@property(retain, nonatomic) CSCScanSessionReportFFEInfo *engineLogInfo; // @synthesize engineLogInfo=_engineLogInfo;
@property(nonatomic) unsigned long long popAndRequestTaskCount; // @synthesize popAndRequestTaskCount=_popAndRequestTaskCount;
@property(retain, nonatomic) NSMutableDictionary *dictTrackId2ExchangeInfo; // @synthesize dictTrackId2ExchangeInfo=_dictTrackId2ExchangeInfo;
@property(retain, nonatomic) NSMutableDictionary *dictTrackId2ReqKey; // @synthesize dictTrackId2ReqKey=_dictTrackId2ReqKey;
@property(retain, nonatomic) NSMutableDictionary *dictActiveCGITasks; // @synthesize dictActiveCGITasks=_dictActiveCGITasks;
@property(retain, nonatomic) NSMutableArray *arrWaitingCGITask; // @synthesize arrWaitingCGITask=_arrWaitingCGITask;
@property(retain, nonatomic) NSMutableArray *arrTaskActiveRecord; // @synthesize arrTaskActiveRecord=_arrTaskActiveRecord;
@property(retain, nonatomic) NSMutableSet *setTrackIdDetected; // @synthesize setTrackIdDetected=_setTrackIdDetected;
@property(retain, nonatomic) MMTimer *checkQueueTimer; // @synthesize checkQueueTimer=_checkQueueTimer;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) long long fullImageTrackID; // @synthesize fullImageTrackID=_fullImageTrackID;
@property(nonatomic) struct RerankStrategy *rerankStrategy; // @synthesize rerankStrategy=_rerankStrategy;
@property(nonatomic) void *focusEngine; // @synthesize focusEngine=_focusEngine;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *engineQueue; // @synthesize engineQueue=_engineQueue;
@property(retain, nonatomic) CameraScanGoodsExtensionDetectorConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) __weak id <CameraScanGoodsExtensionDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeAllTranckIds;
- (void)addTrackIdToDetectedSet:(id)arg1;
- (_Bool)isTrackIdDetected:(id)arg1;
- (_Bool)enableMotionDetectors;
- (unsigned long long)uploadImageDataEncodeType;
- (double)exchangeTimeout;
- (double)uploadTimeout;
- (void)onCameraScanGoodsExtCGITaskRetrackFinish:(id)arg1 result:(_Bool)arg2;
- (void)callTrackGoodsWhenExtCGITaskDidReceiveUploadResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onCameraScanGoodsExtCGITaskExchangedSuccess:(id)arg1;
- (void)onCameraScanGoodsExtCGITaskUploadSuccess:(id)arg1;
- (void)onCameraScanGoodsExtCGITaskAskForPreload:(id)arg1;
- (void)onCameraScanGoodsExtCGITaskSuccess:(id)arg1;
- (void)onCameraScanGoodsExtCGITaskFailed:(id)arg1 errCode:(unsigned int)arg2;
- (unsigned long long)minTaskRequestingInterval;
- (unsigned long long)maxRequestingTaskCount;
- (unsigned long long)headRequestingTaskDurantionBeforeNow;
- (void)cancelAllDetectTask;
- (void)cancelTaskWithTaskId:(unsigned int)arg1;
- (void)checkQueue;
- (void)pushCGITaskToQueue:(id)arg1;
- (void)handleDetectItemViewModelsWithCGITask:(id)arg1 shouldNotifyUI:(_Bool)arg2;
- (void)handleResumeDetectedLocalItems:(id)arg1;
- (id)curFFEReportInfo;
- (void)resetNoBoxesCnt;
- (void)retrackRemoteObject:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remoteHandleDetectImageProcessResult:(id)arg1 localDetectResult:(id)arg2;
- (id)handleDetectImageProcessResult:(id)arg1;
- (void)callDetectLocalItemInMainThread:(id)arg1;
- (void)recoverProcessIncomingResult;
- (void)stopProcessIncomingResult;
- (void)clear;
- (void)renew;
- (void)resignActive;
- (void)becomeActive;
- (void)destroyCoreMembers;
- (void)clearCoreMembers;
- (void)setupCoreMembers;
- (void)setupRerankStrategy;
- (void)setupFocusEngine;
- (void)dealloc;
- (id)initWithDetectorWorkQueue:(id)arg1 sessionId:(unsigned long long)arg2 config:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

