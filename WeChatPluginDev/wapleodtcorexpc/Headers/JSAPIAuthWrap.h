//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JSAPIAuthInfo, JSScopeAuthInfo, NSData, NSString;

@interface JSAPIAuthWrap : NSObject
{
    NSString *_url;
    NSString *_apiName;
    NSString *_appId;
    NSString *_timeStamp;
    NSString *_nouce;
    NSString *_scope;
    NSString *_ticket;
    NSString *_signature;
    NSData *_apiArgs;
    NSString *_signatureMethod;
    long long _signatureType;
    JSAPIAuthInfo *_authInfo;
    JSScopeAuthInfo *_scopeAuthInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSScopeAuthInfo *scopeAuthInfo; // @synthesize scopeAuthInfo=_scopeAuthInfo;
@property(retain, nonatomic) JSAPIAuthInfo *authInfo; // @synthesize authInfo=_authInfo;
@property(nonatomic) long long signatureType; // @synthesize signatureType=_signatureType;
@property(retain, nonatomic) NSString *signatureMethod; // @synthesize signatureMethod=_signatureMethod;
@property(retain, nonatomic) NSData *apiArgs; // @synthesize apiArgs=_apiArgs;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) NSString *nouce; // @synthesize nouce=_nouce;
@property(retain, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;

@end

