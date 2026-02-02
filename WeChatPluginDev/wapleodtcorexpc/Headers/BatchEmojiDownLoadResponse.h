//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray, NSString;

@interface BatchEmojiDownLoadResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *emojiList; // @dynamic emojiList;
@property(nonatomic) unsigned int endFlag; // @dynamic endFlag;
@property(nonatomic) unsigned int index; // @dynamic index;
@property(retain, nonatomic) NSMutableArray *md5List; // @dynamic md5List;
@property(retain, nonatomic) NSMutableArray *needUpdate; // @dynamic needUpdate;
@property(retain, nonatomic) NSData *reqBuff; // @dynamic reqBuff;
@property(retain, nonatomic) NSString *versionKey; // @dynamic versionKey;

@end

