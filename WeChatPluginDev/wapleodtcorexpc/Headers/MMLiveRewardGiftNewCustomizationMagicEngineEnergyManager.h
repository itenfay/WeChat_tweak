//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId, NSMutableDictionary, NSString;

@interface MMLiveRewardGiftNewCustomizationMagicEngineEnergyManager : NSObject
{
    unsigned int _currFrameRate;
    MMLiveTaskId *_taskId;
    NSMutableDictionary *_energyAdjustTaskDict;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int currFrameRate; // @synthesize currFrameRate=_currFrameRate;
@property(retain, nonatomic) NSMutableDictionary *energyAdjustTaskDict; // @synthesize energyAdjustTaskDict=_energyAdjustTaskDict;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)updateFrameRateWithMetricsInfo:(id)arg1;
- (void)updateQuailtyLevelWithMetericsInfo:(id)arg1;
- (void)onLiveTask:(id)arg1 didCollectMetricsInfo:(id)arg2;
- (unsigned long long)getCurrentPowerModeWithMetricsInfo:(id)arg1;
- (id)getCurrentActiveAdjustTask;
- (unsigned int)getFrameRateWithMetricsInfo:(id)arg1;
- (double)getPixelRatioWithMetricsInfo:(id)arg1 forEnergyTask:(id)arg2;
- (long long)getQuailtyLevelWithMetricsInfo:(id)arg1;
- (id)getLiveTask;
- (id)getUniqueKeyForView:(id)arg1;
- (id)createEnergyAdjustTaskForRewardView:(id)arg1;
- (void)initSettingPixelRatioForEnergyTask:(id)arg1;
- (void)initSettingQuailtyLevelForEnergyTask:(id)arg1;
- (void)initSettingMagicFrameRate;
- (void)onHasRewardViewMonitoredEnergy;
- (unsigned long long)getCurrentPowerMode;
- (double)getAnimationInterval;
- (void)cancelMonitorEnergy:(id)arg1;
- (void)monitorEnergyForRewardView:(id)arg1;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)initDefaultData;
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

