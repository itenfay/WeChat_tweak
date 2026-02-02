//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveGiftGoalDescriptionItem, MMFinderLiveGiftGoalItem, MMFinderLivePlayGiftAnimationCommand, NSString;

@interface MMFinderLiveGiftGoalModel : NSObject
{
    _Bool _invalidated;
    NSString *_goalId;
    MMFinderLiveGiftGoalDescriptionItem *_goalDescription;
    MMFinderLiveGiftGoalDescriptionItem *_goalFulfilledHeading;
    MMFinderLiveGiftGoalDescriptionItem *_goalFulfilledDescription;
    unsigned long long _startUnixEpochTimeInSeconds;
    unsigned long long _endUnixEpochTimeInSeconds;
    MMFinderLiveGiftGoalItem *_goalItem;
    MMFinderLivePlayGiftAnimationCommand *_fulfilledAnimationCommand;
}

+ (_Bool)ensureResourceAvailabilityForGiftId:(id)arg1 liveTaskId:(id)arg2;
+ (id)descriptionWithBackendSuppliedTemplate:(id)arg1 liveTaskId:(id)arg2;
+ (id)goalModelWithBackendInfo:(id)arg1 liveTaskId:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLivePlayGiftAnimationCommand *fulfilledAnimationCommand; // @synthesize fulfilledAnimationCommand=_fulfilledAnimationCommand;
@property(retain, nonatomic) MMFinderLiveGiftGoalItem *goalItem; // @synthesize goalItem=_goalItem;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic) unsigned long long endUnixEpochTimeInSeconds; // @synthesize endUnixEpochTimeInSeconds=_endUnixEpochTimeInSeconds;
@property(nonatomic) unsigned long long startUnixEpochTimeInSeconds; // @synthesize startUnixEpochTimeInSeconds=_startUnixEpochTimeInSeconds;
@property(retain, nonatomic) MMFinderLiveGiftGoalDescriptionItem *goalFulfilledDescription; // @synthesize goalFulfilledDescription=_goalFulfilledDescription;
@property(retain, nonatomic) MMFinderLiveGiftGoalDescriptionItem *goalFulfilledHeading; // @synthesize goalFulfilledHeading=_goalFulfilledHeading;
@property(retain, nonatomic) MMFinderLiveGiftGoalDescriptionItem *goalDescription; // @synthesize goalDescription=_goalDescription;
@property(retain, nonatomic) NSString *goalId; // @synthesize goalId=_goalId;
@property(readonly, nonatomic) _Bool effectiveNow;

@end

