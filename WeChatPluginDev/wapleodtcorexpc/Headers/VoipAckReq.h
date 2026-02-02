//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, VoipDeviceInfo, VoipRelayData;

@interface VoipAckReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int ackStatus; // @dynamic ackStatus;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *callerName; // @dynamic callerName;
@property(retain, nonatomic) VoipRelayData *capInfo; // @dynamic capInfo;
@property(retain, nonatomic) VoipDeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(retain, nonatomic) NSString *fromUsername; // @dynamic fromUsername;
@property(nonatomic) unsigned int ipStack; // @dynamic ipStack;
@property(nonatomic) unsigned int isWksimCard; // @dynamic isWksimCard;
@property(nonatomic) int netType; // @dynamic netType;
@property(nonatomic) unsigned int nicCnt; // @dynamic nicCnt;
@property(retain, nonatomic) NSMutableArray *nicSet; // @dynamic nicSet;
@property(retain, nonatomic) VoipRelayData *peerId; // @dynamic peerId;
@property(nonatomic) int preConnect; // @dynamic preConnect;
@property(nonatomic) int roomId; // @dynamic roomId;
@property(nonatomic) long long roomKey; // @dynamic roomKey;
@property(nonatomic) unsigned long long timestamp64; // @dynamic timestamp64;

@end

