//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, SKBuiltinBuffer_t, VoipMultiRelayData;

@interface VoipAckResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int audioEnableConfigMic; // @dynamic audioEnableConfigMic;
@property(nonatomic) int audioEnableRmioAndS3A; // @dynamic audioEnableRmioAndS3A;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int enableDataAccept; // @dynamic enableDataAccept;
@property(nonatomic) int hw264SvrCfg; // @dynamic hw264SvrCfg;
@property(retain, nonatomic) SKBuiltinBuffer_t *intStrategyIssued; // @dynamic intStrategyIssued;
@property(retain, nonatomic) SKBuiltinBuffer_t *intStrategyIssuedPb; // @dynamic intStrategyIssuedPb;
@property(nonatomic) int preConnect; // @dynamic preConnect;
@property(retain, nonatomic) VoipMultiRelayData *relayData; // @dynamic relayData;
@property(nonatomic) int roomId; // @dynamic roomId;
@property(nonatomic) long long roomKey; // @dynamic roomKey;
@property(nonatomic) int roomMemberId; // @dynamic roomMemberId;
@property(nonatomic) unsigned int rudpacceptTimeOutTh; // @dynamic rudpacceptTimeOutTh;
@property(nonatomic) unsigned int svrCfgListV; // @dynamic svrCfgListV;
@property(nonatomic) unsigned int switchFlag; // @dynamic switchFlag;
@property(nonatomic) unsigned long long switchFlagExt; // @dynamic switchFlagExt;
@property(nonatomic) unsigned int tcpCnt; // @dynamic tcpCnt;
@property(nonatomic) unsigned int wifiScanInterval; // @dynamic wifiScanInterval;

@end

