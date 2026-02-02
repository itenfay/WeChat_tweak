//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, RoomToolsTodo;

@interface RoomToolsReplyTodoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *chatRoomName; // @dynamic chatRoomName;
@property(retain, nonatomic) NSString *creator; // @dynamic creator;
@property(retain, nonatomic) RoomToolsTodo *roomToolsTodo; // @dynamic roomToolsTodo;
@property(retain, nonatomic) NSString *todoId; // @dynamic todoId;

@end

