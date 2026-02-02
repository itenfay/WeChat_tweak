//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveGestureInfo, FinderLiveGift, NSMutableArray, NSString, RewardExtContext;

@interface FinderLiveAppMsgLiveRewardInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *attackItemList; // @dynamic attackItemList;
@property(retain, nonatomic) NSString *comboId; // @dynamic comboId;
@property(nonatomic) unsigned int comboProductCount; // @dynamic comboProductCount;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned int extraPkValue; // @dynamic extraPkValue;
@property(retain, nonatomic) FinderLiveGestureInfo *gesture; // @dynamic gesture;
@property(retain, nonatomic) NSMutableArray *giftItem; // @dynamic giftItem;
@property(nonatomic) unsigned int pkExtraTimesFlag; // @dynamic pkExtraTimesFlag;
@property(nonatomic) unsigned int pkExtraTimesMulti100; // @dynamic pkExtraTimesMulti100;
@property(nonatomic) unsigned int rewardAmountInWecoin; // @dynamic rewardAmountInWecoin;
@property(retain, nonatomic) RewardExtContext *rewardExtContext; // @dynamic rewardExtContext;
@property(retain, nonatomic) FinderLiveGift *rewardGift; // @dynamic rewardGift;
@property(nonatomic) unsigned int rewardProductCount; // @dynamic rewardProductCount;
@property(retain, nonatomic) NSString *rewardProductId; // @dynamic rewardProductId;

@end

