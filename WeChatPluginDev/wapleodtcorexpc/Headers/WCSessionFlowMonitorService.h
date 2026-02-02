//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSSet, NSString, WCCoinBusinessReporter, WCForeBackFlowMgr, WCSessionVCStack, WCSpecialEnteranceRepoter;

@interface WCSessionFlowMonitorService
{
    WCSessionVCStack *m_stack;
    NSMutableDictionary *m_pushAndPopDic;
    NSMutableDictionary *m_presentAndDismissDic;
    NSMutableDictionary *m_appearAndDisappearDic;
    NSSet *m_ignoreAppearAndDisappearSet;
    NSMutableArray *m_accountSwitchProtocols;
    WCForeBackFlowMgr *m_foreBackFlowMgr;
    WCCoinBusinessReporter *m_coinBusinessReporter;
    WCSpecialEnteranceRepoter *m_specialEnteranceRepoter;
}

- (void).cxx_destruct;
- (unsigned long long)getHashCode:(id)arg1;
- (_Bool)isInvisibleOut:(long long)arg1;
- (void)onGesture:(id)arg1 withTarget:(id)arg2 withAction:(id)arg3;
- (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
- (void)onSendEvent:(id)arg1;
- (void)onViewDidBeDismissed:(id)arg1 withVC:(id)arg2;
- (void)onViewDidBePresented:(id)arg1 withVC:(id)arg2;
- (void)onViewDidDisappear:(id)arg1 withVC:(id)arg2;
- (void)onViewDidAppear:(id)arg1 withVC:(id)arg2;
- (void)onViewDidBePushed:(id)arg1 withVC:(id)arg2;
- (void)onViewDidBePoped:(id)arg1 withVC:(id)arg2;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)dealloc;
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

