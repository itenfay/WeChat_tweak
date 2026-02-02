//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, ChatroomJumpDetail, JumpInfo, NSMutableArray;

@interface GetCanJoinChatroomResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *banActionList; // @dynamic banActionList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *chatroomInfoList; // @dynamic chatroomInfoList;
@property(retain, nonatomic) ChatroomJumpDetail *chatroomRankJumpInfo; // @dynamic chatroomRankJumpInfo;
@property(retain, nonatomic) JumpInfo *createJumpInfo; // @dynamic createJumpInfo;
@property(retain, nonatomic) ChatroomJumpDetail *findMoreChatroomJumpInfo; // @dynamic findMoreChatroomJumpInfo;
@property(retain, nonatomic) JumpInfo *findMoreJumpInfo; // @dynamic findMoreJumpInfo;
@property(nonatomic) _Bool showEntrance; // @dynamic showEntrance;

@end

