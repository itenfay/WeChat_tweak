//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface WCLoopMetrics : NSObject
{
    NSMutableDictionary *_actionMetricsMutableDictionary;
    NSMutableDictionary *_loopInfoMutableDictionary;
    double _preferredDuration;
    double _beginTime;
    double _endTime;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(readonly, nonatomic) double preferredDuration; // @synthesize preferredDuration=_preferredDuration;
- (id)loopInfoForKey:(id)arg1;
- (void)setLoopInfo:(id)arg1 forKey:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *loopInfo;
- (void)actionDidRecordWithKey:(id)arg1 duration:(double)arg2 actionCount:(unsigned long long)arg3;
- (void)actionDidRecordWithKey:(id)arg1 duration:(double)arg2;
- (void)allActionsDidEnd;
- (void)actionDidEndWithKey:(id)arg1 actionCount:(unsigned long long)arg2;
- (void)actionDidEndWithKey:(id)arg1;
- (void)actionDidBeginWithKey:(id)arg1;
- (id)_actionMetricsForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *actionMetricsDictionary;
- (void)didFinishWithEndTime:(double)arg1;
- (id)initWithBeginTime:(double)arg1 preferredDuration:(double)arg2;
- (id)init;

@end

