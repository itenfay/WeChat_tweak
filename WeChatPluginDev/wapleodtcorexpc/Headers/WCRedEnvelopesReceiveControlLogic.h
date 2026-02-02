//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmojiInfoObj, InterceptWin, NSString, UIView, WCPayComplianceHalfPage, WCPayInterceptWinLogic, WCPayJumpRemindControlLogic, WCRedEnvGetPacketStoryCgi, WCRedEnvelopesAtmospherePagView, WCRedEnvelopesReceiveHomeView;

@interface WCRedEnvelopesReceiveControlLogic
{
    int m_scene;
    WCRedEnvelopesReceiveHomeView *introView;
    _Bool _bHasStartDownloadEmoticon;
    _Bool _m_bIsOpening;
    WCPayJumpRemindControlLogic *_m_jumpRemindControlLogic;
    WCPayInterceptWinLogic *_interceptWinLogic;
    EmojiInfoObj *_emojiInfoObj;
    WCRedEnvGetPacketStoryCgi *_m_getPacketStoryCgi;
    InterceptWin *_intercept_win_after;
    WCPayComplianceHalfPage *_complianceHalfPage;
    WCRedEnvelopesAtmospherePagView *_atmospherePagView;
    UIView *_redEnvelopesDetailView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *redEnvelopesDetailView; // @synthesize redEnvelopesDetailView=_redEnvelopesDetailView;
@property(retain, nonatomic) WCRedEnvelopesAtmospherePagView *atmospherePagView; // @synthesize atmospherePagView=_atmospherePagView;
@property(nonatomic) WCPayComplianceHalfPage *complianceHalfPage; // @synthesize complianceHalfPage=_complianceHalfPage;
@property(nonatomic) _Bool m_bIsOpening; // @synthesize m_bIsOpening=_m_bIsOpening;
@property(retain, nonatomic) InterceptWin *intercept_win_after; // @synthesize intercept_win_after=_intercept_win_after;
@property(retain, nonatomic) WCRedEnvGetPacketStoryCgi *m_getPacketStoryCgi; // @synthesize m_getPacketStoryCgi=_m_getPacketStoryCgi;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj=_emojiInfoObj;
@property(nonatomic) _Bool bHasStartDownloadEmoticon; // @synthesize bHasStartDownloadEmoticon=_bHasStartDownloadEmoticon;
@property(retain, nonatomic) WCPayInterceptWinLogic *interceptWinLogic; // @synthesize interceptWinLogic=_interceptWinLogic;
@property(retain, nonatomic) WCPayJumpRemindControlLogic *m_jumpRemindControlLogic; // @synthesize m_jumpRemindControlLogic=_m_jumpRemindControlLogic;
- (void)WCRedEnvelopesReceiveHomeViewGotoUrl:(id)arg1;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (_Bool)isOpenIMHongBao;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)startDownloadEmoticonWithEmoticonMd5:(id)arg1;
- (void)startDownloadEmoticonFromMsgData;
- (void)onRealnameActionClick:(id)arg1;
- (void)OnSendShareEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)OnSendShareRedEnvelopesoRequest:(id)arg1 Error:(id)arg2;
- (void)dismissCurrentViewSendShareRedEnvelopes;
- (void)OnThanksForRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)OnClearserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)OnQueryUserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)OnQueryRedEnvelopesDetailRequest:(id)arg1 Error:(id)arg2;
- (_Bool)openCanShowPromotionViewCondition;
- (_Bool)queryCanShowPromotionViewCondition;
- (void)playDetailPag;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerViewWillBePop;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBeginDragging;
- (void)OnContinueOpenRedEnvelopesRequest:(id)arg1;
- (void)OnOpenRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)closeIntroView;
- (void)onWCRedEnvelopesGetTimeLimitPromoCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesGetTimeLimitPromoCgiResponseOK:(id)arg1;
- (void)showTimeLimitPromoWithCache:(id)arg1;
- (void)OnReceiverQueryRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (_Bool)shouldShowAtmospherePagView:(id)arg1;
- (_Bool)isRedEnvelopesReallyTimeOut:(unsigned long long)arg1 messageWrap:(id)arg2;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (void)showDetailView;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)OnSelectMutilContactsButton;
- (void)OnSelectSessionReturn:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnConfirmSendMessageSelectSessionViewController;
- (void)OnGotoLqtSave:(id)arg1 operateId:(id)arg2;
- (void)OnGoToLqtDetail:(id)arg1;
- (void)OnGoToLqtDetail;
- (void)OnGoToBalanceDetail;
- (void)OnCommitWCRedEnvelopes:(id)arg1;
- (void)OnLoadMoreRedEnvelopesList;
- (_Bool)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerContinueSendRedEnvelopes;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (_Bool)WCRedEnvelopesRedEnvelopesDetailViewControllerBackBlock;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerContinueSendRedEnvelopes;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerBack;
- (void)reportReceiveHomeViewEmoticon;
- (void)WCRedEnvelopesReceiveHomeViewOpenList;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes:(id)arg1;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)showReceivedAndOutOfDataRedEnvelopesIntroView;
- (_Bool)isRedEnvelopesHasBeenReceivedAndOutOfDate:(id)arg1;
- (_Bool)isRedEnvelopesHasBeenReceivedAndNotOutOfDate:(id)arg1;
- (void)startDownloadStoryInfoResource:(id)arg1 subtypeId:(unsigned int)arg2;
- (void)onGetRedEnvPacketStoryCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)updateStoryAutoplayConfig:(id)arg1 isFromServer:(_Bool)arg2;
- (void)onGetRedEnvPacketStoryCgiRespOK:(id)arg1 isFromServer:(_Bool)arg2;
- (void)startGetStoryInfoFromMsgData;
- (void)startGetStoryInfoWithPacketId:(id)arg1 sendUserName:(id)arg2;
- (void)startGetStoryInfoWithPacketId:(id)arg1;
- (void)onGetSplitRedCoverCgiResp:(id)arg1;
- (void)startGetSplitRedCoverFromMsgData;
- (void)OpenRedEnvelopesRequest:(id)arg1;
- (void)QueryRedEnvelopesDetailRequest:(id)arg1;
- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1;
- (void)startLogic;
- (void)stopLoading;
- (id)initWithData:(id)arg1 Scene:(int)arg2;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

