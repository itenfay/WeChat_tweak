//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t, SKBuiltinString_t;

@interface BindQQRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *imgCode; // @dynamic imgCode;
@property(retain, nonatomic) SKBuiltinString_t *imgEncryptKey; // @dynamic imgEncryptKey;
@property(retain, nonatomic) NSString *imgSid; // @dynamic imgSid;
@property(retain, nonatomic) SKBuiltinBuffer_t *ksid; // @dynamic ksid;
@property(nonatomic) unsigned int opcode; // @dynamic opcode;
@property(retain, nonatomic) NSString *pwd; // @dynamic pwd;
@property(retain, nonatomic) NSString *pwd2; // @dynamic pwd2;
@property(nonatomic) unsigned int qq; // @dynamic qq;
@property(retain, nonatomic) NSString *safeDeviceName; // @dynamic safeDeviceName;
@property(retain, nonatomic) NSString *safeDeviceType; // @dynamic safeDeviceType;
@property(nonatomic) unsigned int setAsMainAcct; // @dynamic setAsMainAcct;
@property(retain, nonatomic) SKBuiltinBuffer_t *wtloginReqBuff; // @dynamic wtloginReqBuff;

@end

