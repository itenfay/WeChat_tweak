//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenDiscoverItemResponse, MMListenDiscoverResponse, MMListenRecommendInfo, NSData, NSString, TingMusicSquarePreloadInfo, TingReddotReportInfo;

@interface TingMusicSquarePreloadResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenDiscoverItemResponse *discoverItemResponse; // @dynamic discoverItemResponse;
@property(retain, nonatomic) MMListenDiscoverResponse *discoverResponse; // @dynamic discoverResponse;
@property(retain, nonatomic) MMListenRecommendInfo *info; // @dynamic info;
@property(retain, nonatomic) NSData *musicGlobalContextBuffer; // @dynamic musicGlobalContextBuffer;
@property(retain, nonatomic) TingMusicSquarePreloadInfo *preloadInfo; // @dynamic preloadInfo;
@property(nonatomic) int preloadTimeCost; // @dynamic preloadTimeCost;
@property(nonatomic) unsigned int preloadType; // @dynamic preloadType;
@property(retain, nonatomic) TingReddotReportInfo *reportInfo; // @dynamic reportInfo;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

