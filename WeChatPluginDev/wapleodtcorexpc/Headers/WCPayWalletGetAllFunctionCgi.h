//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayWalletGetAllFunctionCgiDelegate;

@interface WCPayWalletGetAllFunctionCgi
{
    id <WCPayWalletGetAllFunctionCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayWalletGetAllFunctionCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)callDelegate:(id)arg1;
- (void)startRequest;
- (id)cachePath;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;

@end

