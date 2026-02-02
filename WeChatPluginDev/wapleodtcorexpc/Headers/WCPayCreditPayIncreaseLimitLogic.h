//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCPayCreditPayIncreaseLimitLogic
{
    _Bool m_bNeedQueryCreditInfo;
}

@property(nonatomic) _Bool m_bNeedQueryCreditInfo; // @synthesize m_bNeedQueryCreditInfo;
- (void)OnQueryWXCreditCardInfo:(id)arg1 Error:(id)arg2;
- (void)OnPayPasswordError:(id)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned int)arg3;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)OnCommitWXCreditAnswer:(id)arg1 Error:(id)arg2;
- (void)OnQueryWXCreditQuestion:(id)arg1 Error:(id)arg2;
- (void)WCPayCreditPayIncreaseLimitSucViewControllerBack;
- (void)WCPayCreditPayAnswerQuestionViewControllerNext:(id)arg1;
- (void)WCPayCreditPayAnswerQuestionViewControllerBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)startLogic;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

