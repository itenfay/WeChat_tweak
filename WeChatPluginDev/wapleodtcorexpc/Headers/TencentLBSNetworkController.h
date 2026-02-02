//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface TencentLBSNetworkController : NSObject
{
    _Bool _useHttp;
    _Bool _startBeacon;
    _Bool _startIndoorPdr;
    _Bool _writeLog;
    _Bool _uploadLog;
    _Bool _isUseSingleFix;
    _Bool _load;
    _Bool _request;
    double _postTimeInterval;
    double _applistDayInterval;
    double _beaconTimeInterval;
    double _bleToGpsAcc;
    double _bleToGpsSpeed;
    NSMutableArray *_rangedRegions;
    double _singleSysLocTimeOut;
    NSArray *_beaconUUIDs;
    NSString *_path;
    NSString *_file;
    NSMutableDictionary *_controller;
    double _lastBleT;
}

+ (id)decodeData:(id)arg1;
+ (id)encodeData:(id)arg1;
+ (id)aes_encrypt:(id)arg1;
+ (id)aes_decrypt:(id)arg1;
+ (id)decryptAes:(id)arg1;
+ (id)encryptAes:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property double lastBleT; // @synthesize lastBleT=_lastBleT;
@property(nonatomic) _Bool request; // @synthesize request=_request;
@property(nonatomic) _Bool load; // @synthesize load=_load;
@property(retain) NSMutableDictionary *controller; // @synthesize controller=_controller;
@property(copy, nonatomic) NSString *file; // @synthesize file=_file;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSArray *beaconUUIDs; // @synthesize beaconUUIDs=_beaconUUIDs;
@property(nonatomic) double singleSysLocTimeOut; // @synthesize singleSysLocTimeOut=_singleSysLocTimeOut;
@property(retain, nonatomic) NSMutableArray *rangedRegions; // @synthesize rangedRegions=_rangedRegions;
@property(nonatomic) _Bool isUseSingleFix; // @synthesize isUseSingleFix=_isUseSingleFix;
@property(nonatomic) _Bool uploadLog; // @synthesize uploadLog=_uploadLog;
@property(nonatomic) _Bool writeLog; // @synthesize writeLog=_writeLog;
@property(nonatomic) double bleToGpsSpeed; // @synthesize bleToGpsSpeed=_bleToGpsSpeed;
@property(nonatomic) double bleToGpsAcc; // @synthesize bleToGpsAcc=_bleToGpsAcc;
@property(nonatomic) double beaconTimeInterval; // @synthesize beaconTimeInterval=_beaconTimeInterval;
@property(nonatomic) _Bool startIndoorPdr; // @synthesize startIndoorPdr=_startIndoorPdr;
@property(nonatomic) _Bool startBeacon; // @synthesize startBeacon=_startBeacon;
@property(nonatomic) double applistDayInterval; // @synthesize applistDayInterval=_applistDayInterval;
@property(nonatomic) _Bool useHttp; // @synthesize useHttp=_useHttp;
@property(nonatomic) double postTimeInterval; // @synthesize postTimeInterval=_postTimeInterval;
- (void)updateLastBleT;
- (_Bool)isEnableBeaconLocRequest;
- (void)updateCC:(id)arg1;
- (id)getControllerDictionary;
- (void)requestCC;
- (_Bool)checkUUIDValid:(id)arg1;
- (void)loadCC;
- (id)init;

@end

