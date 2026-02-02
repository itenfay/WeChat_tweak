//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveConnectMicPkTeamInfo, MMFinderLivePkTaskedBonusStateOrchestrator, NSString;

@interface MMFinderLiveConnectMicPKInfo : NSObject
{
    _Bool _isDisableNextBattle;
    unsigned int _timeLeft;
    unsigned int _displayedTimeLeft;
    unsigned int _inviteTimeLeft;
    unsigned int _battleDuration;
    unsigned long long _anchorPkState;
    NSString *_sessionId;
    unsigned long long _sequence;
    unsigned long long _battleMode;
    unsigned long long _battleScope;
    MMFinderLiveConnectMicPkTeamInfo *_teamInfo;
    MMFinderLivePkTaskedBonusStateOrchestrator *_taskedBonusStateOrchestrator;
    NSString *_applicantFinderUsername;
    unsigned long long _winningCondition;
    id _winningConditionArguments;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int battleDuration; // @synthesize battleDuration=_battleDuration;
@property(nonatomic) _Bool isDisableNextBattle; // @synthesize isDisableNextBattle=_isDisableNextBattle;
@property(retain, nonatomic) id winningConditionArguments; // @synthesize winningConditionArguments=_winningConditionArguments;
@property(nonatomic) unsigned long long winningCondition; // @synthesize winningCondition=_winningCondition;
@property(retain, nonatomic) NSString *applicantFinderUsername; // @synthesize applicantFinderUsername=_applicantFinderUsername;
@property(retain, nonatomic) MMFinderLivePkTaskedBonusStateOrchestrator *taskedBonusStateOrchestrator; // @synthesize taskedBonusStateOrchestrator=_taskedBonusStateOrchestrator;
@property(retain, nonatomic) MMFinderLiveConnectMicPkTeamInfo *teamInfo; // @synthesize teamInfo=_teamInfo;
@property(nonatomic) unsigned long long battleScope; // @synthesize battleScope=_battleScope;
@property(nonatomic) unsigned long long battleMode; // @synthesize battleMode=_battleMode;
@property(nonatomic) unsigned int inviteTimeLeft; // @synthesize inviteTimeLeft=_inviteTimeLeft;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
@property(nonatomic) unsigned int displayedTimeLeft; // @synthesize displayedTimeLeft=_displayedTimeLeft;
@property(nonatomic) unsigned int timeLeft; // @synthesize timeLeft=_timeLeft;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned long long anchorPkState; // @synthesize anchorPkState=_anchorPkState;
@property(readonly, nonatomic) unsigned long long opponentScenario;
- (_Bool)isAnchorPkApplying;
- (_Bool)isCrossRoomPkStarted;
- (_Bool)isAudiencePkStarted;
- (_Bool)isAnchorPkStarted;
- (_Bool)isPkStarted;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

