//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CLLocationManager, NSArray, NSMutableArray;

@interface WABeaconMgrUseInfo
{
    unsigned long long _tag;
    CLLocationManager *_locationMgr;
    NSArray *_lastClick;
    NSArray *_lastCallStack;
    double _startTime;
    NSMutableArray *_rangingUUIDArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *rangingUUIDArray; // @synthesize rangingUUIDArray=_rangingUUIDArray;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSArray *lastCallStack; // @synthesize lastCallStack=_lastCallStack;
@property(retain, nonatomic) NSArray *lastClick; // @synthesize lastClick=_lastClick;
@property(retain, nonatomic) CLLocationManager *locationMgr; // @synthesize locationMgr=_locationMgr;
@property(nonatomic) unsigned long long tag; // @synthesize tag=_tag;
- (void)stopRanging;
- (void)stopRangingBeaconInRegionWithUUID:(id)arg1;
- (void)startRangingBeaconsInRegionWithUUID:(id)arg1;
- (id)description;
- (id)init;

@end

