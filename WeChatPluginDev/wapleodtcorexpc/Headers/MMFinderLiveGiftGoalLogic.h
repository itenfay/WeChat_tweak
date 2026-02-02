//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveGiftGoalModel, MMFinderLiveGiftGoalView, MMFinderLiveTaskId, NSMutableSet, NSString;

@interface MMFinderLiveGiftGoalLogic : NSObject
{
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveGiftGoalModel *_currentGoal;
    MMFinderLiveGiftGoalView *_giftGoalView;
    unsigned long long _giftGoalViewPreemptions;
    NSMutableSet *_dismissedGoals;
    NSMutableSet *_receivedGoals;
    NSMutableSet *_animationPlayCommandReceivedGoals;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *animationPlayCommandReceivedGoals; // @synthesize animationPlayCommandReceivedGoals=_animationPlayCommandReceivedGoals;
@property(retain, nonatomic) NSMutableSet *receivedGoals; // @synthesize receivedGoals=_receivedGoals;
@property(retain, nonatomic) NSMutableSet *dismissedGoals; // @synthesize dismissedGoals=_dismissedGoals;
@property(nonatomic) unsigned long long giftGoalViewPreemptions; // @synthesize giftGoalViewPreemptions=_giftGoalViewPreemptions;
@property(nonatomic) __weak MMFinderLiveGiftGoalView *giftGoalView; // @synthesize giftGoalView=_giftGoalView;
@property(retain, nonatomic) MMFinderLiveGiftGoalModel *currentGoal; // @synthesize currentGoal=_currentGoal;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)onReceivingGiftAnimationPlayCommand:(id)arg1 forTaskId:(id)arg2 vetoFlag:(_Bool *)arg3;
- (void)dismissGoalWithId:(id)arg1;
- (void)updateGoalWithBackendInfo:(id)arg1;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

