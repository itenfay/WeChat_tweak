//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TokeMess;
@protocol WCPayGetZeroPayTokenCgiDelegate;

@interface WCPayGetZeroPayTokenCgi
{
    unsigned int _use_touch;
    NSString *_password;
    TokeMess *_tokenMess;
    NSString *_fingerdata;
    id <WCPayGetZeroPayTokenCgiDelegate> _m_cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayGetZeroPayTokenCgiDelegate> m_cgiDelegate; // @synthesize m_cgiDelegate=_m_cgiDelegate;
@property(copy, nonatomic) NSString *fingerdata; // @synthesize fingerdata=_fingerdata;
@property(nonatomic) unsigned int use_touch; // @synthesize use_touch=_use_touch;
@property(retain, nonatomic) TokeMess *tokenMess; // @synthesize tokenMess=_tokenMess;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)startRequest;
- (id)init;

@end

