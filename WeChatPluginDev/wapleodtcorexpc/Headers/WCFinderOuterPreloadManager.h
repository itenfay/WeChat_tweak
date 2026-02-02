//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderLRUCache;

@interface WCFinderOuterPreloadManager : NSObject
{
    WCFinderLRUCache *_lruCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLRUCache *lruCache; // @synthesize lruCache=_lruCache;
- (id)outerPreloadTaskWithTid:(id)arg1;
- (void)saveAllTasks;
- (void)addOuterPreloadTaskArray:(id)arg1;
- (void)addOuterPreloadTask:(id)arg1;

@end

