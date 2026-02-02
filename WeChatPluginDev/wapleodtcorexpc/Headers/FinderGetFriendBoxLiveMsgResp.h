//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray;

@interface FinderGetFriendBoxLiveMsgResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appMsgList; // @dynamic appMsgList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool hasNewMsg; // @dynamic hasNewMsg;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) _Bool needClearMsg; // @dynamic needClearMsg;
@property(nonatomic) unsigned int nextIntervalMs; // @dynamic nextIntervalMs;

@end

