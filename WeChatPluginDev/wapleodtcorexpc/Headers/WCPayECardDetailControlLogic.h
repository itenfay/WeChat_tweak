//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, QryCancelECardDescRes;
@protocol WCPayECardDetailControlLogicDelegate;

@interface WCPayECardDetailControlLogic
{
    id <WCPayECardDetailControlLogicDelegate> _delegate;
    QryCancelECardDescRes *_cancelDetail;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QryCancelECardDescRes *cancelDetail; // @synthesize cancelDetail=_cancelDetail;
@property(nonatomic) __weak id <WCPayECardDetailControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)successVCFinished:(id)arg1;
- (void)OnUnBindCard:(id)arg1 Error:(id)arg2;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)ecardDetailVC:(id)arg1 didClickCloseWith:(id)arg2;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
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

