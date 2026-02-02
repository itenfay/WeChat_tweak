//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayLQTClickPurchaseCgiDelegate;

@interface WCPayLQTClickPurchaseCgi
{
    id <WCPayLQTClickPurchaseCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayLQTClickPurchaseCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (id)processCacheDataBeforeSetAsResponse:(id)arg1;
- (void)cacheResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1 request:(id)arg2 useCache:(_Bool)arg3;

@end

