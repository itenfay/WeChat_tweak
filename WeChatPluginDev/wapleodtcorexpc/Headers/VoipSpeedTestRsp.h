//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface VoipSpeedTestRsp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int needTest; // @dynamic needTest;
@property(retain, nonatomic) NSMutableArray *svrList; // @dynamic svrList;
@property(nonatomic) unsigned int svrListCnt; // @dynamic svrListCnt;
@property(nonatomic) unsigned long long testId; // @dynamic testId;

@end

