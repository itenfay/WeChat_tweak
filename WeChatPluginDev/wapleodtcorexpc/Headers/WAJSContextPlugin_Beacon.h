//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBCentralManager, NSArray, NSMutableDictionary, NSString;

@interface WAJSContextPlugin_Beacon
{
    NSArray *m_uuids;
    unsigned long long m_locationTag;
    CBCentralManager *m_bleMgr;
    NSMutableDictionary *m_beacons;
    long long m_bleState;
    _Bool m_isInStartWorkFlow;
    _Bool m_isRanging;
}

- (void).cxx_destruct;
- (id)genBeaconKey:(id)arg1;
- (void)onDidRangeBeacons:(id)arg1 inRegion:(id)arg2 withTag:(unsigned long long)arg3;
- (void)onRangingBeaconsDidFailForRegion:(id)arg1 withError:(id)arg2 withTag:(unsigned long long)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)notifyServiceBeaconState;
- (id)getCurrentBeacons;
- (int)stopRanging;
- (void)notifyStartRangingFailed:(id)arg1;
- (void)startRanging;
- (int)starMoritoring:(id)arg1 needBLEAbilityCheck:(_Bool)arg2;
- (int)systemSupportBeacon;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

