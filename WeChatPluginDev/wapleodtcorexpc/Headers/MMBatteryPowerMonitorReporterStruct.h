//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMBatteryPowerMonitorReporterStruct : NSObject
{
    unsigned int _powerMonitorMetricsType;
    float _metricsTypePowereI;
    float _metricsTypePowereU;
    float _metricsTypePowereP;
    float _metricsTypePowereBatteryLevel;
    unsigned int _metricsTypeThermalStateChangedType;
    float _metricsTypeThermalStateDuration;
    unsigned int _metricsTypeBaseBatteryState;
    float _metricsTypeBaseBatteryLevel;
    float _metricsTypeBaseCpuUsage;
    float _metricsTypeBaseGpuDeviceUtilization;
    float _metricsTypeBaseGpuRendererUtilization;
    float _metricsTypeBaseGpuTilerUtilization;
    unsigned int _metricsTypeBaseisLowPowerMode;
    unsigned int _metricsTypeBaseNetworkType;
    float _metricsTypeBaseBrightness;
    unsigned int _metricsTypeBaseBlueToothState;
    int _metricsTypeLiveEnergyMode;
    double _metricsTypePowereT;
    unsigned long long _metricsTypeBaseScene;
    long long _metricsTypeBaseThermalState;
    NSString *_metricsTypeLiveRuleID;
    unsigned long long _metricsTypeBaseRejectCPUTaskScene;
    unsigned long long _metricsTypeLiveRenderViewType;
    unsigned long long _metricsTypeLiveRenderFrameTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long metricsTypeLiveRenderFrameTime; // @synthesize metricsTypeLiveRenderFrameTime=_metricsTypeLiveRenderFrameTime;
@property(nonatomic) unsigned long long metricsTypeLiveRenderViewType; // @synthesize metricsTypeLiveRenderViewType=_metricsTypeLiveRenderViewType;
@property(nonatomic) unsigned long long metricsTypeBaseRejectCPUTaskScene; // @synthesize metricsTypeBaseRejectCPUTaskScene=_metricsTypeBaseRejectCPUTaskScene;
@property(retain, nonatomic) NSString *metricsTypeLiveRuleID; // @synthesize metricsTypeLiveRuleID=_metricsTypeLiveRuleID;
@property(nonatomic) int metricsTypeLiveEnergyMode; // @synthesize metricsTypeLiveEnergyMode=_metricsTypeLiveEnergyMode;
@property(nonatomic) long long metricsTypeBaseThermalState; // @synthesize metricsTypeBaseThermalState=_metricsTypeBaseThermalState;
@property(nonatomic) unsigned long long metricsTypeBaseScene; // @synthesize metricsTypeBaseScene=_metricsTypeBaseScene;
@property(nonatomic) unsigned int metricsTypeBaseBlueToothState; // @synthesize metricsTypeBaseBlueToothState=_metricsTypeBaseBlueToothState;
@property(nonatomic) float metricsTypeBaseBrightness; // @synthesize metricsTypeBaseBrightness=_metricsTypeBaseBrightness;
@property(nonatomic) unsigned int metricsTypeBaseNetworkType; // @synthesize metricsTypeBaseNetworkType=_metricsTypeBaseNetworkType;
@property(nonatomic) unsigned int metricsTypeBaseisLowPowerMode; // @synthesize metricsTypeBaseisLowPowerMode=_metricsTypeBaseisLowPowerMode;
@property(nonatomic) float metricsTypeBaseGpuTilerUtilization; // @synthesize metricsTypeBaseGpuTilerUtilization=_metricsTypeBaseGpuTilerUtilization;
@property(nonatomic) float metricsTypeBaseGpuRendererUtilization; // @synthesize metricsTypeBaseGpuRendererUtilization=_metricsTypeBaseGpuRendererUtilization;
@property(nonatomic) float metricsTypeBaseGpuDeviceUtilization; // @synthesize metricsTypeBaseGpuDeviceUtilization=_metricsTypeBaseGpuDeviceUtilization;
@property(nonatomic) float metricsTypeBaseCpuUsage; // @synthesize metricsTypeBaseCpuUsage=_metricsTypeBaseCpuUsage;
@property(nonatomic) float metricsTypeBaseBatteryLevel; // @synthesize metricsTypeBaseBatteryLevel=_metricsTypeBaseBatteryLevel;
@property(nonatomic) unsigned int metricsTypeBaseBatteryState; // @synthesize metricsTypeBaseBatteryState=_metricsTypeBaseBatteryState;
@property(nonatomic) float metricsTypeThermalStateDuration; // @synthesize metricsTypeThermalStateDuration=_metricsTypeThermalStateDuration;
@property(nonatomic) unsigned int metricsTypeThermalStateChangedType; // @synthesize metricsTypeThermalStateChangedType=_metricsTypeThermalStateChangedType;
@property(nonatomic) float metricsTypePowereBatteryLevel; // @synthesize metricsTypePowereBatteryLevel=_metricsTypePowereBatteryLevel;
@property(nonatomic) double metricsTypePowereT; // @synthesize metricsTypePowereT=_metricsTypePowereT;
@property(nonatomic) float metricsTypePowereP; // @synthesize metricsTypePowereP=_metricsTypePowereP;
@property(nonatomic) float metricsTypePowereU; // @synthesize metricsTypePowereU=_metricsTypePowereU;
@property(nonatomic) float metricsTypePowereI; // @synthesize metricsTypePowereI=_metricsTypePowereI;
@property(nonatomic) unsigned int powerMonitorMetricsType; // @synthesize powerMonitorMetricsType=_powerMonitorMetricsType;
- (id)toFinderReport;
- (id)toReport;
- (id)initWithInfo:(id)arg1;
- (id)init;

@end

