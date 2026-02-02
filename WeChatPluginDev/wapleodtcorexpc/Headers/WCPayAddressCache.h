//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayAddressCache : NSObject
{
    NSString *_province;
    NSString *_city;
    NSString *_district;
    double _latitude;
    double _longitude;
}

+ (void)initialize;
+ (void)PBArrayAdd_longitude;
+ (void)PBArrayAdd_latitude;
+ (void)PBArrayAdd_district;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_province;
- (void).cxx_destruct;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *district; // @synthesize district=_district;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

