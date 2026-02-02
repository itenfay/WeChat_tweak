//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayLQTClickRedeemCgiDelegate;

@interface WCPayLQTClickRedeemCgi
{
    _Bool _fromServer;
    id <WCPayLQTClickRedeemCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property _Bool fromServer; // @synthesize fromServer=_fromServer;
@property(nonatomic) __weak id <WCPayLQTClickRedeemCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1 request:(id)arg2;

@end

