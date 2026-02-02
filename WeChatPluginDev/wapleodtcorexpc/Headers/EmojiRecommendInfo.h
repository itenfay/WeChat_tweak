//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EmotionBannerSet, NSMutableArray;

@interface EmojiRecommendInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int emojiCount; // @dynamic emojiCount;
@property(retain, nonatomic) NSMutableArray *emojis; // @dynamic emojis;
@property(retain, nonatomic) EmotionBannerSet *setInfo; // @dynamic setInfo;

@end

