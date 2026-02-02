//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayPaymentFunctionSearchCGIDelegate;

@interface WCPayPaymentFunctionSearchCGI
{
    id <WCPayPaymentFunctionSearchCGIDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayPaymentFunctionSearchCGIDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

