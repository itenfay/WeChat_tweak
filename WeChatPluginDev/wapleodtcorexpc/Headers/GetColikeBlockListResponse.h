//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface GetColikeBlockListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSMutableArray *items; // @dynamic items;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(nonatomic) unsigned int total; // @dynamic total;
@property(nonatomic) unsigned int updateFlag; // @dynamic updateFlag;
@property(nonatomic) unsigned long long version; // @dynamic version;

@end

