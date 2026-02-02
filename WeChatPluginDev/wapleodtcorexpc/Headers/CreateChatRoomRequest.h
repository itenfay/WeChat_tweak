//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, SKBuiltinBuffer_t, SKBuiltinString_t;

@interface CreateChatRoomRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinBuffer_t *extBuffer; // @dynamic extBuffer;
@property(nonatomic) unsigned int memberCount; // @dynamic memberCount;
@property(retain, nonatomic) NSMutableArray *memberList; // @dynamic memberList;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) SKBuiltinString_t *topic; // @dynamic topic;

@end

