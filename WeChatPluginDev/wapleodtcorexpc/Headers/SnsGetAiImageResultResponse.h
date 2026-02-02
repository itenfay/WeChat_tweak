//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSMutableArray;

@class WXPBGeneratedMessage;

@interface SnsGetAiImageResultResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int maxRetryTimes; // @dynamic maxRetryTimes;
@property(nonatomic) unsigned int nextQueryInterval; // @dynamic nextQueryInterval;
@property(retain, nonatomic) NSMutableArray *url; // @dynamic url;

@end

