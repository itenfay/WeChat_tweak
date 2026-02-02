//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class ChatroomData, ChatroomMsgPack, ChattingInfo, NSMutableArray;

@class WXPBGeneratedMessage;

@interface ChatroomRecInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long basicUpdateTime; // @dynamic basicUpdateTime;
@property(retain, nonatomic) NSMutableArray *bulletMsgList; // @dynamic bulletMsgList;
@property(retain, nonatomic) ChattingInfo *chatingDes; // @dynamic chatingDes;
@property(retain, nonatomic) ChatroomData *chatroomData; // @dynamic chatroomData;
@property(retain, nonatomic) NSMutableArray *chosenChatroomMsg; // @dynamic chosenChatroomMsg;
@property(retain, nonatomic) ChatroomMsgPack *lastChatroomMsg; // @dynamic lastChatroomMsg;
@property(nonatomic) unsigned int userChattingCount; // @dynamic userChattingCount;

@end

