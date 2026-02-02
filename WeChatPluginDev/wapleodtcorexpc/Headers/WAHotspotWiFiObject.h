//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NEHotspotNetwork, NSString;

@interface WAHotspotWiFiObject
{
    _Bool _secure;
    _Bool _autoJoined;
    _Bool _justJoined;
    NSString *_SSID;
    NSString *_BSSID;
    NSString *_password;
    NEHotspotNetwork *_hotspotNetwork;
    double _signalStrength;
}

+ (id)wifiWithHotspotNetwork:(id)arg1;
+ (id)wifiWithSSID:(id)arg1 BSSID:(id)arg2 password:(id)arg3;
+ (id)wifiWithSSID:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool justJoined; // @synthesize justJoined=_justJoined;
@property(readonly, nonatomic) _Bool autoJoined; // @synthesize autoJoined=_autoJoined;
@property(readonly, nonatomic) double signalStrength; // @synthesize signalStrength=_signalStrength;
@property(readonly, nonatomic) NEHotspotNetwork *hotspotNetwork; // @synthesize hotspotNetwork=_hotspotNetwork;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) _Bool secure; // @synthesize secure=_secure;
@property(readonly, nonatomic) NSString *BSSID; // @synthesize BSSID=_BSSID;
@property(readonly, nonatomic) NSString *SSID; // @synthesize SSID=_SSID;
@property(readonly, nonatomic) double rssi;
- (id)prefillBSSIDForiOS:(id)arg1;
- (id)wifiDictionaryObject;
- (id)description;
- (id)initWithHotspotNetwork:(id)arg1;
- (id)initWithSSID:(id)arg1 BSSID:(id)arg2 password:(id)arg3;
- (id)initWithSSID:(id)arg1;

@end

