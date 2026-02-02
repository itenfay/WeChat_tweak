//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WebviewAuthorizationInfo : NSObject
{
    NSString *_appId;
    NSString *_url;
    NSString *_api;
    NSString *_scope;
    NSString *_signature;
    NSString *_signatureMethod;
    NSString *_timeStamp;
    NSString *_nonce;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *signatureMethod; // @synthesize signatureMethod=_signatureMethod;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) NSString *api; // @synthesize api=_api;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;

@end

