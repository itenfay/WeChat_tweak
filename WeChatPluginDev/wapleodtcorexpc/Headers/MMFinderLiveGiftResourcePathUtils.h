//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveGiftResourcePathUtils : NSObject
{
}

+ (id)giftCacheKey:(id)arg1 animationId:(id)arg2 scenarioKey:(id)arg3;
+ (id)downloadPathForResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
+ (id)unzipPathForResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
+ (id)cachePathForResourceID:(id)arg1 fileMD5:(id)arg2 resType:(long long)arg3;
+ (id)getMd5ForURL:(id)arg1;

@end

