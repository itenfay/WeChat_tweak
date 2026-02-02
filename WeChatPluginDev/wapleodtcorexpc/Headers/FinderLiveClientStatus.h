//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveAbnormalInfo, FinderLiveCdnPlayInfo, FinderLiveQoSInfo, NSMutableArray, NSString;

@interface FinderLiveClientStatus : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLiveAbnormalInfo *abnormalInfo; // @dynamic abnormalInfo;
@property(nonatomic) unsigned int bandwidthKbps; // @dynamic bandwidthKbps;
@property(retain, nonatomic) FinderLiveQoSInfo *currentLiveQosInfo; // @dynamic currentLiveQosInfo;
@property(retain, nonatomic) NSString *deviceBrand; // @dynamic deviceBrand;
@property(retain, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(retain, nonatomic) NSMutableArray *lastLiveQosInfo; // @dynamic lastLiveQosInfo;
@property(retain, nonatomic) FinderLiveCdnPlayInfo *liveCdnPlayInfo; // @dynamic liveCdnPlayInfo;
@property(retain, nonatomic) NSString *netName; // @dynamic netName;
@property(nonatomic) int netType; // @dynamic netType;
@property(retain, nonatomic) NSString *osName; // @dynamic osName;
@property(retain, nonatomic) NSString *osVersion; // @dynamic osVersion;
@property(nonatomic) unsigned int videoDecoderSupportMask; // @dynamic videoDecoderSupportMask;
@property(nonatomic) unsigned int videoEncoderSupportMask; // @dynamic videoEncoderSupportMask;

@end

