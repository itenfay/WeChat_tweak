//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayTransferPhoneSuccPageCgiDelegate;

@interface WCPayTransferPhoneSuccPageCgi
{
    id <WCPayTransferPhoneSuccPageCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property __weak id <WCPayTransferPhoneSuccPageCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest:(id)arg1 delegate:(id)arg2;
- (id)init;

@end

