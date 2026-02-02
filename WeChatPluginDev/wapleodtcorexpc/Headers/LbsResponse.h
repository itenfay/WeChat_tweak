//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface LbsResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int contactCount; // @dynamic contactCount;
@property(retain, nonatomic) NSMutableArray *contactList; // @dynamic contactList;
@property(nonatomic) unsigned int flushTime; // @dynamic flushTime;
@property(nonatomic) unsigned int isShowRoom; // @dynamic isShowRoom;
@property(nonatomic) unsigned int roomMemberCount; // @dynamic roomMemberCount;
@property(nonatomic) unsigned int state; // @dynamic state;

@end

