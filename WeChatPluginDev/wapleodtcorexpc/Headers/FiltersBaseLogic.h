//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSRecursiveLock;

@interface FiltersBaseLogic
{
    NSRecursiveLock *_lock;
    NSMutableArray *_arrFilters;
    NSMutableArray *_arrSources;
    NSMutableArray *_arrDests;
}

- (void).cxx_destruct;
- (void)resetChain;
- (_Bool)chainPipeline;
- (id)getFinalFilterChain;
- (void)removeAllOutputs;
- (void)removeOutput:(id)arg1;
- (void)addOutput:(id)arg1;
- (void)removeAllFilters;
- (void)removeFilter:(id)arg1;
- (void)replaceAllFilters:(id)arg1;
- (void)replaceFilter:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addFilter:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addFilter:(id)arg1;
- (void)initData;
- (id)initWithOrderedFilters:(id)arg1 input:(id)arg2 outputs:(id)arg3;
- (id)initWithOrderedFilters:(id)arg1 input:(id)arg2 output:(id)arg3;
- (id)initWithInput:(id)arg1 output:(id)arg2;
- (id)init;

@end

