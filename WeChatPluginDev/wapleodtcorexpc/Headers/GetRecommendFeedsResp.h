//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, GetRecommendFeedsResp_RecommendFeedsConfig, NSData, NSMutableArray, NSString;

@interface GetRecommendFeedsResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSData *buffer; // @dynamic buffer;
@property(retain, nonatomic) GetRecommendFeedsResp_RecommendFeedsConfig *config; // @dynamic config;
@property(retain, nonatomic) NSMutableArray *recommendCard; // @dynamic recommendCard;
@property(retain, nonatomic) NSString *recommendFeedsWording; // @dynamic recommendFeedsWording;

@end

