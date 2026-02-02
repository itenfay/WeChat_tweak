//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString, WCPaySelectWalletViewController, WCPayWalletInfo;

@interface WCPaySelectWalletLogic
{
    WCPaySelectWalletViewController *selectWalletViewController;
    WCPayWalletInfo *selectedWallet;
    JSEvent *m_jsEvent;
    unsigned int _scene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (void)OnSetUserWallet:(id)arg1;
- (void)OnQueryUserWallet:(id)arg1 Error:(id)arg2;
- (void)OnSelectWallet:(id)arg1;
- (void)OnSelectWalletBack;
- (void)stopLogic;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

