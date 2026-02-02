//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface QBBeaconAnaModel : NSObject
{
    _Bool isReet;
    float osVerFloat;
    NSString *appId;
    NSString *appVersion;
    NSString *qua;
    NSString *guid;
    NSString *gatewayIP;
    NSString *osVer;
    NSString *bundleId;
    NSString *udidVendor;
    NSString *advUid;
    NSString *hardwareModel;
    NSString *country;
    NSString *language;
    NSString *qimei;
    NSString *channel_id;
    NSString *sdkVersion;
    NSString *wifiName;
    NSString *imsi;
    NSString *wifiMac;
    NSString *networkType;
    NSString *apn;
    NSString *_sessionid;
    NSDictionary *_addParams;
}

+ (id)getDefualtQBBeaconAnaModel;
@property(retain, nonatomic) NSDictionary *addParams; // @synthesize addParams=_addParams;
@property(retain, nonatomic) NSString *sessionid; // @synthesize sessionid=_sessionid;
@property(retain) NSString *apn; // @synthesize apn;
@property(retain) NSString *networkType; // @synthesize networkType;
@property(retain) NSString *wifiMac; // @synthesize wifiMac;
@property(retain) NSString *imsi; // @synthesize imsi;
@property(retain) NSString *wifiName; // @synthesize wifiName;
@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion;
@property(nonatomic) _Bool isReet; // @synthesize isReet;
@property(retain, nonatomic) NSString *channel_id; // @synthesize channel_id;
@property(retain) NSString *qimei; // @synthesize qimei;
@property(retain, nonatomic) NSString *language; // @synthesize language;
@property(retain, nonatomic) NSString *country; // @synthesize country;
@property(retain, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel;
@property(retain) NSString *advUid; // @synthesize advUid;
@property(retain) NSString *udidVendor; // @synthesize udidVendor;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId;
@property(nonatomic) float osVerFloat; // @synthesize osVerFloat;
@property(retain, nonatomic) NSString *osVer; // @synthesize osVer;
@property(retain) NSString *gatewayIP; // @synthesize gatewayIP;
@property(retain, nonatomic) NSString *guid; // @synthesize guid;
@property(retain, nonatomic) NSString *qua; // @synthesize qua;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
- (void).cxx_destruct;
- (id)init;

@end

