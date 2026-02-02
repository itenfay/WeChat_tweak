//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray;

@interface VoipSpeedTestReq : WXPBGeneratedMessage
{
    int c2CrttMemoizedSerializedSize;
    int c2SrttMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int c2Clossrate; // @dynamic c2Clossrate;
@property(retain, nonatomic) NSMutableArray *c2Crtt; // @dynamic c2Crtt;
@property(nonatomic) unsigned int c2CrttCnt; // @dynamic c2CrttCnt;
@property(nonatomic) unsigned int c2SdownLossRate; // @dynamic c2SdownLossRate;
@property(retain, nonatomic) NSMutableArray *c2Srtt; // @dynamic c2Srtt;
@property(nonatomic) unsigned int c2SrttCnt; // @dynamic c2SrttCnt;
@property(nonatomic) unsigned int callType; // @dynamic callType;
@property(nonatomic) unsigned int isConnected; // @dynamic isConnected;
@property(nonatomic) unsigned int isConnecting; // @dynamic isConnecting;
@property(nonatomic) unsigned int netType; // @dynamic netType;
@property(nonatomic) unsigned int rcvPkts; // @dynamic rcvPkts;
@property(nonatomic) int roomId; // @dynamic roomId;
@property(nonatomic) unsigned int sendPkts; // @dynamic sendPkts;

@end

