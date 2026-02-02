//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJILinkLoginParams : NSObject
{
    NSString *_authCode;
    NSString *_clientInfo;
    long long _loginType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long loginType; // @synthesize loginType=_loginType;
@property(readonly, copy, nonatomic) NSString *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, copy, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
- (id)initWithAuthCode:(id)arg1 clientInfo:(id)arg2 loginType:(long long)arg3;
- (id)initWithAuthCode:(id)arg1 clientInfo:(id)arg2;

@end

