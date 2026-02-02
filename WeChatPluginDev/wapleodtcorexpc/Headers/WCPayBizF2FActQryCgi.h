//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayBizF2FActQryCgiDelegate;

@interface WCPayBizF2FActQryCgi
{
    id <WCPayBizF2FActQryCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayBizF2FActQryCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startSendRequest;
- (id)initActQryCgiWithDelegate:(id)arg1 request:(id)arg2;

@end

