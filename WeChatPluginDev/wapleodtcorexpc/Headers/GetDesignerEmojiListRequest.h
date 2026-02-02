//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString, SKBuiltinBuffer_t;

@interface GetDesignerEmojiListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int designerUin; // @dynamic designerUin;
@property(retain, nonatomic) NSData *extPageContext; // @dynamic extPageContext;
@property(retain, nonatomic) NSString *keyWord; // @dynamic keyWord;
@property(nonatomic) _Bool needUgcemoji; // @dynamic needUgcemoji;
@property(nonatomic) unsigned int opCode; // @dynamic opCode;
@property(retain, nonatomic) SKBuiltinBuffer_t *pageBuf; // @dynamic pageBuf;
@property(nonatomic) unsigned long long searchId; // @dynamic searchId;
@property(nonatomic) unsigned int setId; // @dynamic setId;
@property(nonatomic) unsigned int tagId; // @dynamic tagId;

@end

