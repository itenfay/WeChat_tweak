//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportWeAppLaunchLocation
{
    unsigned int _cacheTime;
    NSString *_longitude;
    NSString *_latitude;
    NSString *_accuracy;
    NSString *_speed;
    NSString *_altitude;
    NSString *_verticalAccuracy;
    NSString *_horizontalAccuracy;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int cacheTime; // @synthesize cacheTime=_cacheTime;
@property(retain, nonatomic) NSString *horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(retain, nonatomic) NSString *verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(retain, nonatomic) NSString *altitude; // @synthesize altitude=_altitude;
@property(retain, nonatomic) NSString *speed; // @synthesize speed=_speed;
@property(retain, nonatomic) NSString *accuracy; // @synthesize accuracy=_accuracy;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
- (id)reportString;
- (int)reportID;

@end

