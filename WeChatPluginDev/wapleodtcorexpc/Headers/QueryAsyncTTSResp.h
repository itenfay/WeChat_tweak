//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSData, NSMutableArray;

@class WXPBGeneratedMessage;

@interface QueryAsyncTTSResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *audioExtInfo; // @dynamic audioExtInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *contextBuff; // @dynamic contextBuff;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) _Bool finish; // @dynamic finish;
@property(nonatomic) unsigned int interval; // @dynamic interval;

@end

