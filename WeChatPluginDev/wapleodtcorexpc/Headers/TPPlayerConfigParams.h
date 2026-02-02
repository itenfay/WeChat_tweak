//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPPlayerConfigParams : NSObject
{
    float _reduceLatencySpeed;
    long long _bufferMinTotalDurationMs;
    long long _bufferMaxTotalDurationMs;
    long long _preloadTotalDurationMs;
    long long _minBufferingDurationMs;
    long long _minBufferingTimeMs;
    long long _maxBufferingTimeMs;
    long long _reduceLatencyAction;
    long long _bufferStrategy;
}

@property(nonatomic) long long bufferStrategy; // @synthesize bufferStrategy=_bufferStrategy;
@property(nonatomic) float reduceLatencySpeed; // @synthesize reduceLatencySpeed=_reduceLatencySpeed;
@property(nonatomic) long long reduceLatencyAction; // @synthesize reduceLatencyAction=_reduceLatencyAction;
@property(nonatomic) long long maxBufferingTimeMs; // @synthesize maxBufferingTimeMs=_maxBufferingTimeMs;
@property(nonatomic) long long minBufferingTimeMs; // @synthesize minBufferingTimeMs=_minBufferingTimeMs;
@property(nonatomic) long long minBufferingDurationMs; // @synthesize minBufferingDurationMs=_minBufferingDurationMs;
@property(nonatomic) long long preloadTotalDurationMs; // @synthesize preloadTotalDurationMs=_preloadTotalDurationMs;
@property(nonatomic) long long bufferMaxTotalDurationMs; // @synthesize bufferMaxTotalDurationMs=_bufferMaxTotalDurationMs;
@property(nonatomic) long long bufferMinTotalDurationMs; // @synthesize bufferMinTotalDurationMs=_bufferMinTotalDurationMs;
- (id)init;

@end

