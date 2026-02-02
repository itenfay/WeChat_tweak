//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray;

@interface GetUGCEmojiListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *emojiList; // @dynamic emojiList;
@property(retain, nonatomic) NSData *pageContext; // @dynamic pageContext;
@property(nonatomic) unsigned int totalCount; // @dynamic totalCount;

@end

