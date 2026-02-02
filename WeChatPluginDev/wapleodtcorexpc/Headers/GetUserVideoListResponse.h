//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface GetUserVideoListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *checkHasNewTicket; // @dynamic checkHasNewTicket;
@property(retain, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(nonatomic) _Bool hasNext; // @dynamic hasNext;
@property(retain, nonatomic) NSString *jsonData; // @dynamic jsonData;
@property(nonatomic) unsigned int newCount; // @dynamic newCount;
@property(nonatomic) unsigned long long nextOffset; // @dynamic nextOffset;
@property(nonatomic) int ret; // @dynamic ret;
@property(nonatomic) unsigned int totalCount; // @dynamic totalCount;
@property(retain, nonatomic) NSMutableArray *videoList; // @dynamic videoList;

@end

