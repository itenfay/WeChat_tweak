//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol QLocationManagerAPIProcotol, QLocationManagerDelegate;

@interface QLocationManager : NSObject
{
    id <QLocationManagerDelegate> _delegate;
    id <QLocationManagerAPIProcotol> _manager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <QLocationManagerAPIProcotol> manager; // @synthesize manager=_manager;
@property(nonatomic) __weak id <QLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool pausesLocationUpdatesAutomatically;
@property(readonly, nonatomic) int authorizationStatus;
@property(readonly, nonatomic) long long accuracyAuthorization;
@property(nonatomic) int headingOrientation;
@property(nonatomic) _Bool allowsBackgroundLocationUpdates;
@property(nonatomic) double headingFilter;
@property(nonatomic) double distanceFilter;
@property(nonatomic) double desiredAccuracy;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)requestWhenInUseAuthorization;
- (void)requestTempPrecisedLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

