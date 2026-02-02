//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class Background, BaseResponse, ChannelInfo, ChatroomButton, ChatroomData, ChatroomEnterInfo, ChatroomExternInfo, ChatroomJumpInfo, ChatroomPreloadInfo, ChatroomUserData, FirstEnterNotify, MsgBaseInfo, NSMutableArray, RealtimeControlInfo;

@interface GetChatroomBaseInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) Background *background; // @dynamic background;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) ChannelInfo *channelInfo; // @dynamic channelInfo;
@property(retain, nonatomic) ChatroomButton *chatroomButton; // @dynamic chatroomButton;
@property(retain, nonatomic) ChatroomEnterInfo *chatroomEnterInfo; // @dynamic chatroomEnterInfo;
@property(retain, nonatomic) RealtimeControlInfo *controlInfo; // @dynamic controlInfo;
@property(retain, nonatomic) ChatroomData *currentChatroomData; // @dynamic currentChatroomData;
@property(retain, nonatomic) ChatroomUserData *currentUserData; // @dynamic currentUserData;
@property(retain, nonatomic) ChatroomExternInfo *externInfo; // @dynamic externInfo;
@property(retain, nonatomic) FirstEnterNotify *firstEnterNotify; // @dynamic firstEnterNotify;
@property(retain, nonatomic) ChatroomJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) MsgBaseInfo *msgBaseInfo; // @dynamic msgBaseInfo;
@property(retain, nonatomic) ChatroomPreloadInfo *preloadInfo; // @dynamic preloadInfo;
@property(retain, nonatomic) NSMutableArray *robotInfoList; // @dynamic robotInfoList;

@end

