//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, TimelineGetOftenReadBizResp_FinderInfo, WeAppData;

@interface TimelineGetOftenReadBizResp_BizInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bizusername; // @dynamic bizusername;
@property(retain, nonatomic) NSString *finderExportId; // @dynamic finderExportId;
@property(retain, nonatomic) NSString *finderFeedExportId; // @dynamic finderFeedExportId;
@property(nonatomic) long long finderGreenDotTimeStamp; // @dynamic finderGreenDotTimeStamp;
@property(retain, nonatomic) TimelineGetOftenReadBizResp_FinderInfo *finderInfo; // @dynamic finderInfo;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(nonatomic) unsigned int lastetNewPublishTimestamp; // @dynamic lastetNewPublishTimestamp;
@property(nonatomic) unsigned int liveScene; // @dynamic liveScene;
@property(retain, nonatomic) NSString *logoUrl; // @dynamic logoUrl;
@property(nonatomic) unsigned int refreshInterval; // @dynamic refreshInterval;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) _Bool useWeapp; // @dynamic useWeapp;
@property(retain, nonatomic) WeAppData *weappData; // @dynamic weappData;
@property(nonatomic) unsigned int weight; // @dynamic weight;

@end

