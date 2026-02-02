//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FaceRecogPayHandler, JSEvent, MMVoidCallback, NSString, WCBaseControlLogic, WCPayBankElementQueryCgi, WCPayBindCardSuccessResponse, WCPayControlData, WCPayRealnameAuthenReq, WCPayRealnameAuthenResp, WCPayRealnameRegResp, WCPaySetUserExInfoCgi, WCRedEnvelopesControlData;
@protocol WCPayAddPayCardDelegate;

@interface WCPayAddPayCardLogic
{
    int m_uiLogicFinishedStatus;
    long long m_uiWCPayAddPayCardLogicScene;
    JSEvent *m_jsEvent;
    NSString *m_nsAddPayCardToken;
    WCRedEnvelopesControlData *m_redEnvelopesData;
    _Bool m_isWebankLoanScene;
    _Bool m_canPassPwd;
    NSString *m_usertoken;
    _Bool _rename;
    _Bool _marketingSwitchClosed;
    _Bool _shouldNotifyUseCaseIfExist;
    _Bool _bIsFromJsAddPayCard;
    _Bool _bFromKinda;
    WCBaseControlLogic *_fromControlLogic;
    id <WCPayAddPayCardDelegate> _payCardDelegate;
    MMVoidCallback *_successCallback;
    MMVoidCallback *_cancelCallback;
    WCPayRealnameAuthenReq *_realnameAuthenReq;
    WCPayRealnameAuthenResp *_realnameAuthenResp;
    WCPayRealnameRegResp *_realnameRegResp;
    NSString *_notifyType;
    NSString *_platformCallbackKey;
    WCPaySetUserExInfoCgi *_setUserExInfoCgi;
    WCPayBindCardSuccessResponse *_m_bindCardSuccessResponse;
    WCPayBankElementQueryCgi *_m_getBankElementCgi;
    FaceRecogPayHandler *_faceHandler;
    WCPayControlData *_fillCardData;
}

- (void).cxx_destruct;
@property(retain) WCPayControlData *fillCardData; // @synthesize fillCardData=_fillCardData;
@property(nonatomic) _Bool bFromKinda; // @synthesize bFromKinda=_bFromKinda;
@property(retain) FaceRecogPayHandler *faceHandler; // @synthesize faceHandler=_faceHandler;
@property(nonatomic) _Bool bIsFromJsAddPayCard; // @synthesize bIsFromJsAddPayCard=_bIsFromJsAddPayCard;
@property(retain, nonatomic) WCPayBankElementQueryCgi *m_getBankElementCgi; // @synthesize m_getBankElementCgi=_m_getBankElementCgi;
@property(retain, nonatomic) WCPayBindCardSuccessResponse *m_bindCardSuccessResponse; // @synthesize m_bindCardSuccessResponse=_m_bindCardSuccessResponse;
@property(retain, nonatomic) WCPaySetUserExInfoCgi *setUserExInfoCgi; // @synthesize setUserExInfoCgi=_setUserExInfoCgi;
@property(retain, nonatomic) NSString *platformCallbackKey; // @synthesize platformCallbackKey=_platformCallbackKey;
@property(retain, nonatomic) NSString *notifyType; // @synthesize notifyType=_notifyType;
@property(nonatomic) _Bool shouldNotifyUseCaseIfExist; // @synthesize shouldNotifyUseCaseIfExist=_shouldNotifyUseCaseIfExist;
@property(nonatomic) _Bool marketingSwitchClosed; // @synthesize marketingSwitchClosed=_marketingSwitchClosed;
@property _Bool rename; // @synthesize rename=_rename;
@property(retain) WCPayRealnameRegResp *realnameRegResp; // @synthesize realnameRegResp=_realnameRegResp;
@property(retain) WCPayRealnameAuthenResp *realnameAuthenResp; // @synthesize realnameAuthenResp=_realnameAuthenResp;
@property(retain) WCPayRealnameAuthenReq *realnameAuthenReq; // @synthesize realnameAuthenReq=_realnameAuthenReq;
@property(retain, nonatomic) MMVoidCallback *cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(retain, nonatomic) MMVoidCallback *successCallback; // @synthesize successCallback=_successCallback;
@property(nonatomic) __weak id <WCPayAddPayCardDelegate> payCardDelegate; // @synthesize payCardDelegate=_payCardDelegate;
@property(retain, nonatomic) WCBaseControlLogic *fromControlLogic; // @synthesize fromControlLogic=_fromControlLogic;
@property(nonatomic) long long m_uiWCPayAddPayCardLogicScene; // @synthesize m_uiWCPayAddPayCardLogicScene;
- (unsigned int)onWCPayReadOnlyInfo_RegFlag;
- (unsigned int)regFlag;
- (_Bool)isRename;
- (void)call:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)onErrorAlertViewStopLogic:(id)arg1;
- (void)EndWCPayAddPayCardLogic:(id)arg1 withDelay:(_Bool)arg2;
- (void)EndWCPayAddPayCardLogic:(id)arg1;
- (void)EndWCPayAddPayCardLogic;
- (id)onWCPayBindCardSuccessViewControllerRequestResponse;
- (void)onWCPayBindCardSuccessViewControllerClickDone;
- (void)jumpSuccessViewController;
- (void)OnHandleVerifiedSMSString:(id)arg1;
- (void)OnSetWCPayPasswordInBind:(id)arg1 repsonse:(id)arg2;
- (void)passwordInit;
- (void)faceRecogPayHandlerDidCancel:(id)arg1;
- (void)faceRecogPayHandlerDidFinish:(id)arg1;
- (void)startFaceReg;
- (void)OnBindCardVerifySMS:(id)arg1 Error:(id)arg2 repsonse:(id)arg3;
- (void)OnBindCardVerifyCard:(id)arg1 Error:(id)arg2;
- (void)OnWCPayGetBankResource:(id)arg1 Error:(id)arg2;
- (void)OnWCPayGetBindingCardBin:(id)arg1 AvailableBank:(id)arg2 userExInfoResponse:(id)arg3 Error:(id)arg4;
- (void)OnVerifyPayPassword:(id)arg1 andRetToken:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnTenpayImportBindQuery:(id)arg1 AppInfo:(id)arg2 UsrVerifiedInfo:(id)arg3 Error:(id)arg4;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)stopLogicToMyPayCardView;
- (void)stopLogicToRefreshPayCardList;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)SetPayPwdNext:(id)arg1;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardBack;
- (void)WCPayTenpayImportCardInfoViewControllerReadAgreement;
- (void)WCPayTenpayImportCardInfoViewControllerNext;
- (void)WCPayTenpayImportCardInfoViewControllerCancel;
- (id)FillCardInfoRealnameReq;
- (void)FillCardInfoReadAgreement;
- (void)FillCardInfoNext:(id)arg1;
- (void)FillCardInfoNext:(id)arg1 underDialog:(unsigned int)arg2;
- (id)getWCPayBindInfo:(id)arg1;
- (void)FillCardInfoCancel;
- (_Bool)NeedShowServiceAppInfo;
- (unsigned int)FillCardNumberSource;
- (void)FillCardNumberBackToRefreshCardList;
- (void)FillCardNumberConfirmWithImage:(id)arg1 cardNumber:(id)arg2 data:(id)arg3;
- (void)FillCardNumberNext:(id)arg1;
- (void)FillCardNumberCancel:(_Bool)arg1;
- (id)FillCardNumberRealnameResp;
- (id)FillCardNumberRealnameReq;
- (void)VerifyPayPwdNext:(id)arg1;
- (_Bool)startKindaAddPayCard:(_Bool)arg1;
- (void)showGiveUpLogicAlert;
- (void)startAddCardLogic;
- (void)startTenpayImportCardLogic;
- (void)stopLogic;
- (void)startFromJsApi;
- (void)startLogic;
- (void)dealloc;
- (id)initWithJSEvent:(id)arg1;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

