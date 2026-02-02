//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface CgiProfileClockData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int channelType; // @dynamic channelType;
@property(nonatomic) unsigned long long connectSuccessfulTime; // @dynamic connectSuccessfulTime;
@property(nonatomic) unsigned long long handshakeSuccessfulTime; // @dynamic handshakeSuccessfulTime;
@property(retain, nonatomic) NSString *netType; // @dynamic netType;
@property(nonatomic) unsigned int protocolType; // @dynamic protocolType;
@property(nonatomic) unsigned long long readPacketFinishedTime; // @dynamic readPacketFinishedTime;
@property(nonatomic) unsigned long long rtt; // @dynamic rtt;
@property(nonatomic) unsigned long long startConnectTime; // @dynamic startConnectTime;
@property(nonatomic) unsigned long long startHandshakeTime; // @dynamic startHandshakeTime;
@property(nonatomic) unsigned long long startReadPacketTime; // @dynamic startReadPacketTime;
@property(nonatomic) unsigned long long startSendPacketTime; // @dynamic startSendPacketTime;
@property(nonatomic) unsigned long long taskCallbackTime; // @dynamic taskCallbackTime;
@property(nonatomic) unsigned long long taskStartTime; // @dynamic taskStartTime;

@end

