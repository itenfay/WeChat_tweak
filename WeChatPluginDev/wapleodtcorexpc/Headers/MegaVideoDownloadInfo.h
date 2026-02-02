//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface MegaVideoDownloadInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *codingFormat; // @dynamic codingFormat;
@property(nonatomic) unsigned int downloadSpeedKbps; // @dynamic downloadSpeedKbps;
@property(nonatomic) unsigned int downloadedBytes; // @dynamic downloadedBytes;
@property(nonatomic) unsigned int duration; // @dynamic duration;
@property(nonatomic) unsigned long long feedId; // @dynamic feedId;
@property(nonatomic) unsigned int fileBytes; // @dynamic fileBytes;
@property(retain, nonatomic) NSString *fileFormat; // @dynamic fileFormat;
@property(nonatomic) unsigned int firstLoadTimeMs; // @dynamic firstLoadTimeMs;
@property(nonatomic) unsigned int networkId; // @dynamic networkId;
@property(nonatomic) unsigned int pageIndex; // @dynamic pageIndex;
@property(nonatomic) unsigned int playPosition; // @dynamic playPosition;
@property(nonatomic) unsigned int preloadBytes; // @dynamic preloadBytes;
@property(nonatomic) unsigned long long preloadStrategyId; // @dynamic preloadStrategyId;
@property(nonatomic) unsigned int rttMs; // @dynamic rttMs;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int stopplayTimestamp; // @dynamic stopplayTimestamp;
@property(retain, nonatomic) NSString *svrIp; // @dynamic svrIp;
@property(nonatomic) unsigned int svrPort; // @dynamic svrPort;
@property(nonatomic) unsigned int totalPlayTimeMs; // @dynamic totalPlayTimeMs;
@property(nonatomic) unsigned int totalWaitTimeMs; // @dynamic totalWaitTimeMs;
@property(retain, nonatomic) NSMutableArray *waitDetails; // @dynamic waitDetails;

@end

