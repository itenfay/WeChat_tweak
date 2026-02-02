//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, WCFinderWCDB;
@protocol OS_dispatch_queue;

@interface WCFinderPrefetchManager : NSObject
{
    NSMutableDictionary *_managerDict;
    NSArray *_prefetchSceneArray;
    WCFinderWCDB *_finderDB;
    NSObject<OS_dispatch_queue> *_prefetchQueue;
    NSMutableArray *_allPrefetchFeatureArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *allPrefetchFeatureArray; // @synthesize allPrefetchFeatureArray=_allPrefetchFeatureArray;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *prefetchQueue; // @synthesize prefetchQueue=_prefetchQueue;
@property(nonatomic) __weak WCFinderWCDB *finderDB; // @synthesize finderDB=_finderDB;
@property(retain, nonatomic) NSArray *prefetchSceneArray; // @synthesize prefetchSceneArray=_prefetchSceneArray;
@property(retain, nonatomic) NSMutableDictionary *managerDict; // @synthesize managerDict=_managerDict;
- (float)enterProbBaseOnActionSeries:(unsigned long long)arg1;
- (float)enterProbBaseOnTime:(unsigned long long)arg1;
- (id)_getPrefetchFeatureArrayWithTimeInterval:(unsigned long long)arg1 scene:(unsigned long long)arg2;
- (id)getPrefetchFeatureArrayWithTimeInterval:(unsigned long long)arg1 scene:(unsigned long long)arg2;
- (unsigned long long)lastEnterSubEntranceWithInterval:(unsigned long long)arg1;
- (void)addPrefetchFeature:(id)arg1;
- (unsigned long long)maxValidPeriod;
- (id)modelWithPrefetchScene:(unsigned long long)arg1;
- (id)initWithFinderDB:(id)arg1;

@end

