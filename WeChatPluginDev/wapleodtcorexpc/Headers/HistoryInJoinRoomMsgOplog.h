//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface HistoryInJoinRoomMsgOplog : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(nonatomic) unsigned long long historyId; // @dynamic historyId;
@property(nonatomic) unsigned long long newMsgId; // @dynamic newMsgId;
@property(nonatomic) unsigned int oper; // @dynamic oper;
@property(retain, nonatomic) NSString *roomName; // @dynamic roomName;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

