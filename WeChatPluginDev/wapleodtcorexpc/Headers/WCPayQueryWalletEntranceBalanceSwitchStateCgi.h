//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayQueryWalletEntranceBalanceSwitchStateCgiDelegate;

@interface WCPayQueryWalletEntranceBalanceSwitchStateCgi
{
    _Bool _m_isServerResponse;
    id <WCPayQueryWalletEntranceBalanceSwitchStateCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_isServerResponse; // @synthesize m_isServerResponse=_m_isServerResponse;
@property __weak id <WCPayQueryWalletEntranceBalanceSwitchStateCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)startRequest;

@end

