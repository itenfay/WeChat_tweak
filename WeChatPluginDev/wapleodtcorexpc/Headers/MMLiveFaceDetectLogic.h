//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTask, MMLiveFaceEncodeLogic, MMLiveStorageCleanupPinningToken, MMLiveTask, MMTimer, MMWeEffectManager, NSMutableArray, NSString;

@interface MMLiveFaceDetectLogic : NSObject
{
    _Bool _isStartFaceDetect;
    _Bool _isCurrNeedUseFaceDetectHandle;
    _Bool _disableFaceDetect;
    _Bool _isOpenFaceDetect;
    _Bool _isPreparingStartFaceDetect;
    _Bool _needEncodeDetectResult;
    _Bool _needRenderDetectResult;
    _Bool _detectedSegmentPersion;
    int _faceDetectProcessFPS;
    unsigned int _maskTexture;
    int _faceDetectDesireProcessFPS;
    int _faceDetectLimitProcessFPS;
    double _lastFaceDetectHandleEndTime;
    CDUnknownBlockType _processFpsChangeCallback;
    long long _maskTexRenderType;
    MMLiveTask *_liveTask;
    MMLiveFaceEncodeLogic *_faceEncodeLogic;
    double _faceDetectRatio;
    double _lastFaceDetectHandleStartTime;
    unsigned long long _noSegmentPersionFrameCnt;
    long long _thermalState;
    long long _modelDevice;
    double _lastRefreshTime;
    MMLiveStorageCleanupPinningToken *_resourcesPinningToken;
    double _lastAnalyzeTime;
    NSMutableArray *_recentProcessCostTimeList;
    MMTimer *_fpsScheduleCheckTimer;
    double _lastProcessBeginTime;
    struct CGSize _maskTextureSize;
}

+ (void)searchEveryPixelFroImage:(id)arg1;
+ (id)imageFromRGBATexture:(int)arg1 width:(int)arg2 height:(int)arg3;
+ (id)baseResourceDir;
- (void).cxx_destruct;
@property(nonatomic) double lastProcessBeginTime; // @synthesize lastProcessBeginTime=_lastProcessBeginTime;
@property(retain, nonatomic) MMTimer *fpsScheduleCheckTimer; // @synthesize fpsScheduleCheckTimer=_fpsScheduleCheckTimer;
@property(retain, nonatomic) NSMutableArray *recentProcessCostTimeList; // @synthesize recentProcessCostTimeList=_recentProcessCostTimeList;
@property(nonatomic) double lastAnalyzeTime; // @synthesize lastAnalyzeTime=_lastAnalyzeTime;
@property(retain, nonatomic) MMLiveStorageCleanupPinningToken *resourcesPinningToken; // @synthesize resourcesPinningToken=_resourcesPinningToken;
@property(nonatomic) double lastRefreshTime; // @synthesize lastRefreshTime=_lastRefreshTime;
@property(nonatomic) long long modelDevice; // @synthesize modelDevice=_modelDevice;
@property(nonatomic) int faceDetectLimitProcessFPS; // @synthesize faceDetectLimitProcessFPS=_faceDetectLimitProcessFPS;
@property(nonatomic) int faceDetectDesireProcessFPS; // @synthesize faceDetectDesireProcessFPS=_faceDetectDesireProcessFPS;
@property(nonatomic) long long thermalState; // @synthesize thermalState=_thermalState;
@property(nonatomic) unsigned long long noSegmentPersionFrameCnt; // @synthesize noSegmentPersionFrameCnt=_noSegmentPersionFrameCnt;
@property(nonatomic) double lastFaceDetectHandleStartTime; // @synthesize lastFaceDetectHandleStartTime=_lastFaceDetectHandleStartTime;
@property(nonatomic) _Bool detectedSegmentPersion; // @synthesize detectedSegmentPersion=_detectedSegmentPersion;
@property(nonatomic) double faceDetectRatio; // @synthesize faceDetectRatio=_faceDetectRatio;
@property(retain, nonatomic) MMLiveFaceEncodeLogic *faceEncodeLogic; // @synthesize faceEncodeLogic=_faceEncodeLogic;
@property(nonatomic) _Bool needRenderDetectResult; // @synthesize needRenderDetectResult=_needRenderDetectResult;
@property(nonatomic) _Bool needEncodeDetectResult; // @synthesize needEncodeDetectResult=_needEncodeDetectResult;
@property(nonatomic) struct CGSize maskTextureSize; // @synthesize maskTextureSize=_maskTextureSize;
@property(nonatomic) unsigned int maskTexture; // @synthesize maskTexture=_maskTexture;
@property(nonatomic) _Bool isPreparingStartFaceDetect; // @synthesize isPreparingStartFaceDetect=_isPreparingStartFaceDetect;
@property(nonatomic) _Bool isOpenFaceDetect; // @synthesize isOpenFaceDetect=_isOpenFaceDetect;
@property(nonatomic) __weak MMLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(nonatomic) long long maskTexRenderType; // @synthesize maskTexRenderType=_maskTexRenderType;
@property(copy, nonatomic) CDUnknownBlockType processFpsChangeCallback; // @synthesize processFpsChangeCallback=_processFpsChangeCallback;
@property(nonatomic) int faceDetectProcessFPS; // @synthesize faceDetectProcessFPS=_faceDetectProcessFPS;
@property(nonatomic) _Bool disableFaceDetect; // @synthesize disableFaceDetect=_disableFaceDetect;
@property(nonatomic) double lastFaceDetectHandleEndTime; // @synthesize lastFaceDetectHandleEndTime=_lastFaceDetectHandleEndTime;
@property(nonatomic) _Bool isCurrNeedUseFaceDetectHandle; // @synthesize isCurrNeedUseFaceDetectHandle=_isCurrNeedUseFaceDetectHandle;
@property(nonatomic) _Bool isStartFaceDetect; // @synthesize isStartFaceDetect=_isStartFaceDetect;
- (id)transferMaskTextureToMaskImage;
- (char *)extractAlphaBufferFromRGBATexture:(int)arg1 width:(int)arg2 height:(int)arg3;
- (char *)getAlphaBufferFromRGBATexture:(int)arg1 width:(int)arg2 height:(int)arg3;
- (void)onMatrixPerfWarning:(id)arg1;
- (void)onBarrageFaceDetectRenderModeChanged:(long long)arg1 taskId:(id)arg2;
- (unsigned long long)getTrackIndexForStartFaceDetect;
- (void)updateCurrNeedUseFaceDetectHandle;
@property(readonly, nonatomic) unsigned long long noSegmentPersionFrameLimitCnt;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property(readonly, nonatomic) MMWeEffectManager *weeffectManager;
- (id)getActualResourcePath;
- (id)getTemplateResourcePath;
- (_Bool)addFaceDetectMaterialSrc;
- (void)initMaskTextureIfNeeded;
- (void)notifyMaskTextureRefreshState;
- (void)notifyMaskTextureRefreshWithRenderFrame:(id)arg1;
- (_Bool)updateMaskTexture;
- (void)onFaceDetectProcessEnd;
- (void)onFaceDetectProcessBegin;
- (long long)getFaceDetectModelDevice;
- (int)currLimitProcessFPS;
- (_Bool)tryAdjustLimitProcessFPS:(int)arg1;
- (void)updateDesireProcessFPS;
- (id)currLiveTask;
- (int)minDesireProcessFPS;
- (int)getCurrDesireProcessFPS;
- (int)getCurrFaceDetectProcessFPS;
- (void)updateFaceDetectProcessFPS;
- (void)updateThermalState:(long long)arg1 forceUpdate:(_Bool)arg2;
- (void)checkWeEffectManagerExist;
- (_Bool)isCurrentDetectedSegmentPersion;
- (void)updateNoSegmentPersion:(_Bool)arg1;
- (void)stopWeEffectManagerIfNeed;
- (void)startWeEffectManagerIfNeed;
- (void)retryEnableFaceDetectIfNeed;
- (void)updateDisableFaceDetect:(_Bool)arg1 retry:(_Bool)arg2;
- (void)updateFaceDetectProcessCostTime:(double)arg1;
- (_Bool)checkWeEffectNeedBeautyHandleWithFaceTrackRet:(int)arg1;
- (void)statisticLastHandleDuration;
- (void)checkCurNeedUseFaceDetectToHandle;
- (void)onWeEffectManagerDestroyed:(id)arg1;
- (void)onWeEffectRenderFrameRefreshed:(id)arg1;
- (void)onFaceDetectMaterialSrcAdded;
- (void)onNotifyHasBarrageMovingAtTrackIndex:(unsigned long long)arg1;
- (void)onNotifyHasBarrageDataChanged:(_Bool)arg1;
- (void)onScheduleCheck;
- (void)stopFPSScheduleCheckTimer;
- (void)startFPSScheduleCheckTimer;
- (void)stopFaceDetect;
- (void)startFaceDetect;
- (double)limitRefreshInterval;
- (void)onRefreshOverTimeCheck;
- (void)notifyWeeffectRenderFrameInterrupted;
- (void)notifyDataInterrupt;
- (void)closeFaceDetect;
- (void)openFaceDetect;
- (void)initNotifications;
- (void)unRegisterExts;
- (void)registerExts;
- (void)dealloc;
- (void)initDefaultData;
- (id)initWithLiveTask:(id)arg1;
- (void)recordCostTime:(double)arg1;
- (float)worstPercent;
- (unsigned long long)worstCollectCnt;
- (float)worstCostTime;
- (int)mistakeFPSRange;
- (int)minAcceptFPS;
- (unsigned long long)minProcessPeriodFrameCnt;
- (double)analyzeTimeInterval;
- (double)getAverageRecentCostTime;
- (_Bool)isRecentCostTimeWorst;
- (_Bool)checkRecentCostTimeIsWorst;
- (void)tryDecreaseLimitProcessProcess;
- (void)tryIncreaseLimitProcessProcess;
- (void)analyzeRecentProcessCostTimesIfNeed;
- (double)maxAcceptPrcessCostTime;
- (void)cleaRecentProcessCostTimes;
- (void)onFPSScheduleCheck;
- (double)fpsScheduleCheckInterval;
- (void)addFaceDetectProcessCostTime:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

