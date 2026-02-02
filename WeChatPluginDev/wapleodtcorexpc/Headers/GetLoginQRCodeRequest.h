//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface GetLoginQRCodeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(nonatomic) unsigned int extDevLoginType; // @dynamic extDevLoginType;
@property(retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo; // @dynamic extSpamInfo;
@property(retain, nonatomic) NSString *hardwareExtra; // @dynamic hardwareExtra;
@property(retain, nonatomic) SKBuiltinBuffer_t *msgContextPubKey; // @dynamic msgContextPubKey;
@property(nonatomic) unsigned int opcode; // @dynamic opcode;
@property(retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey; // @dynamic randomEncryKey;
@property(retain, nonatomic) NSString *softType; // @dynamic softType;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

