//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, StatusCoverConfig, StatusIconConfig, StatusKeyValueConfig;

@interface TextStatusGetIconConfigResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) StatusCoverConfig *coverConfig; // @dynamic coverConfig;
@property(retain, nonatomic) StatusIconConfig *iconConfig; // @dynamic iconConfig;
@property(retain, nonatomic) NSMutableArray *iconConfigs; // @dynamic iconConfigs;
@property(retain, nonatomic) StatusKeyValueConfig *keyValueConfig; // @dynamic keyValueConfig;

@end

