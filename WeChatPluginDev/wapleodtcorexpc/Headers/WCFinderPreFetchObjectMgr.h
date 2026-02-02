//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLRUCache, MMTimer, NSMutableDictionary;
@protocol WCFinderPreFetchObjectMgrDelegate;

@interface WCFinderPreFetchObjectMgr : NSObject
{
    MMLRUCache *_feedPreFetchValidityPeriodCache;
    NSMutableDictionary *_feedRequestDict;
    MMTimer *_requestTimer;
    id <WCFinderPreFetchObjectMgrDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderPreFetchObjectMgrDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMTimer *requestTimer; // @synthesize requestTimer=_requestTimer;
@property(retain, nonatomic) NSMutableDictionary *feedRequestDict; // @synthesize feedRequestDict=_feedRequestDict;
@property(retain, nonatomic) MMLRUCache *feedPreFetchValidityPeriodCache; // @synthesize feedPreFetchValidityPeriodCache=_feedPreFetchValidityPeriodCache;
- (_Bool)dataItemCanPreFetchWithId:(id)arg1;
- (void)updateDataItemPreFetchTime:(id)arg1 validityPeriod:(unsigned long long)arg2;
- (void)checkAndStarRequest;
- (void)startRequest;
- (void)addPrefetchObject:(id)arg1 scene:(int)arg2;
- (void)preFetchDataItemWithTid:(id)arg1 exportId:(id)arg2 nonceID:(id)arg3 scene:(int)arg4;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

