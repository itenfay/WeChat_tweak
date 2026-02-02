//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OVCGeoInfo : NSObject
{
    NSString *_country;
    NSString *_city;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *city; // @synthesize city=_city;
@property(readonly, nonatomic) NSString *country; // @synthesize country=_country;
- (id)initWithCountry:(id)arg1 city:(id)arg2;

@end

