//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMBatteryInfo : NSObject
{
    float _batteryLevel;
    long long _batteryState;
}

+ (id)currentBatteryInfo;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_batteryLevel;
+ (void)PBArrayAdd_batteryState;
@property(nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(nonatomic) long long batteryState; // @synthesize batteryState=_batteryState;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

