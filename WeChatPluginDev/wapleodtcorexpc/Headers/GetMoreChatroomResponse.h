//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface GetMoreChatroomResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *banActionList; // @dynamic banActionList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *chatroomFilter; // @dynamic chatroomFilter;
@property(retain, nonatomic) NSMutableArray *chatroomInfoList; // @dynamic chatroomInfoList;
@property(nonatomic) _Bool hasNext; // @dynamic hasNext;

@end

