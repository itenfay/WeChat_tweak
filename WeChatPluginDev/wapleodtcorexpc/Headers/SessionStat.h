//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@interface SessionStat : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int indexInSessionList; // @dynamic indexInSessionList;
@property(nonatomic) unsigned int latestMsgType; // @dynamic latestMsgType;
@property(nonatomic) unsigned int massSendUnreadCount; // @dynamic massSendUnreadCount;
@property(nonatomic) unsigned int stayDuration; // @dynamic stayDuration;
@property(nonatomic) unsigned int templateUnreadCount; // @dynamic templateUnreadCount;
@property(nonatomic) unsigned int totalUnreadCount; // @dynamic totalUnreadCount;
@property(nonatomic) unsigned int unreadDuration; // @dynamic unreadDuration;

@end

