//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData;

@interface ExtDeviceOpLogReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int extDeviceClientVersion; // @dynamic extDeviceClientVersion;
@property(retain, nonatomic) NSData *extDeviceId; // @dynamic extDeviceId;
@property(nonatomic) unsigned int opcode; // @dynamic opcode;
@property(nonatomic) unsigned int setting; // @dynamic setting;

@end

