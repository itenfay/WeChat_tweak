//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface CreateOpenIMChatRoomResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bigHeadimgUrl; // @dynamic bigHeadimgUrl;
@property(retain, nonatomic) NSMutableArray *memberList; // @dynamic memberList;
@property(retain, nonatomic) NSString *roomName; // @dynamic roomName;
@property(retain, nonatomic) NSString *smallHeadimgUrl; // @dynamic smallHeadimgUrl;

@end

