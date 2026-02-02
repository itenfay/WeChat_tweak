//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber;

@interface TingPoiInfo : NSObject
{
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_precision;
    NSNumber *_adCode;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithLatitude:(id)arg1 longitude:(id)arg2 precision:(id)arg3 adCode:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *adCode; // @synthesize adCode=_adCode;
@property(retain, nonatomic) NSNumber *precision; // @synthesize precision=_precision;
@property(retain, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
- (id)toList;

@end

