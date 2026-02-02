//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCAccountThirdAppRegisterControlLogic
{
    _Bool m_hasStartDownloadImage;
    _Bool m_fromLoginToReg;
    unsigned int m_lastPhoneRegLogicTag;
}

+ (void)ReportThirdAppLoginRegWithType:(int)arg1 action:(unsigned long long)arg2;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onNewRegOK;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)startDownloadHeadImageWithUrl:(id)arg1;
- (void)startGetThirdAppInfo;
- (void)handleThirdAppVerifyReturn:(id)arg1;
- (void)startThirdVerifyToken:(id)arg1;
- (void)onLoginFacebookBegan:(id)arg1;
- (void)onFBDidNotLogin:(_Bool)arg1;
- (void)startFacebookAuth;
- (void)reportAction:(unsigned long long)arg1;
- (void)callCancelLogic;
- (void)callFailLogicWithErrMsg:(id)arg1;
- (void)callGotoLoginLogicWithToken:(id)arg1;
- (void)callSuccessLogic;
- (void)startLogic;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

