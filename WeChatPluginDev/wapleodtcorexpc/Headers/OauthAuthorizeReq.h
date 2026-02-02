//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface OauthAuthorizeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int autoOauth; // @dynamic autoOauth;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bizUsername; // @dynamic bizUsername;
@property(retain, nonatomic) NSString *oauthUrl; // @dynamic oauthUrl;
@property(retain, nonatomic) NSString *referer; // @dynamic referer;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int subscene; // @dynamic subscene;

@end

