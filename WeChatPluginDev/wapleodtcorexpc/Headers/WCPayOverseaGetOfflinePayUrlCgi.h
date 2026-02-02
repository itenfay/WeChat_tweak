//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayOverseaGetOfflinePayUrlCgiDelegate;

@interface WCPayOverseaGetOfflinePayUrlCgi
{
    id <WCPayOverseaGetOfflinePayUrlCgiDelegate> m_delegate;
    _Bool _didResponse;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didResponse; // @synthesize didResponse=_didResponse;
- (void)cacheResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1;

@end

