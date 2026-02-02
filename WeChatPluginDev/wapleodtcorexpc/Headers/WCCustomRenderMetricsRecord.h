//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCLoopActionMetrics;

@interface WCCustomRenderMetricsRecord : NSObject
{
    _Bool _isFullLoad;
    WCLoopActionMetrics *_metrics;
    double _beginTime;
    double _endTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFullLoad; // @synthesize isFullLoad=_isFullLoad;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) WCLoopActionMetrics *metrics; // @synthesize metrics=_metrics;
- (double)maxDuration;
- (id)initWithMetrics:(id)arg1 beginTime:(double)arg2 endTime:(double)arg3;

@end

