//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WALocationWrap
{
    int _floor;
    double _latitude;
    double _longitude;
    double _altitude;
    double _horizontalAccuracy;
    double _verticalAccuracy;
    double _course;
    double _speed;
    double _timestamp;
}

+ (void)initialize;
+ (void)PBArrayAdd_floor;
+ (void)PBArrayAdd_timestamp;
+ (void)PBArrayAdd_speed;
+ (void)PBArrayAdd_course;
+ (void)PBArrayAdd_verticalAccuracy;
+ (void)PBArrayAdd_horizontalAccuracy;
+ (void)PBArrayAdd_altitude;
+ (void)PBArrayAdd_longitude;
+ (void)PBArrayAdd_latitude;
@property(nonatomic) int floor; // @synthesize floor=_floor;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double course; // @synthesize course=_course;
@property(nonatomic) double verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (id)transferToCLLocation;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

