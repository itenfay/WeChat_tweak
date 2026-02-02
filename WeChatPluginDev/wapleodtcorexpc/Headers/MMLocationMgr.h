//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AESEncryptObject, CLLocationManager, MMLocationCacheItem, MMLocationCacheStorage, MMLocationDB, MMLocationMgrUseInfoHandle, MMLocationPoiDetailDB, NSMutableArray, NSString, RSAEncryptObject;

@interface MMLocationMgr
{
    MMLocationDB *m_locationDB;
    MMLocationPoiDetailDB *m_poidetailDB;
    CLLocationManager *m_locationMgrForAuthorization;
    MMLocationCacheStorage *_locationCacheStorage;
    struct CGPath *_chinaBorder;
    MMLocationMgrUseInfoHandle *_useInfoHandler;
    NSMutableArray *_reversGeolocators;
    NSMutableArray *_fourthReversGeolocators;
    RSAEncryptObject *_m_rsaEncryptObject;
    AESEncryptObject *_m_aesEncryptObject;
    MMLocationCacheItem *_m_realtimeLocationCache;
}

+ (int)rangeTypeForDistance:(double)arg1;
+ (void)logForAccuracyAuthorizationOperationWithOpResult:(int)arg1 scene:(int)arg2;
+ (void)logForAccuracyAuthorizationChangedWithAuthType:(int)arg1 scene:(int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLocationCacheItem *m_realtimeLocationCache; // @synthesize m_realtimeLocationCache=_m_realtimeLocationCache;
@property(retain, nonatomic) AESEncryptObject *m_aesEncryptObject; // @synthesize m_aesEncryptObject=_m_aesEncryptObject;
@property(retain, nonatomic) RSAEncryptObject *m_rsaEncryptObject; // @synthesize m_rsaEncryptObject=_m_rsaEncryptObject;
@property(retain, nonatomic) NSMutableArray *fourthReversGeolocators; // @synthesize fourthReversGeolocators=_fourthReversGeolocators;
@property(retain, nonatomic) NSMutableArray *reversGeolocators; // @synthesize reversGeolocators=_reversGeolocators;
@property(retain, nonatomic) MMLocationMgrUseInfoHandle *useInfoHandler; // @synthesize useInfoHandler=_useInfoHandler;
@property(nonatomic) struct CGPath *chinaBorder; // @synthesize chinaBorder=_chinaBorder;
@property(retain, nonatomic) MMLocationCacheStorage *locationCacheStorage; // @synthesize locationCacheStorage=_locationCacheStorage;
- (void)clearLocationCache;
- (void)updateWifiInfo;
- (id)getAESKeyWithRSAEncrypted;
- (id)getEncryptReportWithLocation:(_Bool)arg1 WithSSID:(_Bool)arg2;
- (id)getEncryptReportInfo:(id)arg1;
- (id)getReportWithLocation:(_Bool)arg1 WithSSID:(_Bool)arg2;
- (void)updatePoiDetail:(id)arg1;
- (id)getPoiDetail:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)requestWXGeocodeWithParam:(id)arg1;
- (_Bool)isCoordinateInChinaCompletely:(struct CLLocationCoordinate2D)arg1;
- (_Bool)isCoordinateInChinaPartly:(struct CLLocationCoordinate2D)arg1;
- (id)countryCodeFromAddressDic:(id)arg1;
- (id)countryFromAddressDic:(id)arg1;
- (id)evolvedCityFromAddressDic:(id)arg1;
- (id)cityFromAddressDic:(id)arg1;
- (id)shortAddressFromAddressDic:(id)arg1;
- (id)parseAddressFrom:(id)arg1;
- (id)findFourthDictionaryByKey:(id)arg1;
- (id)findDictionaryByKey:(id)arg1;
- (void)stopUpdateAddressByTag:(unsigned long long)arg1;
- (void)stopGeoAddress:(id)arg1;
- (unsigned long long)requestGeoCoderLocation:(struct CLLocationCoordinate2D)arg1 scene:(unsigned long long)arg2 language:(unsigned long long)arg3;
- (unsigned long long)updateAddressByIndoorLocation:(id)arg1;
- (unsigned long long)updateAddressByLocation:(struct CLLocationCoordinate2D)arg1 type:(long long)arg2 scene:(unsigned long long)arg3 language:(unsigned long long)arg4;
- (unsigned long long)updateAddressByLocation:(struct CLLocationCoordinate2D)arg1 type:(long long)arg2 scene:(unsigned long long)arg3;
- (unsigned long long)updateAddressByLocation:(struct CLLocationCoordinate2D)arg1 type:(long long)arg2;
- (unsigned long long)updateAddressByLocation:(struct CLLocationCoordinate2D)arg1;
- (id)getAddressByLocation:(struct CLLocationCoordinate2D)arg1 floorName:(id)arg2 type:(long long)arg3 language:(unsigned long long)arg4;
- (id)getAddressByLocation:(struct CLLocationCoordinate2D)arg1 type:(long long)arg2 language:(unsigned long long)arg3;
- (id)getAddressByLocation:(struct CLLocationCoordinate2D)arg1 type:(long long)arg2;
- (id)getAddressByLocation:(struct CLLocationCoordinate2D)arg1;
- (id)keyForLocation:(struct CLLocationCoordinate2D)arg1;
- (void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)onUpdateLocationFromLocationManager:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (_Bool)p_isAccurateLocation:(id)arg1;
- (double)p_locationAccuracy:(id)arg1;
- (id)getRealtimeLocationCache;
- (id)getLastLocationCache:(_Bool)arg1;
- (id)getLastLocationCache;
- (void)updateLocationCache:(id)arg1 isMarsLocation:(_Bool)arg2;
- (void)saveLocationCacheStorage;
- (void)loadLocationCacheStorage;
- (id)getLocationCacheStorage;
- (void)manualStopRangingBeaconsInRegion:(unsigned long long)arg1 withUUIDArray:(id)arg2;
- (void)manualStartRangingBeaconsInRegion:(unsigned long long)arg1 withUUIDArray:(id)arg2;
- (void)manualStopUpdateLocationWithTag:(unsigned long long)arg1;
- (id)getCLLocationManagerByTag:(unsigned long long)arg1;
- (void)manualDeallocLocationWithTag:(unsigned long long)arg1;
- (unsigned long long)manualInitLocation;
- (void)delSDKLocationUse:(unsigned long long)arg1;
- (void)addSDKLocationUse:(unsigned long long)arg1 mgrType:(unsigned long long)arg2 updateType:(unsigned long long)arg3;
- (void)stopUpdateHeading:(unsigned long long)arg1;
- (unsigned long long)startUpdateHeadingFor:(unsigned long long)arg1;
- (void)stopUpdateGPSLocation:(unsigned long long)arg1;
- (unsigned long long)startUpdateGPSLocation:(_Bool)arg1 authScene:(unsigned long long)arg2;
- (unsigned long long)startUpdateGPSLocationWithoutRequestAuthorization;
@property(readonly, nonatomic) CLLocationManager *authorizationLocationMgr;
- (_Bool)isLocationSupportFullAccuracy;
- (unsigned int)authStatusFor:(unsigned long long)arg1;
- (long long)currentLocationAccuracyAuthorization;
- (void)requestTemporaryFullAccuracyAuthorization:(CDUnknownBlockType)arg1;
- (id)requestForAuthorizationFor:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)getExtraInfoFromAddressDic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

