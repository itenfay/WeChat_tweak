//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface BakChatUploadMediaResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bakChatClientId; // @dynamic bakChatClientId;
@property(nonatomic) unsigned int bakChatSvrId; // @dynamic bakChatSvrId;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int cancelFlag; // @dynamic cancelFlag;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(nonatomic) unsigned int endFlag; // @dynamic endFlag;
@property(nonatomic) unsigned int maxLength; // @dynamic maxLength;
@property(retain, nonatomic) NSString *mediaId; // @dynamic mediaId;
@property(nonatomic) unsigned int offset; // @dynamic offset;

@end

