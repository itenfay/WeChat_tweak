//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameSkStoreController, GameWebDurationReport, GameWebViewClientReportRecord, MMTimer, NSMutableArray, NSMutableDictionary, NSNumber;

@interface MMWebViewPlugin_GameCenter
{
    _Bool _canStartRender;
    _Bool _hasCallInitEnd;
    _Bool _didIgnoreTerminateReload;
    _Bool _isDidCommit;
    _Bool _waitLastResponse;
    _Bool _hasCallClosed;
    _Bool _isGameCenterRelateWebVC;
    NSNumber *_needResumeSatusBarNumber;
    GameWebDurationReport *_webDurationReport;
    GameSkStoreController *_skStoreController;
    MMTimer *_deadCheckTimer;
    double _lastLiveCheckTime;
    NSMutableArray *_timeCheckDiffArray;
    NSMutableDictionary *_clientReportDict;
    GameWebViewClientReportRecord *_otherPageTimeRecorder;
    double _otherPageStartTime;
    double _otherPageRecordDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double otherPageRecordDuration; // @synthesize otherPageRecordDuration=_otherPageRecordDuration;
@property(nonatomic) double otherPageStartTime; // @synthesize otherPageStartTime=_otherPageStartTime;
@property(retain, nonatomic) GameWebViewClientReportRecord *otherPageTimeRecorder; // @synthesize otherPageTimeRecorder=_otherPageTimeRecorder;
@property(retain, nonatomic) NSMutableDictionary *clientReportDict; // @synthesize clientReportDict=_clientReportDict;
@property(nonatomic) _Bool isGameCenterRelateWebVC; // @synthesize isGameCenterRelateWebVC=_isGameCenterRelateWebVC;
@property(nonatomic) _Bool hasCallClosed; // @synthesize hasCallClosed=_hasCallClosed;
@property(retain, nonatomic) NSMutableArray *timeCheckDiffArray; // @synthesize timeCheckDiffArray=_timeCheckDiffArray;
@property(nonatomic) _Bool waitLastResponse; // @synthesize waitLastResponse=_waitLastResponse;
@property(nonatomic) double lastLiveCheckTime; // @synthesize lastLiveCheckTime=_lastLiveCheckTime;
@property(retain, nonatomic) MMTimer *deadCheckTimer; // @synthesize deadCheckTimer=_deadCheckTimer;
@property(nonatomic) _Bool isDidCommit; // @synthesize isDidCommit=_isDidCommit;
@property(nonatomic) _Bool didIgnoreTerminateReload; // @synthesize didIgnoreTerminateReload=_didIgnoreTerminateReload;
@property(retain, nonatomic) GameSkStoreController *skStoreController; // @synthesize skStoreController=_skStoreController;
@property(retain, nonatomic) GameWebDurationReport *webDurationReport; // @synthesize webDurationReport=_webDurationReport;
@property(retain, nonatomic) NSNumber *needResumeSatusBarNumber; // @synthesize needResumeSatusBarNumber=_needResumeSatusBarNumber;
- (void)dealloc;
- (void)onApplicationDidEnterBackground:(id)arg1;
- (void)onApplicationWillEnterForeground:(id)arg1;
- (void)checkReport:(_Bool)arg1;
- (void)updateOtherPageTimeRecorder:(id)arg1;
- (void)updateWebviewClientReport:(id)arg1;
- (void)onReportOtherPageTime;
- (void)onDeallocOrPoped;
- (void)onTabVcPopWebView;
- (_Bool)ignoreReloadWhenWebviewTerminate;
- (_Bool)checkViewController:(id)arg1 containsViewController:(id)arg2;
- (_Bool)checkVcArray:(id)arg1 containsViewController:(id)arg2;
- (id)getPreInjectScript;
- (void)gameSenceInjectJavaScript:(id)arg1;
- (void)webviewDidReceiveScriptMessage:(id)arg1 name:(id)arg2;
- (void)startGameCenterJsCore;
- (_Bool)canStartRender;
- (void)notifyEventToGuardManager:(unsigned long long)arg1;
- (_Bool)checkDeadAndReport:(_Bool)arg1;
- (void)checkWebViewResponse;
- (void)handleEvaluateComplete:(id)arg1 value:(id)arg2 webViewInfo:(id)arg3;
- (void)beginCheckWebViewDead;
- (void)stopTimer;
- (void)handleCloseOrMinimise:(_Bool)arg1 dispatchEvent:(_Bool)arg2;
- (void)checkResumeStatusBar;
- (void)handleDurationReport:(unsigned long long)arg1;
- (void)handleJsCoreEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)init;

@end

