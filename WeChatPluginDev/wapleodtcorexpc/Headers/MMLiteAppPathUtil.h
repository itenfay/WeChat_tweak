//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiteAppPathUtil : NSObject
{
}

+ (id)getLiteAppDynamicConfigPath:(id)arg1 patchId:(id)arg2 md5:(id)arg3;
+ (id)getLiteAppPackageConfigPath:(id)arg1 patchId:(id)arg2 md5:(id)arg3;
+ (id)getIlinkCheckResourceRootPath;
+ (id)getLiteAppRootPath;
+ (id)getIlinkCheckResourcePath:(id)arg1 resourceName:(id)arg2 version:(unsigned int)arg3;
+ (id)getLiteAppBaseLibBundlePath;
+ (id)getLiteAppBaseLibTmpPath;
+ (id)getLiteAppBaseLibPath:(id)arg1 patchId:(id)arg2 md5:(id)arg3;
+ (id)getLiteAppConfigPath:(id)arg1 patchId:(id)arg2 md5:(id)arg3;
+ (id)getLiteAppPath:(id)arg1 patchId:(id)arg2 md5:(id)arg3;
+ (id)getLiteAppDataPath;
+ (id)getLiteAppCachePath;
+ (id)getLiteAppTmpPath;
+ (id)getLiteAppDBPath;

@end

