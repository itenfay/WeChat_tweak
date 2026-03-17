//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMCleanCacheMgr : NSObject
{
}

+ (unsigned long long)p_preGetMatrixCrashBlockLogSize;
+ (unsigned long long)p_cleanMatrixCrashBlockLog;
+ (unsigned long long)p_preGetAppGroupTmpPathSize;
+ (unsigned long long)p_cleanAppGroupTmpPath;
+ (unsigned long long)p_preGetMapCacheSize;
+ (unsigned long long)p_cleanCacheMap;
+ (unsigned long long)p_preGetAudioCacheSize;
+ (unsigned long long)p_cleanCacheAudio;
+ (unsigned long long)p_preGetWebkitCacheSize;
+ (unsigned long long)p_cleanCachesWebkit;
+ (unsigned long long)p_preGetTmpPathSize;
+ (unsigned long long)p_cleanTmpPath;
+ (unsigned long long)preGetAppOtherCacheSize;
+ (unsigned long long)cleanAppOtherCache;
+ (unsigned long long)preGetWeAppCacheSize;
+ (unsigned long long)cleanWeAppCache;
+ (id)getCacheClassification;

@end

