//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, GameLifeMsgExtInfo, NSString;

@interface GetChatSessionIdResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) GameLifeMsgExtInfo *msgExtInfo; // @dynamic msgExtInfo;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

