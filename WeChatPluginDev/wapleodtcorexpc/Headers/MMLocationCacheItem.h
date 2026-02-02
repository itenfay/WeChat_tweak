//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMLocationCacheItem
{
    _Bool _isMarsLocation;
    double _horizontalAccuracy;
    double _verticalAccuracy;
    double _altitude;
    double _latitude;
    double _longitude;
    double _timestamp;
    NSString *_encryptLatitude;
    NSString *_encryptLongitude;
}

+ (void)initialize;
+ (void)PBArrayAdd_altitude;
+ (void)PBArrayAdd_verticalAccuracy;
+ (void)PBArrayAdd_horizontalAccuracy;
+ (void)PBArrayAdd_isMarsLocation;
+ (void)PBArrayAdd_timestamp;
+ (void)PBArrayAdd_longitude;
+ (void)PBArrayAdd_latitude;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *encryptLongitude; // @synthesize encryptLongitude=_encryptLongitude;
@property(retain, nonatomic) NSString *encryptLatitude; // @synthesize encryptLatitude=_encryptLatitude;
@property(nonatomic) _Bool isMarsLocation; // @synthesize isMarsLocation=_isMarsLocation;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

