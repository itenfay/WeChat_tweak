//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DataReportConfiguration, DataReportPageContext, NSMutableArray, NSMutableDictionary, NSNumber, NSString, UIViewController;

@interface DataReportService
{
    NSNumber *m_localSwitch;
    NSNumber *m_cloudSwitch;
    DataReportConfiguration *m_configuration;
    DataReportPageContext *m_pageContext;
    NSMutableDictionary *m_staticPublicParams;
    NSMutableDictionary *m_eventRouteRules;
    unsigned long long m_reportSeq;
    NSMutableDictionary *m_eventSeqs;
    NSMutableArray *m_callbacks;
    UIViewController *m_curViewController;
}

- (void).cxx_destruct;
- (void)setViewExposeMinRate:(id)arg1 rate:(double)arg2;
- (void)setViewExposeMinTime:(id)arg1 timeMills:(unsigned long long)arg2;
- (id)getViewId:(id)arg1;
- (void)setViewId:(id)arg1 viewId:(id)arg2;
- (unsigned long long)getBizGroupId:(id)arg1;
- (void)setBizGroupId:(id)arg1 bizGroupId:(unsigned long long)arg2;
- (id)getPageName:(id)arg1;
- (void)setPageName:(id)arg1 pageName:(id)arg2;
- (unsigned long long)getPageId:(id)arg1;
- (void)setPageId:(id)arg1 pageId:(unsigned long long)arg2;
- (void)removeDataReportCallback:(id)arg1;
- (void)addDataReportCallback:(id)arg1;
- (id)getEventRouteRules:(id)arg1;
- (void)removeEventRouteRule:(id)arg1 routeRule:(unsigned long long)arg2;
- (void)setEventRouteRule:(id)arg1 routeRule:(unsigned long long)arg2 isRtReport:(_Bool)arg3;
- (void)setEventRouteRule:(id)arg1 routeRule:(unsigned long long)arg2;
- (id)getEventParam:(id)arg1 eventId:(id)arg2;
- (void)removeEventParams:(id)arg1;
- (void)removeEventParam:(id)arg1 eventId:(id)arg2 key:(id)arg3;
- (void)setEventParams:(id)arg1 eventId:(id)arg2 params:(id)arg3;
- (void)setEventParam:(id)arg1 eventId:(id)arg2 key:(id)arg3 value:(id)arg4;
- (unsigned long long)getReportInterval:(id)arg1 eventId:(id)arg2;
- (void)setReportInterval:(id)arg1 reportInterval:(unsigned long long)arg2 eventId:(id)arg3;
- (unsigned long long)getLastReportTime:(id)arg1 eventId:(id)arg2;
- (void)setLastReportTime:(id)arg1 lastReportTime:(unsigned long long)arg2 eventId:(id)arg3;
- (id)getDynamicParams:(id)arg1 eventId:(id)arg2;
- (CDUnknownBlockType)getDynamicParamsBlock:(id)arg1 key:(id)arg2;
- (id)getDynamicParamsBlocks:(id)arg1;
- (void)removeDynamicParamsBlock:(id)arg1 key:(id)arg2;
- (void)setDynamicParamsBlock:(id)arg1 block:(CDUnknownBlockType)arg2 key:(id)arg3;
- (void)setEventCallback:(id)arg1 reportPolicy:(unsigned long long)arg2 callbackBlock:(CDUnknownBlockType)arg3 key:(id)arg4;
- (unsigned long long)getReportPolicy:(id)arg1;
- (void)setReportPolicy:(id)arg1 reportPolicy:(unsigned long long)arg2 routeType:(unsigned long long)arg3 routeRule:(unsigned long long)arg4 isRtReport:(_Bool)arg5 isBatchReport:(_Bool)arg6;
- (void)setReportPolicy:(id)arg1 reportPolicy:(unsigned long long)arg2 routeRule:(unsigned long long)arg3;
- (id)getParams:(id)arg1;
- (void)resetParams:(id)arg1;
- (void)removeParams:(id)arg1;
- (void)removeParam:(id)arg1 key:(id)arg2;
- (void)setParams:(id)arg1 params:(id)arg2;
- (void)setParam:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)getNextSessionParams:(id)arg1;
- (void)resetNextSessionParams:(id)arg1;
- (void)removeNextSessionParams:(id)arg1;
- (void)removeNextSessionParam:(id)arg1 key:(id)arg2;
- (void)setNextSessionParams:(id)arg1 params:(id)arg2;
- (void)setNextSessionParam:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)getSessionParams:(id)arg1;
- (void)resetSessionParams:(id)arg1;
- (void)removeSessionParams:(id)arg1;
- (void)removeSessionParam:(id)arg1 key:(id)arg2;
- (void)setSessionParams:(id)arg1 params:(id)arg2;
- (void)setSessionParam:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)getNextBizParams:(id)arg1;
- (void)resetNextBizParams:(id)arg1;
- (void)removeNextBizParams:(id)arg1;
- (void)removeNextBizParam:(id)arg1 key:(id)arg2;
- (void)setNextBizParams:(id)arg1 params:(id)arg2;
- (void)setNextBizParam:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)getBizParams:(id)arg1;
- (void)resetBizParams:(id)arg1;
- (void)removeBizParams:(id)arg1;
- (void)removeBizParam:(id)arg1 key:(id)arg2;
- (void)setBizParams:(id)arg1 params:(id)arg2;
- (void)setBizParam:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)getPublicParams;
- (void)resetPublicParams;
- (void)removePublicParams;
- (void)removePublicParam:(id)arg1;
- (void)setPublicParams:(id)arg1;
- (void)setPublicParam:(id)arg1 value:(id)arg2;
- (void)addReportAndEventSeqParam:(id)arg1 params:(id)arg2;
- (void)addCommonParams:(id)arg1 params:(id)arg2;
- (void)handleReportData:(unsigned long long)arg1 reportData:(id)arg2 routeRules:(id)arg3;
- (void)routeEvent:(id)arg1 time:(unsigned long long)arg2 params:(id)arg3 routeRules:(id)arg4 isRtReport:(_Bool)arg5;
- (void)reportCustomCgiEvent:(id)arg1 target:(id)arg2 params:(id)arg3 bizId:(long long)arg4 isBatchReport:(_Bool)arg5;
- (void)reportCustomCgiPageEvent:(unsigned long long)arg1 eventId:(id)arg2 target:(id)arg3 params:(id)arg4 bizId:(long long)arg5 isBatchReport:(_Bool)arg6;
- (void)reportCustomCgiViewEvent:(id)arg1 eventId:(id)arg2 target:(id)arg3 params:(id)arg4 bizId:(long long)arg5 isBatchReport:(_Bool)arg6;
- (void)reportCustomEvent:(id)arg1;
- (void)reportCustomEvent:(id)arg1 target:(id)arg2 params:(id)arg3 routeType:(unsigned long long)arg4 routeRules:(id)arg5 isRtReport:(_Bool)arg6 isBringPageInfo:(_Bool)arg7 isBatchReport:(_Bool)arg8;
- (void)reportCustomEvent:(id)arg1 target:(id)arg2 params:(id)arg3 routeRules:(id)arg4;
- (void)reportCustomEvent:(id)arg1 target:(id)arg2 params:(id)arg3 routeRule:(unsigned long long)arg4 isRtReport:(_Bool)arg5 isBringPageInfo:(_Bool)arg6;
- (void)reportCustomEvent:(id)arg1 target:(id)arg2 params:(id)arg3 routeRule:(unsigned long long)arg4;
- (void)reportCustomEvent:(id)arg1 params:(id)arg2 routeRules:(id)arg3 isRtReport:(_Bool)arg4;
- (void)reportCustomEvent:(id)arg1 params:(id)arg2 routeRules:(id)arg3;
- (void)reportCustomEvent:(id)arg1 params:(id)arg2 routeRule:(unsigned long long)arg3 isRtReport:(_Bool)arg4;
- (void)reportCustomEvent:(id)arg1 params:(id)arg2 routeRule:(unsigned long long)arg3;
- (void)reportCustomPageEvent:(unsigned long long)arg1 eventId:(id)arg2 params:(id)arg3 routeRule:(unsigned long long)arg4;
- (void)reportCustomViewEvent:(id)arg1 eventId:(id)arg2 params:(id)arg3 routeRule:(unsigned long long)arg4;
- (void)reportStandardEvent:(id)arg1;
- (void)reportStandardEvent:(id)arg1 time:(unsigned long long)arg2 params:(id)arg3;
- (void)reportStandardPageEvent:(id)arg1 time:(unsigned long long)arg2 target:(id)arg3 params:(id)arg4;
- (void)reportStandardViewEvent:(id)arg1 time:(unsigned long long)arg2 params:(id)arg3 routeRules:(id)arg4;
- (void)reportStandardViewEvent:(id)arg1 time:(unsigned long long)arg2 params:(id)arg3 routeRule:(id)arg4;
- (void)resetViewParams:(id)arg1;
- (void)syncViewClick:(id)arg1;
- (void)syncPageResume:(unsigned long long)arg1 pageId:(id)arg2;
- (id)obtainSyncLastClickViewId;
- (id)obtainSourceViewId;
- (id)obtainCurPageId;
- (void)obtainAllCommonInfo:(id)arg1 obtainInfoBlock:(CDUnknownBlockType)arg2;
- (void)obtainLastClickViewInfo:(CDUnknownBlockType)arg1;
- (void)obtainCurPageInfo:(id)arg1 obtainInfoBlock:(CDUnknownBlockType)arg2;
- (void)obtainBizId:(CDUnknownBlockType)arg1;
- (void)obtainSessionId:(CDUnknownBlockType)arg1;
- (void)clearContextId:(unsigned long long)arg1;
- (void)obtainContextId:(unsigned long long)arg1 lastSessionCount:(unsigned long long)arg2 obtainInfoBlock:(CDUnknownBlockType)arg3;
- (void)genContextId:(unsigned long long)arg1 sourceType:(unsigned long long)arg2;
- (id)getCurViewController;
- (void)updateCurViewController:(id)arg1;
- (id)getSharedSerialQueue;
- (id)getFormatter;
- (id)getPageContext;
- (id)getConfiguration;
- (void)startWithConfiguration:(id)arg1;
- (void)stopDataReport;
- (void)startDataReport;
- (_Bool)isOpenSwitch;
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

