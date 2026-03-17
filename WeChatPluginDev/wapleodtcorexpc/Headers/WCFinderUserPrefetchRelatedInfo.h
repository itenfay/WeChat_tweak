//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderUserPrefetchRelatedInfo : NSObject
{
    unsigned long long _scene;
    double _averageEnterCount;
    unsigned long long _prefetchAttempCount;
    unsigned long long _startTimestampOfLimitedPeriod;
    double _probThreshold;
}

+ (void)initialize;
+ (void)PBArrayAdd_averageEnterCount;
+ (void)PBArrayAdd_probThreshold;
+ (void)PBArrayAdd_startTimestampOfLimitedPeriod;
+ (void)PBArrayAdd_prefetchAttempCount;
+ (void)PBArrayAdd_scene;
@property(nonatomic) double probThreshold; // @synthesize probThreshold=_probThreshold;
@property(nonatomic) unsigned long long startTimestampOfLimitedPeriod; // @synthesize startTimestampOfLimitedPeriod=_startTimestampOfLimitedPeriod;
@property(nonatomic) unsigned long long prefetchAttempCount; // @synthesize prefetchAttempCount=_prefetchAttempCount;
@property(nonatomic) double averageEnterCount; // @synthesize averageEnterCount=_averageEnterCount;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)updateProbThreshold:(double)arg1;
- (void)updateStartTimestampOfLimitedPeriod:(unsigned long long)arg1;
- (void)updatePrefetchAttempCount:(unsigned long long)arg1;
- (void)updateAverageEnterCount:(double)arg1;
- (id)reportUserDict;
- (id)initWithPrefetchScene:(unsigned long long)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

