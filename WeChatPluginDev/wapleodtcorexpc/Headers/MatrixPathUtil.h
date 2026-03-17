//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MatrixPathUtil : NSObject
{
}

+ (unsigned long long)folderSizeAtPath:(id)arg1;
+ (unsigned long long)fileSizeAtPath:(id)arg1;
+ (void)setMatrixCacheRootPath:(id)arg1;
+ (long long)latestTimeWithCurTime:(long long)arg1 accessTime:(long long)arg2 modifyTime:(long long)arg3 changeTime:(long long)arg4 birthTime:(long long)arg5;
+ (void)autoCleanDiretory:(id)arg1 withTimeout:(double)arg2;
+ (id)memoryStatPluginCachePath;
+ (id)appRebootAnalyzerCachePath;
+ (id)crashBlockPluginCachePath;
+ (id)matrixCacheRootPath;

@end

