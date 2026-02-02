//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LinkLocationJumpInfo : NSObject
{
    NSString *_address;
    NSString *_city;
    NSString *_id;
    NSString *_districtId;
    NSString *_img;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_name;
    NSString *_poiId;
    NSString *_province;
    NSString *_type;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithAddress:(id)arg1 city:(id)arg2 id:(id)arg3 districtId:(id)arg4 img:(id)arg5 latitude:(id)arg6 longitude:(id)arg7 name:(id)arg8 poiId:(id)arg9 province:(id)arg10 type:(id)arg11;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *districtId; // @synthesize districtId=_districtId;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
- (id)toList;

@end

