//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSMutableArray;

@interface MMLocationMgrUseInfoHandle : NSObject
{
    NSMutableArray *_usedLocationMgrList;
    MMTimer *_checkTimer;
    NSMutableArray *_rangingBeaconUUIDArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *rangingBeaconUUIDArray; // @synthesize rangingBeaconUUIDArray=_rangingBeaconUUIDArray;
@property(retain, nonatomic) MMTimer *checkTimer; // @synthesize checkTimer=_checkTimer;
@property(retain, nonatomic) NSMutableArray *usedLocationMgrList; // @synthesize usedLocationMgrList=_usedLocationMgrList;
- (void)checkLocationUse;
- (void)stopRangingBeaconsInRegion:(unsigned long long)arg1 withUUIDArray:(id)arg2;
- (void)startRangingBeaconsInRegion:(unsigned long long)arg1 withUUIDArray:(id)arg2;
- (void)stopUpdatingWithTag:(unsigned long long)arg1;
- (void)startUpdatingWithTag:(unsigned long long)arg1 scene:(unsigned long long)arg2;
- (void)removeUseInfoWithTag:(unsigned long long)arg1;
- (void)addUseInfo:(id)arg1;
- (void)clearAll;
- (id)getUseInfoByTag:(unsigned long long)arg1;
- (void)dealloc;

@end

