//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, FullBizChat, QyBaseResponse;

@class WXPBGeneratedMessage;

@interface UpdateBizChatMemberListResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FullBizChat *fullChat; // @dynamic fullChat;
@property(retain, nonatomic) QyBaseResponse *qyBaseResp; // @dynamic qyBaseResp;

@end

