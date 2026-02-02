//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPayReporter
{
    _Bool _switchEnabled;
    _Bool _sessionStartedFromVC;
    unsigned int _sequenceId;
    unsigned int _scene;
    unsigned int _channel;
    unsigned long long _pendingLogicCount;
    unsigned long long _pendingVCCount;
    NSString *_sessionId;
    NSString *_lastReportUrl;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int channel; // @synthesize channel=_channel;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *lastReportUrl; // @synthesize lastReportUrl=_lastReportUrl;
@property(nonatomic) unsigned int sequenceId; // @synthesize sequenceId=_sequenceId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool sessionStartedFromVC; // @synthesize sessionStartedFromVC=_sessionStartedFromVC;
@property(nonatomic) unsigned long long pendingVCCount; // @synthesize pendingVCCount=_pendingVCCount;
@property(nonatomic) unsigned long long pendingLogicCount; // @synthesize pendingLogicCount=_pendingLogicCount;
@property(nonatomic) _Bool switchEnabled; // @synthesize switchEnabled=_switchEnabled;
- (void)MMUIViewControllerDidBePopOrDismiss:(id)arg1;
- (void)MMUIViewControllerDidBePushOrPresent:(id)arg1;
- (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
- (void)onSendEvent:(id)arg1;
- (_Bool)shouldIgnoreButtonEvent:(id)arg1;
- (_Bool)isViewFromKinda:(id)arg1;
- (void)resetReportDataIfNeeded;
- (id)formatExtInfo:(id)arg1;
- (id)commitLogUrl:(id)arg1;
- (id)getSessionId;
- (_Bool)isInReportContext;
- (id)currentSessionId;
- (void)doReport:(struct WCPayReportLog)arg1 extInfo:(id)arg2;
- (void)reportClickView:(id)arg1 reportInfo:(id)arg2;
- (void)reportSystemEvent:(unsigned long long)arg1 extInfo:(id)arg2;
- (void)reportClickDialogButton:(id)arg1;
- (void)reportShowDialog:(id)arg1;
- (void)reportEndCgiWrap:(id)arg1;
- (void)reportStartCgiWrap:(id)arg1;
- (void)reportEndCgi:(id)arg1;
- (void)reportStartCgi:(id)arg1;
- (void)reportDismissWebOrWeAppVCWithUrl:(id)arg1;
- (void)reportShowWebOrWeAppVCWithUrl:(id)arg1;
- (void)reportDismissVC:(id)arg1;
- (void)reportShowVC:(id)arg1;
- (void)reportDefaultEndLogic;
- (void)reportDefaultBeginLogic;
- (void)reportEndLogic:(id)arg1;
- (void)reportStartLogic:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

