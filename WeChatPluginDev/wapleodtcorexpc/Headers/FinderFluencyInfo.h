//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface FinderFluencyInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int cgiType; // @dynamic cgiType;
@property(nonatomic) unsigned int commentScene; // @dynamic commentScene;
@property(nonatomic) unsigned long long connectSuccessfulTime; // @dynamic connectSuccessfulTime;
@property(nonatomic) unsigned int dataHandleMs; // @dynamic dataHandleMs;
@property(nonatomic) unsigned int dbOperMs; // @dynamic dbOperMs;
@property(retain, nonatomic) NSData *debugMessage; // @dynamic debugMessage;
@property(nonatomic) unsigned int downloadBeginMs; // @dynamic downloadBeginMs;
@property(nonatomic) int finish; // @dynamic finish;
@property(nonatomic) unsigned int globalInitMs; // @dynamic globalInitMs;
@property(nonatomic) int hot; // @dynamic hot;
@property(nonatomic) unsigned int loadingTimeMs; // @dynamic loadingTimeMs;
@property(nonatomic) int pull; // @dynamic pull;
@property(nonatomic) unsigned int pullCgiMs; // @dynamic pullCgiMs;
@property(nonatomic) unsigned long long readPacketFinishedTime; // @dynamic readPacketFinishedTime;
@property(nonatomic) int scene; // @dynamic scene;
@property(nonatomic) unsigned int showUiMs; // @dynamic showUiMs;
@property(nonatomic) unsigned long long startConnectTime; // @dynamic startConnectTime;
@property(nonatomic) unsigned long long startReadPacketTime; // @dynamic startReadPacketTime;
@property(nonatomic) unsigned long long startSendPacketTime; // @dynamic startSendPacketTime;
@property(nonatomic) unsigned long long startTime; // @dynamic startTime;
@property(nonatomic) unsigned long long startTlsHandshakeTime; // @dynamic startTlsHandshakeTime;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(nonatomic) unsigned long long tlsHandshakeSuccessfulTime; // @dynamic tlsHandshakeSuccessfulTime;
@property(nonatomic) unsigned int totalTimeMs; // @dynamic totalTimeMs;

@end

