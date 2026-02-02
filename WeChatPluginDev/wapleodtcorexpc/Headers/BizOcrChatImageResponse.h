//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface BizOcrChatImageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool isContentEmpty; // @dynamic isContentEmpty;
@property(retain, nonatomic) NSString *jsonStr; // @dynamic jsonStr;
@property(retain, nonatomic) NSString *reqKey; // @dynamic reqKey;
@property(nonatomic) unsigned int seqNum; // @dynamic seqNum;
@property(nonatomic) unsigned long long sessionid64; // @dynamic sessionid64;

@end

