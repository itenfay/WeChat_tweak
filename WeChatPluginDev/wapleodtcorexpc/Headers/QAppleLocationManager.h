//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CLLocationManager, NSString;

@interface QAppleLocationManager
{
    CLLocationManager *_manager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLLocationManager *manager; // @synthesize manager=_manager;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)setAllowsBackgroundLocationUpdates:(_Bool)arg1;
- (_Bool)allowsBackgroundLocationUpdates;
- (int)authorizationStatus;
- (long long)accuracyAuthorization;
- (void)requestWhenInUseAuthorization;
- (void)requestTempPrecisedLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

