//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSData, NSMutableArray;

@class WXPBGeneratedMessage;

@interface MMListenRoomJoinResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *cookie; // @dynamic cookie;
@property(retain, nonatomic) NSMutableArray *messageList; // @dynamic messageList;
@property(nonatomic) unsigned int onlineMemberCount; // @dynamic onlineMemberCount;
@property(retain, nonatomic) NSMutableArray *onlineMemberList; // @dynamic onlineMemberList;

@end

