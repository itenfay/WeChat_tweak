//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, RedPacketStoryInfo_FinderInfo;

@interface RedPacketStoryInfo_StoryDetail : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) RedPacketStoryInfo_FinderInfo *finderInfo; // @dynamic finderInfo;
@property(nonatomic) unsigned int height; // @dynamic height;
@property(retain, nonatomic) NSString *mediaFuzzyThumbnailMd5; // @dynamic mediaFuzzyThumbnailMd5;
@property(retain, nonatomic) NSString *mediaFuzzyThumbnailUrl; // @dynamic mediaFuzzyThumbnailUrl;
@property(retain, nonatomic) NSString *mediaMd5; // @dynamic mediaMd5;
@property(retain, nonatomic) NSString *mediaThumbnailMd5; // @dynamic mediaThumbnailMd5;
@property(retain, nonatomic) NSString *mediaThumbnailUrl; // @dynamic mediaThumbnailUrl;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) NSString *mediaUrl; // @dynamic mediaUrl;
@property(nonatomic) unsigned int width; // @dynamic width;

@end

