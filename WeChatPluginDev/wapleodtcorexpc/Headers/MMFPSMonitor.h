//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFPSMonitorPluginDelegate-Protocol.h"

@class MemoryMappedKV, NSString, WCFPSMonitorConfig, WCFPSMonitorPlugin;

@interface MMFPSMonitor <WCFPSMonitorPluginDelegate>
{
    WCFPSMonitorPlugin *m_plugin;
    WCFPSMonitorConfig *m_configForScroll;
    WCFPSMonitorConfig *m_configForTransition;
    unsigned long long m_trackingType;
    NSString *m_scene;
    MemoryMappedKV *m_reportKV;
    long long m_threshold;
    double m_hitchRate;
    double m_hangTime;
}

- (void).cxx_destruct;
- (void)onExptItemListChange;
- (void)onFPSMonitorPluginReport:(id)arg1 totalTime:(double)arg2 dropFrameTime:(double)arg3 hitchRate:(double)arg4 scene:(id)arg5;
- (_Bool)shouldPrintViewTreeWithDuration:(double)arg1;
- (void)onUITrackingRunLoopExit;
- (void)onUITrackingRunLoopEntry;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (void)handlePerfWarningNotification:(id)arg1;
- (void)handleUIApplicationWillResignActiveNotification:(id)arg1;
- (void)doReport;
- (void)resetHangTime;
- (double)hangTime;
- (void)resetHitchRate;
- (double)hitchRate;
- (void)setFPSMonitorDisable:(_Bool)arg1;
- (_Bool)isFPSMonitorDisable;
- (void)setupPluginConfiguration;
- (void)setupReportStrategy;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

