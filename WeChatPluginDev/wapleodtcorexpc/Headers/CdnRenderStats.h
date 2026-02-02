//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol CdnRenderStatsDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CdnRenderStats : NSObject
{
    _Bool _printRenderFPS;
    id <CdnRenderStatsDelegate> _delegate;
    long long _blockThreshold;
    unsigned long long _lastBlockTime;
    long long _monitorInterval;
    long long _frameCount;
    unsigned long long _renderStartTime;
    unsigned long long _lastRenderTime;
    unsigned long long _lastFeelingRenderTime;
    long long _fps;
    unsigned long long _renderFpsStatCnt;
    NSObject<OS_dispatch_source> *_monitorTimer;
    NSObject<OS_dispatch_queue> *_monitorQueue;
    unsigned long long _lastRenderTimeForMonitor;
    CDUnknownBlockType _fpsReport;
}

+ (CDUnknownBlockType)createReportTimer:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType fpsReport; // @synthesize fpsReport=_fpsReport;
@property unsigned long long lastRenderTimeForMonitor; // @synthesize lastRenderTimeForMonitor=_lastRenderTimeForMonitor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue; // @synthesize monitorQueue=_monitorQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *monitorTimer; // @synthesize monitorTimer=_monitorTimer;
@property(nonatomic) unsigned long long renderFpsStatCnt; // @synthesize renderFpsStatCnt=_renderFpsStatCnt;
@property(nonatomic) long long fps; // @synthesize fps=_fps;
@property(nonatomic) unsigned long long lastFeelingRenderTime; // @synthesize lastFeelingRenderTime=_lastFeelingRenderTime;
@property(nonatomic) unsigned long long lastRenderTime; // @synthesize lastRenderTime=_lastRenderTime;
@property(nonatomic) unsigned long long renderStartTime; // @synthesize renderStartTime=_renderStartTime;
@property(nonatomic) long long frameCount; // @synthesize frameCount=_frameCount;
@property(nonatomic) long long monitorInterval; // @synthesize monitorInterval=_monitorInterval;
@property _Bool printRenderFPS; // @synthesize printRenderFPS=_printRenderFPS;
@property(nonatomic) unsigned long long lastBlockTime; // @synthesize lastBlockTime=_lastBlockTime;
@property(nonatomic) long long blockThreshold; // @synthesize blockThreshold=_blockThreshold;
@property(nonatomic) __weak id <CdnRenderStatsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateFps:(int)arg1;
- (void)logForRenderStatIfNeed;
- (void)increaseRenderFpsStatCnt;
- (void)dealloc;
- (CDUnknownBlockType)createFpsReporter;
- (unsigned long long)getCurrRenderTime;
- (unsigned long long)getLastRenderTime;
- (_Bool)isTooFrequentToRender;
- (void)appEnterForeground;
- (void)appLeaveForeground;
- (void)resumeMonitor;
- (void)pauseMonitor;
- (void)resetPeriodStatistics;
- (void)updateRenderStats:(CDUnknownBlockType)arg1;
- (id)init;

@end

