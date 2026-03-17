//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface ConfInviteRoomInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *groupid; // @dynamic groupid;
@property(retain, nonatomic) NSMutableArray *inviteItems; // @dynamic inviteItems;
@property(nonatomic) unsigned long long roomid; // @dynamic roomid;
@property(nonatomic) unsigned int selfMemberid; // @dynamic selfMemberid;

@end

