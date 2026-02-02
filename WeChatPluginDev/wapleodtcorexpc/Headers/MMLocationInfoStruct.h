//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLocationInfoStruct : NSObject
{
    NSString *_province;
    NSString *_city;
    NSString *_district;
}

+ (id)LocationInfoStructWithProvince:(id)arg1 city:(id)arg2 district:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *district; // @synthesize district=_district;
@property(readonly, nonatomic) NSString *city; // @synthesize city=_city;
@property(readonly, nonatomic) NSString *province; // @synthesize province=_province;
- (id)description;
- (id)initWithProvince:(id)arg1 city:(id)arg2 district:(id)arg3;

@end

