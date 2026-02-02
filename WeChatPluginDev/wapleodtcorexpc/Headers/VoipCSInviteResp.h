//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray;

@interface VoipCSInviteResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *addrList; // @dynamic addrList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int checkPeerCnt; // @dynamic checkPeerCnt;
@property(nonatomic) unsigned int checkPeerInterval; // @dynamic checkPeerInterval;
@property(retain, nonatomic) NSData *encryptKeyBuf; // @dynamic encryptKeyBuf;
@property(nonatomic) unsigned int encryptStrategy; // @dynamic encryptStrategy;
@property(nonatomic) unsigned int maxBitRate; // @dynamic maxBitRate;
@property(nonatomic) unsigned int maxFps; // @dynamic maxFps;
@property(nonatomic) unsigned int nextInvite; // @dynamic nextInvite;
@property(nonatomic) unsigned long long roomId; // @dynamic roomId;
@property(nonatomic) unsigned long long roomKey; // @dynamic roomKey;
@property(nonatomic) unsigned int syncInterval; // @dynamic syncInterval;
@property(retain, nonatomic) NSMutableArray *tcpAddrList; // @dynamic tcpAddrList;
@property(nonatomic) unsigned int tcpStartCnt; // @dynamic tcpStartCnt;

@end

