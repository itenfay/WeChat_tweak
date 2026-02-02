//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveQuestBonusResult_FeedPromotionInfo, FinderLiveQuestBonusResult_GrowthCardInfo, FinderLiveQuestBonusResult_Heat, FinderLiveQuestBonusResult_VoucherInfo;

@interface FinderLiveQuestBonusResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int bonusType; // @dynamic bonusType;
@property(retain, nonatomic) FinderLiveQuestBonusResult_FeedPromotionInfo *feedPromotionInfo; // @dynamic feedPromotionInfo;
@property(retain, nonatomic) FinderLiveQuestBonusResult_GrowthCardInfo *growthCardInfo; // @dynamic growthCardInfo;
@property(retain, nonatomic) FinderLiveQuestBonusResult_Heat *heat; // @dynamic heat;
@property(retain, nonatomic) FinderLiveQuestBonusResult_VoucherInfo *voucherInfo; // @dynamic voucherInfo;

@end

