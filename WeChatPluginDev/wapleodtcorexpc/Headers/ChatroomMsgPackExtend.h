//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ChatroomMsgPack, ChatroomUserData, NSString;

@interface ChatroomMsgPackExtend : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *briefContent; // @dynamic briefContent;
@property(retain, nonatomic) ChatroomMsgPack *msgPack; // @dynamic msgPack;
@property(retain, nonatomic) ChatroomUserData *userData; // @dynamic userData;

@end

