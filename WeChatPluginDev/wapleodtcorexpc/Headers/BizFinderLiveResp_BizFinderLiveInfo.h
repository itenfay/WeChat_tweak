//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WeAppData;

@interface BizFinderLiveResp_BizFinderLiveInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bizusername; // @dynamic bizusername;
@property(retain, nonatomic) NSString *cover; // @dynamic cover;
@property(retain, nonatomic) NSString *finderFeedExportId; // @dynamic finderFeedExportId;
@property(retain, nonatomic) NSString *finderusername; // @dynamic finderusername;
@property(nonatomic) unsigned int liveScene; // @dynamic liveScene;
@property(nonatomic) unsigned int refreshInterval; // @dynamic refreshInterval;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) _Bool useWeapp; // @dynamic useWeapp;
@property(retain, nonatomic) WeAppData *weappData; // @dynamic weappData;

@end

