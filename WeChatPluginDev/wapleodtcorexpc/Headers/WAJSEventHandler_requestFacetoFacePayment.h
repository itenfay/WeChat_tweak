//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, WCPayF2FMiniProgramConfirmRcvrCgi, WCPayTransferMoneyControlLogic;

@interface WAJSEventHandler_requestFacetoFacePayment
{
    WCPayF2FMiniProgramConfirmRcvrCgi *_confirmRcvrCgi;
    WCPayTransferMoneyControlLogic *_transferMoneyControlLogic;
    UIButton *_bigBlockBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *bigBlockBtn; // @synthesize bigBlockBtn=_bigBlockBtn;
@property(retain, nonatomic) WCPayTransferMoneyControlLogic *transferMoneyControlLogic; // @synthesize transferMoneyControlLogic=_transferMoneyControlLogic;
@property(retain, nonatomic) WCPayF2FMiniProgramConfirmRcvrCgi *confirmRcvrCgi; // @synthesize confirmRcvrCgi=_confirmRcvrCgi;
- (void)dealloc;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onWCPayF2FReceiveModalViewClickConfirmBtn:(id)arg1;
- (void)onWCPayF2FReceiveModalViewCancel;
- (id)kvLogStringWithActionType:(unsigned int)arg1;
- (void)onConfirmRcvrCgiFail;
- (void)onWCPayF2FMiniProgramConfirmRcvrCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayF2FMiniProgramConfirmRcvrCgiResponseOK:(id)arg1;
- (void)blockAction:(id)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

