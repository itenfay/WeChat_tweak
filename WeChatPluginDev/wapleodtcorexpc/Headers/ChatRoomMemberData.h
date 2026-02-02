//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, SKBuiltinString_t;

@interface ChatRoomMemberData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *chatRoomMember; // @dynamic chatRoomMember;
@property(retain, nonatomic) SKBuiltinString_t *chatRoomUserName; // @dynamic chatRoomUserName;
@property(nonatomic) unsigned int infoMask; // @dynamic infoMask;
@property(nonatomic) unsigned int memberCount; // @dynamic memberCount;
@property(nonatomic) unsigned int watchMemberCount; // @dynamic watchMemberCount;
@property(retain, nonatomic) NSMutableArray *watchMembers; // @dynamic watchMembers;

@end

