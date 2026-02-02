//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WARegionPoiInfo : NSObject
{
    NSString *_city;
    NSString *_poiName;
    NSString *_poiAddress;
    struct CLLocationCoordinate2D _coordinate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *poiAddress; // @synthesize poiAddress=_poiAddress;
@property(retain, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

