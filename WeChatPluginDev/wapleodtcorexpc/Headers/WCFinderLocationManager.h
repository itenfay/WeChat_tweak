//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CLLocation, LocationRetriever, NSCache, NSMutableArray, NSString, WCFinderCachedLocation, WCFinderGetLocationToken, WCFinderMMKVKeyModel;
@protocol WCFinderLocationManagerDelegate;

@interface WCFinderLocationManager : NSObject
{
    _Bool _updating;
    _Bool _debugOn;
    id <WCFinderLocationManagerDelegate> _delegate;
    WCFinderCachedLocation *_cachedMapLocation;
    LocationRetriever *_locationRetriever;
    CLLocation *_currentLocation;
    double _currentLocationTimestamp;
    CLLocation *_debugLocation;
    NSCache *_locationCodeCache;
    WCFinderGetLocationToken *_token;
    NSMutableArray *_complectionArray;
    double _enterBackgroundTimestamp;
    WCFinderMMKVKeyModel *_mmkv;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMMKVKeyModel *mmkv; // @synthesize mmkv=_mmkv;
@property(nonatomic) double enterBackgroundTimestamp; // @synthesize enterBackgroundTimestamp=_enterBackgroundTimestamp;
@property(retain) NSMutableArray *complectionArray; // @synthesize complectionArray=_complectionArray;
@property(retain, nonatomic) WCFinderGetLocationToken *token; // @synthesize token=_token;
@property(retain, nonatomic) NSCache *locationCodeCache; // @synthesize locationCodeCache=_locationCodeCache;
@property(retain, nonatomic) CLLocation *debugLocation; // @synthesize debugLocation=_debugLocation;
@property(nonatomic, getter=isDebugOn) _Bool debugOn; // @synthesize debugOn=_debugOn;
@property(nonatomic, getter=isUpdating) _Bool updating; // @synthesize updating=_updating;
@property(nonatomic) double currentLocationTimestamp; // @synthesize currentLocationTimestamp=_currentLocationTimestamp;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) LocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
@property(retain, nonatomic) WCFinderCachedLocation *cachedMapLocation; // @synthesize cachedMapLocation=_cachedMapLocation;
@property(nonatomic) __weak id <WCFinderLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)unregisterLocationServiceAuthorizationStatusListener;
- (void)requestAuthorizationFor:(unsigned long long)arg1;
- (void)registerLocationServiceAuthorizationStatusListener;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (id)locationKeyWithLatitude:(double)arg1 longitude:(double)arg2;
- (_Bool)stopUpdateRealTimeLocation;
- (void)overTimeAction;
- (_Bool)isLocationServiceAuthrizedFor:(unsigned long long)arg1;
- (_Bool)isLocationDebugOn;
- (_Bool)setLocationDebugOn:(_Bool)arg1 debugLocation:(id)arg2;
- (_Bool)getCodeFromLocation:(id)arg1 completion:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (id)getMapLocationFor:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (id)getLocationFor:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (id)cachedLocation;
- (void)observeEnterBackground;
- (void)observeEnterForeground;
- (void)startRetrieveLocationFor:(unsigned long long)arg1 requiredMapLocation:(_Bool)arg2;
- (void)setupLocationRetriever;
- (void)storeCahceMapLocationToMMKV;
- (void)loadCacheMapLocation;
- (void)dealloc;
- (id)initWithMMKV:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

