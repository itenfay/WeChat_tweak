//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCPaySendBindCardAwardCgiRequest;
@protocol WCPaySendBindCardAwardCgiDelegate;

@interface WCPaySendBindCardAwardCgi
{
    WCPaySendBindCardAwardCgiRequest *_m_queryRequest;
    id <WCPaySendBindCardAwardCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPaySendBindCardAwardCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) WCPaySendBindCardAwardCgiRequest *m_queryRequest; // @synthesize m_queryRequest=_m_queryRequest;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)startRequest;
- (id)init;

@end

