//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId, NSArray, NSString;

@interface MMFinderLivePkTaskedBonusModel : NSObject
{
    _Bool _tasksAccomplished;
    MMLiveTaskId *_liveTaskId;
    NSString *_identifier;
    double _serverUnixEpochTime;
    unsigned long long _currentState;
    double _stateTimeRemaining;
    double _stateDuration;
    unsigned long long _taskType;
    NSArray *_tasks;
    double _creditMultiplier;
    unsigned long long _bonusPkCredit;
}

+ (_Bool)areTasksAndBonusesInModel:(id)arg1 equalTo:(id)arg2;
+ (id)modelFromBackendPkPlayerInfo:(id)arg1 liveTaskId:(id)arg2 serverUnixEpochTimeInSeconds:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long bonusPkCredit; // @synthesize bonusPkCredit=_bonusPkCredit;
@property(nonatomic) _Bool tasksAccomplished; // @synthesize tasksAccomplished=_tasksAccomplished;
@property(nonatomic) double creditMultiplier; // @synthesize creditMultiplier=_creditMultiplier;
@property(retain, nonatomic) NSArray *tasks; // @synthesize tasks=_tasks;
@property(nonatomic) unsigned long long taskType; // @synthesize taskType=_taskType;
@property(nonatomic) double stateDuration; // @synthesize stateDuration=_stateDuration;
@property(nonatomic) double stateTimeRemaining; // @synthesize stateTimeRemaining=_stateTimeRemaining;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) double serverUnixEpochTime; // @synthesize serverUnixEpochTime=_serverUnixEpochTime;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (id)description;

@end

