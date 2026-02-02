//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenRecommendInfo, NSString;

@interface MMListenDiscoverItemRequest_DiscoverCtx : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenRecommendInfo *ctxRecommendInfo; // @dynamic ctxRecommendInfo;
@property(retain, nonatomic) NSString *discoverId; // @dynamic discoverId;
@property(retain, nonatomic) NSString *discoverLineId; // @dynamic discoverLineId;

@end

