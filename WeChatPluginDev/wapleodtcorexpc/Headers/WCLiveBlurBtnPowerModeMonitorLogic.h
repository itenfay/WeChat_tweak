//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId, MMLiveViewController, NSArray, NSMutableDictionary, NSMutableSet, NSString, WCLiveBlurPowerModeAdjustParam;

@interface WCLiveBlurBtnPowerModeMonitorLogic : NSObject
{
    _Bool _isMonitering;
    long long _defaultAdjustStrategyParamLevel;
    unsigned long long _blurPowerModeSwitch;
    MMLiveTaskId *_taskId;
    NSMutableDictionary *_monitorTaskDict;
    NSMutableSet *_snapShotPendingTaskSet;
    NSMutableDictionary *_suspendMonitorTaskDict;
    unsigned long long _monitorId;
    NSArray *_adjustStrategyParamList;
    NSArray *_adjustStrategyParamLevelList;
    long long _currentAdjustStrategyParamLevel;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentAdjustStrategyParamLevel; // @synthesize currentAdjustStrategyParamLevel=_currentAdjustStrategyParamLevel;
@property(retain, nonatomic) NSArray *adjustStrategyParamLevelList; // @synthesize adjustStrategyParamLevelList=_adjustStrategyParamLevelList;
@property(retain, nonatomic) NSArray *adjustStrategyParamList; // @synthesize adjustStrategyParamList=_adjustStrategyParamList;
@property(nonatomic) unsigned long long monitorId; // @synthesize monitorId=_monitorId;
@property(nonatomic) _Bool isMonitering; // @synthesize isMonitering=_isMonitering;
@property(retain, nonatomic) NSMutableDictionary *suspendMonitorTaskDict; // @synthesize suspendMonitorTaskDict=_suspendMonitorTaskDict;
@property(retain, nonatomic) NSMutableSet *snapShotPendingTaskSet; // @synthesize snapShotPendingTaskSet=_snapShotPendingTaskSet;
@property(retain, nonatomic) NSMutableDictionary *monitorTaskDict; // @synthesize monitorTaskDict=_monitorTaskDict;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) unsigned long long blurPowerModeSwitch; // @synthesize blurPowerModeSwitch=_blurPowerModeSwitch;
@property(nonatomic) long long defaultAdjustStrategyParamLevel; // @synthesize defaultAdjustStrategyParamLevel=_defaultAdjustStrategyParamLevel;
- (void)onExptItemListChange;
- (void)onLiveViewMainVideoViewFrameChanged:(id)arg1 newVideoViewFrame:(struct CGRect)arg2;
- (void)onLiveTaskAnchorAudioModeBackgroundPlayerVMChanged:(id)arg1;
- (void)onLiveTask:(id)arg1 liveViewConnectMicStateChanged:(_Bool)arg2;
- (void)onLiveTask:(id)arg1 isAudienceLocalAudioModeChangedTo:(_Bool)arg2 isPureAudioDisplayModeValueChanged:(_Bool)arg3;
- (void)onLiveTask:(id)arg1 isPureAudioModeChangedTo:(_Bool)arg2 isPureAudioDisplayModeValueChanged:(_Bool)arg3 showTip:(_Bool)arg4;
- (void)onHomePageBottomPlayerAttachLiveView:(id)arg1;
- (void)onMinimizeWindowAttachLiveView:(id)arg1;
@property(readonly, nonatomic) unsigned long long currMonitorTaskCnt;
@property(readonly, nonatomic) WCLiveBlurPowerModeAdjustParam *currentAdjustStrategyParam;
@property(readonly, nonatomic) double monitorScheduleTime;
@property(readonly, nonatomic) MMLiveViewController *rootLiveVC;
- (void)endCatchSnapShot:(_Bool)arg1 snapShot:(id)arg2;
- (_Bool)checkEnableCatchSnapShot;
- (void)catchSnapShot;
- (void)cancelSnapShot;
- (void)pendingToSnapShot;
- (void)onMonitorTaskPendingToSnapShot:(id)arg1;
- (void)onMonitorTaskWillPendingToSnapShot:(id)arg1;
- (void)checkSnapShotPendingTaskSetIsEmpty;
- (void)continueMonitor;
- (void)onMonitorDone:(_Bool)arg1 result:(id)arg2 monitorId:(unsigned long long)arg3;
- (void)handleRequestARGBColorCallbackInMainThread:(unsigned long long)arg1 pixelColorInfo:(id)arg2;
- (void)monitorPixelColor;
- (void)stopMonitor;
- (void)startMonitor;
- (void)checkMonitorTaskDictIsEmpty;
- (void)closeBlurPowerModeMonitorService;
- (void)updateBlurPowerModeSwitch;
- (void)changeAdjustStrategyParamLevel:(long long)arg1;
- (void)checkAndUpdateAllMonitorTasksStateIfNeeded:(unsigned long long)arg1;
- (void)handleMonitorTask:(id)arg1 forStateChanged:(unsigned long long)arg2;
- (void)increaseMonitorId;
- (_Bool)isMonitorTaskEnableActive:(id)arg1;
- (_Bool)checkBlurBackHostViewValidForMonitorTask:(id)arg1;
- (_Bool)checkBlurBackHostViewValid;
- (id)createMonitorTaskWithBlurBtn:(id)arg1;
- (_Bool)isSupportBlurBtnPowerMode;
- (_Bool)hasBlurBtnRegisterPowerModeMonitor;
- (void)unRegisterPowerModeMonitorForBlurBtn:(id)arg1;
- (void)registerPowerModeMonitorForBlurBtn:(id)arg1;
- (void)initDefaultData;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

