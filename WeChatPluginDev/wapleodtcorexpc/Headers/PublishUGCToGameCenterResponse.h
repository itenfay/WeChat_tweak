//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSString;

@class WXPBGeneratedMessage;

@interface PublishUGCToGameCenterResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(retain, nonatomic) NSString *jsonData; // @dynamic jsonData;
@property(nonatomic) int ret; // @dynamic ret;
@property(nonatomic) unsigned int topicId; // @dynamic topicId;
@property(nonatomic) unsigned long long videoId; // @dynamic videoId;

@end

