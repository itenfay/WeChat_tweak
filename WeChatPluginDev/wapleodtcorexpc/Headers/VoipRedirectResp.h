//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, VoipMultiRelayConnData;

@interface VoipRedirectResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) VoipMultiRelayConnData *newConnSet; // @dynamic newConnSet;
@property(nonatomic) int punchAddrCount; // @dynamic punchAddrCount;
@property(retain, nonatomic) NSMutableArray *punchAddrList; // @dynamic punchAddrList;
@property(nonatomic) int redirectDecision; // @dynamic redirectDecision;
@property(nonatomic) int redirectThreshold; // @dynamic redirectThreshold;
@property(nonatomic) int relayAddrCount; // @dynamic relayAddrCount;
@property(retain, nonatomic) NSMutableArray *relayAddrList; // @dynamic relayAddrList;
@property(nonatomic) int roomId; // @dynamic roomId;
@property(nonatomic) long long roomKey; // @dynamic roomKey;
@property(nonatomic) int roomMemberId; // @dynamic roomMemberId;
@property(nonatomic) int tcpAddrCount; // @dynamic tcpAddrCount;
@property(retain, nonatomic) NSMutableArray *tcpAddrList; // @dynamic tcpAddrList;

@end

