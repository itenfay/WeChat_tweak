//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FFHBRequestResp, HBBusinessCallbackCgi, NSString, WCPayControlData, WCPayFaceHBCgi, WCPayInterceptWinLogic, WCPayPayMoneyLogic;
@protocol WCPayFaceHBManagementLogicDelegate;

@interface WCPayFaceHBManagementLogic
{
    id <WCPayFaceHBManagementLogicDelegate> m_delegate;
    WCPayFaceHBCgi *m_faceHBCgi;
    WCPayPayMoneyLogic *m_payMoneyLogic;
    WCPayControlData *oPayData;
    unsigned long long m_totalAmount;
    unsigned int m_totalNum;
    int m_scene;
    FFHBRequestResp *_m_prepayResp;
    HBBusinessCallbackCgi *_hbBusinessCallbackCgi;
    WCPayInterceptWinLogic *_interceptWinLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayInterceptWinLogic *interceptWinLogic; // @synthesize interceptWinLogic=_interceptWinLogic;
@property(retain, nonatomic) HBBusinessCallbackCgi *hbBusinessCallbackCgi; // @synthesize hbBusinessCallbackCgi=_hbBusinessCallbackCgi;
@property(retain, nonatomic) FFHBRequestResp *m_prepayResp; // @synthesize m_prepayResp=_m_prepayResp;
@property(nonatomic) int m_scene; // @synthesize m_scene;
- (void)call:(id)arg1;
- (void)onHBBusinessCallbackCgiError:(id)arg1;
- (void)onHBBusinessCallbackCgiResp:(id)arg1;
- (void)queryHBQrCodeInfo;
- (void)OnClickViewHBHistory;
- (void)onFailMsg:(id)arg1;
- (void)OnClickNotReceivedButton;
- (void)OnMakeWCRedEnvelopesButtonClick:(id)arg1;
- (void)OnWCRedEnvelopesMakeRedEnvelopesViewControllerBack;
- (void)OnGenH5RedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)showSetPwdTipsView;
- (void)OnGenRedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)OnQueryRedEnvelopesUserInfo:(id)arg1 isCahceInfo:(_Bool)arg2 Error:(id)arg3;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)didWCPayFaceHBCgi:(id)arg1 Response:(id)arg2 Error:(id)arg3 Key:(id)arg4;
- (_Bool)gotoViewController:(id)arg1;
- (void)GenRedEnvelopesPayRequest:(id)arg1;
- (void)stopLogic;
- (void)startLogic;
- (id)initWithData:(id)arg1;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

