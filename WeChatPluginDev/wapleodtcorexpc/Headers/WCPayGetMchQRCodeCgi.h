//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayGetMchQRCodeCgiDelegate;

@interface WCPayGetMchQRCodeCgi : NSObject
{
    id <WCPayGetMchQRCodeCgiDelegate> _cgiDelegate;
}

@property(nonatomic) __weak id <WCPayGetMchQRCodeCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)failWithNetworking:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequestWithLoadCacheMode:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1 request:(id)arg2;

@end

