//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayGetGDPRInfoCgiDelegate;

@interface WCPayGetGDPRInfoCgi
{
    id <WCPayGetGDPRInfoCgiDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)startRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

