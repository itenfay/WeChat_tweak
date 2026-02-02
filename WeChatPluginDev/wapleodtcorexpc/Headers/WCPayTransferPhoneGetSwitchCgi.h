//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayTransferPhoneGetSwitchCgiDelegate;

@interface WCPayTransferPhoneGetSwitchCgi
{
    _Bool _fromServer;
    id <WCPayTransferPhoneGetSwitchCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property _Bool fromServer; // @synthesize fromServer=_fromServer;
@property __weak id <WCPayTransferPhoneGetSwitchCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest:(id)arg1 delegate:(id)arg2;
- (id)init;

@end

