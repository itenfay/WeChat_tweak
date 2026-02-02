//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, VoipDeviceInfo, VoipRelayData;

@interface VoipInviteReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int callType; // @dynamic callType;
@property(retain, nonatomic) VoipRelayData *capInfo; // @dynamic capInfo;
@property(retain, nonatomic) VoipDeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(retain, nonatomic) NSString *fromUsername; // @dynamic fromUsername;
@property(nonatomic) int hdvideo; // @dynamic hdvideo;
@property(nonatomic) unsigned int inviteId; // @dynamic inviteId;
@property(nonatomic) unsigned int inviteType; // @dynamic inviteType;
@property(nonatomic) int inviteUserCount; // @dynamic inviteUserCount;
@property(nonatomic) unsigned int ipStack; // @dynamic ipStack;
@property(nonatomic) unsigned int isWksimCard; // @dynamic isWksimCard;
@property(nonatomic) int netType; // @dynamic netType;
@property(nonatomic) unsigned int nicCnt; // @dynamic nicCnt;
@property(retain, nonatomic) NSMutableArray *nicSet; // @dynamic nicSet;
@property(retain, nonatomic) VoipRelayData *peerId; // @dynamic peerId;
@property(nonatomic) int roomId; // @dynamic roomId;
@property(nonatomic) long long roomKey; // @dynamic roomKey;
@property(nonatomic) unsigned long long timestamp64; // @dynamic timestamp64;
@property(retain, nonatomic) NSMutableArray *toUsernameList; // @dynamic toUsernameList;

@end

