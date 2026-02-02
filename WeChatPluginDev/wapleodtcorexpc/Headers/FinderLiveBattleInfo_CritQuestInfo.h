//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLiveBattleInfo_CritQuestInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *critQuestId; // @dynamic critQuestId;
@property(nonatomic) unsigned int currentStage; // @dynamic currentStage;
@property(nonatomic) unsigned int currentStageDuration; // @dynamic currentStageDuration;
@property(nonatomic) _Bool deliveryCritQuest; // @dynamic deliveryCritQuest;
@property(nonatomic) _Bool isCritQuestAccomplished; // @dynamic isCritQuestAccomplished;
@property(retain, nonatomic) NSMutableArray *progress; // @dynamic progress;
@property(retain, nonatomic) NSMutableArray *reward; // @dynamic reward;
@property(nonatomic) unsigned int stageTimeLeft; // @dynamic stageTimeLeft;

@end

