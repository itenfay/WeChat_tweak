//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSThread, NSTimer;

@interface QDrawMonitor : NSObject
{
    _Bool _exitThread;
    unsigned long long _logid;
    double _initTimeStamp;
    double _beforeTimeStamp;
    double _afterTimeStamp;
    NSThread *_monitorThread;
    NSTimer *_timer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool exitThread; // @synthesize exitThread=_exitThread;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSThread *monitorThread; // @synthesize monitorThread=_monitorThread;
@property(nonatomic) double afterTimeStamp; // @synthesize afterTimeStamp=_afterTimeStamp;
@property(nonatomic) double beforeTimeStamp; // @synthesize beforeTimeStamp=_beforeTimeStamp;
@property(nonatomic) double initTimeStamp; // @synthesize initTimeStamp=_initTimeStamp;
@property(nonatomic) unsigned long long logid; // @synthesize logid=_logid;
- (void)increaseLogid;
- (void)threadStart:(id)arg1;
- (void)reportAfter:(id)arg1;
- (void)onAfterDrawframeWithBlock:(CDUnknownBlockType)arg1;
- (void)doPreReport:(id)arg1;
- (void)preReportBefore:(id)arg1;
- (void)onBeforeDrawframe;
- (void)doStopThread;
- (void)stop;
- (id)init;

@end

