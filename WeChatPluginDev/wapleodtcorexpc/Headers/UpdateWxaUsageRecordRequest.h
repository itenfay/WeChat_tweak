//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface UpdateWxaUsageRecordRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int commuseFlag; // @dynamic commuseFlag;
@property(nonatomic) unsigned int isFromBackground; // @dynamic isFromBackground;
@property(nonatomic) unsigned int opType; // @dynamic opType;
@property(nonatomic) unsigned int reason; // @dynamic reason;
@property(nonatomic) unsigned int recordType; // @dynamic recordType;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(nonatomic) unsigned int versionType; // @dynamic versionType;

@end

