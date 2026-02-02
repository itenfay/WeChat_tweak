//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_BizAcctInfo, GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_FinderMsg, GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_ItemMsg, GetRecommendFeedsResp_RecommendCardMsg_RecommendTagMsg, NSString;

@class WXPBGeneratedMessage;

@interface GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aggregationTitle; // @dynamic aggregationTitle;
@property(retain, nonatomic) NSString *aggregationUrl; // @dynamic aggregationUrl;
@property(retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_BizAcctInfo *bizInfo; // @dynamic bizInfo;
@property(retain, nonatomic) NSString *canvasBuffer; // @dynamic canvasBuffer;
@property(retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_FinderMsg *finderInfo; // @dynamic finderInfo;
@property(nonatomic) unsigned int iconType; // @dynamic iconType;
@property(retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg_RecommendItemMsg_ItemMsg *itemInfo; // @dynamic itemInfo;
@property(retain, nonatomic) NSString *recInfo; // @dynamic recInfo;
@property(retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg_RecommendTagMsg *recommendTag; // @dynamic recommendTag;
@property(retain, nonatomic) NSString *recommendWording; // @dynamic recommendWording;
@property(nonatomic) unsigned int styleFlag; // @dynamic styleFlag;

@end

