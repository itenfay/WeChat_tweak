//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPaySaveQrcodeCgiDelegate;

@interface WCPaySaveQrcodeCgi
{
    id <WCPaySaveQrcodeCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <WCPaySaveQrcodeCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithDelegate:(id)arg1 request:(id)arg2;

@end

