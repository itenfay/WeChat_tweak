//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GiftCenter, RankSummary, RecentPlayCommText, RecentPlayRecommendBanner, RecommendTopic;

@interface RecentPlayGameInfo_SubItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) RecentPlayCommText *commText; // @dynamic commText;
@property(retain, nonatomic) GiftCenter *giftCenter; // @dynamic giftCenter;
@property(retain, nonatomic) RankSummary *rankSummary; // @dynamic rankSummary;
@property(retain, nonatomic) RecentPlayRecommendBanner *recommendBanner; // @dynamic recommendBanner;
@property(retain, nonatomic) RecommendTopic *recommendTopic; // @dynamic recommendTopic;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

