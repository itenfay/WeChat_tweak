//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class HoneyPayReceiverCardDetailViewController, NSString, WCPayGetPayPwdTokenCgi, WCPayQryHoneyPayCardDetailCgi, WCPayUnbindHoneyPayCardCgi;
@protocol HoneyPayReceiverCardDetailControlLogicDelegate;

@interface HoneyPayReceiverCardDetailControlLogic
{
    id <HoneyPayReceiverCardDetailControlLogicDelegate> _delegate;
    WCPayQryHoneyPayCardDetailCgi *_detailCgi;
    WCPayUnbindHoneyPayCardCgi *_unbindCgi;
    WCPayGetPayPwdTokenCgi *_getPayPwdTokenCgi;
    HoneyPayReceiverCardDetailViewController *_detailVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HoneyPayReceiverCardDetailViewController *detailVC; // @synthesize detailVC=_detailVC;
@property(retain, nonatomic) WCPayGetPayPwdTokenCgi *getPayPwdTokenCgi; // @synthesize getPayPwdTokenCgi=_getPayPwdTokenCgi;
@property(retain, nonatomic) WCPayUnbindHoneyPayCardCgi *unbindCgi; // @synthesize unbindCgi=_unbindCgi;
@property(retain, nonatomic) WCPayQryHoneyPayCardDetailCgi *detailCgi; // @synthesize detailCgi=_detailCgi;
@property(nonatomic) __weak id <HoneyPayReceiverCardDetailControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unbindHoneyPayCardCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)unbindHoneyPayCardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)qryHoneyPayCardDetailCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)qryHoneyPayCardDetailCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)getPayPwdTokenCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getPayPwdTokenCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)receiverCardDetailVCDidClickUnbindCard:(id)arg1;
- (void)requestDetail;
- (void)startLogic;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

