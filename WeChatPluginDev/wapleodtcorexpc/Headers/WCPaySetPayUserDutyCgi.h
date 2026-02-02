//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPaySetPayUserDutyCgiDelegate;

@interface WCPaySetPayUserDutyCgi
{
    id <WCPaySetPayUserDutyCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPaySetPayUserDutyCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)didGetTenPayError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1;

@end

