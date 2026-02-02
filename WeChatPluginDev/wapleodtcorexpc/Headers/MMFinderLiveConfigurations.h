//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveEnergyRule, NSArray, NSString;

@interface MMFinderLiveConfigurations
{
    _Bool _EnergyController_lowPowerModeAvailable;
    _Bool _Cast_allowsUsingUPnP;
    NSArray *_EnergyController_lowPowerModeRules;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *EnergyController_lowPowerModeRules; // @synthesize EnergyController_lowPowerModeRules=_EnergyController_lowPowerModeRules;
@property(readonly, nonatomic) _Bool DocumentsPresentation_usesTestBizArticles;
@property(readonly, nonatomic) double Cast_UPnPDiscoveryTimeoutInterval;
@property(readonly, nonatomic) _Bool Cast_allowsUsingUPnP; // @synthesize Cast_allowsUsingUPnP=_Cast_allowsUsingUPnP;
@property(readonly, nonatomic) _Bool Cast_autoAirPlayWhileEnteringNewLive;
- (void)Cast_reloadConfigurations;
@property(readonly, nonatomic) float Gift_fullScreenGiftDisplaySpacingTimeInterval;
@property(readonly, nonatomic) float Gift_PAGFrameRate;
@property(readonly, nonatomic) _Bool EnergyController_WeEffect_allowsAdjustOcclusionSegmentToDisabledLevel;
@property(readonly, nonatomic) _Bool EnergyController_WeEffect_allowsAdjustFaceAlignmentToDisabledLevel;
@property(readonly, nonatomic) MMLiveEnergyRule *EnergyController_kitchenRule;
@property(readonly, nonatomic) _Bool EnergyController_forcesEnableLowPowerMode;
@property(readonly, nonatomic) _Bool EnergyController_lowPowerModeAvailable; // @synthesize EnergyController_lowPowerModeAvailable=_EnergyController_lowPowerModeAvailable;
- (void)EnergyController_reloadConfigurations;
- (void)onMMDynamicConfigUpdated;
- (void)onExptItemListChange;
- (void)reloadConfigurations;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

