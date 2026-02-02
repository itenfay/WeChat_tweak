//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmojiInfoObj, InterceptWin, NSString, UIView, WCPayComplianceHalfPage, WCPayInterceptWinLogic, WCPayJumpRemindControlLogic, WCRedEnvelopesAtmospherePagView, WCRedEnvelopesReceiveHomeView;
@protocol WCRedEnvelopesLiveStreamReceiveControlLogicDelegate;

@interface WCRedEnvelopesLiveStreamReceiveControlLogic
{
    int m_scene;
    _Bool _bHasStartDownloadEmoticon;
    _Bool _m_bIsOpening;
    id <WCRedEnvelopesLiveStreamReceiveControlLogicDelegate> _m_delegate;
    WCRedEnvelopesReceiveHomeView *_introView;
    WCPayJumpRemindControlLogic *_m_jumpRemindControlLogic;
    WCPayInterceptWinLogic *_interceptWinLogic;
    EmojiInfoObj *_emojiInfoObj;
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
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj=_emojiInfoObj;
@property(nonatomic) _Bool bHasStartDownloadEmoticon; // @synthesize bHasStartDownloadEmoticon=_bHasStartDownloadEmoticon;
@property(retain, nonatomic) WCPayInterceptWinLogic *interceptWinLogic; // @synthesize interceptWinLogic=_interceptWinLogic;
@property(retain, nonatomic) WCPayJumpRemindControlLogic *m_jumpRemindControlLogic; // @synthesize m_jumpRemindControlLogic=_m_jumpRemindControlLogic;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomeView *introView; // @synthesize introView=_introView;
@property(nonatomic) __weak id <WCRedEnvelopesLiveStreamReceiveControlLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)closeIntroView;
- (id)getBizDisplayWindow;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerViewWillBePop;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBeginDragging;
- (void)WCRedEnvelopesReceiveHomeViewOpenList;
- (void)onRealnameActionClick:(id)arg1;
- (void)OnGotoLqtSave:(id)arg1 operateId:(id)arg2;
- (void)OnGoToLqtDetail:(id)arg1;
- (void)OnGoToLqtDetail;
- (void)OnGoToBalanceDetail;
- (void)OnCommitWCRedEnvelopes:(id)arg1;
- (void)OnLoadMoreRedEnvelopesList;
- (_Bool)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (_Bool)WCRedEnvelopesRedEnvelopesDetailViewControllerBackBlock;
- (void)OnQueryRedEnvelopesDetailRequest:(id)arg1 Error:(id)arg2;
- (_Bool)isRedEnvelopesReallyTimeOut:(unsigned long long)arg1 messageWrap:(id)arg2;
- (void)OnReceiverQueryRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (void)showDetailView;
- (void)playDetailPag;
- (void)OnContinueOpenRedEnvelopesRequest:(id)arg1;
- (void)OnOpenRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)setOpenRetryCount:(unsigned int)arg1;
- (unsigned int)openRetryCount;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)startDownloadEmoticonWithEmoticonMd5:(id)arg1;
- (void)startDownloadEmoticonFromMsgData;
- (void)reportReceiveHomeViewEmoticon;
- (void)OpenRedEnvelopesRequest:(id)arg1;
- (void)retryOpenRedEnvelopesRequest;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes:(id)arg1;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1;
- (void)QueryRedEnvelopesDetailRequest:(id)arg1;
- (void)startLoading;
- (void)startDownloadStoryInfoResource:(id)arg1 subtypeId:(unsigned int)arg2;
- (void)onGetRedEnvPacketStoryCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)updateStoryAutoplayConfig:(id)arg1 isFromServer:(_Bool)arg2;
- (void)onGetRedEnvPacketStoryCgiRespOK:(id)arg1 isFromServer:(_Bool)arg2;
- (void)startGetStoryInfoWithPacketId:(id)arg1;
- (void)startGetStoryInfoFromMsgData;
- (void)onGetSplitRedCoverCgiResp:(id)arg1;
- (void)startGetSplitRedCoverFromMsgData;
- (_Bool)shouldShowAtmospherePagView;
- (_Bool)shouldShowAtmospherePagView:(id)arg1;
- (void)startLogic;
- (id)initWithData:(id)arg1 Scene:(int)arg2;
- (void)setOpenWxHbRequestForRetry:(id)arg1;
- (id)openWxHbRequestForRetry;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

