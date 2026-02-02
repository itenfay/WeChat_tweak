//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTask, MMLiveTaskId;

@interface MMLiveFaceDetectStatisticLogic : NSObject
{
    int _maxFrameProcessTime;
    int _maxDesireProcessFps;
    int _minDesireProcessFps;
    int _maxLimitProcessFps;
    int _minLimitProcessFps;
    int _maxLimitDesireDiffFps;
    int _minLimitDesireDiffFps;
    int _processDuration;
    int _disableFaceDetectTimes;
    int _disableCanRetryFaceDetectTimes;
    MMLiveTaskId *_taskId;
    long long _dataSrc;
    double _frameProcessTimeSum;
    unsigned long long _frameProcessCnt;
    unsigned long long _processFpsSum;
    unsigned long long _processFpsCnt;
    unsigned long long _renderFpsSum;
    unsigned long long _renderFpsCnt;
    unsigned long long _srcRenderFpsSum;
    unsigned long long _srcRenderFpsCnt;
    unsigned long long _srcDecodeFpsSum;
    unsigned long long _srcDecodeFpsCnt;
    long long _thermalState;
    long long _startThermalState;
}

- (void).cxx_destruct;
@property(nonatomic) int disableCanRetryFaceDetectTimes; // @synthesize disableCanRetryFaceDetectTimes=_disableCanRetryFaceDetectTimes;
@property(nonatomic) int disableFaceDetectTimes; // @synthesize disableFaceDetectTimes=_disableFaceDetectTimes;
@property(nonatomic) long long startThermalState; // @synthesize startThermalState=_startThermalState;
@property(nonatomic) long long thermalState; // @synthesize thermalState=_thermalState;
@property(nonatomic) int processDuration; // @synthesize processDuration=_processDuration;
@property(nonatomic) unsigned long long srcDecodeFpsCnt; // @synthesize srcDecodeFpsCnt=_srcDecodeFpsCnt;
@property(nonatomic) unsigned long long srcDecodeFpsSum; // @synthesize srcDecodeFpsSum=_srcDecodeFpsSum;
@property(nonatomic) unsigned long long srcRenderFpsCnt; // @synthesize srcRenderFpsCnt=_srcRenderFpsCnt;
@property(nonatomic) unsigned long long srcRenderFpsSum; // @synthesize srcRenderFpsSum=_srcRenderFpsSum;
@property(nonatomic) int minLimitDesireDiffFps; // @synthesize minLimitDesireDiffFps=_minLimitDesireDiffFps;
@property(nonatomic) int maxLimitDesireDiffFps; // @synthesize maxLimitDesireDiffFps=_maxLimitDesireDiffFps;
@property(nonatomic) int minLimitProcessFps; // @synthesize minLimitProcessFps=_minLimitProcessFps;
@property(nonatomic) int maxLimitProcessFps; // @synthesize maxLimitProcessFps=_maxLimitProcessFps;
@property(nonatomic) int minDesireProcessFps; // @synthesize minDesireProcessFps=_minDesireProcessFps;
@property(nonatomic) int maxDesireProcessFps; // @synthesize maxDesireProcessFps=_maxDesireProcessFps;
@property(nonatomic) unsigned long long renderFpsCnt; // @synthesize renderFpsCnt=_renderFpsCnt;
@property(nonatomic) unsigned long long renderFpsSum; // @synthesize renderFpsSum=_renderFpsSum;
@property(nonatomic) unsigned long long processFpsCnt; // @synthesize processFpsCnt=_processFpsCnt;
@property(nonatomic) unsigned long long processFpsSum; // @synthesize processFpsSum=_processFpsSum;
@property(nonatomic) unsigned long long frameProcessCnt; // @synthesize frameProcessCnt=_frameProcessCnt;
@property(nonatomic) double frameProcessTimeSum; // @synthesize frameProcessTimeSum=_frameProcessTimeSum;
@property(nonatomic) int maxFrameProcessTime; // @synthesize maxFrameProcessTime=_maxFrameProcessTime;
@property(nonatomic) long long dataSrc; // @synthesize dataSrc=_dataSrc;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)onMatrixPerfWarning:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
@property(readonly, nonatomic) int avgSrcDecodeFps;
@property(readonly, nonatomic) int avgSrcRenderFps;
@property(readonly, nonatomic) int avgRenderFps;
@property(readonly, nonatomic) int avgProcessFps;
@property(readonly, nonatomic) int avgFrameProcessTime;
@property(readonly, nonatomic) _Bool isStartStatistic;
- (void)reportStatistic;
- (double)getFaceDetectPersistTimePercent;
- (void)updateThermalState:(long long)arg1;
- (void)addFps:(int)arg1 toSumFps:(unsigned long long *)arg2 sumCnt:(unsigned long long *)arg3;
- (void)onFaceDetectStatisticStart;
- (void)onExitLive;
- (void)notifyDisableFaceDetectWithCanRetry:(_Bool)arg1;
- (void)addFaceDetectProcessDuration:(double)arg1;
- (void)updateSrcDecodeFps:(int)arg1;
- (void)updateSrcRenderFps:(int)arg1;
- (void)updateDesireProcessFps:(int)arg1 LimitProcessFPS:(int)arg2;
- (void)updateFaceMaskRenderFps:(int)arg1;
- (void)updateFrameProcessFps:(int)arg1;
- (void)addFrameProcessTime:(double)arg1;
- (void)updateFaceDetectDataSrc:(long long)arg1;
- (void)initNotifications;
- (void)initDefaultDatas;
- (id)initWithTaskId:(id)arg1;

@end

