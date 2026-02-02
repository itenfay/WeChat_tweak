//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayMchShortTermQrcodeCgiDelegate;

@interface WCPayMchShortTermQrcodeCgi
{
    id <WCPayMchShortTermQrcodeCgiDelegate> _m_delegate;
    long long _request_scene;
}

- (void).cxx_destruct;
@property(nonatomic) long long request_scene; // @synthesize request_scene=_request_scene;
@property(nonatomic) __weak id <WCPayMchShortTermQrcodeCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)didFailWithError:(id)arg1;
- (void)failWithNetworking:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

