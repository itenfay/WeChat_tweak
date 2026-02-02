//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveGift, NSData, NSString, RewardExtContext;

@interface FinderLiveAppMsgComboLiveRewardInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *comboId; // @dynamic comboId;
@property(nonatomic) unsigned int comboProductCount; // @dynamic comboProductCount;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSData *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) RewardExtContext *rewardExtContext; // @dynamic rewardExtContext;
@property(retain, nonatomic) FinderLiveGift *rewardGift; // @dynamic rewardGift;
@property(retain, nonatomic) NSString *rewardProductId; // @dynamic rewardProductId;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

