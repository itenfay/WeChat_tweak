//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface F2FDialParam : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int audioDtx; // @dynamic audioDtx;
@property(retain, nonatomic) NSData *clientHeadSigns; // @dynamic clientHeadSigns;
@property(nonatomic) unsigned int linkDisconnectHbInterval; // @dynamic linkDisconnectHbInterval;
@property(nonatomic) unsigned int linkDisconnectRetryCnt; // @dynamic linkDisconnectRetryCnt;
@property(nonatomic) unsigned int protocolEncryptLength; // @dynamic protocolEncryptLength;
@property(nonatomic) unsigned int strategy; // @dynamic strategy;
@property(nonatomic) unsigned int switchInterval; // @dynamic switchInterval;
@property(nonatomic) unsigned int switchTcpPktCntThreshold; // @dynamic switchTcpPktCntThreshold;
@property(nonatomic) unsigned int syncInterval; // @dynamic syncInterval;

@end

