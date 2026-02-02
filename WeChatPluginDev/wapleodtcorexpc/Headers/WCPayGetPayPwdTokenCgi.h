//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TokeMess;
@protocol WCPayGetPayPwdTokenCgiDelegate;

@interface WCPayGetPayPwdTokenCgi
{
    NSString *_password;
    TokeMess *_tokenMess;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TokeMess *tokenMess; // @synthesize tokenMess=_tokenMess;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayGetPayPwdTokenCgiDelegate> delegate; // @dynamic delegate;

@end

