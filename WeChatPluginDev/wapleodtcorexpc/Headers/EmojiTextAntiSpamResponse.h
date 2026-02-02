//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface EmojiTextAntiSpamResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *blockType; // @dynamic blockType;
@property(retain, nonatomic) NSString *matchRule; // @dynamic matchRule;
@property(nonatomic) _Bool shouldBlock; // @dynamic shouldBlock;

@end

