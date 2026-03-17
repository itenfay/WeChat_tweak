//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayT2BCGetBankInfoCgiDelegate;

@interface WCPayT2BCGetBankInfoCgi : NSObject
{
    id <WCPayT2BCGetBankInfoCgiDelegate> m_delegate;
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

