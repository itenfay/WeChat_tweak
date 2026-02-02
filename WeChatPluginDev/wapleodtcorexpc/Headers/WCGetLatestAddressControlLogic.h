//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString, WCAddressAuthenticationSturct, WCAddressBaseAddress;

@interface WCGetLatestAddressControlLogic
{
    JSEvent *m_jsEvent;
    WCAddressAuthenticationSturct *m_oWCAddressAuthenticationSturct;
    WCAddressBaseAddress *m_oWCAddressBaseAddress;
    NSString *m_nsAppUserName;
}

- (void).cxx_destruct;
- (void)OnNotAcceptGetLatestAddress;
- (void)OnAcceptGetLatestAddress;
- (void)OnGetLatestAddress:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (void)stopLogic;
- (void)startLogic;
- (void)handleGetLatestAddress;
- (id)initWithJSEvent:(id)arg1 AuthenticationInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

