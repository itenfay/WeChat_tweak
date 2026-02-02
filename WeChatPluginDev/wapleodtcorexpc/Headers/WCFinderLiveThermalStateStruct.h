//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMBatteryInfo, NSString;

@interface WCFinderLiveThermalStateStruct : NSObject
{
    unsigned int _thermalState;
    unsigned int _isLowPowerModeEnabled;
    unsigned int _currentLiveScene;
    float _deviceGPUUtilization;
    float _deviceAverageGPUUtilization;
    float _deviceCPUUsage;
    float _appCPUUsage;
    unsigned int _backgroundWeAppTaskCount;
    unsigned int _downloadingTaskCount;
    unsigned long long _liveId;
    NSString *_finderNickname;
    MMBatteryInfo *_batteryInfo;
    NSString *_networkType;
    unsigned long long _appFootprintMemory;
    unsigned long long _appAverageFootprintMemory;
    double _appFootprintMemoryRisingDuration;
    long long _appFootprintMemoryRisingLength;
    long long _overheatingEvent;
    double _overheatingDuration;
    long long _overheatingTorchStatus;
    long long _energyMode;
    NSString *_energyRuleID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int downloadingTaskCount; // @synthesize downloadingTaskCount=_downloadingTaskCount;
@property(nonatomic) unsigned int backgroundWeAppTaskCount; // @synthesize backgroundWeAppTaskCount=_backgroundWeAppTaskCount;
@property(copy, nonatomic) NSString *energyRuleID; // @synthesize energyRuleID=_energyRuleID;
@property(nonatomic) long long energyMode; // @synthesize energyMode=_energyMode;
@property(nonatomic) long long overheatingTorchStatus; // @synthesize overheatingTorchStatus=_overheatingTorchStatus;
@property(nonatomic) double overheatingDuration; // @synthesize overheatingDuration=_overheatingDuration;
@property(nonatomic) long long overheatingEvent; // @synthesize overheatingEvent=_overheatingEvent;
@property(nonatomic) long long appFootprintMemoryRisingLength; // @synthesize appFootprintMemoryRisingLength=_appFootprintMemoryRisingLength;
@property(nonatomic) double appFootprintMemoryRisingDuration; // @synthesize appFootprintMemoryRisingDuration=_appFootprintMemoryRisingDuration;
@property(nonatomic) unsigned long long appAverageFootprintMemory; // @synthesize appAverageFootprintMemory=_appAverageFootprintMemory;
@property(nonatomic) unsigned long long appFootprintMemory; // @synthesize appFootprintMemory=_appFootprintMemory;
@property(nonatomic) float appCPUUsage; // @synthesize appCPUUsage=_appCPUUsage;
@property(nonatomic) float deviceCPUUsage; // @synthesize deviceCPUUsage=_deviceCPUUsage;
@property(copy, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(nonatomic) float deviceAverageGPUUtilization; // @synthesize deviceAverageGPUUtilization=_deviceAverageGPUUtilization;
@property(nonatomic) float deviceGPUUtilization; // @synthesize deviceGPUUtilization=_deviceGPUUtilization;
@property(retain, nonatomic) MMBatteryInfo *batteryInfo; // @synthesize batteryInfo=_batteryInfo;
@property(copy, nonatomic) NSString *finderNickname; // @synthesize finderNickname=_finderNickname;
@property(nonatomic) unsigned int currentLiveScene; // @synthesize currentLiveScene=_currentLiveScene;
@property(nonatomic) unsigned int isLowPowerModeEnabled; // @synthesize isLowPowerModeEnabled=_isLowPowerModeEnabled;
@property(nonatomic) unsigned int thermalState; // @synthesize thermalState=_thermalState;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
- (id)toReport;

@end

