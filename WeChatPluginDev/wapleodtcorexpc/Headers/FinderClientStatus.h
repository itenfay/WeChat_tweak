//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderClientBrightness, FinderClientPerformance, NSMutableArray, NSString;

@interface FinderClientStatus : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int bandwidthKbps; // @dynamic bandwidthKbps;
@property(retain, nonatomic) FinderClientBrightness *brightness; // @dynamic brightness;
@property(retain, nonatomic) NSString *clientIp; // @dynamic clientIp;
@property(retain, nonatomic) FinderClientPerformance *clientPerformance; // @dynamic clientPerformance;
@property(nonatomic) unsigned int clientVersion; // @dynamic clientVersion;
@property(retain, nonatomic) NSString *deviceBrand; // @dynamic deviceBrand;
@property(retain, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(nonatomic) unsigned int deviceTypeId; // @dynamic deviceTypeId;
@property(retain, nonatomic) NSMutableArray *finderFluencyInfo; // @dynamic finderFluencyInfo;
@property(nonatomic) unsigned int isDawangNettype; // @dynamic isDawangNettype;
@property(retain, nonatomic) NSMutableArray *lastPreloadDownloadInfo; // @dynamic lastPreloadDownloadInfo;
@property(retain, nonatomic) NSMutableArray *lastVideosDownloadInfo; // @dynamic lastVideosDownloadInfo;
@property(retain, nonatomic) NSString *netName; // @dynamic netName;
@property(nonatomic) int netType; // @dynamic netType;
@property(retain, nonatomic) NSMutableArray *nextVideosDownloadInfo; // @dynamic nextVideosDownloadInfo;
@property(retain, nonatomic) NSString *osName; // @dynamic osName;
@property(retain, nonatomic) NSString *osVersion; // @dynamic osVersion;
@property(retain, nonatomic) NSMutableArray *recentCdnConnRecord; // @dynamic recentCdnConnRecord;
@property(retain, nonatomic) NSMutableArray *recentCgiConnRecord; // @dynamic recentCgiConnRecord;
@property(retain, nonatomic) NSMutableArray *recentFinderDownloadSpeed; // @dynamic recentFinderDownloadSpeed;
@property(retain, nonatomic) NSMutableArray *recentNonfinderNonquicDownloadSpeed; // @dynamic recentNonfinderNonquicDownloadSpeed;
@property(retain, nonatomic) NSMutableArray *recentNonfinderQuicDownloadSpeed; // @dynamic recentNonfinderQuicDownloadSpeed;
@property(retain, nonatomic) NSMutableArray *recentWechatDownloadSpeed; // @dynamic recentWechatDownloadSpeed;
@property(retain, nonatomic) NSMutableArray *supportedCodingFormat; // @dynamic supportedCodingFormat;
@property(retain, nonatomic) NSMutableArray *supportedHdrType; // @dynamic supportedHdrType;

@end

