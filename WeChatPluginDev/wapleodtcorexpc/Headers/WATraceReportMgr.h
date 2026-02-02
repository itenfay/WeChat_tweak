//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JsVMInitInfo, MagicBrushCore, MemoryMappedKV, NSFileHandle, NSMutableArray, NSMutableDictionary, NSString, WAOpenGLView;

@interface WATraceReportMgr
{
    NSString *_appId;
    _Bool _stopped;
    NSMutableDictionary *_traceInfos;
    NSFileHandle *_currentFileHandle;
    WAOpenGLView *_currentView;
    MagicBrushCore *_mbCore;
    unsigned long long _beginTime;
    unsigned long long _downloadPkgTotalTime;
    long long _maxFPS;
    JsVMInitInfo *_jsVMInitInfo;
    MemoryMappedKV *_useAuditsAppKv;
    NSMutableDictionary *_dicUseAuditsApp;
    NSMutableArray *_extraInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *extraInfo; // @synthesize extraInfo=_extraInfo;
- (void)sendAuditsStateOnce:(id)arg1;
- (_Bool)setAuditsTraceInfo:(id)arg1 data:(id)arg2;
- (id)getAuditsTraceInfo:(id)arg1;
- (void)closeUseAuditsWithAppID:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)openUseAuditsWithAppID:(id)arg1;
- (_Bool)isAuditsOpened:(id)arg1;
- (_Bool)isAuditsHasOpened:(id)arg1;
- (_Bool)isOpenAuditsOnStartup:(id)arg1;
- (void)setAuditsStateForNextTime:(id)arg1 state:(_Bool)arg2;
- (void)onTrace;
- (void)traceOnJsVMInitTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 isPreload:(_Bool)arg3;
- (void)tracePreloadJsVMInitTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
- (void)traceOnStartupToJsInject:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
- (void)traceOnLaunchCgiTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
- (void)traceOnContactCgiTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 appId:(id)arg3;
- (void)traceOnDownloadPkgTime:(id)arg1 pkgSize:(unsigned long long)arg2 pkgType:(unsigned long long)arg3 moduleAppId:(id)arg4 beginTime:(unsigned long long)arg5 endTime:(unsigned long long)arg6;
- (void)traceOnInteractiveFromInitReady:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
- (void)traceOnJSScirptInjected:(unsigned long long)arg1 endTime:(unsigned long long)arg2 filePath:(id)arg3 fileSize:(long long)arg4;
- (void)traceOnInitReadyFromUserScriptInjected:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
- (void)traceOnInitReadyFromResourcePrepareDoneTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
- (void)traceOnResourcePrepareDoneTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
- (void)traceStartupTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 isDownloadCode:(_Bool)arg3;
- (void)traceFPS;
- (void)traceMemoryUsage;
- (void)traceCPUUsage;
- (void)stopTrace:(id)arg1 scene:(unsigned long long)arg2;
- (void)startTrace:(id)arg1;
- (void)pauseTrace:(id)arg1;
- (void)resumeTrace:(id)arg1;
- (void)setCurrentView:(id)arg1 view:(id)arg2 mbCore:(id)arg3;
- (void)closeAudits:(id)arg1 scene:(unsigned long long)arg2;
- (void)openAudits:(id)arg1;
- (id)traceFilePath;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

