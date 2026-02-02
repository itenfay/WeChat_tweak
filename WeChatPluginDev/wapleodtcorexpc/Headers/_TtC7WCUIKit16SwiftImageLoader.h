//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface _TtC7WCUIKit16SwiftImageLoader : NSObject
{
}

+ (void)saveImageFor:(id)arg1 image:(id)arg2 data:(id)arg3;
+ (void)saveDataFor:(id)arg1 data:(id)arg2;
+ (void)removeMemoryCacheFor:(id)arg1;
+ (id)requestKeyFor:(id)arg1;
+ (id)makeImagePathFor:(id)arg1;
+ (_Bool)hasCachedWithUrl:(id)arg1;
+ (id)cachedDataFor:(id)arg1;
+ (id)cacheBaseDirectory;
+ (void)removeMemoryCacheTo:(double)arg1;
+ (void)removeAllMemoryCache;
+ (unsigned long long)removeAllCache;
+ (_Bool)enabledHead;
+ (_Bool)enabled;
+ (id)shared;
- (void).cxx_destruct;
- (id)init;

@end

