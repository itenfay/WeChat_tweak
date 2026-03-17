//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, ChatRoomInfo, NSString;

@class WXPBGeneratedMessage;

@interface SubscribeNewGameResponse_V2 : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) ChatRoomInfo *chatRoomInfo; // @dynamic chatRoomInfo;
@property(nonatomic) _Bool isSubscribed; // @dynamic isSubscribed;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

