//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface MMLiveEnergyRuleConditions : NSObject
{
    NSArray *_thermalStates;
    NSArray *_overheatingTorchStatuses;
    NSArray *_batteryStates;
    NSNumber *_minimumBatteryLevel;
    NSNumber *_maximumBatteryLevel;
    NSArray *_networkTypes;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *networkTypes; // @synthesize networkTypes=_networkTypes;
@property(retain, nonatomic) NSNumber *maximumBatteryLevel; // @synthesize maximumBatteryLevel=_maximumBatteryLevel;
@property(retain, nonatomic) NSNumber *minimumBatteryLevel; // @synthesize minimumBatteryLevel=_minimumBatteryLevel;
@property(copy, nonatomic) NSArray *batteryStates; // @synthesize batteryStates=_batteryStates;
@property(copy, nonatomic) NSArray *overheatingTorchStatuses; // @synthesize overheatingTorchStatuses=_overheatingTorchStatuses;
@property(copy, nonatomic) NSArray *thermalStates; // @synthesize thermalStates=_thermalStates;

@end

