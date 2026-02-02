//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayResetPwdByFaceCgiDelegate;

@interface WCPayResetPwdByFaceCgi
{
    NSString *_auth_token;
    NSString *_passwd;
    id <WCPayResetPwdByFaceCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayResetPwdByFaceCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
@property(retain, nonatomic) NSString *passwd; // @synthesize passwd=_passwd;
@property(retain, nonatomic) NSString *auth_token; // @synthesize auth_token=_auth_token;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1;

@end

