//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJResourceCacheCleanupOptions : NSObject
{
    long long _cacheSizeLimit;
    long long _cleanupThreshold;
}

@property(readonly, nonatomic) long long cleanupThreshold; // @synthesize cleanupThreshold=_cleanupThreshold;
@property(readonly, nonatomic) long long cacheSizeLimit; // @synthesize cacheSizeLimit=_cacheSizeLimit;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCacheSizeLimit:(long long)arg1 cleanupThreshold:(long long)arg2;
- (id)initWithCacheSizeLimit:(long long)arg1;

@end

