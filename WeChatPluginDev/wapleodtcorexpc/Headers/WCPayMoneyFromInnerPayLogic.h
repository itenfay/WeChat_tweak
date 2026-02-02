//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayInnerPayRequestStruct, WCPayPayMoneyLogic;

@interface WCPayMoneyFromInnerPayLogic
{
    WCPayPayMoneyLogic *m_payLogic;
    WCPayInnerPayRequestStruct *m_oWCPayInnerPayRequestStruct;
    NSString *m_dicExtraInfo;
    NSString *m_nsRequestKey;
    unsigned int m_eSene;
}

- (void).cxx_destruct;
- (void)OnGetGenPaypreErrorRequest:(id)arg1 ErrorMsg:(id)arg2;
- (void)OnGetGenPaypreRequest:(id)arg1 SessionID:(id)arg2 AppSource:(id)arg3 WalletMixSpGenprepayResp:(id)arg4;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (_Bool)gotoViewController:(id)arg1;
- (id)getInnerPayResponseStruct;
- (void)stopLogic;
- (void)startLogic;
- (id)initWithInnerPayRequest:(id)arg1 extraInfo:(id)arg2;
- (id)initWithInnerPayParam:(id)arg1;
- (id)initWithInnerPayRequest:(id)arg1 Scene:(long long)arg2;
- (id)initWithInnerPayRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

