//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSMutableArray, NSString;

@interface FinderLiveQuestInstance : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bonusDescription; // @dynamic bonusDescription;
@property(retain, nonatomic) FinderJumpInfo *bonusDetailsInfo; // @dynamic bonusDetailsInfo;
@property(retain, nonatomic) NSMutableArray *bonusResults; // @dynamic bonusResults;
@property(nonatomic) unsigned int businessType; // @dynamic businessType;
@property(retain, nonatomic) NSString *configDesc; // @dynamic configDesc;
@property(nonatomic) unsigned long long createTime; // @dynamic createTime;
@property(nonatomic) unsigned long long endTime; // @dynamic endTime;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(nonatomic) unsigned int periodType; // @dynamic periodType;
@property(nonatomic) unsigned int priority; // @dynamic priority;
@property(retain, nonatomic) NSMutableArray *progressItems; // @dynamic progressItems;
@property(retain, nonatomic) NSString *questName; // @dynamic questName;
@property(nonatomic) unsigned long long rewardBonusAmountInHeat; // @dynamic rewardBonusAmountInHeat;
@property(nonatomic) unsigned int rewardProvideType; // @dynamic rewardProvideType;
@property(retain, nonatomic) NSMutableArray *stageItems; // @dynamic stageItems;
@property(nonatomic) unsigned long long startTime; // @dynamic startTime;
@property(nonatomic) unsigned long long updateTime; // @dynamic updateTime;
@property(nonatomic) unsigned long long version; // @dynamic version;

@end

