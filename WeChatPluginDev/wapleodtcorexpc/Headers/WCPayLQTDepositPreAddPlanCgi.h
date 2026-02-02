//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayLQTDepositPreAddPlanCgiDelegate;

@interface WCPayLQTDepositPreAddPlanCgi
{
    id <WCPayLQTDepositPreAddPlanCgiDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)cacheResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequestWithCache:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

