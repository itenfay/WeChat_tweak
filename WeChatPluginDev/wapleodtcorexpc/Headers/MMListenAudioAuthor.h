//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenAudioMixFeedItem, MMListenCategoryItem, NSMutableArray;

@interface MMListenAudioAuthor : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenCategoryItem *category; // @dynamic category;
@property(nonatomic) _Bool greenDot; // @dynamic greenDot;
@property(retain, nonatomic) MMListenAudioMixFeedItem *mixFeedItem; // @dynamic mixFeedItem;
@property(retain, nonatomic) NSMutableArray *tabs; // @dynamic tabs;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

