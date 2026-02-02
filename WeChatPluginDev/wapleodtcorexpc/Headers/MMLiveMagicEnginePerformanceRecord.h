//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveMagicEnginePerformanceRecord : NSObject
{
    double _mostCPUIncrease;
    double _mostGPUInscrease;
    double _mostMemoryInscrease;
    long long _thermalState;
}

@property(nonatomic) long long thermalState; // @synthesize thermalState=_thermalState;
@property(nonatomic) double mostMemoryInscrease; // @synthesize mostMemoryInscrease=_mostMemoryInscrease;
@property(nonatomic) double mostGPUInscrease; // @synthesize mostGPUInscrease=_mostGPUInscrease;
@property(nonatomic) double mostCPUIncrease; // @synthesize mostCPUIncrease=_mostCPUIncrease;
- (id)description;

@end

