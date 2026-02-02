//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForeignHbDetailResp, ForeignHbOpenResp, ForeignHbReceiveResp, NSString, WCPayInterceptWinLogic, WCPayJumpRemindControlLogic, WCPayOverseaRedEnvelopesDetailCgi, WCPayOverseaRedEnvelopesOpenCgi, WCPayOverseaRedEnvelopesReceiveCgi, WCRedEnvelopesReceiveHomeView;

@interface WCPayOverseaRedEnvelopesReceiveControlLogic
{
    int m_scene;
    WCPayJumpRemindControlLogic *_m_jumpRemindControlLogic;
    WCPayOverseaRedEnvelopesReceiveCgi *_receiveCgi;
    WCPayOverseaRedEnvelopesOpenCgi *_openCgi;
    WCPayOverseaRedEnvelopesDetailCgi *_detailCgi;
    WCRedEnvelopesReceiveHomeView *_introView;
    ForeignHbReceiveResp *_receiveResp;
    ForeignHbOpenResp *_openResp;
    ForeignHbDetailResp *_detailResp;
    WCPayInterceptWinLogic *_interceptWinLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayInterceptWinLogic *interceptWinLogic; // @synthesize interceptWinLogic=_interceptWinLogic;
@property(retain, nonatomic) ForeignHbDetailResp *detailResp; // @synthesize detailResp=_detailResp;
@property(retain, nonatomic) ForeignHbOpenResp *openResp; // @synthesize openResp=_openResp;
@property(retain, nonatomic) ForeignHbReceiveResp *receiveResp; // @synthesize receiveResp=_receiveResp;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomeView *introView; // @synthesize introView=_introView;
@property(retain, nonatomic) WCPayOverseaRedEnvelopesDetailCgi *detailCgi; // @synthesize detailCgi=_detailCgi;
@property(retain, nonatomic) WCPayOverseaRedEnvelopesOpenCgi *openCgi; // @synthesize openCgi=_openCgi;
@property(retain, nonatomic) WCPayOverseaRedEnvelopesReceiveCgi *receiveCgi; // @synthesize receiveCgi=_receiveCgi;
@property(retain, nonatomic) WCPayJumpRemindControlLogic *m_jumpRemindControlLogic; // @synthesize m_jumpRemindControlLogic=_m_jumpRemindControlLogic;
- (void)OnGotoLqtSave:(id)arg1 operateId:(id)arg2;
- (void)OnGoToLqtDetail:(id)arg1;
- (void)OnGoToLqtDetail;
- (void)OnGoToBalanceDetail;
- (void)OnCommitWCRedEnvelopes:(id)arg1;
- (void)OnLoadMoreRedEnvelopesList;
- (_Bool)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (void)showDetailView;
- (void)WCRedEnvelopesReceiveHomeViewOpenList;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)onWCPayOverseaRedEnvelopesDetailError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayOverseaRedEnvelopesDetailOK:(id)arg1;
- (void)onWCPayOverseaRedEnvelopesOpenError:(id)arg1 errorDesc:(id)arg2 errorCode:(unsigned int)arg3;
- (void)onWCPayOverseaRedEnvelopesOpenOK:(id)arg1;
- (void)onWCPayOverseaRedEnvelopesReceiveError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayOverseaRedEnvelopesReceiveOK:(id)arg1;
- (id)genKeyValueFromUrlParam:(id)arg1;
- (id)genDetailRequestWithLimit:(unsigned long long)arg1 offSet:(unsigned long long)arg2;
- (id)genOpenRequest;
- (id)genReceiveRequest;
- (void)startLogic;
- (void)stopLoading;
- (id)initWithData:(id)arg1 Scene:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

