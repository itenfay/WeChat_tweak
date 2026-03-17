//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CLBeaconRegion, CLHeading, CLLocation, NSArray, NSDictionary, NSError, TencentLBSLocation;

@protocol ILocationMgrExt

@optional
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)onDidRangeBeacons:(NSArray *)arg1 inRegion:(CLBeaconRegion *)arg2 withTag:(unsigned long long)arg3;
- (void)onRangingBeaconsDidFailForRegion:(CLBeaconRegion *)arg1 withError:(NSError *)arg2 withTag:(unsigned long long)arg3;
- (void)onCancelRequestAddressForTag:(unsigned long long)arg1;
- (void)onDidFindAddress:(NSDictionary *)arg1 forTag:(unsigned long long)arg2;
- (void)onLBSHeadingError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)ondLBSHeadingChanged:(CLHeading *)arg1 withTag:(unsigned long long)arg2;
- (void)onHeadingError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onHeadingChanged:(CLHeading *)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLBSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLBSLocationChanged:(TencentLBSLocation *)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSAccurateLBSLocationChanged:(TencentLBSLocation *)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationChanged:(CLLocation *)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSAccurateLocationChanged:(CLLocation *)arg1 withTag:(unsigned long long)arg2;
- (void)onRequestLocationUpdating:(unsigned long long)arg1;
- (void)onRequestLocationAuthorization;
@end

