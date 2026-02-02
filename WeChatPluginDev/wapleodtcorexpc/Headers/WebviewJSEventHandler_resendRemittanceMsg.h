//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString, WCPayUnionTransferNotifyCgi;

@interface WebviewJSEventHandler_resendRemittanceMsg
{
    _Bool _bIsOpenIM;
    JSEvent *_event;
    WCPayUnionTransferNotifyCgi *_unionNotifyCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayUnionTransferNotifyCgi *unionNotifyCgi; // @synthesize unionNotifyCgi=_unionNotifyCgi;
@property(nonatomic) _Bool bIsOpenIM; // @synthesize bIsOpenIM=_bIsOpenIM;
@property(retain, nonatomic) JSEvent *event; // @synthesize event=_event;
- (void)onWCPayUnionTransferNotifyCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayUnionTransferNotifyCgiResponseOK:(id)arg1;
- (void)handleError:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

