//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface MMLocationMgrUseInfo : NSObject
{
    unsigned long long _tag;
    unsigned long long _mgrType;
    id _locationMgr;
    NSArray *_lastClick;
    unsigned long long _updatingType;
    double _startTime;
    NSMutableArray *_rangingUUIDArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *rangingUUIDArray; // @synthesize rangingUUIDArray=_rangingUUIDArray;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned long long updatingType; // @synthesize updatingType=_updatingType;
@property(retain, nonatomic) NSArray *lastClick; // @synthesize lastClick=_lastClick;
@property(retain, nonatomic) id locationMgr; // @synthesize locationMgr=_locationMgr;
@property(nonatomic) unsigned long long mgrType; // @synthesize mgrType=_mgrType;
@property(nonatomic) unsigned long long tag; // @synthesize tag=_tag;
- (void)stopRanging;
- (void)stopRangingBeaconInRegionWithUUID:(id)arg1;
- (void)startRangingBeaconsInRegionWithUUID:(id)arg1;
- (void)stopUpdating;
- (void)startUpdating:(unsigned long long)arg1;
- (id)description;
- (id)init;

@end

