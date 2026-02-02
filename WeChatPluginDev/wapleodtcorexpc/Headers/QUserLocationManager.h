//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, QLocationManager, QLocationMarkerWrapper, QMapContext;
@protocol QUserLocationManagerDelegate;

@interface QUserLocationManager : NSObject
{
    QMapContext *_mapContext;
    id <QUserLocationManagerDelegate> _delegate;
    QLocationManager *_manager;
    QLocationMarkerWrapper *_locationMarkerWrapper;
}

+ (id)correctLocation:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) QLocationMarkerWrapper *locationMarkerWrapper; // @synthesize locationMarkerWrapper=_locationMarkerWrapper;
@property(retain, nonatomic) QLocationManager *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak id <QUserLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak QMapContext *mapContext; // @synthesize mapContext=_mapContext;
- (id)generateLocatorPayload:(id)arg1;
- (id)init;
- (void)setup;
- (void)updateLocationWithHeading:(double)arg1;
- (void)updateLocationWithMapPoint:(CDStruct_c3b9c2ee)arg1 course:(double)arg2;
- (void)updateLocationAnimatedWithMapPoint:(CDStruct_c3b9c2ee)arg1 course:(double)arg2 horizontalAccuracy:(double)arg3;
- (void)setLocationRedlineHidden:(_Bool)arg1;
- (void)setLocationCompassHidden:(_Bool)arg1;
- (void)setLocationHidden:(_Bool)arg1;
- (void)configureUserLocationPresentation:(id)arg1;
@property(nonatomic) _Bool pausesLocationUpdatesAutomatically;
@property(nonatomic) _Bool allowsBackgroundLocationUpdates;
@property(nonatomic) double headingFilter;
@property(readonly, nonatomic) int authorizationStatus;
@property(readonly, nonatomic) long long accuracyAuthorization;
@property(nonatomic) double distanceFilter;
@property(nonatomic) double desiredAccuracy;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)requestWhenInUseAuthorization;
- (void)requestTempPrecisedLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocation:(id)arg2;
- (void)constructLocator:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

