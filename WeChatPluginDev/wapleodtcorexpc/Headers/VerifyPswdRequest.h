//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t, SKBuiltinString_t;

@interface VerifyPswdRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *authAuthKey; // @dynamic authAuthKey;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinString_t *imgCode; // @dynamic imgCode;
@property(retain, nonatomic) SKBuiltinString_t *imgEncryptKey; // @dynamic imgEncryptKey;
@property(retain, nonatomic) SKBuiltinString_t *imgSid; // @dynamic imgSid;
@property(retain, nonatomic) SKBuiltinBuffer_t *ksid; // @dynamic ksid;
@property(nonatomic) unsigned int opCode; // @dynamic opCode;
@property(retain, nonatomic) NSString *pwd1; // @dynamic pwd1;
@property(retain, nonatomic) NSString *pwd2; // @dynamic pwd2;
@property(nonatomic) unsigned int scence; // @dynamic scence;
@property(retain, nonatomic) SKBuiltinBuffer_t *wtloginReqBuff; // @dynamic wtloginReqBuff;

@end

