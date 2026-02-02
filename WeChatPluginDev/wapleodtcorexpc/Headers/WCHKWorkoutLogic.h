//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class HKHealthStore, NSMutableDictionary, NSMutableSet, NSString;
@protocol WCHKWorkoutLogicDelegate;

@interface WCHKWorkoutLogic : NSObject
{
    _Bool _bHadObserverWorkout;
    _Bool _bHKWorkoutAccessAuthStatus;
    id <WCHKWorkoutLogicDelegate> _delegate;
    HKHealthStore *_healthStore;
    NSMutableDictionary *_dicActivityType;
    NSMutableSet *_hadUploadActivity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *hadUploadActivity; // @synthesize hadUploadActivity=_hadUploadActivity;
@property(retain, nonatomic) NSMutableDictionary *dicActivityType; // @synthesize dicActivityType=_dicActivityType;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(nonatomic) _Bool bHKWorkoutAccessAuthStatus; // @synthesize bHKWorkoutAccessAuthStatus=_bHKWorkoutAccessAuthStatus;
@property(nonatomic) _Bool bHadObserverWorkout; // @synthesize bHadObserverWorkout=_bHadObserverWorkout;
@property(nonatomic) __weak id <WCHKWorkoutLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onUploadSportRecordReponse:(id)arg1 success:(int)arg2;
- (void)onQueryCompeletedWithResult:(id)arg1 activityType:(unsigned long long)arg2;
- (void)queryWorkoutWithActivityType:(int)arg1 legalSources:(id)arg2;
- (void)querySourceWithCompletion:(CDUnknownBlockType)arg1;
- (void)retrieveWorkouts;
- (void)tryDoObserverWorkout;
- (void)setHKWorkoutSourceAccessStatus:(_Bool)arg1;
- (_Bool)getHKWorkoutSourceAccessStatus;
- (void)updateHealthStoreData;
- (_Bool)p_canTryUploadWorkout;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

