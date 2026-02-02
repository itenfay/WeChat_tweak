//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class OrderQueryOrderRequest;
@protocol WCPayNFCCardQueryOrderCgiDelegate;

@interface WCPayNFCCardQueryOrderCgi
{
    id <WCPayNFCCardQueryOrderCgiDelegate> _m_delegate;
    unsigned long long _m_retryDelay;
    unsigned long long _m_maxRetryCount;
    unsigned long long _m_currentRetryCount;
    OrderQueryOrderRequest *_m_queryOrderRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OrderQueryOrderRequest *m_queryOrderRequest; // @synthesize m_queryOrderRequest=_m_queryOrderRequest;
@property unsigned long long m_currentRetryCount; // @synthesize m_currentRetryCount=_m_currentRetryCount;
@property unsigned long long m_maxRetryCount; // @synthesize m_maxRetryCount=_m_maxRetryCount;
@property unsigned long long m_retryDelay; // @synthesize m_retryDelay=_m_retryDelay;
@property(nonatomic) __weak id <WCPayNFCCardQueryOrderCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (void)startWithRequest:(id)arg1 retryDelay:(unsigned long long)arg2 maxRetryCount:(unsigned long long)arg3;
- (id)initWithDelegate:(id)arg1;

@end

