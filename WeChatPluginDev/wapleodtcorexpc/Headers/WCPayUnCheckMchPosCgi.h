//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayUnCheckMchPosCgiDelegate;

@interface WCPayUnCheckMchPosCgi
{
    id <WCPayUnCheckMchPosCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayUnCheckMchPosCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;

@end

