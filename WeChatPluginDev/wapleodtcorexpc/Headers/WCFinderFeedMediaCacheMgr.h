//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface WCFinderFeedMediaCacheMgr : NSObject
{
    NSMutableSet *_tidSet;
    NSArray *_cacheStrategyList;
    NSMutableDictionary *_metricDict;
    NSString *_contextId;
    NSMutableArray *_watchList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *watchList; // @synthesize watchList=_watchList;
@property(copy, nonatomic) NSString *contextId; // @synthesize contextId=_contextId;
@property(retain, nonatomic) NSMutableDictionary *metricDict; // @synthesize metricDict=_metricDict;
@property(retain, nonatomic) NSArray *cacheStrategyList; // @synthesize cacheStrategyList=_cacheStrategyList;
@property(retain, nonatomic) NSMutableSet *tidSet; // @synthesize tidSet=_tidSet;
- (void)cache:(id)arg1 didEvictObject:(id)arg2;
- (void)printExptLog;
- (id)getCacheMetricsWithStratedy:(id)arg1;
- (void)resetAll;
- (void)report;
- (void)readMediaFileWithTid:(id)arg1 fileSize:(unsigned long long)arg2 commentScene:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

