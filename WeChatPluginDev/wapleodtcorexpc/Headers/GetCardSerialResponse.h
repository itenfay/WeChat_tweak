//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface GetCardSerialResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *codes; // @dynamic codes;
@property(nonatomic) unsigned int refreshInterval; // @dynamic refreshInterval;
@property(nonatomic) unsigned int requestCount; // @dynamic requestCount;
@property(nonatomic) unsigned int requestTime; // @dynamic requestTime;

@end

