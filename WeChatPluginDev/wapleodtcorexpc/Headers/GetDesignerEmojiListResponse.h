//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray, SKBuiltinBuffer_t;

@interface GetDesignerEmojiListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *emoji; // @dynamic emoji;
@property(retain, nonatomic) NSData *extPageContext; // @dynamic extPageContext;
@property(retain, nonatomic) SKBuiltinBuffer_t *pageBuf; // @dynamic pageBuf;
@property(retain, nonatomic) NSMutableArray *tag; // @dynamic tag;

@end

