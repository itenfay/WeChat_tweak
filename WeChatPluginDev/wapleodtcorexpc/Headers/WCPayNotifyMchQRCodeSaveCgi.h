//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayNotifyMchQRCodeSaveCgiDelegate;

@interface WCPayNotifyMchQRCodeSaveCgi
{
    id <WCPayNotifyMchQRCodeSaveCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayNotifyMchQRCodeSaveCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)failWithNetworking:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)initWithDelegaet:(id)arg1 request:(id)arg2;

@end

