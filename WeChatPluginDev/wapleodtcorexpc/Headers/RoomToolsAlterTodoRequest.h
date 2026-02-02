//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, RoomToolsTodo;

@interface RoomToolsAlterTodoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *chatRoomName; // @dynamic chatRoomName;
@property(nonatomic) unsigned int op; // @dynamic op;
@property(retain, nonatomic) RoomToolsTodo *roomToolsTodo; // @dynamic roomToolsTodo;

@end

