//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, GetWxaGameConfigResponse_WxagGameOriginalReviewConfig, GetWxaGameConfigResponse_WxagGameReviewsConfig, WxaGameSampleConfig, WxaGameServerSampleConfig;

@interface GetWxaGameConfigResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) GetWxaGameConfigResponse_WxagGameReviewsConfig *gameReviewConfig; // @dynamic gameReviewConfig;
@property(retain, nonatomic) GetWxaGameConfigResponse_WxagGameOriginalReviewConfig *originalReviewConfig; // @dynamic originalReviewConfig;
@property(retain, nonatomic) WxaGameSampleConfig *perfSampleConfig; // @dynamic perfSampleConfig;
@property(retain, nonatomic) WxaGameServerSampleConfig *serverSampleConfig; // @dynamic serverSampleConfig;

@end

