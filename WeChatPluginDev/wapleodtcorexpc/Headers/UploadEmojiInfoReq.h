//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString;

@interface UploadEmojiInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *attachedEmojiMd5List; // @dynamic attachedEmojiMd5List;
@property(retain, nonatomic) NSString *attachedText; // @dynamic attachedText;
@property(retain, nonatomic) NSString *attachedTextColor; // @dynamic attachedTextColor;
@property(retain, nonatomic) NSData *emojiBuffer; // @dynamic emojiBuffer;
@property(retain, nonatomic) NSString *followingEmojiMd5; // @dynamic followingEmojiMd5;
@property(nonatomic) _Bool isSelfie; // @dynamic isSelfie;
@property(retain, nonatomic) NSString *lensId; // @dynamic lensId;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) int startPos; // @dynamic startPos;
@property(nonatomic) int totalLen; // @dynamic totalLen;

@end

