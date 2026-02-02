//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSUUID;

@interface TencentLBSBeaconDefaults : NSObject
{
    NSArray *_supportedProximityUUIDs;
    NSNumber *_defaultPower;
}

+ (id)sharedDefaults;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *defaultPower; // @synthesize defaultPower=_defaultPower;
@property(readonly, copy, nonatomic) NSArray *supportedProximityUUIDs; // @synthesize supportedProximityUUIDs=_supportedProximityUUIDs;
@property(readonly, copy, nonatomic) NSUUID *defaultProximityUUID;
- (id)init;

@end

