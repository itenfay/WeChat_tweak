//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, RedPacketStoryInfo;

@interface GetRedPacketStoryResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) RedPacketStoryInfo *info; // @dynamic info;
@property(nonatomic) unsigned int localUpdateTime; // @dynamic localUpdateTime;
@property(nonatomic) unsigned int subtypeId; // @dynamic subtypeId;

@end

