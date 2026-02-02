//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayF2FJSAPIAuthCgiDelegate;

@interface WCPayF2FJSAPIAuthenCgi
{
    NSString *_appId;
    NSString *_package;
    NSString *_sign;
    NSString *_noncestr;
    NSString *_timeStamp;
    id <WCPayF2FJSAPIAuthCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayF2FJSAPIAuthCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
@property(retain, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *noncestr; // @synthesize noncestr=_noncestr;
@property(retain, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(retain, nonatomic) NSString *package; // @synthesize package=_package;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)callDelegateWithRespRetcode:(int)arg1 retmsg:(id)arg2;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)startSendRequest;
- (id)initWithDelegate:(id)arg1;

@end

