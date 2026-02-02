//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EmojiInfo, NSString;

@interface RecommendEmoji : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int emojiFrom; // @dynamic emojiFrom;
@property(retain, nonatomic) EmojiInfo *info; // @dynamic info;
@property(retain, nonatomic) NSString *meaning; // @dynamic meaning;
@property(retain, nonatomic) NSString *tabWording; // @dynamic tabWording;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

