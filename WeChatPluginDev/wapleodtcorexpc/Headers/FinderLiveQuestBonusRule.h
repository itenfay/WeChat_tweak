//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveQuestBonusRule_FeedPromotionInfo, FinderLiveQuestBonusRule_GrowthCardInfo, FinderLiveQuestBonusRule_Heat, FinderLiveQuestBonusRule_VoucherInfo;

@interface FinderLiveQuestBonusRule : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int bonusType; // @dynamic bonusType;
@property(retain, nonatomic) FinderLiveQuestBonusRule_FeedPromotionInfo *feedPromotionInfo; // @dynamic feedPromotionInfo;
@property(retain, nonatomic) FinderLiveQuestBonusRule_GrowthCardInfo *growthCardInfo; // @dynamic growthCardInfo;
@property(retain, nonatomic) FinderLiveQuestBonusRule_Heat *heat; // @dynamic heat;
@property(retain, nonatomic) FinderLiveQuestBonusRule_VoucherInfo *voucherInfo; // @dynamic voucherInfo;

@end

