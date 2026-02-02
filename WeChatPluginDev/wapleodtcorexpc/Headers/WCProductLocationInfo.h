//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCProductLocationInfo : NSObject
{
    float latitude;
    float longitude;
    NSString *country;
    NSString *province;
    NSString *city;
    NSString *address;
}

- (void).cxx_destruct;
@property(nonatomic) float longitude; // @synthesize longitude;
@property(nonatomic) float latitude; // @synthesize latitude;
@property(retain, nonatomic) NSString *address; // @synthesize address;
@property(retain, nonatomic) NSString *city; // @synthesize city;
@property(retain, nonatomic) NSString *province; // @synthesize province;
@property(retain, nonatomic) NSString *country; // @synthesize country;

@end

