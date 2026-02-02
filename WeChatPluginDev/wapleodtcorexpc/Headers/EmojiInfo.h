//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EmojiStatisticsInfo, NSMutableArray, NSString;

@interface EmojiInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *activityId; // @dynamic activityId;
@property(retain, nonatomic) NSString *aesKey; // @dynamic aesKey;
@property(retain, nonatomic) NSString *attachedText; // @dynamic attachedText;
@property(retain, nonatomic) NSString *attachedTextColor; // @dynamic attachedTextColor;
@property(retain, nonatomic) NSMutableArray *customMeaning; // @dynamic customMeaning;
@property(retain, nonatomic) NSString *designerId; // @dynamic designerId;
@property(retain, nonatomic) NSString *emojiAttr; // @dynamic emojiAttr;
@property(retain, nonatomic) NSString *encryptUrl; // @dynamic encryptUrl;
@property(retain, nonatomic) NSString *externMd5; // @dynamic externMd5;
@property(retain, nonatomic) NSString *externUrl; // @dynamic externUrl;
@property(nonatomic) unsigned long long flag; // @dynamic flag;
@property(retain, nonatomic) NSString *lensId; // @dynamic lensId;
@property(retain, nonatomic) NSString *linkId; // @dynamic linkId;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *payAnimateResUrl; // @dynamic payAnimateResUrl;
@property(retain, nonatomic) NSString *productId; // @dynamic productId;
@property(retain, nonatomic) EmojiStatisticsInfo *statistics; // @dynamic statistics;
@property(retain, nonatomic) NSString *storeMeaning; // @dynamic storeMeaning;
@property(retain, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

