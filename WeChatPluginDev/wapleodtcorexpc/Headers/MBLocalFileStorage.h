//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MBLocalFileStorage : NSObject
{
}

+ (_Bool)haveFreeTmpSpace:(id)arg1;
+ (_Bool)haveFreeTmpSpace:(id)arg1 writeSize:(unsigned long long)arg2;
+ (_Bool)haveFreeSpace:(id)arg1 writeSize:(unsigned long long)arg2 usrPath:(id)arg3;
+ (_Bool)isTempPath:(id)arg1 bizName:(id)arg2;
+ (_Bool)RenameFileWithLimitChecking:(id)arg1 To:(id)arg2 ForBiz:(id)arg3;
+ (id)localIDWithLocalIDPrefix:(id)arg1 md5:(id)arg2 fileType:(id)arg3;
+ (unsigned long long)localIDGeneratorIncreaseID;
+ (_Bool)generatLocalID:(id *)arg1 path:(id *)arg2 withBizName:(id)arg3 fileType:(id)arg4 fileDir:(id)arg5 localIDPrefix:(id)arg6;
+ (_Bool)generateTempLocalID:(id *)arg1 path:(id *)arg2 withBizName:(id)arg3 fileType:(id)arg4;
+ (id)fileExtensionFromMIMEType:(id)arg1;
+ (_Bool)isMD5StringValid:(id)arg1;
+ (id)tmpOrStorefilePathWithBizName:(id)arg1 localID:(id)arg2;
+ (id)usrFilePathWithBizName:(id)arg1 subPath:(id)arg2;
+ (id)usrFilePathWithBizName:(id)arg1 localID:(id)arg2;
+ (_Bool)ak_isSymlink:(id)arg1;
+ (id)filePathWithBizName:(id)arg1 localID:(id)arg2;
+ (void)createFileStorageDirWithBizName:(id)arg1;
+ (id)storeFileDirWithBizName:(id)arg1;
+ (id)tempFileDirWithBizName:(id)arg1;
+ (id)usrLocalIDPrefix;
+ (id)storeLocalIDPrefix;
+ (id)tempLocalIDPrefix;
+ (id)cacheSandboxRootDir;
+ (id)tempDirName;
+ (_Bool)isUsrLocalID:(id)arg1;
+ (_Bool)isStoreLocalID:(id)arg1;
+ (_Bool)isTempLocalID:(id)arg1;
+ (_Bool)isHomePath:(id)arg1;
+ (id)localIDPrefixWithName:(id)arg1;

@end

