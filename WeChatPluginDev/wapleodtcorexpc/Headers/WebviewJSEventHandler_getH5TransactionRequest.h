//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString, WCPayPayMoneyFromOverseaH5WalletLogic;

@interface WebviewJSEventHandler_getH5TransactionRequest
{
    _Bool _closeWebAfterPayDetailBack;
    WCPayPayMoneyFromOverseaH5WalletLogic *_controlLogic;
    JSEvent *_event;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) WCPayPayMoneyFromOverseaH5WalletLogic *controlLogic; // @synthesize controlLogic=_controlLogic;
@property(nonatomic) _Bool closeWebAfterPayDetailBack; // @synthesize closeWebAfterPayDetailBack=_closeWebAfterPayDetailBack;
- (void)call:(id)arg1;
- (id)getActivityInfo:(id)arg1;
- (id)getDiscountArray:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerRightActionBack:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerBack:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)showOrderDetail:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)sendResult:(_Bool)arg1 jsEvent:(id)arg2;
- (_Bool)startKindaShowOrderDetail:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

