//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenItem, MMListenRecommendInfo, MMListenSimplePlayableInfo, MMListenSimplePlaylistInfo;

@interface MMListenRelatedItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenRecommendInfo *ctxCategoryRecommendInfo; // @dynamic ctxCategoryRecommendInfo;
@property(retain, nonatomic) MMListenItem *item; // @dynamic item;
@property(retain, nonatomic) MMListenSimplePlayableInfo *simplePlayableInfo; // @dynamic simplePlayableInfo;
@property(retain, nonatomic) MMListenSimplePlaylistInfo *simplePlaylistInfo; // @dynamic simplePlaylistInfo;

@end

