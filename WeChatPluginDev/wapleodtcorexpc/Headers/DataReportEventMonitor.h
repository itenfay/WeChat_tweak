//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DataReportSubstitutePage, DataReportSubstitutePageStack, NSMutableArray, NSMutableDictionary, NSString;
@protocol DataReportStandardEventDelegate;

@interface DataReportEventMonitor
{
    NSMutableArray *m_backgroudEventBuffers;
    NSMutableDictionary *m_viewExposeTime;
    DataReportSubstitutePageStack *m_pageStack;
    DataReportSubstitutePage *m_curBizPage;
    unsigned long long m_curBizGroupId;
    _Bool m_isFront;
    unsigned long long m_appInTime;
    NSMutableArray *m_viewExpInfos;
    NSMutableArray *m_curExpViewUniqueIds;
    unsigned long long m_appInOutType;
    id <DataReportStandardEventDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <DataReportStandardEventDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cgiResp:(id)arg1 errCode:(unsigned int)arg2 errMsg:(id)arg3 cgiParams:(id)arg4 routeRules:(id)arg5 time:(unsigned long long)arg6;
- (void)cgiReq:(id)arg1 cgiParams:(id)arg2 routeRules:(id)arg3 time:(unsigned long long)arg4;
- (void)checkViewExp:(id)arg1;
- (void)viewUnExp:(id)arg1 time:(unsigned long long)arg2 otherParams:(id)arg3;
- (void)viewExp:(id)arg1 time:(unsigned long long)arg2 otherParams:(id)arg3;
- (void)viewLongPress:(id)arg1 time:(unsigned long long)arg2 otherParams:(id)arg3;
- (void)viewDoubleTap:(id)arg1 time:(unsigned long long)arg2 otherParams:(id)arg3;
- (void)viewClk:(id)arg1 time:(unsigned long long)arg2 otherParams:(id)arg3;
- (void)checkBizOut:(id)arg1 time:(unsigned long long)arg2;
- (void)checkBizIn:(id)arg1 time:(unsigned long long)arg2;
- (void)fillPageInfo:(id)arg1;
- (void)pageAppear:(id)arg1 time:(unsigned long long)arg2;
- (void)triggerSubPageEvent:(id)arg1 page:(id)arg2 time:(unsigned long long)arg3;
- (void)appBackground:(unsigned long long)arg1;
- (void)appForeground:(unsigned long long)arg1;
- (void)onPbCgiResq:(id)arg1 cgiName:(id)arg2 errCode:(unsigned int)arg3 errMsg:(id)arg4;
- (void)onPbCgiReq:(id)arg1 cgiName:(id)arg2;
- (void)onViewLongPress:(id)arg1;
- (void)onViewDoubleTap:(id)arg1;
- (void)onViewClick:(id)arg1;
- (void)onViewUnExpose:(id)arg1 checkType:(unsigned long long)arg2;
- (void)onViewExpose:(id)arg1 checkType:(unsigned long long)arg2;
- (void)subPageEvent:(id)arg1 vc:(id)arg2 checkType:(unsigned long long)arg3;
- (void)onVCUnExpose:(id)arg1 checkType:(unsigned long long)arg2;
- (void)onVCExpose:(id)arg1 checkType:(unsigned long long)arg2;
- (void)clearPage:(id)arg1 delay:(unsigned long long)arg2;
- (void)onPageEventDisappear:(id)arg1 hash:(unsigned long long)arg2 pageId:(unsigned long long)arg3 bizGroupId:(unsigned long long)arg4 is4TabOfLauncherUI:(_Bool)arg5;
- (void)onPageEventAppear:(id)arg1 hash:(unsigned long long)arg2 pageId:(unsigned long long)arg3 bizGroupId:(unsigned long long)arg4 is4TabOfLauncherUI:(_Bool)arg5;
- (void)onPageEventDisappear:(id)arg1;
- (void)onPageEventAppear:(id)arg1;
- (void)topViewControllerDidAppear:(id)arg1;
- (void)checkStackTopPage:(id)arg1;
- (void)MMUIViewControllerDidBePopOrDismiss:(id)arg1;
- (void)MMUIViewControllerDidDisappear:(id)arg1;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)appEnterBackground;
- (void)appEnterForeground;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)stopMonitor;
- (void)startMonitor;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

