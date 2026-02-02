//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC6WeChat24ImageCacheCostAccountant : NSObject
{
    MISSING_TYPE *module;
    MISSING_TYPE *cost;
    MISSING_TYPE *mutext;
}

+ (id)localCacher;
+ (id)finderCacher;
+ (id)snsCacher;
+ (id)fastCacher;
+ (id)headCacher;
- (void).cxx_destruct;
- (id)init;
- (void)onRemoveAll;
- (void)onDiscardWithImage:(id)arg1;
- (void)onRemoveCacheWithLength:(long long)arg1;
- (void)onAddCacheWithLength:(long long)arg1;
- (void)onCacheWithImage:(id)arg1;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;

@end

