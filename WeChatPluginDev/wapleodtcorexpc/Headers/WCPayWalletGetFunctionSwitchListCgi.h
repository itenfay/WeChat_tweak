//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayWalletGetFunctionSwitchListCgiDelegate;

@interface WCPayWalletGetFunctionSwitchListCgi
{
    id <WCPayWalletGetFunctionSwitchListCgiDelegate> m_delegate;
}

- (void).cxx_destruct;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

