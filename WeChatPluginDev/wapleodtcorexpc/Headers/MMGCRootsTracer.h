//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMGCRootsTracingGraphConfiguration, NSMutableArray, NSMutableSet;

@interface MMGCRootsTracer : NSObject
{
    NSMutableArray *_candidates;
    MMGCRootsTracingGraphConfiguration *_configuration;
    NSMutableSet *_objectSet;
}

- (void).cxx_destruct;
- (id)_shiftBufferToLowestAddress:(id)arg1;
- (long long)_compareStringArray:(id)arg1 withArray:(id)arg2;
- (id)_shiftToLowestLexicographically:(id)arg1;
- (id)_extractClassNamesFromGraphObjects:(id)arg1;
- (id)_shiftToUnifiedCycle:(id)arg1;
- (id)_unwrapCycle:(id)arg1;
- (id)_findRetainCyclesInObject:(id)arg1 stackDepth:(unsigned long long)arg2;
- (id)findRetainCyclesWithMaxCycleLength:(unsigned long long)arg1;
- (id)findRetainCycles;
- (id)_findPathToObject:(id)arg1 fromRoots:(id)arg2 stackDepth:(unsigned long long)arg3 maxTravelElementCount:(unsigned long long)arg4;
- (id)findPathToObject:(id)arg1 fromRoots:(id)arg2 stackDepth:(unsigned long long)arg3 maxTravelElementCount:(unsigned long long)arg4;
- (id)findPathToObject:(id)arg1 fromRoots:(id)arg2;
- (void)addCandidate:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

@end

