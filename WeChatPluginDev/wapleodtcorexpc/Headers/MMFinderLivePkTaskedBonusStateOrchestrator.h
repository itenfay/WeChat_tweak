//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLivePkTaskedBonusBarView, MMFinderLivePkTaskedBonusModel, MMLiveTaskId, NSString;
@protocol MMFinderLivePkTaskedBonusStateDescriptor, MMFinderLivePkTaskedBonusStateOrchestratorDelegate;

@interface MMFinderLivePkTaskedBonusStateOrchestrator : NSObject
{
    MMFinderLivePkTaskedBonusBarView *_barView;
    id <MMFinderLivePkTaskedBonusStateOrchestratorDelegate> _delegate;
    MMLiveTaskId *_liveTaskId;
    NSString *_correlationId;
    MMFinderLivePkTaskedBonusModel *_model;
    unsigned long long _giftsVerificationStatus;
    double _introPlayTime;
    id <MMFinderLivePkTaskedBonusStateDescriptor> _currentState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MMFinderLivePkTaskedBonusStateDescriptor> currentState; // @synthesize currentState=_currentState;
@property(nonatomic) double introPlayTime; // @synthesize introPlayTime=_introPlayTime;
@property(nonatomic) unsigned long long giftsVerificationStatus; // @synthesize giftsVerificationStatus=_giftsVerificationStatus;
@property(retain, nonatomic) MMFinderLivePkTaskedBonusModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *correlationId; // @synthesize correlationId=_correlationId;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) __weak id <MMFinderLivePkTaskedBonusStateOrchestratorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLivePkTaskedBonusBarView *barView; // @synthesize barView=_barView;
- (id)liveTask;
- (void)resetState;
- (_Bool)validateReferencedGiftsInModelAndFetchMissing:(id)arg1;
- (void)invokeScheduledStateUpdate;
- (void)updateWithModel:(id)arg1 serverUnixEpochTimeWithLocalFraction:(double)arg2;
- (void)updateWithBattlePlayerInfo:(id)arg1 serverUnixEpochTimeInSeconds:(unsigned long long)arg2;
@property(readonly, nonatomic) double creditMultiplier;
@property(readonly, nonatomic) _Bool inVisualState;
- (void)dealloc;
- (id)initWithLiveTaskId:(id)arg1;

@end

