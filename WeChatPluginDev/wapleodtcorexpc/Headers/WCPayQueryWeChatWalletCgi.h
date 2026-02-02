//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayQueryWeChatWalletCgiDelegate;

@interface WCPayQueryWeChatWalletCgi
{
    _Bool _m_isServerResponse;
    id <WCPayQueryWeChatWalletCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_isServerResponse; // @synthesize m_isServerResponse=_m_isServerResponse;
@property __weak id <WCPayQueryWeChatWalletCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (id)getLocalBalanceInfo;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)getWalletLocationInfo;
- (id)getInstalledAppList;
- (_Bool)isDcepAppInstalled;
- (void)startRequest:(id)arg1;

@end

