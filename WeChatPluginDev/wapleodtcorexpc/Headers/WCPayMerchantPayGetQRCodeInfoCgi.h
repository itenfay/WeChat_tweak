//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayMerchantPayGetQRCodeInfoCgiDelegate;

@interface WCPayMerchantPayGetQRCodeInfoCgi
{
    id <WCPayMerchantPayGetQRCodeInfoCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayMerchantPayGetQRCodeInfoCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

