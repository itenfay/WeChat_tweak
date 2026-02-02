//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class OpenECardAuthReq;
@protocol WCPayOpenECardAuthCgiDelegate;

@interface WCPayOpenECardAuthCgi
{
    OpenECardAuthReq *_authRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OpenECardAuthReq *authRequest; // @synthesize authRequest=_authRequest;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)failWithECardCgiError:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayOpenECardAuthCgiDelegate> delegate; // @dynamic delegate;

@end

