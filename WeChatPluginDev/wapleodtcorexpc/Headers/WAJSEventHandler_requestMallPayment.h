//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayMallRequestPaymentControlLogic;

@interface WAJSEventHandler_requestMallPayment
{
    WCPayMallRequestPaymentControlLogic *_mallRequestPaymentControlLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayMallRequestPaymentControlLogic *mallRequestPaymentControlLogic; // @synthesize mallRequestPaymentControlLogic=_mallRequestPaymentControlLogic;
- (void)mallPaymentLogicDidFailWithResult:(id)arg1;
- (void)mallPaymentLogicDidPaySucc;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

