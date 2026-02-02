//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface BindPassKeyRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *attestedCredentialData; // @dynamic attestedCredentialData;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int opcode; // @dynamic opcode;
@property(retain, nonatomic) NSString *verifyId; // @dynamic verifyId;

@end

