//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TPLiveReportParamRecord, TPPlayerLogContext, TPTimer, TPWorkerQueue;

@interface TPLiveReporter
{
    _Bool _playDone;
    _Bool _buffering;
    TPPlayerLogContext *_log;
    TPLiveReportParamRecord *_reportParamRecord;
    TPWorkerQueue *_reportQueue;
    TPTimer *_livePeroidTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPTimer *livePeroidTimer; // @synthesize livePeroidTimer=_livePeroidTimer;
@property(retain, nonatomic) TPWorkerQueue *reportQueue; // @synthesize reportQueue=_reportQueue;
@property(nonatomic, getter=isBuffering) _Bool buffering; // @synthesize buffering=_buffering;
@property(nonatomic, getter=isPlayDone) _Bool playDone; // @synthesize playDone=_playDone;
@property(retain, nonatomic) TPLiveReportParamRecord *reportParamRecord; // @synthesize reportParamRecord=_reportParamRecord;
@property(retain, nonatomic) TPPlayerLogContext *log; // @synthesize log=_log;
- (id)getTPDynamicStatisticParams:(id)arg1;
- (id)getTPGeneralPlayFlowParams:(id)arg1;
- (void)fillPeriodRsvExtDicAndExtDic:(id)arg1 withRsvExtDic:(id)arg2 withExtDic:(id)arg3;
- (id)makeLiveEndParams:(long long)arg1 withErrCode:(long long)arg2 withFlowParams:(id)arg3;
- (id)makeLiveFlowParams:(id)arg1 withStatParams:(id)arg2;
- (void)fillPlayerEndConfigParams:(id)arg1 withFlowParams:(id)arg2;
- (void)fillGeneralPlayFlowParams:(id)arg1 withFlowParams:(id)arg2;
- (void)reportLiveEndEvent:(long long)arg1 withErrCode:(long long)arg2 withFlowParams:(id)arg3;
- (void)reportLiveEndFlowEvent:(id)arg1 withStatParams:(id)arg2;
- (void)reportPlayerEndEvent:(long long)arg1 withErrCode:(long long)arg2 flowParams:(id)arg3 statParams:(id)arg4;
- (void)stopPeroidTimer;
- (void)startLivePeroidTimer;
- (void)onLivePeroidReport;
- (void)onAppBackGround:(id)arg1;
- (void)onAppForeGround:(id)arg1;
- (void)onProtocolUpdate:(id)arg1;
- (void)onCdnUrlUpdate:(id)arg1;
- (void)onProcessUpdate:(id)arg1;
- (void)onBufferEnd:(id)arg1;
- (void)onBufferStart:(id)arg1;
- (void)onPlayerError:(id)arg1;
- (void)onPlayerEnd:(id)arg1;
- (void)onPlayerStart:(id)arg1;
- (void)onPrepareDone:(id)arg1;
- (id)invocationWithMethod:(SEL)arg1;
- (id)eventHandlerTable;
- (void)reset;
- (void)onEvent:(unsigned long long)arg1 withEvent:(id)arg2;
- (id)init;

@end

