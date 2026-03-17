//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CLBeaconRegion, NSArray, NSError;

@protocol IWABeaconMgrExt <NSObject>

@optional
- (void)onDidRangeBeacons:(NSArray *)arg1 inRegion:(CLBeaconRegion *)arg2 withTag:(unsigned long long)arg3;
- (void)onRangingBeaconsDidFailForRegion:(CLBeaconRegion *)arg1 withError:(NSError *)arg2 withTag:(unsigned long long)arg3;
@end

