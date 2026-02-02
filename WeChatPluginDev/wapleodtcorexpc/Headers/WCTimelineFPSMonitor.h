//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableDictionary;

@interface WCTimelineFPSMonitor : NSObject
{
    struct unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> _fpsRecords;
    _Bool _canShowFPSLabel;
    _Bool _canReportFPS_IDKey1408_MMData20222;
    _Bool _canReportFPS_MMData29222;
    _Bool _canRecordFPS;
    unsigned int _avgFps;
    CADisplayLink *_link;
    unsigned long long _count;
    double _lastTime;
    double _interval;
    NSMutableDictionary *_tickObservers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool canRecordFPS; // @synthesize canRecordFPS=_canRecordFPS;
@property(nonatomic) _Bool canReportFPS_MMData29222; // @synthesize canReportFPS_MMData29222=_canReportFPS_MMData29222;
@property(nonatomic) _Bool canReportFPS_IDKey1408_MMData20222; // @synthesize canReportFPS_IDKey1408_MMData20222=_canReportFPS_IDKey1408_MMData20222;
@property(nonatomic) unsigned int avgFps; // @synthesize avgFps=_avgFps;
@property(retain, nonatomic) NSMutableDictionary *tickObservers; // @synthesize tickObservers=_tickObservers;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) CADisplayLink *link; // @synthesize link=_link;
@property(nonatomic) _Bool canShowFPSLabel; // @synthesize canShowFPSLabel=_canShowFPSLabel;
- (id)generateFPSReportString_MMData29222;
- (void)doReportFPS_MMData29222;
- (id)generateFPSReportString_MMData20222;
- (void)doReportFPS_IDKey1408_MMData20222;
- (void)doReport;
- (void)addObserver:(id)arg1;
- (void)stop;
- (void)start;
- (void)updateFpsIndicators:(float)arg1;
- (void)tick:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithInterval:(double)arg1;

@end

