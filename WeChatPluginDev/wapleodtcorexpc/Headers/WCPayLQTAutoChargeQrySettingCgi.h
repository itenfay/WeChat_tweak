//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayLQTAutoChargeQrySettingCgiDelegate;

@interface WCPayLQTAutoChargeQrySettingCgi
{
    id <WCPayLQTAutoChargeQrySettingCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayLQTAutoChargeQrySettingCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)cacheResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1 request:(id)arg2;

@end

