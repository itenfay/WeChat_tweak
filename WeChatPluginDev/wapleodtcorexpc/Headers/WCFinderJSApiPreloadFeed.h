//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLRUCache, NSMutableArray, NSString, WCFinderJSApiPreloadFeedConfig;

@interface WCFinderJSApiPreloadFeed : NSObject
{
    _Bool _invokeTimer;
    MMLRUCache *_caches;
    long long _totalFetchCount;
    long long _matchCount;
    NSMutableArray *_pendingTasks;
    long long _pendingCount;
    NSMutableArray *_runningTask;
    WCFinderJSApiPreloadFeedConfig *_config;
    unsigned long long _preFetchTime;
}

+ (id)preloadFeedFromVC:(id)arg1 config:(id)arg2;
+ (id)preloadFeedFromVC:(id)arg1;
+ (void)invokePreloadFromParams:(id)arg1 vc:(id)arg2 callback:(CDUnknownBlockType)arg3 failback:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool invokeTimer; // @synthesize invokeTimer=_invokeTimer;
@property(nonatomic) unsigned long long preFetchTime; // @synthesize preFetchTime=_preFetchTime;
@property(retain, nonatomic) WCFinderJSApiPreloadFeedConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSMutableArray *runningTask; // @synthesize runningTask=_runningTask;
@property(nonatomic) long long pendingCount; // @synthesize pendingCount=_pendingCount;
@property(retain, nonatomic) NSMutableArray *pendingTasks; // @synthesize pendingTasks=_pendingTasks;
@property(nonatomic) long long matchCount; // @synthesize matchCount=_matchCount;
@property(nonatomic) long long totalFetchCount; // @synthesize totalFetchCount=_totalFetchCount;
@property(retain, nonatomic) MMLRUCache *caches; // @synthesize caches=_caches;
- (_Bool)isOnWifi;
- (void)onGetCommentDetailWithEncryptId:(id)arg1 dataItem:(id)arg2;
- (void)fetchFinishWithFailed:(id)arg1;
- (void)tryNextFetch;
- (void)preloadFeed:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)preloadDataItemForEnryptId:(id)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

