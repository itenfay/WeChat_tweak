//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId, MonitorResult, NSMutableArray, WCLiveBlurButton, WCLiveBlurPowerModeAdjustStrategy;

@interface WCLiveBlurBtnPowerModeMonitorTask : NSObject
{
    _Bool _isSuspendingForObserve;
    _Bool _isPreparingEnterStaticBlur;
    WCLiveBlurButton *_monitorBtn;
    CDUnknownBlockType _checkBlurBackHostViewValidBlock;
    CDUnknownBlockType _checkEnableActiveBlock;
    CDUnknownBlockType _willPendingToCatchSnapshotBlock;
    CDUnknownBlockType _pendingToCatchSnapshotBlock;
    CDUnknownBlockType _requestRootLiveVCBlock;
    CDUnknownBlockType _startMonitorBlock;
    CDUnknownBlockType _stateChangeBlock;
    MMLiveTaskId *_liveTaskId;
    unsigned long long _currentState;
    unsigned long long _monitorPointAlignStyle;
    NSMutableArray *_monitoredCoordinateList;
    MonitorResult *_currentMonitorResult;
    NSMutableArray *_recentMonitorResultList;
    NSMutableArray *_recentRecordColorDisResultList;
    MonitorResult *_staticBlurMonitorResult;
    MonitorResult *_realTimeCurrStandardMonitorResult;
    unsigned long long _currPowerModeStyle;
    WCLiveBlurPowerModeAdjustStrategy *_adjustStrategy;
    double _staticBlurEnterTime;
}

+ (id)cropImageInRect:(struct CGRect)arg1 fromSrcImage:(id)arg2;
+ (id)getSubOperationViewFromLiveVC:(id)arg1;
+ (id)getSubLiveViewFromLiveVC:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double staticBlurEnterTime; // @synthesize staticBlurEnterTime=_staticBlurEnterTime;
@property(retain, nonatomic) WCLiveBlurPowerModeAdjustStrategy *adjustStrategy; // @synthesize adjustStrategy=_adjustStrategy;
@property(nonatomic) _Bool isPreparingEnterStaticBlur; // @synthesize isPreparingEnterStaticBlur=_isPreparingEnterStaticBlur;
@property(nonatomic) unsigned long long currPowerModeStyle; // @synthesize currPowerModeStyle=_currPowerModeStyle;
@property(retain, nonatomic) MonitorResult *realTimeCurrStandardMonitorResult; // @synthesize realTimeCurrStandardMonitorResult=_realTimeCurrStandardMonitorResult;
@property(retain, nonatomic) MonitorResult *staticBlurMonitorResult; // @synthesize staticBlurMonitorResult=_staticBlurMonitorResult;
@property(retain, nonatomic) NSMutableArray *recentRecordColorDisResultList; // @synthesize recentRecordColorDisResultList=_recentRecordColorDisResultList;
@property(retain, nonatomic) NSMutableArray *recentMonitorResultList; // @synthesize recentMonitorResultList=_recentMonitorResultList;
@property(retain, nonatomic) MonitorResult *currentMonitorResult; // @synthesize currentMonitorResult=_currentMonitorResult;
@property(retain, nonatomic) NSMutableArray *monitoredCoordinateList; // @synthesize monitoredCoordinateList=_monitoredCoordinateList;
@property(nonatomic) unsigned long long monitorPointAlignStyle; // @synthesize monitorPointAlignStyle=_monitorPointAlignStyle;
@property(nonatomic) _Bool isSuspendingForObserve; // @synthesize isSuspendingForObserve=_isSuspendingForObserve;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(copy, nonatomic) CDUnknownBlockType stateChangeBlock; // @synthesize stateChangeBlock=_stateChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType startMonitorBlock; // @synthesize startMonitorBlock=_startMonitorBlock;
@property(copy, nonatomic) CDUnknownBlockType requestRootLiveVCBlock; // @synthesize requestRootLiveVCBlock=_requestRootLiveVCBlock;
@property(copy, nonatomic) CDUnknownBlockType pendingToCatchSnapshotBlock; // @synthesize pendingToCatchSnapshotBlock=_pendingToCatchSnapshotBlock;
@property(copy, nonatomic) CDUnknownBlockType willPendingToCatchSnapshotBlock; // @synthesize willPendingToCatchSnapshotBlock=_willPendingToCatchSnapshotBlock;
@property(copy, nonatomic) CDUnknownBlockType checkEnableActiveBlock; // @synthesize checkEnableActiveBlock=_checkEnableActiveBlock;
@property(copy, nonatomic) CDUnknownBlockType checkBlurBackHostViewValidBlock; // @synthesize checkBlurBackHostViewValidBlock=_checkBlurBackHostViewValidBlock;
@property(retain, nonatomic) WCLiveBlurButton *monitorBtn; // @synthesize monitorBtn=_monitorBtn;
@property(readonly, nonatomic) unsigned long long recentMonitorResultMaxCnt;
@property(readonly, nonatomic) double suspendPersistTime;
- (id)rootLiveVC;
- (void)onMonitorBtnContainerFrameChanged;
- (void)onMonitorBtnFrameChanged;
- (void)onMonitorBtnSizeChanged;
- (unsigned long long)getCurrentMonitorPointAlignStyle;
- (void)updateMonitorPointAlignStyleIfNeeded;
- (void)recoverForRetry;
- (void)suspendForObserve;
- (void)clearAllStates;
- (struct CGRect)getMonitorBtnNormalizedFrame;
- (void)resignActive:(unsigned long long)arg1;
- (void)enterSuspend:(unsigned long long)arg1;
- (void)adjustStrategyIfNeeded;
- (void)checkRecentMonitorResultListOverLimit;
- (void)analyzeRecentMonitorResultsForEnterRealTimeBlur:(id)arg1;
- (void)analyzeRecentMonitorResultsForEnterStaticBlur:(id)arg1;
- (void)analyzeRecentMonitorResult:(id)arg1;
- (void)enterRealTimeBlurMode;
- (void)pauseStaticBlurModeRefresh;
- (void)endStaticBlurModeRefresh:(id)arg1;
- (_Bool)staticBlurModeRefreshBackView;
- (void)enterStaticBlurMode;
- (void)prepareToEnterStaticBlurMode;
- (id)getAdjustStrategy;
- (void)updateAdjustStrategyParam:(id)arg1;
- (void)onFinishMonitor:(id)arg1 monitorId:(unsigned long long)arg2;
- (id)getNormalizedCoordinatesToMonitor:(unsigned long long)arg1;
- (void)onFinishCatchSnapShot:(_Bool)arg1 snapShot:(id)arg2;
- (_Bool)checkMainVideoFrameContainMonitorBtnRect;
- (_Bool)checkEnableCatchSnapShot;
- (void)stopMonitor;
- (void)startMonitor;
- (void)createAdjustStrategy:(id)arg1;
- (void)initDefaultData;
- (id)initWithMonitorBtn:(id)arg1 liveTaskId:(id)arg2 adjustStrategyParam:(id)arg3;

@end

