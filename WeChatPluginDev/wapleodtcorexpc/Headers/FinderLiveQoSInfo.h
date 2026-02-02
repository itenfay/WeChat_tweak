//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString;

@interface FinderLiveQoSInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int audioBitrate; // @dynamic audioBitrate;
@property(nonatomic) unsigned int audioCache; // @dynamic audioCache;
@property(nonatomic) unsigned int audioCacheThreshold; // @dynamic audioCacheThreshold;
@property(nonatomic) unsigned int audioVideoPlayInterval; // @dynamic audioVideoPlayInterval;
@property(nonatomic) unsigned int audioVideoRecvInterval; // @dynamic audioVideoRecvInterval;
@property(retain, nonatomic) NSString *cdnSvrIp; // @dynamic cdnSvrIp;
@property(nonatomic) unsigned int cdnSvrPort; // @dynamic cdnSvrPort;
@property(nonatomic) unsigned int connectMs; // @dynamic connectMs;
@property(nonatomic) float cpuUsageDevice; // @dynamic cpuUsageDevice;
@property(nonatomic) float cpuUsageProcess; // @dynamic cpuUsageProcess;
@property(retain, nonatomic) NSData *extBuf; // @dynamic extBuf;
@property(nonatomic) unsigned int firstFrameTimeMs; // @dynamic firstFrameTimeMs;
@property(nonatomic) unsigned int height; // @dynamic height;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) unsigned int liveStartPlayTimeSec; // @dynamic liveStartPlayTimeSec;
@property(nonatomic) unsigned int netJitter; // @dynamic netJitter;
@property(nonatomic) unsigned int netSpeed; // @dynamic netSpeed;
@property(nonatomic) unsigned int networkId; // @dynamic networkId;
@property(nonatomic) unsigned int qualityLevel; // @dynamic qualityLevel;
@property(nonatomic) unsigned int rttMs; // @dynamic rttMs;
@property(retain, nonatomic) NSString *tagName; // @dynamic tagName;
@property(nonatomic) unsigned int totalPlayTimeMs; // @dynamic totalPlayTimeMs;
@property(nonatomic) unsigned int totalWaitTimeMs; // @dynamic totalWaitTimeMs;
@property(nonatomic) float trtcDownLoss; // @dynamic trtcDownLoss;
@property(nonatomic) float trtcUpLoss; // @dynamic trtcUpLoss;
@property(nonatomic) unsigned int videoBitrate; // @dynamic videoBitrate;
@property(nonatomic) unsigned int videoCache; // @dynamic videoCache;
@property(nonatomic) unsigned int videoDecCacheSize; // @dynamic videoDecCacheSize;
@property(nonatomic) unsigned int videoFps; // @dynamic videoFps;
@property(nonatomic) unsigned int videoGop; // @dynamic videoGop;
@property(nonatomic) unsigned int videoSumCacheSize; // @dynamic videoSumCacheSize;
@property(nonatomic) unsigned int videoTagType; // @dynamic videoTagType;
@property(retain, nonatomic) NSMutableArray *waitDetails; // @dynamic waitDetails;
@property(nonatomic) unsigned int width; // @dynamic width;

@end

