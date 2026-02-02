//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, JsApiRequest, NSString, SKBuiltinBuffer_t;

@interface MMCgiTransferRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinBuffer_t *clientCheckData; // @dynamic clientCheckData;
@property(retain, nonatomic) NSString *h5Authtoken; // @dynamic h5Authtoken;
@property(retain, nonatomic) NSString *h5Url; // @dynamic h5Url;
@property(nonatomic) unsigned int jsApiControlBytesIndex; // @dynamic jsApiControlBytesIndex;
@property(retain, nonatomic) JsApiRequest *jsApiRequest; // @dynamic jsApiRequest;
@property(retain, nonatomic) NSString *pubKeyToken; // @dynamic pubKeyToken;
@property(retain, nonatomic) NSString *routeTag; // @dynamic routeTag;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *scope; // @dynamic scope;

@end

