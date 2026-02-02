//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveBattleExtraInfo, NSData, NSMutableArray, NSString;

@interface FinderLiveBattleInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int battleDuration; // @dynamic battleDuration;
@property(retain, nonatomic) NSString *battleId; // @dynamic battleId;
@property(nonatomic) unsigned int battleLayout; // @dynamic battleLayout;
@property(nonatomic) unsigned int battleMode; // @dynamic battleMode;
@property(nonatomic) unsigned int battleScope; // @dynamic battleScope;
@property(nonatomic) unsigned long long battleSeq; // @dynamic battleSeq;
@property(retain, nonatomic) NSMutableArray *battleTeams; // @dynamic battleTeams;
@property(nonatomic) unsigned long long dataTimestampMs; // @dynamic dataTimestampMs;
@property(nonatomic) unsigned long long delayMs; // @dynamic delayMs;
@property(retain, nonatomic) FinderLiveBattleExtraInfo *extraInfo; // @dynamic extraInfo;
@property(retain, nonatomic) NSData *indicatorParameter; // @dynamic indicatorParameter;
@property(nonatomic) unsigned int indicatorType; // @dynamic indicatorType;
@property(nonatomic) _Bool isDisableNextBattle; // @dynamic isDisableNextBattle;
@property(retain, nonatomic) NSMutableArray *playerInfo; // @dynamic playerInfo;
@property(nonatomic) unsigned int result; // @dynamic result;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(nonatomic) unsigned int timeLeft; // @dynamic timeLeft;

@end

