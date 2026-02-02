//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface GetRedPacketFissionReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int msgCreateTime; // @dynamic msgCreateTime;
@property(retain, nonatomic) NSData *packetFissionInfo; // @dynamic packetFissionInfo;
@property(retain, nonatomic) NSString *packetId; // @dynamic packetId;
@property(nonatomic) unsigned int packetSource; // @dynamic packetSource;
@property(nonatomic) unsigned int sceneType; // @dynamic sceneType;
@property(retain, nonatomic) NSString *senderUsername; // @dynamic senderUsername;

@end

