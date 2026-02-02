//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface JSAPIRealtimeVerifyRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *commitUrl; // @dynamic commitUrl;
@property(retain, nonatomic) NSData *jsapiArgs; // @dynamic jsapiArgs;
@property(retain, nonatomic) NSString *jsapiName; // @dynamic jsapiName;
@property(retain, nonatomic) NSString *noncestr; // @dynamic noncestr;
@property(nonatomic) unsigned int requestId; // @dynamic requestId;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;
@property(retain, nonatomic) NSString *signatureMethod; // @dynamic signatureMethod;
@property(retain, nonatomic) NSString *timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

