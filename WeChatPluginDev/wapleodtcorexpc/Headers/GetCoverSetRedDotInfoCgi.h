//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol GetCoverSetRedDotInfoCgiDelegate;

@interface GetCoverSetRedDotInfoCgi
{
    id <GetCoverSetRedDotInfoCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GetCoverSetRedDotInfoCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (unsigned long long)getCgiNewDNSBusinessType;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)startRequest;

@end

