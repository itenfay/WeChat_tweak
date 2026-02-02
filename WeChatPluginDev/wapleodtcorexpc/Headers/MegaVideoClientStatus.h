//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface MegaVideoClientStatus : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int bandwidthKbps; // @dynamic bandwidthKbps;
@property(retain, nonatomic) NSString *deviceBrand; // @dynamic deviceBrand;
@property(retain, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(retain, nonatomic) NSMutableArray *finderFluencyInfo; // @dynamic finderFluencyInfo;
@property(retain, nonatomic) NSMutableArray *lastVideosDownloadInfo; // @dynamic lastVideosDownloadInfo;
@property(retain, nonatomic) NSString *netName; // @dynamic netName;
@property(nonatomic) int netType; // @dynamic netType;
@property(retain, nonatomic) NSString *osName; // @dynamic osName;
@property(retain, nonatomic) NSString *osVersion; // @dynamic osVersion;
@property(retain, nonatomic) NSMutableArray *supportedCodingFormat; // @dynamic supportedCodingFormat;

@end

