//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray;

@interface GetRemindUserListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *contentRelatedUserList; // @dynamic contentRelatedUserList;
@property(retain, nonatomic) NSData *context; // @dynamic context;
@property(nonatomic) _Bool hasNext; // @dynamic hasNext;
@property(retain, nonatomic) NSMutableArray *normalUserList; // @dynamic normalUserList;

@end

