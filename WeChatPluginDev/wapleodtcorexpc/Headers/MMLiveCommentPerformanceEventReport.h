//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveCommentPerformanceEventReport : NSObject
{
    long long _event;
    double _enterSmooth_LagFrameDuration;
    unsigned long long _enterSmooth_unnormalMetricsCnt;
    double _exitSmooth_latestUnLagDuration;
    unsigned long long _exitSmooth_unnormalMetricsCnt;
}

+ (id)createDefaultEventReport:(long long)arg1;
@property(nonatomic) unsigned long long exitSmooth_unnormalMetricsCnt; // @synthesize exitSmooth_unnormalMetricsCnt=_exitSmooth_unnormalMetricsCnt;
@property(nonatomic) double exitSmooth_latestUnLagDuration; // @synthesize exitSmooth_latestUnLagDuration=_exitSmooth_latestUnLagDuration;
@property(nonatomic) unsigned long long enterSmooth_unnormalMetricsCnt; // @synthesize enterSmooth_unnormalMetricsCnt=_enterSmooth_unnormalMetricsCnt;
@property(nonatomic) double enterSmooth_LagFrameDuration; // @synthesize enterSmooth_LagFrameDuration=_enterSmooth_LagFrameDuration;
@property(nonatomic) long long event; // @synthesize event=_event;

@end

