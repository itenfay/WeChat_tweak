//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, BizChat, QyBaseResponse;

@interface UpdateBizChatResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) BizChat *chat; // @dynamic chat;
@property(retain, nonatomic) QyBaseResponse *qyBaseResp; // @dynamic qyBaseResp;

@end

