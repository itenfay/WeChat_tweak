//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, BizRecArticleCard, BizRecFinderNativeCard;

@class WXPBGeneratedMessage;

@interface BizRecommendArticleResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) BizRecFinderNativeCard *finderNativeCard; // @dynamic finderNativeCard;
@property(retain, nonatomic) BizRecArticleCard *recCard; // @dynamic recCard;
@property(nonatomic) unsigned int refreshIntervalSec; // @dynamic refreshIntervalSec;

@end

