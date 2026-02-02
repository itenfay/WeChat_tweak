//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLRUCache, WCFinderWCDB;

@interface WCFinderFeedSessionBufferMgr : NSObject
{
    MMLRUCache *_cache;
    WCFinderWCDB *_finderDB;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderWCDB *finderDB; // @synthesize finderDB=_finderDB;
@property(retain, nonatomic) MMLRUCache *cache; // @synthesize cache=_cache;
- (id)_cacheKeyWithTid:(id)arg1 scene:(int)arg2 extraKey:(id)arg3;
- (id)getSessionBufferWithTid:(id)arg1 scene:(int)arg2 extraKey:(id)arg3;
- (id)getSessionBufferWithTid:(id)arg1 scene:(int)arg2;
- (void)updateFeedExposeTime:(id)arg1 scene:(int)arg2 exposeTimeInMS:(unsigned long long)arg3 extraKey:(id)arg4;
- (void)updateFeedExposeTime:(id)arg1 scene:(int)arg2 exposeTimeInMS:(unsigned long long)arg3;
- (_Bool)addSessionBufferArray:(id)arg1;
- (_Bool)addSessionBufferWithTid:(id)arg1 scene:(int)arg2 extraKey:(id)arg3 sessionString:(id)arg4;
- (_Bool)addSessionBufferWithTid:(id)arg1 scene:(int)arg2 sessionString:(id)arg3;
- (id)initWithFinderDB:(id)arg1;

@end

