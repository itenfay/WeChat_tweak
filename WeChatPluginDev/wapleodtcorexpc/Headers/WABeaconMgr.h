//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WABeaconMgrUseInfoHandler;

@interface WABeaconMgr
{
    WABeaconMgrUseInfoHandler *_useInfoHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WABeaconMgrUseInfoHandler *useInfoHandler; // @synthesize useInfoHandler=_useInfoHandler;
- (void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)manualStopRangingBeaconsInRegion:(unsigned long long)arg1 withUUIDArray:(id)arg2;
- (void)manualStartRangingBeaconsInRegion:(unsigned long long)arg1 withUUIDArray:(id)arg2;
- (id)getCLLocationManagerByTag:(unsigned long long)arg1;
- (void)manualDeallocLocationWithTag:(unsigned long long)arg1;
- (unsigned long long)manualInitLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

