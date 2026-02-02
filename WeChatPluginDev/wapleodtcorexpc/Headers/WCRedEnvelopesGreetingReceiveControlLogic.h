//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WCPayInterceptWinLogic, WCRedEnvelopes2019GreetingViewController;

@interface WCRedEnvelopesGreetingReceiveControlLogic
{
    int m_scene;
    _Bool m_bDidStopCoinAnimation;
    _Bool m_bDidCompleteOpen;
    WCRedEnvelopes2019GreetingViewController *senderView;
    WCRedEnvelopes2019GreetingViewController *receiveView;
    _Bool m_pictureSwitch;
    _Bool m_showEmoticonSwitch;
    _Bool _isViewAnimationing;
    WCPayInterceptWinLogic *_interceptWinLogic;
    NSMutableDictionary *_cacheReceiveDict;
    NSString *_reportSessionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reportSessionId; // @synthesize reportSessionId=_reportSessionId;
@property(retain, nonatomic) NSMutableDictionary *cacheReceiveDict; // @synthesize cacheReceiveDict=_cacheReceiveDict;
@property(retain, nonatomic) WCPayInterceptWinLogic *interceptWinLogic; // @synthesize interceptWinLogic=_interceptWinLogic;
- (void)onOpenDetailList;
- (void)onRealnameActionClick:(id)arg1;
- (void)WCRedEnvelopesGreetingSenderHomeViewBack;
- (id)getGreetingReportSessionId;
- (void)genGreeetingReportSessonId;
- (void)redEnvelopes2019GreetingViewControllerBack;
- (id)WCRedEnvelopesGreetingReceiveViewGetData;
- (void)WCRedEnvelopesGreetingReceiveViewBack;
- (void)OnSendShareRedEnvelopesoRequest:(id)arg1 Error:(id)arg2;
- (void)dismissCurrentViewSendShareRedEnvelopes;
- (void)OnThanksForRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)OnClearserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)OnQueryUserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)showReceiveView:(_Bool)arg1 NoShowIcon:(_Bool)arg2;
- (void)OnQueryRedEnvelopesDetailRequest:(id)arg1 Error:(id)arg2;
- (void)OnOpenRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)OnReceiverQueryRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)OnGenGreetingDownloadResult:(id)arg1;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (void)showDetailView;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)OnSelectMutilContactsButton;
- (void)OnSelectSessionReturn:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnConfirmSendMessageSelectSessionViewController;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onGoToBalanceDetail;
- (void)OnCommitWCRedEnvelopes:(id)arg1;
- (void)OnLoadMoreRedEnvelopesList;
- (_Bool)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerContinueSendRedEnvelopes;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerContinueSendRedEnvelopes;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerBack;
- (_Bool)isRedEnvelopesHasBeenReceivedAndNotOutOfDate:(id)arg1;
- (void)stopLogic;
- (void)startLogic;
- (void)stopLoading;
- (id)initWithData:(id)arg1 Scene:(int)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

