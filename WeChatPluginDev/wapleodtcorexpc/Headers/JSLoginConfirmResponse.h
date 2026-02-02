//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, JSAPIBaseResponse, NSString;

@interface JSLoginConfirmResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *code; // @dynamic code;
@property(retain, nonatomic) JSAPIBaseResponse *jsapiBaseresponse; // @dynamic jsapiBaseresponse;
@property(nonatomic) unsigned int lifespan; // @dynamic lifespan;
@property(retain, nonatomic) NSString *openid; // @dynamic openid;
@property(retain, nonatomic) NSString *sessionKey; // @dynamic sessionKey;
@property(retain, nonatomic) NSString *sessionTicket; // @dynamic sessionTicket;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;
@property(retain, nonatomic) NSString *state; // @dynamic state;

@end

