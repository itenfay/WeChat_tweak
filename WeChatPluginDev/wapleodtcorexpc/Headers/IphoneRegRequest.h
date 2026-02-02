//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface IphoneRegRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int clientKeyTag; // @dynamic clientKeyTag;
@property(retain, nonatomic) SKBuiltinBuffer_t *clientPubKey; // @dynamic clientPubKey;
@property(nonatomic) unsigned int entrance; // @dynamic entrance;
@property(retain, nonatomic) NSString *sound; // @dynamic sound;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) NSString *token; // @dynamic token;
@property(nonatomic) unsigned int tokenCert; // @dynamic tokenCert;
@property(nonatomic) unsigned int tokenEnv; // @dynamic tokenEnv;
@property(nonatomic) unsigned int tokenScene; // @dynamic tokenScene;
@property(retain, nonatomic) NSString *voipSound; // @dynamic voipSound;

@end

