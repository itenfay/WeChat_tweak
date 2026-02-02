//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMCGeographicInfo : NSObject
{
    NSString *_province;
    NSString *_country;
    NSString *_city;
    NSString *_region;
    NSString *_name;
    NSString *_address;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;

@end

