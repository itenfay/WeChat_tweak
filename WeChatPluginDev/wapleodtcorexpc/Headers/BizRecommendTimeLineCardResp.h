//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface BizRecommendTimeLineCardResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long clientId; // @dynamic clientId;
@property(retain, nonatomic) NSString *data; // @dynamic data;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(nonatomic) unsigned int refreshIntervalSec; // @dynamic refreshIntervalSec;

@end

