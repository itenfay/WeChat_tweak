//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol HBBusinessCallbackCgiDelegate;

@interface HBBusinessCallbackCgi
{
    unsigned long long _requestType;
    id <HBBusinessCallbackCgiDelegate> _m_cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <HBBusinessCallbackCgiDelegate> m_cgiDelegate; // @synthesize m_cgiDelegate=_m_cgiDelegate;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 type:(unsigned long long)arg2;

@end

