//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSPointerArray, NSString, TPReporterInitParams, TPWorkerQueue;
@protocol ITPPlayerInfoGetter, ITPReportInfoGetter, ITPReporter;

@interface TPReportController : NSObject
{
    long long _controllerState;
    id <ITPReporter> _reporter;
    TPReporterInitParams *_reportInitparams;
    TPWorkerQueue *_workQueue;
    NSPointerArray *_reportChannelDelegates;
    id <ITPPlayerInfoGetter> _playerInfoGetter;
    id <ITPReportInfoGetter> _reportInfoGetter;
    NSDictionary *_beforeReporterEventHanlerTable;
    NSDictionary *_afterReporterEventHanlerTable;
}

+ (id)playerToReportProcessorEventIdMap;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *afterReporterEventHanlerTable; // @synthesize afterReporterEventHanlerTable=_afterReporterEventHanlerTable;
@property(retain, nonatomic) NSDictionary *beforeReporterEventHanlerTable; // @synthesize beforeReporterEventHanlerTable=_beforeReporterEventHanlerTable;
@property(nonatomic) __weak id <ITPReportInfoGetter> reportInfoGetter; // @synthesize reportInfoGetter=_reportInfoGetter;
@property(nonatomic) __weak id <ITPPlayerInfoGetter> playerInfoGetter; // @synthesize playerInfoGetter=_playerInfoGetter;
@property(retain, nonatomic) NSPointerArray *reportChannelDelegates; // @synthesize reportChannelDelegates=_reportChannelDelegates;
@property(retain, nonatomic) TPWorkerQueue *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) TPReporterInitParams *reportInitparams; // @synthesize reportInitparams=_reportInitparams;
@property(retain, nonatomic) id <ITPReporter> reporter; // @synthesize reporter=_reporter;
@property(nonatomic) long long controllerState; // @synthesize controllerState=_controllerState;
- (void)setupAfterReporterEventHandlerTable;
- (void)setupBeforeReporterEventHandlerTable;
- (id)invocationWithSel:(SEL)arg1;
- (void)createAndInitReporter:(unsigned long long)arg1;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onControllerRelease:(id)arg1;
- (void)onPlayEnd:(id)arg1;
- (void)onPlayError:(id)arg1;
- (void)onPrepareEnd:(id)arg1;
- (void)onPrepareStart:(id)arg1;
- (void)onGetConvertedDataSource:(id)arg1;
- (void)onSetDataSource:(id)arg1;
- (void)dealSpecialEventAfterReporterIfNeed:(unsigned long long)arg1 playerEvent:(id)arg2;
- (void)dealSpecialEventBeforeReporterIfNeed:(unsigned long long)arg1 playerEvent:(id)arg2;
- (void)handleEventAsync:(unsigned long long)arg1 playerEvent:(id)arg2;
- (void)onEvent:(id)arg1;
- (void)addReportChannelDelegate:(id)arg1;
- (void)setReportToBeaconNeeded:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

