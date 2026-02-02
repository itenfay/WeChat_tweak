//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPJitterBufferConfig : NSObject
{
    int _minDecreaseDurationMs;
    int _maxIncreaseDurationMs;
    int _perIncreaseDurationMs;
    int _perDecreaseDurationMs;
    int _adjustIntervalThresholdMs;
    int _frozenThresholdMs;
}

@property(nonatomic) int frozenThresholdMs; // @synthesize frozenThresholdMs=_frozenThresholdMs;
@property(nonatomic) int adjustIntervalThresholdMs; // @synthesize adjustIntervalThresholdMs=_adjustIntervalThresholdMs;
@property(nonatomic) int perDecreaseDurationMs; // @synthesize perDecreaseDurationMs=_perDecreaseDurationMs;
@property(nonatomic) int perIncreaseDurationMs; // @synthesize perIncreaseDurationMs=_perIncreaseDurationMs;
@property(nonatomic) int maxIncreaseDurationMs; // @synthesize maxIncreaseDurationMs=_maxIncreaseDurationMs;
@property(nonatomic) int minDecreaseDurationMs; // @synthesize minDecreaseDurationMs=_minDecreaseDurationMs;
- (id)description;
- (id)init;

@end

