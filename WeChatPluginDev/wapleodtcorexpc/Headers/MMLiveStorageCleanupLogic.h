//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveStorageCleanupLogic : NSObject
{
}

+ (unsigned long long)cleanupFilesInDirectory:(id)arg1 forScenario:(unsigned long long)arg2 withFileReferences:(id)arg3 enableVerboseLogging:(_Bool)arg4;
+ (void)markFilesRecursivelyInDirectory:(id)arg1 forDeviationDirectiveType:(unsigned long long)arg2 enableVerboseLogging:(_Bool)arg3;
+ (void)markFilesWithPathComponents:(id)arg1 relativeToDirectory:(id)arg2 forDeviationDirectiveType:(unsigned long long)arg3 atLevel:(unsigned long long)arg4 enableVerboseLogging:(_Bool)arg5;
+ (unsigned long long)cleanupStorageWithScenario:(unsigned long long)arg1;
+ (unsigned long long)executeStorageCleanup;
+ (unsigned long long)evaluateStorageCleanup;

@end

