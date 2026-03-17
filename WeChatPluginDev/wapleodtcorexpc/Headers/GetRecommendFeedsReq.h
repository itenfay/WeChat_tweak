//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSData, RecommendFeedsContext;

@class WXPBGeneratedMessage;

@interface GetRecommendFeedsReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *buffer; // @dynamic buffer;
@property(retain, nonatomic) RecommendFeedsContext *context; // @dynamic context;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

