//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveBattleInfo_CritQuestInfo, NSString;

@interface FinderLiveBattleInfo_PlayerInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *attackForegroundGiftId; // @dynamic attackForegroundGiftId;
@property(nonatomic) unsigned int attackForegroundHeightPercentage; // @dynamic attackForegroundHeightPercentage;
@property(retain, nonatomic) NSString *boardKey; // @dynamic boardKey;
@property(nonatomic) unsigned int boardType; // @dynamic boardType;
@property(nonatomic) unsigned long long count; // @dynamic count;
@property(retain, nonatomic) FinderLiveBattleInfo_CritQuestInfo *critQuestInfo; // @dynamic critQuestInfo;
@property(nonatomic) unsigned long long extraRewardWecoin; // @dynamic extraRewardWecoin;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) _Bool isAccepted; // @dynamic isAccepted;
@property(nonatomic) _Bool isApplicant; // @dynamic isApplicant;
@property(nonatomic) unsigned long long rewardWecoin; // @dynamic rewardWecoin;
@property(retain, nonatomic) NSString *sdkUserId; // @dynamic sdkUserId;
@property(nonatomic) unsigned int winningStreakCount; // @dynamic winningStreakCount;

@end

