//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class HoneyPayGetCreateTokenSignCgi, HoneyPaySelectCardTypeViewController, NSString, WCPayCheckHoneyPayerCgi, WCPayCheckHoneyUserCgi, WCPayCreateHoneyPayCardCgi, WCPayGetPayPwdTokenCgi, WCPayPayPwdViewController;
@protocol HoneyPayCreateControlLogicDelegate;

@interface HoneyPayCreateControlLogic
{
    id <HoneyPayCreateControlLogicDelegate> _delegate;
    WCPayCheckHoneyPayerCgi *_checkPayerCgi;
    WCPayCheckHoneyUserCgi *_checkUserCgi;
    HoneyPayGetCreateTokenSignCgi *_getCreateTokenSignCgi;
    WCPayCreateHoneyPayCardCgi *_createCgi;
    WCPayGetPayPwdTokenCgi *_getPayPwdTokenCgi;
    HoneyPaySelectCardTypeViewController *_selectCardTypeVC;
    WCPayPayPwdViewController *_pwdVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayPayPwdViewController *pwdVC; // @synthesize pwdVC=_pwdVC;
@property(retain, nonatomic) HoneyPaySelectCardTypeViewController *selectCardTypeVC; // @synthesize selectCardTypeVC=_selectCardTypeVC;
@property(retain, nonatomic) WCPayGetPayPwdTokenCgi *getPayPwdTokenCgi; // @synthesize getPayPwdTokenCgi=_getPayPwdTokenCgi;
@property(retain, nonatomic) WCPayCreateHoneyPayCardCgi *createCgi; // @synthesize createCgi=_createCgi;
@property(retain, nonatomic) HoneyPayGetCreateTokenSignCgi *getCreateTokenSignCgi; // @synthesize getCreateTokenSignCgi=_getCreateTokenSignCgi;
@property(retain, nonatomic) WCPayCheckHoneyUserCgi *checkUserCgi; // @synthesize checkUserCgi=_checkUserCgi;
@property(retain, nonatomic) WCPayCheckHoneyPayerCgi *checkPayerCgi; // @synthesize checkPayerCgi=_checkPayerCgi;
@property(nonatomic) __weak id <HoneyPayCreateControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)createHoneyPayCardCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)createHoneyPayCardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)checkHoneyUserCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)checkHoneyUserCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)getCreateTokenSignCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getCreateTokenSignCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)checkHoneyPayerCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)checkHoneyPayerCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)getPayPwdTokenCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getPayPwdTokenCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)prepareCardVC:(id)arg1 didClickNextWithAmount:(id)arg2 wishing:(id)arg3;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)selectCardTypeVC:(id)arg1 didSelectCardType:(id)arg2;
- (void)OnRealnameVerifySuccess:(id)arg1;
- (void)selectSingleContactLogic:(id)arg1 didSelectContact:(id)arg2;
- (void)verifyPassword;
- (void)gotoModifyMaximumAmount;
- (void)dealloc;
- (void)startLogic;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

