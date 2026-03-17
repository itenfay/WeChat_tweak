//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayLQTAutoChargeCloseCgiDelegate;

@interface WCPayLQTAutoChargeCloseCgi : NSObject
{
    id <WCPayLQTAutoChargeCloseCgiDelegate> _cgiDelegate;
}

@property(nonatomic) __weak id <WCPayLQTAutoChargeCloseCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1 request:(id)arg2;

@end

