//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCDeviceHKUtils : NSObject
{
}

+ (id)getWorkoutActivityTypes;
+ (_Bool)didShowAuthActivitySummary;
+ (_Bool)didShowAuthWorkout;
+ (_Bool)didShowAuthStepCount;
+ (void)requestAllAuthIfNeed:(CDUnknownBlockType)arg1;
+ (void)requestAuthorizationWithTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)saveHKSourceWhiteCache:(id)arg1;
+ (id)loadHKSourceWhiteCache;
+ (id)getNeedAuthTypes;
+ (_Bool)isOpenWatchDataUpload;
+ (id)getHKSourcePropertyLD;
+ (id)getHKSourcePropertyPT;
+ (id)pathForHKSourceWhiteCache;

@end

