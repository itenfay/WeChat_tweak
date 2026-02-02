//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayF2FQrcodeCgiDelegate;

@interface WCPayF2FQrcodeCgi
{
    id <WCPayF2FQrcodeCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayF2FQrcodeCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)cacheResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequestWithLocalCache:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1;

@end

