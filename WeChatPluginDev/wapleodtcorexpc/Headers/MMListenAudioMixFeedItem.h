//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenAudioCategoryComposedItem, MMListenItem, NSString;

@interface MMListenAudioMixFeedItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenAudioCategoryComposedItem *categoryComposedItem; // @dynamic categoryComposedItem;
@property(nonatomic) unsigned int itemType; // @dynamic itemType;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;
@property(retain, nonatomic) MMListenItem *listenItem; // @dynamic listenItem;
@property(nonatomic) unsigned long long statusBits; // @dynamic statusBits;

@end

