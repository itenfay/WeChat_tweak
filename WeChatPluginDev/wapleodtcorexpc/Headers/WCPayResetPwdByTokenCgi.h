//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayResetPwdByTokenCgiDelegate;

@interface WCPayResetPwdByTokenCgi
{
    NSString *_token;
    NSString *_password;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayResetPwdByTokenCgiDelegate> delegate; // @dynamic delegate;

@end

