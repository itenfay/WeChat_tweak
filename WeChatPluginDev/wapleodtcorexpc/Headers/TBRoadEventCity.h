//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TBRoadEventCity : NSObject
{
    int _cityId;
    int _version;
    double _time;
}

@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) int version; // @synthesize version=_version;
@property(nonatomic) int cityId; // @synthesize cityId=_cityId;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

