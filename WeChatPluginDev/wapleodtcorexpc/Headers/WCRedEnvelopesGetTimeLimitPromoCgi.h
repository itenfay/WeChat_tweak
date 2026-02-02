//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCRedEnvelopesGetTimeLimitPromoCgiDelegate;

@interface WCRedEnvelopesGetTimeLimitPromoCgi
{
    id <WCRedEnvelopesGetTimeLimitPromoCgiDelegate> m_delegate;
}

+ (id)GetLastTimeLimitPromoResponse;
- (void).cxx_destruct;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void)saveTimeLimitPromotion:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)startWithRequest:(id)arg1;

@end

