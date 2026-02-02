//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCLoopMetrics;
@protocol WCLoopMetricsCollectorDelegate;

@interface WCLoopMetricsCollector : NSObject
{
    _Bool _loopRunning;
    NSString *_loopKey;
    WCLoopMetrics *_currentLoopMetrics;
    long long _actionRunningCountInCurrentLoop;
    id <WCLoopMetricsCollectorDelegate> _delegate;
    double _durationPerCollectionCycle;
}

- (void).cxx_destruct;
@property(nonatomic) double durationPerCollectionCycle; // @synthesize durationPerCollectionCycle=_durationPerCollectionCycle;
@property(nonatomic) __weak id <WCLoopMetricsCollectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFinishCollectingMetrics:(id)arg1;
- (void)endCollectionCycle;
- (void)collectionCycleDidEndIfNeeded;
- (void)collectionCycleDidBeginIfNeeded;
- (id)loopInfoForKey:(id)arg1;
- (void)setLoopInfo:(id)arg1 forKey:(id)arg2;
- (void)actionDidRecordWithKey:(id)arg1 duration:(double)arg2 actionCount:(unsigned long long)arg3;
- (void)actionDidRecordWithKey:(id)arg1 duration:(double)arg2;
- (void)actionDidEndWithKey:(id)arg1 actionCount:(unsigned long long)arg2;
- (void)actionDidEndWithKey:(id)arg1;
- (void)actionDidBeginWithKey:(id)arg1;
- (void)loopDidEndWithKey:(id)arg1;
- (void)loopDidBeginWithKey:(id)arg1;
- (id)init;

@end

