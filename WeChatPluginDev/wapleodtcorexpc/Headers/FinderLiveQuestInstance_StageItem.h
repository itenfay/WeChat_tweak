//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLiveQuestInstance_StageItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long accomplishedTime; // @dynamic accomplishedTime;
@property(nonatomic) unsigned int bonusCount; // @dynamic bonusCount;
@property(retain, nonatomic) NSMutableArray *bonusRules; // @dynamic bonusRules;
@property(nonatomic) unsigned int intervalLimit; // @dynamic intervalLimit;
@property(nonatomic) unsigned int progressStageStatus; // @dynamic progressStageStatus;
@property(nonatomic) unsigned int rewardBonusPercentage; // @dynamic rewardBonusPercentage;
@property(nonatomic) unsigned int stageId; // @dynamic stageId;
@property(retain, nonatomic) NSString *stageName; // @dynamic stageName;
@property(retain, nonatomic) NSMutableArray *targetItems; // @dynamic targetItems;

@end

