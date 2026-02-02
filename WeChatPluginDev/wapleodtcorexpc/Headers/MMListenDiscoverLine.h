//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenDiscoverItem, NSMutableArray, NSString;

@interface MMListenDiscoverLine : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *discoverLineId; // @dynamic discoverLineId;
@property(nonatomic) _Bool hasCreatePlaylistButton; // @dynamic hasCreatePlaylistButton;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(retain, nonatomic) NSMutableArray *items; // @dynamic items;
@property(retain, nonatomic) MMListenDiscoverItem *parentItem; // @dynamic parentItem;
@property(nonatomic) int recommendType; // @dynamic recommendType;
@property(nonatomic) unsigned int showNum; // @dynamic showNum;
@property(retain, nonatomic) NSString *subTitle; // @dynamic subTitle;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;

@end

