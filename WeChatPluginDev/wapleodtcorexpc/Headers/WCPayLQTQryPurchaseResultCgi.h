//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayLQTQryPurchaaseResultCgiDelegate;

@interface WCPayLQTQryPurchaseResultCgi
{
    id <WCPayLQTQryPurchaaseResultCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayLQTQryPurchaaseResultCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startSendRequest;
- (id)initWithDelegate:(id)arg1 request:(id)arg2;

@end

