//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface EnterTalkRoomResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int addrCount; // @dynamic addrCount;
@property(retain, nonatomic) NSMutableArray *addrList; // @dynamic addrList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *memberList; // @dynamic memberList;
@property(nonatomic) int memberNum; // @dynamic memberNum;
@property(nonatomic) int micSeq; // @dynamic micSeq;
@property(nonatomic) int myRoomMemberId; // @dynamic myRoomMemberId;
@property(nonatomic) int roomId; // @dynamic roomId;
@property(nonatomic) long long roomKey; // @dynamic roomKey;

@end

