//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCategoryItem, MMListenDiscoverItem, NSString;

@interface MMListenSyncJumpInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @dynamic categoryItem;
@property(retain, nonatomic) MMListenDiscoverItem *discoverItem; // @dynamic discoverItem;
@property(retain, nonatomic) NSString *discoverLineId; // @dynamic discoverLineId;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(nonatomic) int type; // @dynamic type;

@end

