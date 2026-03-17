//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface LocationData : NSObject
{
    double _longitude;
    double _latitude;
    double _speed;
    double _accuracy;
}

@property(nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;

@end

