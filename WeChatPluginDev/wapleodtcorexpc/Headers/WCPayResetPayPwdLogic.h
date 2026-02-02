//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FaceRecogPayHandler, MMVoidCallback, NSString, WCPayGenDigitalCertCgi, WCPayResetPwdByFaceCgi, WCPayVerifyUserRealNameInfoCgi;
@protocol WCPayResetPayPwdLogicDelegate;

@interface WCPayResetPayPwdLogic
{
    _Bool _bIsResetingPwdByFaceRecog;
    id <WCPayResetPayPwdLogicDelegate> _delegate;
    MMVoidCallback *_successCallback;
    MMVoidCallback *_cancelCallback;
    WCPayVerifyUserRealNameInfoCgi *_verifyRealnameInfoCgi;
    WCPayResetPwdByFaceCgi *_resetPwdByFaceCgi;
    WCPayGenDigitalCertCgi *_genDigitalCertCgi;
    FaceRecogPayHandler *_faceHandler;
    NSString *_faceAuthToken;
    NSString *_userName;
    NSString *_userIDType;
    NSString *_userIDNum;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userIDNum; // @synthesize userIDNum=_userIDNum;
@property(retain, nonatomic) NSString *userIDType; // @synthesize userIDType=_userIDType;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) _Bool bIsResetingPwdByFaceRecog; // @synthesize bIsResetingPwdByFaceRecog=_bIsResetingPwdByFaceRecog;
@property(retain, nonatomic) NSString *faceAuthToken; // @synthesize faceAuthToken=_faceAuthToken;
@property(retain, nonatomic) FaceRecogPayHandler *faceHandler; // @synthesize faceHandler=_faceHandler;
@property(retain, nonatomic) WCPayGenDigitalCertCgi *genDigitalCertCgi; // @synthesize genDigitalCertCgi=_genDigitalCertCgi;
@property(retain, nonatomic) WCPayResetPwdByFaceCgi *resetPwdByFaceCgi; // @synthesize resetPwdByFaceCgi=_resetPwdByFaceCgi;
@property(retain, nonatomic) WCPayVerifyUserRealNameInfoCgi *verifyRealnameInfoCgi; // @synthesize verifyRealnameInfoCgi=_verifyRealnameInfoCgi;
@property(retain, nonatomic) MMVoidCallback *cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(retain, nonatomic) MMVoidCallback *successCallback; // @synthesize successCallback=_successCallback;
@property(nonatomic) __weak id <WCPayResetPayPwdLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)faceRecogPayHandlerDidFinish:(id)arg1;
- (void)faceRecogPayHandlerDidCancel:(id)arg1;
- (void)clickResetPwdErrorAlert;
- (void)onGetResetPwdByFaceCgiResp:(id)arg1;
- (void)sendResetPwdByFaceRequest:(id)arg1;
- (void)continueLogicAfterHandleDigitalCertSucc;
- (void)onWCPayGenDigitalCertCgiWithResp:(id)arg1;
- (void)sendGenDigitalCertRequest;
- (void)onGetVerifyUserRealNameInfoCgiResp:(id)arg1;
- (void)onSelectVerifyWayViewControllerSelectVerifyFace;
- (void)onSelectVerifyWayViewControllerSelectVerifyCard;
- (void)onSelectVerifyWayViewControllerBack;
- (void)onFillCredInfoViewControllerConfirmWithName:(id)arg1 credType:(id)arg2 credNum:(id)arg3;
- (void)onFillCredInfoViewControllerBack;
- (void)OnHandleVerifiedSMSString:(id)arg1;
- (void)OnGetAvailableBank:(id)arg1 Error:(id)arg2;
- (void)OnGetBindingCardBin:(id)arg1 Error:(id)arg2;
- (void)OnGetBindingCardBin:(id)arg1 AvailableBank:(id)arg2 userExInfoResponse:(id)arg3 Error:(id)arg4;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnSetWCPayPasswordInReset:(id)arg1;
- (void)showResetPwdViewController;
- (void)OnResetWCPayPasswordVerifySMS:(id)arg1;
- (void)OnResetWCPayPasswordVerifyCard:(id)arg1 Error:(id)arg2;
- (void)OnWCPayResetPwdBindCardBack;
- (void)OnWCPayResetPwdBindCardNext;
- (void)OnResetPwdBindedCardListNext;
- (void)OnResetPwdBindedCardListBack;
- (void)OnResetPwdBindedCardListNewCardClicked;
- (_Bool)OnSelectBindCardAvailble:(id)arg1;
- (void)openNewCardErrorPathWebView;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)SetPayPwdNext:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)showGiveUpResetAlert;
- (void)OnAlertGiveUpResetPwd;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardBack;
- (void)ResetPwdCardInfoPoped;
- (void)stopLogic;
- (void)ResetPwdCardInfoReadAgreement;
- (void)ResetPwdCardInfoNext:(id)arg1;
- (void)ResetPwdCardInfoCardInfoCancel;
- (void)resetPasswordCancel;
- (void)resetPasswordSuccess;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)BackToRootView;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

