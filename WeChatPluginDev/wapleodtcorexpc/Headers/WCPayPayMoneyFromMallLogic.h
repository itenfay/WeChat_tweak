//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayMallPayStruct, WCPayPayMoneyLogic;

@interface WCPayPayMoneyFromMallLogic
{
    WCPayMallPayStruct *m_oWCPayMallPayStruct;
    WCPayPayMoneyLogic *m_payLogic;
}

- (void).cxx_destruct;
- (void)call:(id)arg1;
- (void)OnGetMallPrepayRequest:(id)arg1 AppSource:(id)arg2 Error:(id)arg3;
- (_Bool)gotoViewController:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)stopLogic;
- (void)startLogic;
- (void)setWCPayMallPayStruct:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

