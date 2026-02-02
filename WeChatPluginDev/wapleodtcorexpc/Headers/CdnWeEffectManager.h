//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface CdnWeEffectManager
{
    _Bool _needLimitFPS;
    _Bool _isWeEffectProcessStart;
    int _maxProcessFPS;
    CDUnknownBlockType _getAverFootPrintCallback;
    CDUnknownBlockType _surviveOverTimeCallback;
    CDUnknownBlockType _checkNeedBeautyCallback;
    CDUnknownBlockType _checkCanSurviveCallback;
    long long _cdnAudienceWeEffectScene;
    long long _fpsCounter;
}

- (void).cxx_destruct;
@property(nonatomic) long long fpsCounter; // @synthesize fpsCounter=_fpsCounter;
@property(nonatomic) _Bool isWeEffectProcessStart; // @synthesize isWeEffectProcessStart=_isWeEffectProcessStart;
@property(nonatomic) long long cdnAudienceWeEffectScene; // @synthesize cdnAudienceWeEffectScene=_cdnAudienceWeEffectScene;
@property(nonatomic) int maxProcessFPS; // @synthesize maxProcessFPS=_maxProcessFPS;
@property(nonatomic) _Bool needLimitFPS; // @synthesize needLimitFPS=_needLimitFPS;
@property(copy, nonatomic) CDUnknownBlockType checkCanSurviveCallback; // @synthesize checkCanSurviveCallback=_checkCanSurviveCallback;
@property(copy, nonatomic) CDUnknownBlockType checkNeedBeautyCallback; // @synthesize checkNeedBeautyCallback=_checkNeedBeautyCallback;
@property(copy, nonatomic) CDUnknownBlockType surviveOverTimeCallback; // @synthesize surviveOverTimeCallback=_surviveOverTimeCallback;
@property(copy, nonatomic) CDUnknownBlockType getAverFootPrintCallback; // @synthesize getAverFootPrintCallback=_getAverFootPrintCallback;
- (void)checkNeedSkipProcess:(_Bool *)arg1 skipFaceTrack:(_Bool *)arg2 forFpsLimitWithTriggerFps:(int)arg3 lastProcessedFrame:(id)arg4;
- (_Bool)checkNeedBeautyWithFaceTrackRet:(int)arg1;
- (_Bool)checkCanSurviveAfterRenderStop;
- (double)getRecentAverageFootPrintMemoryPercent;
- (void)onSurviveOverTime;
- (void)onWeEffectProcessedEnd;
- (void)onWeEffectProcessedStart;
- (void)dealloc;
- (double)maxProcessTimeInterval;
- (_Bool)checkNeedSkipProcessFrameWithTimeInterval;
- (_Bool)checkNeedSkipProcessFrameWithTriggerFps:(int)arg1;
- (long long)getFrameIntervalWithTriggerFps:(int)arg1;
- (double)getSurviveDuration;
- (void)cancelSurviveCountDown;
- (void)startSurviveCountDown;

@end

