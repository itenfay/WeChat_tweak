//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate;

@interface lzCacheCleanManager : NSObject
{
    NSDate *_lastCleanDate;
}

- (void).cxx_destruct;
- (_Bool)isExpFile:(id)arg1;
- (id)scanCachePath:(id)arg1;
- (_Bool)isFileCaching:(id)arg1 cacheMgr:(id)arg2;
- (void)removeFiles:(id)arg1 cacheMgr:(id)arg2;
- (void)cleanCache:(id)arg1 filterBlock:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)dealloc;
- (id)init;

@end

