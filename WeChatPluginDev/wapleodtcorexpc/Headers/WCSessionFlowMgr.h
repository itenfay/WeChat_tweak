//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString, WCSessionDSLExecuter, WCSessionFlowConfiger, WCSessionFlowSessionInfo, WCSessionFlowStatItem;

@interface WCSessionFlowMgr
{
    WCSessionFlowStatItem *sessionFlowStatItem;
    unsigned int pId;
    NSString *pName;
    NSString *prePage;
    NSString *currentPage;
    unsigned int viewHashCodeOffset;
    unsigned int tabHashCodeOffset;
    unsigned int pageHashCodeOffset;
    unsigned int floatHashCodeOffset;
    _Bool isContinueLastSession;
    _Bool isCallbackForeground;
    unsigned long long reportSeq;
    WCSessionDSLExecuter *sessionDSLExecuter;
    unsigned int businessIdSeq;
    NSMutableDictionary *ignoreSessionQuitDic;
    NSString *floatPerPageName;
    unsigned long long floatPerPageHash;
    WCSessionFlowSessionInfo *lastFloatSessionInfo;
    WCSessionFlowSessionInfo *lastEnterSessionInfo;
    _Bool isRepeatEnterFloat;
    NSMutableArray *last10PagePathCache;
    NSString *lastSessionId;
    NSMutableArray *nowSessionPageIds;
    NSMutableArray *lastSessionPageIds;
    WCSessionFlowConfiger *sessionConfiger;
}

- (void).cxx_destruct;
- (id)getConfigMMKV;
- (id)getDataMMKV;
- (id)getSidBySessionId:(id)arg1;
- (id)createSessionPageId:(id)arg1 withTime:(unsigned long long)arg2;
- (id)createIllegalSessionId:(id)arg1 withTime:(unsigned long long)arg2;
- (id)createSessionId:(id)arg1 withTime:(unsigned long long)arg2;
- (id)getSessionInfo:(id)arg1 withHashCode:(unsigned long long)arg2;
- (id)getCurrentValidSessionInfo;
- (id)obtainBusinessInfo:(id)arg1 withDataPathConfig:(id)arg2;
- (id)getMatchPagePathJsonString:(id)arg1;
- (id)getSessionMergePagePathJsonString:(id)arg1;
- (id)getSessionBusinessDataJsonString:(id)arg1;
- (id)getSessionUBAJsonString:(id)arg1;
- (id)getSessionFlowMergeJsonString:(id)arg1;
- (id)getSessionFlowSingleJsonString:(id)arg1;
- (id)getSessionDataAttr:(id)arg1 witPId:(unsigned int)arg2 withPName:(id)arg3 withSubSeq:(unsigned long long)arg4 withSubSeqSum:(unsigned long long)arg5;
- (void)reportSessionData:(id)arg1 witPId:(unsigned int)arg2 withPName:(id)arg3 withLogId:(unsigned int)arg4;
- (id)getSessionFlowJsonStr:(id)arg1 withMatchPagePaths:(id)arg2;
- (id)getSessionFlowJsonStr:(id)arg1 withMemoryKey:(id)arg2;
- (void)saveSessionJsonStr:(id)arg1 withMemoryKey:(id)arg2;
- (void)handleSessionFlowDataMerge:(id)arg1;
- (void)filterSessionPageViewOperation:(id)arg1;
- (void)fixSessionFlowPagePath:(id)arg1;
- (void)filterSessionUBABusinessParam:(id)arg1;
- (void)checkAndFilterBusinessData:(id)arg1;
- (void)reportAndSave:(id)arg1 isChangeAccount:(_Bool)arg2;
- (void)reconstructOneReportItem:(unsigned long long)arg1;
- (void)overOneReportItem:(unsigned long long)arg1 withContinueLast:(_Bool)arg2 isChangeAccount:(_Bool)arg3;
- (id)getSessionConfigModel:(id)arg1 withVC:(id)arg2 withPrePage:(id)arg3;
- (void)onGesture:(id)arg1 withTarget:(id)arg2 withAction:(id)arg3;
- (void)onSendEvent:(id)arg1;
- (void)onViewOperation:(id)arg1 withViewOperationAction:(unsigned long long)arg2 withViewController:(id)arg3;
- (void)onFloatViewDismiss:(id)arg1;
- (void)onFloatViewShow:(id)arg1;
- (void)onViewDismiss:(id)arg1 withName:(id)arg2 withVC:(id)arg3;
- (void)onViewShow:(id)arg1 withName:(id)arg2 withVC:(id)arg3;
- (void)onViewDismiss:(id)arg1 withVC:(id)arg2;
- (void)onViewShow:(id)arg1 withVC:(id)arg2;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)putBizData:(id)arg1 withKey:(id)arg2;
- (void)putBizData:(id)arg1 withKey:(id)arg2 withBizId:(id)arg3;
- (id)requestSessionPageId;
- (void)ignoreSessionQuit;
- (void)obtainSessionPagePathBusinessParams:(id)arg1 withPageName:(id)arg2 withObj:(id)arg3 withAction:(unsigned long long)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)getSessionPagePathBusinessParams:(id)arg1 withPageName:(id)arg2 withObj:(id)arg3 withAction:(unsigned long long)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)onDisappearPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onAppearPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (id)getSessionPagePathMergeInfo:(id)arg1 withSid:(id)arg2 withPagePathId:(id)arg3;
- (id)getSessionFlowPageMergeInfo:(id)arg1 withSessionId:(id)arg2;
- (void)overIllegaSessionFlowPageInfo:(id)arg1 withTime:(unsigned long long)arg2 withEnterBack:(_Bool)arg3;
- (void)overSessionFlowPageInfo:(id)arg1 withTime:(unsigned long long)arg2 withEnterBack:(_Bool)arg3;
- (id)createIllegalSessionFlowPageInfo:(id)arg1 withTime:(unsigned long long)arg2 withHashCode:(unsigned long long)arg3 withPrePage:(id)arg4;
- (id)createSessionFlowPageInfo:(id)arg1 withTime:(unsigned long long)arg2 withHashCode:(unsigned long long)arg3 withPageName:(id)arg4 withPrePage:(id)arg5;
- (void)onQuitPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)overMatchVaguePagePathConfigModel:(id)arg1 withPageName:(id)arg2;
- (void)matchVaguePagePathConfigModel:(id)arg1 withPagePathInfo:(id)arg2 withPagePathConfigModel:(id)arg3 withSessionMarkPagePathInfo:(id)arg4;
- (void)matchExactPagePathConfigModel:(id)arg1 withPagePathInfo:(id)arg2 withPagePathConfigModel:(id)arg3 withSessionMarkPagePathInfo:(id)arg4;
- (void)matchPagePathConfigModel:(id)arg1 withPagePathInfo:(id)arg2;
- (void)overSessionPagePathInfo:(id)arg1 withTime:(unsigned long long)arg2;
- (id)createSessionPagePathInfo:(id)arg1 withTime:(unsigned long long)arg2 withPageName:(id)arg3;
- (void)onEnterPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (id)getLastSessionInfo;
- (_Bool)isMonitorUIcontrol;
- (_Bool)isMonitorGesture;
- (void)onSessionConfigUpdate;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

