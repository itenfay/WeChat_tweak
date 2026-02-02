//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSData, NSString, WCPayCheckUserAuthJSApiCgi;
@protocol WCPayJSApiVerifyDelegate;

@interface WCPayJSApiVerifyPayPasswordControlLogic
{
    JSEvent *m_jsEvent;
    long long m_enWCPayCheckAuthorityScene;
    NSString *m_nsAppToken;
    NSString *m_nsResultToken;
    NSString *m_nsRelationKey;
    unsigned int m_verifyPayPwdStatus;
    _Bool _m_bHasBiotricAuth;
    id <WCPayJSApiVerifyDelegate> _paramDelegate;
    WCPayCheckUserAuthJSApiCgi *_checkUserAuthJSApiCgi;
    NSData *_m_lastAuthBiotricData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bHasBiotricAuth; // @synthesize m_bHasBiotricAuth=_m_bHasBiotricAuth;
@property(retain, nonatomic) NSData *m_lastAuthBiotricData; // @synthesize m_lastAuthBiotricData=_m_lastAuthBiotricData;
@property(retain, nonatomic) WCPayCheckUserAuthJSApiCgi *checkUserAuthJSApiCgi; // @synthesize checkUserAuthJSApiCgi=_checkUserAuthJSApiCgi;
@property(nonatomic) __weak id <WCPayJSApiVerifyDelegate> paramDelegate; // @synthesize paramDelegate=_paramDelegate;
- (void)OnGetCheckPayPwdVerifyCodeByToken:(id)arg1 Error:(id)arg2;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)OnGetCheckPayPwdByToken:(id)arg1 Error:(id)arg2;
- (void)onAlertResetPwdConfirm:(id)arg1;
- (void)onAlertResetPwdCancel:(id)arg1;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (_Bool)isNewPwdLoading;
- (void)verifyPayBiotricNext:(id)arg1 signature:(id)arg2 signSrc:(id)arg3;
- (void)verifyPayBiotricNext:(id)arg1;
- (void)verifyPayPwdNext:(id)arg1;
- (void)OnWCPayNewPwdViewControllerBack;
- (void)checkStopLogic;
- (void)stopLogic;
- (void)OnGetCheckUserAuthJSApiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetCheckUserAuthJSApiResponseOK:(id)arg1;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

