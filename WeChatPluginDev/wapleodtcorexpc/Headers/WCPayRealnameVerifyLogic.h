//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FaceRecogPayHandler, GetRealnameWordingRsp, NSString, RealNameSendSmsResp, RealNameVerifySmsResp, WCPayGetUserExInfoCgi, WCPayRealnameAuthenReq, WCPayRealnameAuthenResp, WCPayRealnameHalfPageSheetView, WCPayRealnameRegResp, WCPayRealnameSendSMSCgi, WCPayRealnameVerifySMSCgi, WCPaySetUserExInfoCgi;
@protocol WCPayRealnameVerifyLogicDelegate;

@interface WCPayRealnameVerifyLogic
{
    _Bool _rename;
    _Bool _directVerifySMS;
    _Bool _directBindcardConfirm;
    _Bool _directFillCardInfoUI;
    _Bool _directRealnameInfo;
    _Bool _isMinorRealname;
    _Bool _marketingSwitchClosed;
    _Bool _shouldShowSuccessView;
    GetRealnameWordingRsp *_wording;
    NSString *_sessionId;
    id <WCPayRealnameVerifyLogicDelegate> _delegate;
    WCPayGetUserExInfoCgi *_getUserExInfoCgi;
    WCPaySetUserExInfoCgi *_setUserExInfoCgi;
    WCPayRealnameSendSMSCgi *_sendSMSCgi;
    WCPayRealnameVerifySMSCgi *_verifySMSCgi;
    RealNameSendSmsResp *_sendSMSResp;
    RealNameVerifySmsResp *_verifySMSResp;
    WCPayRealnameAuthenResp *_authenResp;
    WCPayRealnameAuthenReq *_authenReq;
    WCPayRealnameRegResp *_realNameReg;
    FaceRecogPayHandler *_faceHandler;
    WCPayRealnameHalfPageSheetView *_underAgeMidHalfPage;
    NSString *_mobileVerifyReqkey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mobileVerifyReqkey; // @synthesize mobileVerifyReqkey=_mobileVerifyReqkey;
@property(retain, nonatomic) WCPayRealnameHalfPageSheetView *underAgeMidHalfPage; // @synthesize underAgeMidHalfPage=_underAgeMidHalfPage;
@property _Bool shouldShowSuccessView; // @synthesize shouldShowSuccessView=_shouldShowSuccessView;
@property(retain) FaceRecogPayHandler *faceHandler; // @synthesize faceHandler=_faceHandler;
@property(retain) WCPayRealnameRegResp *realNameReg; // @synthesize realNameReg=_realNameReg;
@property(retain) WCPayRealnameAuthenReq *authenReq; // @synthesize authenReq=_authenReq;
@property(retain) WCPayRealnameAuthenResp *authenResp; // @synthesize authenResp=_authenResp;
@property(retain) RealNameVerifySmsResp *verifySMSResp; // @synthesize verifySMSResp=_verifySMSResp;
@property(retain) RealNameSendSmsResp *sendSMSResp; // @synthesize sendSMSResp=_sendSMSResp;
@property(retain) WCPayRealnameVerifySMSCgi *verifySMSCgi; // @synthesize verifySMSCgi=_verifySMSCgi;
@property(retain) WCPayRealnameSendSMSCgi *sendSMSCgi; // @synthesize sendSMSCgi=_sendSMSCgi;
@property(retain, nonatomic) WCPaySetUserExInfoCgi *setUserExInfoCgi; // @synthesize setUserExInfoCgi=_setUserExInfoCgi;
@property(retain, nonatomic) WCPayGetUserExInfoCgi *getUserExInfoCgi; // @synthesize getUserExInfoCgi=_getUserExInfoCgi;
@property(nonatomic) _Bool marketingSwitchClosed; // @synthesize marketingSwitchClosed=_marketingSwitchClosed;
@property(nonatomic) __weak id <WCPayRealnameVerifyLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isMinorRealname; // @synthesize isMinorRealname=_isMinorRealname;
@property(nonatomic) _Bool directRealnameInfo; // @synthesize directRealnameInfo=_directRealnameInfo;
@property(nonatomic) _Bool directFillCardInfoUI; // @synthesize directFillCardInfoUI=_directFillCardInfoUI;
@property(nonatomic) _Bool directBindcardConfirm; // @synthesize directBindcardConfirm=_directBindcardConfirm;
@property(nonatomic) _Bool directVerifySMS; // @synthesize directVerifySMS=_directVerifySMS;
@property _Bool rename; // @synthesize rename=_rename;
@property(retain) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain) GetRealnameWordingRsp *wording; // @synthesize wording=_wording;
- (void)realnameNeedStartVerifyPhone:(id)arg1;
- (void)selectGuardianViewControllerRequestToHandleRouteInfo:(id)arg1;
- (void)selectGuardianViewControllerDidFinishWithTinyAppUri:(id)arg1;
- (void)selectGuardianViewControllerDidCancel;
- (void)onWCPayRealnameVerifySMSCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayRealnameVerifySMSCgiResp:(id)arg1;
- (void)onWCPayRealnameSendSMSCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayRealnameSendSMSCgiResp:(id)arg1;
- (id)onWCPayVerifyPhoneViewControllerBannedArea;
- (void)onWCPayVerifyPhoneViewControllerGetVerifyCode:(id)arg1 Phone:(id)arg2 retry:(_Bool)arg3;
- (void)onWCPayVerifyPhoneViewControllerNext:(id)arg1 Phone:(id)arg2 verifyCode:(id)arg3;
- (void)onWCPayVerifyPhoneViewControllerBack;
- (void)reportRealnameVerifyKVResult:(_Bool)arg1 needBindCard:(_Bool)arg2 needFaceReg:(_Bool)arg3;
- (void)reportRealnameAuthenKV:(unsigned long long)arg1;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)onWCPayRealnameSuccessViewControllerRetry;
- (void)onWCPayRealnameSuccessViewControllerBack;
- (void)onWCPayRealnameSuccessViewControllerDone;
- (id)onWCPayRealnameSuccessViewControllerGetData;
- (_Bool)onWCPayRealnameSuccessViewControllerShowRetry;
- (id)onWCPayRealnameSuccessViewControllerButtonTitle;
- (id)onWCPayRealnameSuccessViewControllerDesc;
- (id)onWCPayRealnameSuccessViewControllerTitle;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)SetPayPwdNext:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)passwordInit;
- (void)onAuthenNext;
- (void)OnRealnameAuthen:(id)arg1 Error:(id)arg2;
- (void)OnWCPayBaseRequestNoKnownError:(id)arg1 TenPayCmdType:(unsigned int)arg2;
- (void)FillRealnameInfoNext:(id)arg1;
- (void)FillRealnameInfoCancel;
- (void)FillRealnameInfoLayoutV2ClickConfirm:(id)arg1;
- (id)FillRealnameInfoWording;
- (void)faceRecogPayHandlerDidCancel:(id)arg1;
- (void)faceRecogPayHandlerDidFinish:(id)arg1;
- (void)startPhoneVerify;
- (void)startFaceReg;
- (void)onWCPayBindCardConfirmViewControllerBack;
- (void)onWCPayBindCardConfirmViewControllerConfirm:(_Bool)arg1;
- (id)onWCPayBindCardConfirmViewControllerDesc;
- (void)getUserExInfoCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getUserExInfoCgi:(id)arg1 didGetResponse:(id)arg2;
- (id)realnameToken;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

