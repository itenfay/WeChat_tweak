//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayLQTPurchaseFundCgiDelegate;

@interface WCPayLQTPurchaseFundCgi
{
    id <WCPayLQTPurchaseFundCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayLQTPurchaseFundCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startSendRequest;
- (id)initWithDelegate:(id)arg1 request:(id)arg2;

@end

