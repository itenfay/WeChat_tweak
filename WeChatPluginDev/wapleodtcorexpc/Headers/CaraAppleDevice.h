//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface CaraAppleDevice : NSObject
{
    float _batteryLevel;
    long long _batteryState;
    NSObject<OS_dispatch_source> *_batteryTimer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *batteryTimer; // @synthesize batteryTimer=_batteryTimer;
@property float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property long long batteryState; // @synthesize batteryState=_batteryState;
- (_Bool)isReachable;
- (id)screenSize;
- (int)brand;
- (int)networkType;
- (_Bool)isCharging;
- (float)battery;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

