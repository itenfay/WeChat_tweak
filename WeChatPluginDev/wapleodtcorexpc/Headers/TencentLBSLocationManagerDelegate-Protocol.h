//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CLHeading, NSError, NSString, TencentLBSLocation, TencentLBSLocationManager;

@protocol TencentLBSLocationManagerDelegate <NSObject>

@optional
- (void)tencentLBSLocationManager:(TencentLBSLocationManager *)arg1 didThrowLocation:(TencentLBSLocation *)arg2;
- (_Bool)tencentLBSLocationManagerShouldDisplayHeadingCalibration:(TencentLBSLocationManager *)arg1;
- (void)tencentLBSLocationManager:(TencentLBSLocationManager *)arg1 didUpdateHeading:(CLHeading *)arg2;
- (void)tencentLBSLocationManager:(TencentLBSLocationManager *)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)tencentLBSLocationManager:(TencentLBSLocationManager *)arg1 didUpdateLocation:(TencentLBSLocation *)arg2;
- (void)tencentLBSLocationManager:(TencentLBSLocationManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)tencentLBSLocationLogWithTAG:(NSString *)arg1 outputLog:(NSString *)arg2;
- (void)tencentLBSDidChangeAuthorization:(TencentLBSLocationManager *)arg1;
@end

