//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMMotionManager, CSCScanSessionReportFFEInfo, CameraScanCombineConfig, CameraScanGoodsExtensionDetector, CameraScanGoodsImageProcessResult, CameraScanGoodsRemoteDetector, GoodsReqRemoteDetectLogic, NSMutableArray, NSObject, NSRecursiveLock, NSString;
@protocol CameraScanCombineDetectorRouterDelegate, OS_dispatch_queue;

@interface CameraScanCombineDetectorRouter
{
    _Bool _isDetectorsWorking;
    id <CameraScanCombineDetectorRouterDelegate> _delegate;
    NSRecursiveLock *_variablesLock;
    CameraScanGoodsImageProcessResult *_lastImageProcessResult;
    NSObject<OS_dispatch_queue> *_detectorsQueue;
    NSRecursiveLock *_detectorsQueueStateLock;
    CameraScanGoodsRemoteDetector *_remoteDetector;
    CameraScanGoodsExtensionDetector *_extDetector;
    GoodsReqRemoteDetectLogic *_callRemoteDetectLogic;
    unsigned long long _localDetectFailCount;
    CameraScanCombineConfig *_combineConfig;
    CMMotionManager *_motionManager;
    CSCScanSessionReportFFEInfo *_engineLogInfo;
    long long _enterCombineFlowCount;
    long long _skipFromWorkingCount;
    long long _skipFromStrangyCount;
    long long _handleCombineFlowFrameCount;
    long long _ffeHandleCount;
    long long _ffeFailedCount;
    long long _ffeSuccessCount;
    long long _ffeFirstSuccessFrame;
    long long _ffeNoxBoxFilterCount;
    long long _ffeStableClearFilterCount;
    long long _ffeNoiseFilterCount;
    long long _ffeReSvrDetectCount;
    long long _ffeBarCodeFilterCount;
    long long _svrHandleCount;
    long long _svrFailedCount;
    long long _svrSuccessCount;
    long long _svrFirstSuccessFrame;
    NSMutableArray *_arrFrameIndexDetectedItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrFrameIndexDetectedItem; // @synthesize arrFrameIndexDetectedItem=_arrFrameIndexDetectedItem;
@property(nonatomic) long long svrFirstSuccessFrame; // @synthesize svrFirstSuccessFrame=_svrFirstSuccessFrame;
@property(nonatomic) long long svrSuccessCount; // @synthesize svrSuccessCount=_svrSuccessCount;
@property(nonatomic) long long svrFailedCount; // @synthesize svrFailedCount=_svrFailedCount;
@property(nonatomic) long long svrHandleCount; // @synthesize svrHandleCount=_svrHandleCount;
@property(nonatomic) long long ffeBarCodeFilterCount; // @synthesize ffeBarCodeFilterCount=_ffeBarCodeFilterCount;
@property(nonatomic) long long ffeReSvrDetectCount; // @synthesize ffeReSvrDetectCount=_ffeReSvrDetectCount;
@property(nonatomic) long long ffeNoiseFilterCount; // @synthesize ffeNoiseFilterCount=_ffeNoiseFilterCount;
@property(nonatomic) long long ffeStableClearFilterCount; // @synthesize ffeStableClearFilterCount=_ffeStableClearFilterCount;
@property(nonatomic) long long ffeNoxBoxFilterCount; // @synthesize ffeNoxBoxFilterCount=_ffeNoxBoxFilterCount;
@property(nonatomic) long long ffeFirstSuccessFrame; // @synthesize ffeFirstSuccessFrame=_ffeFirstSuccessFrame;
@property(nonatomic) long long ffeSuccessCount; // @synthesize ffeSuccessCount=_ffeSuccessCount;
@property(nonatomic) long long ffeFailedCount; // @synthesize ffeFailedCount=_ffeFailedCount;
@property(nonatomic) long long ffeHandleCount; // @synthesize ffeHandleCount=_ffeHandleCount;
@property(nonatomic) long long handleCombineFlowFrameCount; // @synthesize handleCombineFlowFrameCount=_handleCombineFlowFrameCount;
@property(nonatomic) long long skipFromStrangyCount; // @synthesize skipFromStrangyCount=_skipFromStrangyCount;
@property(nonatomic) long long skipFromWorkingCount; // @synthesize skipFromWorkingCount=_skipFromWorkingCount;
@property(nonatomic) long long enterCombineFlowCount; // @synthesize enterCombineFlowCount=_enterCombineFlowCount;
@property(retain, nonatomic) CSCScanSessionReportFFEInfo *engineLogInfo; // @synthesize engineLogInfo=_engineLogInfo;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) CameraScanCombineConfig *combineConfig; // @synthesize combineConfig=_combineConfig;
@property(nonatomic) unsigned long long localDetectFailCount; // @synthesize localDetectFailCount=_localDetectFailCount;
@property(retain, nonatomic) GoodsReqRemoteDetectLogic *callRemoteDetectLogic; // @synthesize callRemoteDetectLogic=_callRemoteDetectLogic;
@property(retain, nonatomic) CameraScanGoodsExtensionDetector *extDetector; // @synthesize extDetector=_extDetector;
@property(retain, nonatomic) CameraScanGoodsRemoteDetector *remoteDetector; // @synthesize remoteDetector=_remoteDetector;
@property(retain, nonatomic) NSRecursiveLock *detectorsQueueStateLock; // @synthesize detectorsQueueStateLock=_detectorsQueueStateLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *detectorsQueue; // @synthesize detectorsQueue=_detectorsQueue;
@property _Bool isDetectorsWorking; // @synthesize isDetectorsWorking=_isDetectorsWorking;
@property(retain, nonatomic) CameraScanGoodsImageProcessResult *lastImageProcessResult; // @synthesize lastImageProcessResult=_lastImageProcessResult;
@property(retain, nonatomic) NSRecursiveLock *variablesLock; // @synthesize variablesLock=_variablesLock;
@property(nonatomic) __weak id <CameraScanCombineDetectorRouterDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isCameraStable;
- (void)endMotionDetector;
- (void)beginMotionDetector;
- (void)setupMotionDetector;
- (id)curCombineReportBaseInfo;
- (void)clearLastImageProcessResult;
- (id)popLastImageProcessResult;
- (void)pushLastImageProcessResult:(id)arg1;
- (void)detector:(id)arg1 didUploadEngineLog:(id)arg2;
- (void)detector:(id)arg1 didSvrReTrackWithResult:(_Bool)arg2;
- (void)detector:(id)arg1 didFailCgiTaskForItem:(id)arg2 errCode:(unsigned int)arg3;
- (void)detector:(id)arg1 didAskPreloadForItem:(id)arg2;
- (void)detector:(id)arg1 didRetrievalLocalItem:(id)arg2;
- (void)detector:(id)arg1 didUploadLocalItem:(id)arg2;
- (void)detector:(id)arg1 didDetectLocalItem:(id)arg2;
- (void)onSendImageInfoFail:(id)arg1 errorCode:(long long)arg2 errorMsg:(id)arg3 isNetworkError:(_Bool)arg4;
- (void)detector:(id)arg1 didDetectRemoteItemFromAlbum:(id)arg2;
- (void)callUserSelectWithReqKey:(id)arg1 andExchangeInfo:(id)arg2;
- (void)workQueue_handleImageResult:(id)arg1;
- (void)checkDetectorsTaskInDetectorsQueue;
- (void)handleImageProcessResultFromCodeCapureThread:(id)arg1;
- (void)handleResumeDetectedLocalItems:(id)arg1;
- (void)recoverDetectorsProcessIncomingResult;
- (void)stopDetectorsProcessIncomingResult;
- (void)resetDetectors;
- (void)renewDetectors;
- (void)enableDetectors;
- (void)stopDetectorScanSession;
- (void)startDetectorScanSession;
- (_Bool)scanOnePictureFromAlbum:(id)arg1;
- (_Bool)isOnDetectorQueue;
- (void)createWorkQueue;
- (void)setupDetectors;
- (id)initWithCombineConfig:(id)arg1;
- (void)logSerialContextFrameInfoOfRedcordedIndex;
- (void)recordIndexOfFrameWhitchDetectedItem:(unsigned long long)arg1;
- (void)doReportScanSessionInfoAndReset;
- (void)reportOnHandleFrameBySvrWithResult:(_Bool)arg1;
- (void)reportOnHandleFrameByFFEWithResult:(_Bool)arg1 trackResult:(unsigned int)arg2;
- (void)reportOnSkipFrameByQueueWorking;
- (void)reportOnSkipFrameByStrangy;
- (void)resetReportCountInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

