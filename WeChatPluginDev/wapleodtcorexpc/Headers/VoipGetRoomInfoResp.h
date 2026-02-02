//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface VoipGetRoomInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *callerUserName; // @dynamic callerUserName;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(nonatomic) unsigned int inviteType; // @dynamic inviteType;
@property(nonatomic) int memberCount; // @dynamic memberCount;
@property(retain, nonatomic) NSMutableArray *memberStatus; // @dynamic memberStatus;
@property(nonatomic) int roomId; // @dynamic roomId;
@property(nonatomic) long long roomKey; // @dynamic roomKey;

@end

