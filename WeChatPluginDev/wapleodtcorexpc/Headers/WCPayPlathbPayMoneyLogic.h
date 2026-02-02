//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayPayMoneyLogic;
@protocol WCPayPlathbPayMoneyLogicDelegate;

@interface WCPayPlathbPayMoneyLogic
{
    _Bool _bIsPayMoneySucc;
    id <WCPayPlathbPayMoneyLogicDelegate> _delegate;
    NSString *_prepayId;
    WCPayPayMoneyLogic *_paymoneyLogic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsPayMoneySucc; // @synthesize bIsPayMoneySucc=_bIsPayMoneySucc;
@property(retain, nonatomic) WCPayPayMoneyLogic *paymoneyLogic; // @synthesize paymoneyLogic=_paymoneyLogic;
@property(retain, nonatomic) NSString *prepayId; // @synthesize prepayId=_prepayId;
@property(nonatomic) __weak id <WCPayPlathbPayMoneyLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gotoViewController:(id)arg1;
- (void)onPayMoneyLogicDidStop;
- (void)startLogic;
- (void)stopLogic;
- (id)initWithPrepayId:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

