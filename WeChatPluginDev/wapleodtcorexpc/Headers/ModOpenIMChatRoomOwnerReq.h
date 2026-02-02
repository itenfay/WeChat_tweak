//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, OpenIMChatRoomMemberInReq;

@interface ModOpenIMChatRoomOwnerReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) OpenIMChatRoomMemberInReq *newOwner; // @dynamic newOwner;
@property(retain, nonatomic) NSString *roomName; // @dynamic roomName;

@end

