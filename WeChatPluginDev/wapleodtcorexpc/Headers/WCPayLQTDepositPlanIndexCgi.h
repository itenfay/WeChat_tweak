//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayLQTDepositPlanIndexCgiDelegate;

@interface WCPayLQTDepositPlanIndexCgi
{
    _Bool _fromServer;
    id <WCPayLQTDepositPlanIndexCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property _Bool fromServer; // @synthesize fromServer=_fromServer;
@property __weak id <WCPayLQTDepositPlanIndexCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequestWithCache:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

