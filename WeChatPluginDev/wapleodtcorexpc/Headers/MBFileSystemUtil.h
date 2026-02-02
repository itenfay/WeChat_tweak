//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MBFileSystemUtil : NSObject
{
}

+ (id)stringWithSecondsSince1970:(unsigned long long)arg1;
+ (id)MBUsrFileStatusPath;
+ (id)MBCacheFileCleanStatusPath;
+ (id)MBLibraryDir;
+ (id)MBLibrarySandboxDir;
+ (id)MBLibrarySandboxDirWithBizName:(id)arg1;
+ (id)MBCacheDir;
+ (id)MBTmpDir;
+ (id)MBCacheSandboxDir;
+ (id)MBCacheSandboxDirWithBizName:(id)arg1;
+ (id)stringFromByte:(unsigned char)arg1;
+ (id)hexStringFromData:(id)arg1;
+ (id)dicFromStat:(struct stat)arg1;
+ (id)trimSuffixRelativeURL:(id)arg1;
+ (id)trimPrefixRelativeURL:(id)arg1;
+ (id)getFileUrl:(id)arg1 bizName:(id)arg2;
+ (id)getDirOfBiz:(id)arg1;
+ (id)getDirOfMBFileSystem;
- (unsigned long long)disasterTolerantBytesWithMB:(unsigned long long)arg1 minSizeMB:(unsigned long long)arg2;

@end

