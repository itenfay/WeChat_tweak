//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJoinLiveVisibleInfo, FinderLiveCreatorService, FinderLiveGlobalRewardLevel, FinderLiveRewardQuotaSwitchInfo;

@interface FinderLivePersonalCenterPrepareInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool hasLotteryWonRecord; // @dynamic hasLotteryWonRecord;
@property(nonatomic) _Bool hasPurchasedContent; // @dynamic hasPurchasedContent;
@property(nonatomic) _Bool hasShoppingOrder; // @dynamic hasShoppingOrder;
@property(retain, nonatomic) FinderJoinLiveVisibleInfo *joinliveVisibleInfo; // @dynamic joinliveVisibleInfo;
@property(retain, nonatomic) FinderLiveGlobalRewardLevel *rewardLevelInfo; // @dynamic rewardLevelInfo;
@property(retain, nonatomic) FinderLiveRewardQuotaSwitchInfo *rewardQuotaSwitch; // @dynamic rewardQuotaSwitch;
@property(retain, nonatomic) FinderLiveCreatorService *service; // @dynamic service;

@end

