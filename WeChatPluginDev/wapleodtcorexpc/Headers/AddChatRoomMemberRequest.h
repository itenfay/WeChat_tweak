//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, HistoryInfo, NSMutableArray, NSString, SKBuiltinString_t;

@interface AddChatRoomMemberRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *accessApplicationDesp; // @dynamic accessApplicationDesp;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinString_t *chatRoomName; // @dynamic chatRoomName;
@property(retain, nonatomic) HistoryInfo *history; // @dynamic history;
@property(nonatomic) unsigned int lastRoomMsgTimeStamp; // @dynamic lastRoomMsgTimeStamp;
@property(nonatomic) unsigned int memberCount; // @dynamic memberCount;
@property(retain, nonatomic) NSMutableArray *memberList; // @dynamic memberList;

@end

