//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, SKBuiltinBuffer_t, VoipMultiRelayData;

@interface VoipInviteResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int addrCount; // @dynamic addrCount;
@property(retain, nonatomic) NSMutableArray *addrList; // @dynamic addrList;
@property(nonatomic) unsigned int audioAecMode5; // @dynamic audioAecMode5;
@property(nonatomic) int audioDtx; // @dynamic audioDtx;
@property(nonatomic) unsigned int audioEnableConfigMic; // @dynamic audioEnableConfigMic;
@property(nonatomic) int audioEnableRmioAndS3A; // @dynamic audioEnableRmioAndS3A;
@property(nonatomic) int audioEnableSpkec; // @dynamic audioEnableSpkec;
@property(nonatomic) int audioEnableXnoiseSup; // @dynamic audioEnableXnoiseSup;
@property(nonatomic) int audioTsdfBeyond3G; // @dynamic audioTsdfBeyond3G;
@property(nonatomic) int audioTsdfEdge; // @dynamic audioTsdfEdge;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int enableDataAccept; // @dynamic enableDataAccept;
@property(nonatomic) int fastPlayRepair; // @dynamic fastPlayRepair;
@property(nonatomic) int hw264SvrCfg; // @dynamic hw264SvrCfg;
@property(retain, nonatomic) SKBuiltinBuffer_t *intStrategyIssued; // @dynamic intStrategyIssued;
@property(retain, nonatomic) SKBuiltinBuffer_t *intStrategyIssuedPb; // @dynamic intStrategyIssuedPb;
@property(nonatomic) int netQualityCnt; // @dynamic netQualityCnt;
@property(retain, nonatomic) NSMutableArray *netQualityList; // @dynamic netQualityList;
@property(nonatomic) int newP2S; // @dynamic newP2S;
@property(nonatomic) int passthroughQosAlgorithm; // @dynamic passthroughQosAlgorithm;
@property(nonatomic) unsigned int qosLocalMaxBr; // @dynamic qosLocalMaxBr;
@property(nonatomic) unsigned int reInviteInterval; // @dynamic reInviteInterval;
@property(retain, nonatomic) VoipMultiRelayData *relayData; // @dynamic relayData;
@property(nonatomic) int roomId; // @dynamic roomId;
@property(nonatomic) long long roomKey; // @dynamic roomKey;
@property(nonatomic) int roomMemberId; // @dynamic roomMemberId;
@property(nonatomic) unsigned int svrCfgListV; // @dynamic svrCfgListV;
@property(nonatomic) unsigned int switchFlag; // @dynamic switchFlag;
@property(nonatomic) unsigned long long switchFlagExt; // @dynamic switchFlagExt;
@property(nonatomic) unsigned int switchInterval; // @dynamic switchInterval;
@property(nonatomic) unsigned int tcpCnt; // @dynamic tcpCnt;
@property(retain, nonatomic) NSString *verificationUrl; // @dynamic verificationUrl;
@property(nonatomic) int voipSyncInterval; // @dynamic voipSyncInterval;
@property(nonatomic) unsigned int wifiScanInterval; // @dynamic wifiScanInterval;

@end

