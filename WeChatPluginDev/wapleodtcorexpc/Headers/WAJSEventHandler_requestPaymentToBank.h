//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface WAJSEventHandler_requestPaymentToBank
{
    NSDictionary *_param;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *param; // @synthesize param=_param;
- (void)onWCPayCheckoutFail:(id)arg1 dicResult:(id)arg2;
- (void)onWCPayCheckoutSuccess:(id)arg1;
- (id)getWCPayCheckoutParam;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

