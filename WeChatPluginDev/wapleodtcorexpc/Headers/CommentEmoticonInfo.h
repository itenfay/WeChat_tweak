//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface CommentEmoticonInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (void)setEmojiInfoObj:(id)arg1;
- (id)emojiInfoObj;

// Remaining properties
@property(retain, nonatomic) NSString *activityId; // @dynamic activityId;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSString *designerId; // @dynamic designerId;
@property(retain, nonatomic) NSData *emoticonBuffer; // @dynamic emoticonBuffer;
@property(nonatomic) unsigned int height; // @dynamic height;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *productId; // @dynamic productId;
@property(nonatomic) unsigned int width; // @dynamic width;

@end

