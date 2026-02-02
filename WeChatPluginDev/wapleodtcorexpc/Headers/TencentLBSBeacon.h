//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSUUID;

@interface TencentLBSBeacon : NSObject
{
    NSUUID *_proximityUUID;
    NSNumber *_major;
    NSNumber *_minor;
    long long _proximity;
    double _accuracy;
    long long _rssi;
    double _timestamp;
}

- (void).cxx_destruct;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long rssi; // @synthesize rssi=_rssi;
@property(nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) long long proximity; // @synthesize proximity=_proximity;
@property(copy, nonatomic) NSNumber *minor; // @synthesize minor=_minor;
@property(copy, nonatomic) NSNumber *major; // @synthesize major=_major;
@property(copy, nonatomic) NSUUID *proximityUUID; // @synthesize proximityUUID=_proximityUUID;

@end

