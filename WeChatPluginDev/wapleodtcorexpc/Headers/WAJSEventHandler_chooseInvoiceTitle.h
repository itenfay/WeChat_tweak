//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSEventHandler_chooseInvoiceTitle
{
}

- (void)OnJsapiAddInvoiceFail;
- (void)OnJsapiAddInvoiceCancel;
- (void)OnJsapiAddInvoiceSuccess:(id)arg1;
- (void)onChooseCancel;
- (void)onChooseSuccess:(id)arg1;
- (void)chooseFailed;
- (void)OnGetInvoiceRet:(_Bool)arg1 andResult:(id)arg2 fromScene:(unsigned int)arg3;
- (void)OnAskAuthorizationFailure:(id)arg1 ForAuthInfo:(id)arg2;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)arg1;
- (void)startInvoice;
- (void)handleJSEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

