//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CADisplayLink, NSDictionary, NSMutableDictionary, NSObject, NSString, WCFPSMonitorConfig, WCFPSRecorder;
@protocol OS_dispatch_queue, WCFPSMonitorPluginDelegate, WCReportStrategyDelegate;

@interface WCFPSMonitorPlugin
{
    int m_nextRecordID;
    WCFPSRecorder *m_currRecorder;
    double m_beginTime;
    double m_lastTime;
    double m_dropTime;
    CADisplayLink *m_displayLink;
    NSString *m_scene;
    NSDictionary *m_customInfo;
    double m_hitchTime;
    double m_scrollTime;
    double m_targetTimestamp;
    NSMutableDictionary *m_sceneMaxTimeDict;
    NSObject<OS_dispatch_queue> *m_pluginReportQueue;
    id <WCFPSMonitorPluginDelegate> _delegate;
    id <WCReportStrategyDelegate> _reportDelegate;
}

+ (id)getTag;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCReportStrategyDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
@property(nonatomic) __weak id <WCFPSMonitorPluginDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportIssueCompleteWithIssue:(id)arg1 success:(_Bool)arg2;
- (void)uploadReport:(id)arg1;
- (void)uploadReportOnStrategy:(id)arg1;
- (void)onFPSReportSaved:(id)arg1;
- (void)createNewRecorder;
- (void)calcHitchTime;
- (void)onFrameCallback:(id)arg1;
- (void)stopDisplayLink;
- (void)startDisplayLink:(id)arg1 customInfo:(id)arg2;
- (void)stop;
- (_Bool)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) WCFPSMonitorConfig *pluginConfig; // @dynamic pluginConfig;
@property(readonly) Class superclass;

@end

