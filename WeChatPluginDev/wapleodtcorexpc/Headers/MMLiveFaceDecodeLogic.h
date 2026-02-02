//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTask, MMLiveFaceDecodeTask, MMLiveTask, MMTimer, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MMLiveFaceDecodeLogic : NSObject
{
    _Bool _needProcessFaceDetectData;
    _Bool _detectedSegmentPersion;
    _Bool _isOpenFaceDecode;
    _Bool _lastNotifyInterrupt;
    unsigned int _useClientMask;
    int _maxProcessFPS;
    double _lastFaceDetectProcessEndTime;
    long long _maskTexRenderType;
    MMLiveTask *_liveTask;
    MMLiveFaceDecodeTask *_currDecodeTask;
    NSMutableArray *_decodeTaskList;
    NSObject<OS_dispatch_queue> *_decodingQueue;
    double _lastFaceDetectProcessStartTime;
    double _lastDataRecvTime;
    double _lastDataDecodeTime;
    long long _faceDetectDataSrc;
    double _lastRefreshTime;
    MMTimer *_scheduleCheckTimer;
    long long _thermalState;
    long long _fpsCounter;
    unsigned long long _recvFrameCount;
    unsigned long long _processFrameCount;
    long long _recvFps;
    long long _processFps;
    unsigned long long _recvFpsStatCnt;
    unsigned long long _processFpsStatCnt;
    CDUnknownBlockType _recvFpsReport;
    CDUnknownBlockType _processFpsReport;
    double _lastProcessTime;
}

+ (CDUnknownBlockType)createReportTimer:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property double lastProcessTime; // @synthesize lastProcessTime=_lastProcessTime;
@property(copy) CDUnknownBlockType processFpsReport; // @synthesize processFpsReport=_processFpsReport;
@property(copy) CDUnknownBlockType recvFpsReport; // @synthesize recvFpsReport=_recvFpsReport;
@property unsigned long long processFpsStatCnt; // @synthesize processFpsStatCnt=_processFpsStatCnt;
@property unsigned long long recvFpsStatCnt; // @synthesize recvFpsStatCnt=_recvFpsStatCnt;
@property long long processFps; // @synthesize processFps=_processFps;
@property long long recvFps; // @synthesize recvFps=_recvFps;
@property unsigned long long processFrameCount; // @synthesize processFrameCount=_processFrameCount;
@property unsigned long long recvFrameCount; // @synthesize recvFrameCount=_recvFrameCount;
@property(nonatomic) long long fpsCounter; // @synthesize fpsCounter=_fpsCounter;
@property(nonatomic) long long thermalState; // @synthesize thermalState=_thermalState;
@property int maxProcessFPS; // @synthesize maxProcessFPS=_maxProcessFPS;
@property(retain, nonatomic) MMTimer *scheduleCheckTimer; // @synthesize scheduleCheckTimer=_scheduleCheckTimer;
@property(nonatomic) double lastRefreshTime; // @synthesize lastRefreshTime=_lastRefreshTime;
@property(nonatomic) _Bool lastNotifyInterrupt; // @synthesize lastNotifyInterrupt=_lastNotifyInterrupt;
@property(nonatomic) long long faceDetectDataSrc; // @synthesize faceDetectDataSrc=_faceDetectDataSrc;
@property(nonatomic) unsigned int useClientMask; // @synthesize useClientMask=_useClientMask;
@property(nonatomic) double lastDataDecodeTime; // @synthesize lastDataDecodeTime=_lastDataDecodeTime;
@property(nonatomic) double lastDataRecvTime; // @synthesize lastDataRecvTime=_lastDataRecvTime;
@property double lastFaceDetectProcessStartTime; // @synthesize lastFaceDetectProcessStartTime=_lastFaceDetectProcessStartTime;
@property _Bool isOpenFaceDecode; // @synthesize isOpenFaceDecode=_isOpenFaceDecode;
@property _Bool detectedSegmentPersion; // @synthesize detectedSegmentPersion=_detectedSegmentPersion;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *decodingQueue; // @synthesize decodingQueue=_decodingQueue;
@property(retain, nonatomic) NSMutableArray *decodeTaskList; // @synthesize decodeTaskList=_decodeTaskList;
@property(retain) MMLiveFaceDecodeTask *currDecodeTask; // @synthesize currDecodeTask=_currDecodeTask;
@property(nonatomic) __weak MMLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(nonatomic) long long maskTexRenderType; // @synthesize maskTexRenderType=_maskTexRenderType;
@property double lastFaceDetectProcessEndTime; // @synthesize lastFaceDetectProcessEndTime=_lastFaceDetectProcessEndTime;
@property _Bool needProcessFaceDetectData; // @synthesize needProcessFaceDetectData=_needProcessFaceDetectData;
- (void)onMatrixPerfWarning:(id)arg1;
- (void)onBarrageFaceDetectRenderModeChanged:(long long)arg1 taskId:(id)arg2;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property(readonly, nonatomic) unsigned long long maxDecodeTaskCnt;
- (void)updateThermalState:(long long)arg1 forceUpdate:(_Bool)arg2;
- (void)clearStats;
- (void)initStats;
- (void)pauseProcess;
- (void)continueProcess;
- (void)stopProcess;
- (void)startProcess;
- (long long)getNewFaceDetectDataSrc;
- (long long)currFaceDetectDataSrc;
- (void)updateUseClientMask:(unsigned int)arg1;
- (void)delayCheckSeiDataInterrupted;
- (double)limitRefreshInterval;
- (void)onRefreshOverTimeCheck;
- (void)notifySeiDataInterrupted;
- (void)notifyMaskTextureRefreshState;
- (void)notifyMaskTextureRefreshWithDecodeResult:(id)arg1;
- (_Bool)checkEnableDecodeNext;
- (void)tryDecodeNextTask;
- (void)clearDecodeTaskList;
- (void)checkDecodeTasksOverMaxLimit;
- (id)getNextDecodeTask;
- (void)addDecodeTask:(id)arg1;
- (void)updateNoSegmentPersion:(_Bool)arg1;
- (unsigned long long)getTrackIndexForStartFaceDecode;
- (void)statisticLastProcecssDuration;
- (void)updateNeedProcessFaceDetectData;
- (void)onNotifyHasBarrageMovingAtTrackIndex:(unsigned long long)arg1;
- (void)onNotifyHasBarrageDataChanged:(_Bool)arg1;
- (void)notifyDataInterrupt;
- (void)closeFaceDecode;
- (void)openFaceDecode;
- (void)processSEIPBForFaceDetect:(id)arg1;
- (void)updateFaceDetectDataSrc;
- (void)onScheduleCheck;
- (void)stopScheduleCheckTimer;
- (void)startScheduleCheckTimer;
- (void)initNotifications;
- (void)unRegisterExts;
- (void)registerExts;
- (void)dealloc;
- (void)initDefaultData;
- (id)initWithLiveTask:(id)arg1;
- (int)getCurrMaxProcessFPS;
- (double)maxProcessTimeInterval;
- (_Bool)checkNeedSkipProcessFrameWithTimeInterval;
- (long long)getFrameInterval;
- (void)clearFPSControl;
- (_Bool)checkNeedSkipProcessFrame;
- (void)updateMaxProcessFPS;
- (void)updateProcessFps:(int)arg1;
- (void)logForProcessStatIfNeed;
- (void)logForRecvStatIfNeed;
- (void)increaseProcessFpsStatCnt;
- (void)increaseRecvFpsStatCnt;
- (void)increaseProcessFrameCnt;
- (void)increaseRecvFrameCnt;
- (CDUnknownBlockType)createProcessFpsReporter;
- (CDUnknownBlockType)createRecvFpsReporter;
- (void)updateLastProcessTime;
- (void)clearProcessStats;
- (void)updateProcessStats;
- (void)initProcessStats;
- (void)clearRecvStats;
- (void)updateRecvStats;
- (void)initRecvStats;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

