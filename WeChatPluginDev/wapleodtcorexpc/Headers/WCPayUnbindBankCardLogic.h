//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString;

@interface WCPayUnbindBankCardLogic
{
    JSEvent *m_jsEvent;
    NSString *_unbindCardBindSerial;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *unbindCardBindSerial; // @synthesize unbindCardBindSerial=_unbindCardBindSerial;
- (void)stopLogic;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)BackToRootView;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnUnBindCard:(id)arg1 Error:(id)arg2;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
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

