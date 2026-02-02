//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableDictionary;

@interface WAFPSMonitor : NSObject
{
    double _currentFps;
    CADisplayLink *_link;
    unsigned long long _count;
    double _lastTime;
    double _interval;
    NSMutableDictionary *_tickObservers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *tickObservers; // @synthesize tickObservers=_tickObservers;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) CADisplayLink *link; // @synthesize link=_link;
@property(nonatomic) double currentFps; // @synthesize currentFps=_currentFps;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)stop;
- (void)start;
- (void)updateFpsIndicators:(float)arg1;
- (void)tick:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithInterval:(double)arg1;

@end

