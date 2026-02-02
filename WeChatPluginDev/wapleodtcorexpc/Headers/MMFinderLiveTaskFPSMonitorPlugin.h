//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class _TtC6WeChat22MMFinderLiveFPSMonitor;

@interface MMFinderLiveTaskFPSMonitorPlugin
{
    _Bool _started;
    _TtC6WeChat22MMFinderLiveFPSMonitor *_monitor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) _TtC6WeChat22MMFinderLiveFPSMonitor *monitor; // @synthesize monitor=_monitor;
- (void)createMonitorIfNeeded;
- (void)dealloc;
- (void)report;
- (void)stopMonitor;
- (void)startMonitor;

@end

