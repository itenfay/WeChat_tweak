//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DownloadSpeed, NSMutableArray, NSString;

@interface FinderDownloadInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long bufferLengthMs; // @dynamic bufferLengthMs;
@property(retain, nonatomic) NSString *codingFormat; // @dynamic codingFormat;
@property(retain, nonatomic) DownloadSpeed *downloadSpeed; // @dynamic downloadSpeed;
@property(nonatomic) unsigned int downloadSpeedKbps; // @dynamic downloadSpeedKbps;
@property(nonatomic) unsigned int downloadedBytes; // @dynamic downloadedBytes;
@property(nonatomic) unsigned int duration; // @dynamic duration;
@property(nonatomic) unsigned long long durationMs; // @dynamic durationMs;
@property(nonatomic) unsigned long long feedId; // @dynamic feedId;
@property(nonatomic) unsigned int fileBytes; // @dynamic fileBytes;
@property(retain, nonatomic) NSString *fileFormat; // @dynamic fileFormat;
@property(nonatomic) unsigned int firstLoadTimeMs; // @dynamic firstLoadTimeMs;
@property(nonatomic) unsigned int fps; // @dynamic fps;
@property(nonatomic) unsigned long long megaVideoId; // @dynamic megaVideoId;
@property(nonatomic) unsigned int networkId; // @dynamic networkId;
@property(nonatomic) unsigned int pageIndex; // @dynamic pageIndex;
@property(nonatomic) unsigned int playCount; // @dynamic playCount;
@property(nonatomic) unsigned int playPosition; // @dynamic playPosition;
@property(nonatomic) unsigned int playerFps; // @dynamic playerFps;
@property(nonatomic) unsigned int position; // @dynamic position;
@property(nonatomic) unsigned int preloadBytes; // @dynamic preloadBytes;
@property(nonatomic) unsigned int preloadMaxBitRate; // @dynamic preloadMaxBitRate;
@property(nonatomic) unsigned long long preloadStrategyId; // @dynamic preloadStrategyId;
@property(retain, nonatomic) NSString *requestFormat; // @dynamic requestFormat;
@property(nonatomic) unsigned int rttMs; // @dynamic rttMs;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int stopplayTimestamp; // @dynamic stopplayTimestamp;
@property(retain, nonatomic) NSString *svrIp; // @dynamic svrIp;
@property(nonatomic) unsigned int svrPort; // @dynamic svrPort;
@property(nonatomic) unsigned long long totalDownloadedBytes; // @dynamic totalDownloadedBytes;
@property(nonatomic) unsigned int totalPlayTimeMs; // @dynamic totalPlayTimeMs;
@property(nonatomic) unsigned int totalWaitTimeMs; // @dynamic totalWaitTimeMs;
@property(retain, nonatomic) NSMutableArray *waitDetails; // @dynamic waitDetails;

@end

