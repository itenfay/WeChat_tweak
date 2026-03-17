//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, BizRecArticleCardLite, BizRecFinderNativeCardLite;

@class WXPBGeneratedMessage;

@interface BizRecommendArticleReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) BizRecFinderNativeCardLite *finderNativeCard; // @dynamic finderNativeCard;
@property(retain, nonatomic) BizRecArticleCardLite *recCard; // @dynamic recCard;

@end

