//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WABizF2FRequestPaymentCgiDelegate;

@interface WABizF2FRequestPaymentCgi : NSObject
{
    id <WABizF2FRequestPaymentCgiDelegate> m_delegate;
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

