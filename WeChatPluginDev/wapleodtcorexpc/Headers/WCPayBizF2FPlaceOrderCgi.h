//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayBizF2FPlaceOrderCgiDelegate;

@interface WCPayBizF2FPlaceOrderCgi
{
    id <WCPayBizF2FPlaceOrderCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayBizF2FPlaceOrderCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startSendRequest;
- (id)initPlaceOrderCgiWithDelegate:(id)arg1 request:(id)arg2;

@end

