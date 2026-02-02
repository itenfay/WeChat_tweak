//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol QLocationManagerAPIProcotol <NSObject>
@property(readonly, nonatomic) int authorizationStatus;
@property(readonly, nonatomic) long long accuracyAuthorization;
@property(nonatomic) _Bool pausesLocationUpdatesAutomatically;
@property(nonatomic) _Bool allowsBackgroundLocationUpdates;
@property(nonatomic) int headingOrientation;
@property(nonatomic) double headingFilter;
@property(nonatomic) double desiredAccuracy;
@property(nonatomic) double distanceFilter;
- (void)requestWhenInUseAuthorization;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
@end

