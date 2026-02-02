//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DirectConnSet, GetNICAddrSvrSet, JbmBitrateRsParam, NSMutableArray, NSString, RelayConnSet, SKBuiltinBuffer_t, VoipAddrSet, VoipRelayData;

@interface VoipMultiRelayData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int arqcacheLen; // @dynamic arqcacheLen;
@property(nonatomic) int arqrespRateThreshold; // @dynamic arqrespRateThreshold;
@property(nonatomic) int arqrttThreshold; // @dynamic arqrttThreshold;
@property(nonatomic) int arqstrategy; // @dynamic arqstrategy;
@property(nonatomic) int arqusedRateThreshold; // @dynamic arqusedRateThreshold;
@property(nonatomic) unsigned int bothSideSwitchFlag; // @dynamic bothSideSwitchFlag;
@property(retain, nonatomic) VoipRelayData *capInfo; // @dynamic capInfo;
@property(retain, nonatomic) SKBuiltinBuffer_t *clientHeadSigns; // @dynamic clientHeadSigns;
@property(retain, nonatomic) DirectConnSet *directConnSet; // @dynamic directConnSet;
@property(retain, nonatomic) SKBuiltinBuffer_t *encryptKeyBuf; // @dynamic encryptKeyBuf;
@property(nonatomic) int encryptStrategy; // @dynamic encryptStrategy;
@property(retain, nonatomic) SKBuiltinBuffer_t *feckeyPara1; // @dynamic feckeyPara1;
@property(retain, nonatomic) SKBuiltinBuffer_t *feckeyPara2; // @dynamic feckeyPara2;
@property(nonatomic) int fecsvrCtr; // @dynamic fecsvrCtr;
@property(retain, nonatomic) SKBuiltinBuffer_t *generalBsintStrategyBuf; // @dynamic generalBsintStrategyBuf;
@property(retain, nonatomic) GetNICAddrSvrSet *getNicAddrSvrSet; // @dynamic getNicAddrSvrSet;
@property(retain, nonatomic) JbmBitrateRsParam *jbmBitrateRsConfig; // @dynamic jbmBitrateRsConfig;
@property(nonatomic) int linkDisconnectHbCnt; // @dynamic linkDisconnectHbCnt;
@property(nonatomic) int linkDisconnectHbInterval; // @dynamic linkDisconnectHbInterval;
@property(retain, nonatomic) NSMutableArray *natDetectSvr; // @dynamic natDetectSvr;
@property(nonatomic) unsigned int natDetectSvrCnt; // @dynamic natDetectSvrCnt;
@property(nonatomic) unsigned int oppositeClientVersion; // @dynamic oppositeClientVersion;
@property(nonatomic) unsigned int oppositeDeviceType; // @dynamic oppositeDeviceType;
@property(retain, nonatomic) VoipRelayData *peerId; // @dynamic peerId;
@property(nonatomic) unsigned int protocolEncryptLength; // @dynamic protocolEncryptLength;
@property(retain, nonatomic) VoipAddrSet *punchSvrAddr; // @dynamic punchSvrAddr;
@property(nonatomic) int qosStrategy; // @dynamic qosStrategy;
@property(nonatomic) unsigned int redirectInitThreshold; // @dynamic redirectInitThreshold;
@property(retain, nonatomic) RelayConnSet *relayConnSet; // @dynamic relayConnSet;
@property(nonatomic) unsigned int scoreIntervalDay; // @dynamic scoreIntervalDay;
@property(retain, nonatomic) NSString *scoreTitle; // @dynamic scoreTitle;
@property(nonatomic) int sendingType; // @dynamic sendingType;
@property(retain, nonatomic) VoipAddrSet *tcpSvrAddr; // @dynamic tcpSvrAddr;
@property(nonatomic) int voipNetQuality; // @dynamic voipNetQuality;
@property(retain, nonatomic) VoipAddrSet *voipSvrAddr; // @dynamic voipSvrAddr;

@end

