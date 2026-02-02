//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSString;

@class WXPBGeneratedMessage;

@interface GameJoinChatRoomResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int errCode; // @dynamic errCode;
@property(retain, nonatomic) NSString *joinChatRoomUrl; // @dynamic joinChatRoomUrl;

@end

