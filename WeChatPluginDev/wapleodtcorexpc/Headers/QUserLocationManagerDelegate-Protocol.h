//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CLHeading, CLLocation, NSError, QUserLocationManager;

@protocol QUserLocationManagerDelegate <NSObject>

@optional
- (void)manager:(QUserLocationManager *)arg1 locationManagerDidChangeAuthorization:(int)arg2;
- (void)manager:(QUserLocationManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)manager:(QUserLocationManager *)arg1 didUpdateHeading:(CLHeading *)arg2;
- (void)manager:(QUserLocationManager *)arg1 didUpdateLocation:(CLLocation *)arg2;
@end

