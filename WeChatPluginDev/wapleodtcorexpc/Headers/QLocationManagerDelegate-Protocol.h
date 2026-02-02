//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CLHeading, CLLocation, CLLocationManager, NSError, QLocationManager;

@protocol QLocationManagerDelegate <NSObject>
- (void)locationManagerDidChangeAuthorization:(CLLocationManager *)arg1;
- (void)locationManager:(QLocationManager *)arg1 didUpdateHeading:(CLHeading *)arg2;
- (void)locationManager:(QLocationManager *)arg1 didUpdateLocation:(CLLocation *)arg2;
- (void)locationManager:(QLocationManager *)arg1 didFailWithError:(NSError *)arg2;
@end

