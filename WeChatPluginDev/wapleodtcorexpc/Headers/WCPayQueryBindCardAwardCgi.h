//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCPayQueryBindCardAwardCgiRequest;
@protocol WCPayQueryBindCardAwardCgiDelegate;

@interface WCPayQueryBindCardAwardCgi
{
    WCPayQueryBindCardAwardCgiRequest *_m_queryRequest;
    id <WCPayQueryBindCardAwardCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayQueryBindCardAwardCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) WCPayQueryBindCardAwardCgiRequest *m_queryRequest; // @synthesize m_queryRequest=_m_queryRequest;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)startRequest;
- (id)init;

@end

