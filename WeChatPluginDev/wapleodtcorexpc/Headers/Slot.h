//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class JumpInfo, OnlineUser;

@class WXPBGeneratedMessage;

@interface Slot : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) JumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) OnlineUser *onlineUserStatus; // @dynamic onlineUserStatus;
@property(nonatomic) unsigned int slotType; // @dynamic slotType;

@end

