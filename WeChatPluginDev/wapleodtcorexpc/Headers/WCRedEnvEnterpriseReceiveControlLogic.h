//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSError, NSString, WCAtomicRedEnvReceiveHomeView, WCAtomicRedEnvReceiveWelcomeView, WCFestivalRedEnvFinishView, WCFestivalRedEnvShareView, WCPayInterceptWinLogic, WCRedEnvelopesReceiveHomeView;
@protocol WCRedEnvWeAppDelegate;

@interface WCRedEnvEnterpriseReceiveControlLogic
{
    int m_scene;
    WCRedEnvelopesReceiveHomeView *m_oIntroView;
    WCAtomicRedEnvReceiveHomeView *m_oAtomicIntroView;
    WCAtomicRedEnvReceiveWelcomeView *m_oWelcomeView;
    WCFestivalRedEnvShareView *m_oShareView;
    WCFestivalRedEnvFinishView *m_oFinishView;
    JSEvent *m_jsEvent;
    _Bool bStopedLogic;
    NSError *m_error;
    id <WCRedEnvWeAppDelegate> _logicDelegate;
    WCPayInterceptWinLogic *_interceptWinLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayInterceptWinLogic *interceptWinLogic; // @synthesize interceptWinLogic=_interceptWinLogic;
@property(nonatomic) __weak id <WCRedEnvWeAppDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
@property(retain, nonatomic) NSError *m_error; // @synthesize m_error;
@property(retain, nonatomic) JSEvent *m_jsEvent; // @synthesize m_jsEvent;
@property(nonatomic) int m_scene; // @synthesize m_scene;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)onRealnameActionClick:(id)arg1;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (void)showDetailView;
- (void)WCFestivalRedEnvFinishViewToShare;
- (void)WCFestivalRedEnvFinishViewBack;
- (void)OnAsyncBizSubcribeResponse:(id)arg1 Error:(id)arg2;
- (void)WCFestivalRedEnvShareViewToFinish;
- (void)WCFestivalRedEnvShareViewBack;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)OnSelectMutilContactsButton;
- (void)OnSelectSessionReturn:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnConfirmSendMessageSelectSessionViewController;
- (void)OnGoToBalanceDetail;
- (void)OnCommitWCRedEnvelopes:(id)arg1;
- (void)OnLoadMoreRedEnvelopesList;
- (_Bool)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerContinueSendRedEnvelopes;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerContinueSendRedEnvelopes;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerBack;
- (void)WCAtomicRedEnvReceiveWelcomeViewShowDetail;
- (void)WCAtomicRedEnvReceiveWelcomeViewBack;
- (void)WCAtomicRedEnvReceiveHomeViewOpenList;
- (void)WCAtomicRedEnvReceiveHomeViewOpenRedEnvelopesInner:(_Bool)arg1;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;
- (void)WCAtomicRedEnvReceiveHomeViewOpenRedEnvelopes:(_Bool)arg1;
- (void)WCAtomicRedEnvReceiveHomeViewBack;
- (void)OnSendShareRedEnvelopesoRequest:(id)arg1 Error:(id)arg2;
- (void)OnCheckBizEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)OnOpenBizEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)OnReceiveBizEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)OnSendShareEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)closeFinishViewAndStopLogic;
- (unsigned int)getStatFromScene;
- (void)OnQueryRedEnvelopesDetailRequest:(id)arg1 Error:(id)arg2;
- (void)OnOpenAtomicEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)introViewRemoveView;
- (void)introViewStopReceiveAnimation;
- (void)introViewStartReceiveAnimation;
- (void)introViewEndAnimation;
- (void)OnReceiveAtomicEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)stopLogic;
- (void)startLogic;
- (void)onGetSplitRedCoverCgiResp:(id)arg1;
- (void)startGetSplitRedCoverFromMsgData;
- (void)initHbShowSource;
- (void)startGetStoryInfoWithPacketId:(id)arg1;
- (void)updateStoryAutoplayConfig:(id)arg1 isFromServer:(_Bool)arg2;
- (void)startDownloadStoryInfoResource:(id)arg1 subtypeId:(unsigned int)arg2;
- (void)onGetRedEnvPacketStoryCgiRespOK:(id)arg1 isFromServer:(_Bool)arg2;
- (void)onGetRedEnvPacketStoryCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)startGetStoryInfoFromMsgData;
- (void)stopLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

