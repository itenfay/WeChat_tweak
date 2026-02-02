//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJLocationItem : NSObject
{
    NSString *_poiName;
    NSString *_nation;
    NSString *_province;
    NSString *_city;
    NSString *_district;
    NSString *_street;
    struct CLLocationCoordinate2D _coordinate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *street; // @synthesize street=_street;
@property(copy, nonatomic) NSString *district; // @synthesize district=_district;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *nation; // @synthesize nation=_nation;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;

@end

