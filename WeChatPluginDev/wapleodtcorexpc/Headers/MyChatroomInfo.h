//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class AbstractInfo, AtInfo, ChatroomRecInfo, NSString;

@class WXPBGeneratedMessage;

@interface MyChatroomInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AbstractInfo *abstractInfo; // @dynamic abstractInfo;
@property(retain, nonatomic) AtInfo *atInfo; // @dynamic atInfo;
@property(retain, nonatomic) ChatroomRecInfo *chatroomInfo; // @dynamic chatroomInfo;
@property(retain, nonatomic) NSString *lastMsgDesc; // @dynamic lastMsgDesc;
@property(nonatomic) unsigned long long unreadMsgCount; // @dynamic unreadMsgCount;

@end

