//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderDataItem;

@interface WCFinderPostRouteMgr
{
    int _fromScene;
    int _sceneKey;
    int _actionType;
    NSString *_reportKey;
    WCFinderDataItem *_fromDataItem;
    NSString *_traceKey;
    unsigned long long _phaseKey;
    unsigned long long _enterScene;
    unsigned long long _postSourceType;
}

+ (_Bool)isExitCustomKey:(id)arg1;
+ (unsigned long long)convertVideoSourceToType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long postSourceType; // @synthesize postSourceType=_postSourceType;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) int sceneKey; // @synthesize sceneKey=_sceneKey;
@property(nonatomic) unsigned long long phaseKey; // @synthesize phaseKey=_phaseKey;
@property(copy, nonatomic) NSString *traceKey; // @synthesize traceKey=_traceKey;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) WCFinderDataItem *fromDataItem; // @synthesize fromDataItem=_fromDataItem;
@property(copy, nonatomic) NSString *reportKey; // @synthesize reportKey=_reportKey;
- (id)getPostExtReportSvrValue;
- (void)beginReportByTraceKey:(id)arg1 customKey:(id)arg2 clientInfo:(id)arg3 cgiFailErrCode:(long long)arg4 cgiFailErrMsg:(id)arg5 enterScene:(unsigned long long)arg6 mediaType:(unsigned long long)arg7 videoPlayLength:(long long)arg8 videoFileSize:(long long)arg9 mediaCount:(long long)arg10 feedId:(id)arg11;
- (void)beginReportByTraceKey:(id)arg1 customKey:(id)arg2 clientInfo:(id)arg3 cgiFailErrCode:(long long)arg4 cgiFailErrMsg:(id)arg5 postSession:(id)arg6;
- (id)genTraceKeyByCustomKey:(id)arg1 postSession:(id)arg2;
- (void)triggerCustomKey:(id)arg1 failCode:(long long)arg2 failErr:(id)arg3 postSession:(id)arg4;
- (void)triggerCustomKey:(id)arg1 postSession:(id)arg2 cdnErrorCode:(long long)arg3;
- (void)triggerTraceKey:(id)arg1 customKey:(id)arg2 postSession:(id)arg3;
- (void)triggerCustomKey:(id)arg1 enterScene:(unsigned long long)arg2 videoDuration:(double)arg3 fileSize:(double)arg4;
- (void)triggerCustomKey:(id)arg1 postSession:(id)arg2;
- (void)triggerCustomKey:(id)arg1 enterScene:(unsigned long long)arg2;
- (void)triggerReport;
- (void)updatePhaseKey:(unsigned long long)arg1 sceneKey:(int)arg2 actionType:(int)arg3 exit:(_Bool)arg4 enterScene:(unsigned long long)arg5 postSourceType:(unsigned long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

