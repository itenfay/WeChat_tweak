//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SecurityInfoAuthrizeLogic;

@interface NewLifePostVerifyHandler
{
    SecurityInfoAuthrizeLogic *_authLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SecurityInfoAuthrizeLogic *authLogic; // @synthesize authLogic=_authLogic;
- (_Bool)shouldShowWxPayAlert:(id)arg1;
- (void)checkWxPay:(id)arg1 response:(id)arg2 contact:(id)arg3;
- (void)handleRequest:(id)arg1;

@end

