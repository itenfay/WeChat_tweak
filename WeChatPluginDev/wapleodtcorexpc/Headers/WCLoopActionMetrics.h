//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCLoopActionMetrics : NSObject
{
    double _beginTimeInCurrentLoop;
    double _averageDuration;
    NSString *_key;
    double _accumulatedDuration;
    double _maxDuration;
    double _minDuration;
    unsigned long long _accumulatedCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long accumulatedCount; // @synthesize accumulatedCount=_accumulatedCount;
@property(readonly, nonatomic) double minDuration; // @synthesize minDuration=_minDuration;
@property(readonly, nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property(readonly, nonatomic) double accumulatedDuration; // @synthesize accumulatedDuration=_accumulatedDuration;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) double averageDuration;
- (void)didRecordDurationInCurrentLoop:(double)arg1 actionCount:(unsigned long long)arg2;
- (void)didRecordDurationInCurrentLoop:(double)arg1;
- (void)didEndInCurrentLoop:(double)arg1 actionCount:(unsigned long long)arg2;
- (void)didEndInCurrentLoop:(double)arg1;
- (void)didBeginInCurrentLoop:(double)arg1;
- (id)initWithKey:(id)arg1;
- (id)init;

@end

