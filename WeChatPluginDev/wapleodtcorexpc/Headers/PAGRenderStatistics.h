//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId, NSMutableArray, NSRecursiveLock;

@interface PAGRenderStatistics : NSObject
{
    _Bool _useStrategy;
    _Bool _isTargetViewPlaying;
    long long _liveUserType;
    MMLiveTaskId *_liveTaskId;
    long long _pagModuleType;
    long long _perfMode;
    long long _frameTime;
    long long _avgFrameTime;
    double _avgFrameTimeFp;
    long long _recent3AvgFrameTime;
    double _time;
    NSMutableArray *_frames;
    NSMutableArray *_recentStatisticResults;
    long long _worstAnalysisRet;
    NSRecursiveLock *_actionLock;
    double _lastTargetPAGPlayTime;
    double _lastTargetPAGPlayInterval;
}

+ (void *)getRfxTargetView;
+ (void)setRfxTargetView:(void *)arg1;
+ (void *)getPagTargetView;
+ (void)setPagTargetView:(void *)arg1;
- (void).cxx_destruct;
@property double lastTargetPAGPlayInterval; // @synthesize lastTargetPAGPlayInterval=_lastTargetPAGPlayInterval;
@property double lastTargetPAGPlayTime; // @synthesize lastTargetPAGPlayTime=_lastTargetPAGPlayTime;
@property _Bool isTargetViewPlaying; // @synthesize isTargetViewPlaying=_isTargetViewPlaying;
@property(retain, nonatomic) NSRecursiveLock *actionLock; // @synthesize actionLock=_actionLock;
@property long long worstAnalysisRet; // @synthesize worstAnalysisRet=_worstAnalysisRet;
@property(retain, nonatomic) NSMutableArray *recentStatisticResults; // @synthesize recentStatisticResults=_recentStatisticResults;
@property(retain, nonatomic) NSMutableArray *frames; // @synthesize frames=_frames;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) long long recent3AvgFrameTime; // @synthesize recent3AvgFrameTime=_recent3AvgFrameTime;
@property(nonatomic) double avgFrameTimeFp; // @synthesize avgFrameTimeFp=_avgFrameTimeFp;
@property(nonatomic) long long avgFrameTime; // @synthesize avgFrameTime=_avgFrameTime;
@property(nonatomic) long long frameTime; // @synthesize frameTime=_frameTime;
@property long long perfMode; // @synthesize perfMode=_perfMode;
@property(nonatomic) _Bool useStrategy; // @synthesize useStrategy=_useStrategy;
@property(nonatomic) long long pagModuleType; // @synthesize pagModuleType=_pagModuleType;
@property(retain) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) long long liveUserType; // @synthesize liveUserType=_liveUserType;
- (_Bool)getIsTargetViewRunning;
- (long long)getPerfMode;
- (void)onTargetViewStopPlay;
- (void)onTargetViewStartPlay;
- (id)currLiveTask;
- (void)recordAveFrameTime;
- (void)updateTargetPAGPlayTime;
- (void)report;
- (void)notifyPerfMode:(long long)arg1 targetViewState:(_Bool)arg2;
- (void)notifyPerfModeForMonitorIfNeeded:(long long)arg1;
- (long long)transferPerfModeToAnalysisRet:(long long)arg1;
- (long long)transferAnalysisRetToPerfMode:(long long)arg1;
- (void)checkRecentStatisticResultsOverLimit;
- (void)scheduleAutoDowngradePerfMode;
- (unsigned long long)getDowngradeFitRequireCount;
- (id)getRecentStatisticsResultsNotMoreThanAnalysisRet:(long long)arg1;
- (_Bool)tryToDowngradePerfModeIfEnabled;
- (void)analyzeStatisticsDataWhenEnd;
- (void)clear;
- (double)getAutoDowngradeDuration;
- (void)invokeAutoDowngradePerfModeIfNeed;
- (void)onTargetViewPlayingChanged;
- (void)updateTargetViewIsPlaying:(_Bool)arg1;
- (void)updatePerfMode:(long long)arg1;
- (double)recent3FramesTime;
- (double)avg;
- (long long)analyzeCurrentFrameTime;
- (void)handleFrameTime:(double)arg1;
- (id)init;

@end

