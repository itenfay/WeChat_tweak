//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAFileStorage : NSObject
{
}

+ (_Bool)isUsrSpaceOverStandard:(id)arg1;
+ (_Bool)isUsrSpaceOverStandardWithAppId:(id)arg1;
+ (id)saveTempFileWithAppId:(id)arg1 fileType:(id)arg2 data:(id)arg3;
+ (void)saveOriginalImageWithAppID:(id)arg1 imageArr:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
+ (_Bool)haveFreeTmpSpace:(id)arg1;
+ (_Bool)haveFreeTmpSpace:(id)arg1 writeSize:(unsigned long long)arg2;
+ (_Bool)isTempPath:(id)arg1 appID:(id)arg2;
+ (_Bool)CopyFileWithLimitChecking:(id)arg1 To:(id)arg2 ForApp:(id)arg3;
+ (_Bool)RenameFileWithLimitChecking:(id)arg1 To:(id)arg2 ForApp:(id)arg3;
+ (_Bool)CreateFileWithLimitChecking:(id)arg1 ForApp:(id)arg2 WithFileSize:(unsigned long long)arg3;
+ (_Bool)illegalTransferLocalID:(id)arg1 toLocalID:(id)arg2;
+ (_Bool)haveFreeSpace:(id)arg1 writeSize:(unsigned long long)arg2 usrPath:(id)arg3;
+ (void)createFileStorageDirWithAppID:(id)arg1;
+ (id)tmpOrStorefilePathWithAppID:(id)arg1 localID:(id)arg2;
+ (id)usrFilePathWithAppID:(id)arg1 localID:(id)arg2;
+ (unsigned long long)localIDGeneratorIncreaseID;
+ (id)localIDWithLocalIDPrefix:(id)arg1 md5:(id)arg2 fileType:(id)arg3;
+ (_Bool)generatLocalID:(id *)arg1 path:(id *)arg2 withAppID:(id)arg3 fileType:(id)arg4 fileDir:(id)arg5 localIDPrefix:(id)arg6;
+ (id)mimeTypeFromFileExtension:(id)arg1;
+ (id)fileExtensionFromMIMEType:(id)arg1;
+ (_Bool)isWeAppLocalID:(id)arg1;
+ (_Bool)isUsrLocalID:(id)arg1;
+ (_Bool)isUsrLocalID:(id)arg1 byName:(id)arg2;
+ (_Bool)isStoreLocalID:(id)arg1;
+ (_Bool)isTempLocalID:(id)arg1;
+ (id)localIDPrefixWithName:(id)arg1;
+ (id)singlePageModeLocalIDPrefix;
+ (id)usrLocalIDPrefix;
+ (id)storeLocalIDPrefix;
+ (id)tempLocalIDPrefix;
+ (_Bool)isHomePath:(id)arg1;
+ (_Bool)isMD5StringValid:(id)arg1;
+ (id)usrFilePathWithAppID:(id)arg1 subPath:(id)arg2 localName:(id)arg3;
+ (_Bool)ak_isSymlink:(id)arg1;
+ (id)filePathWithAppID:(id)arg1 localID:(id)arg2;
+ (id)storeLocalIDWithMD5:(id)arg1 fileType:(id)arg2;
+ (id)storeFileDirWithAppID:(id)arg1;
+ (id)tempFileDirWithAppID:(id)arg1;
+ (id)tempDirName;
+ (id)cacheSandboxRootDir;
+ (_Bool)generateStoreLocalID:(id *)arg1 path:(id *)arg2 withAppID:(id)arg3 fileType:(id)arg4;
+ (_Bool)generateTempLocalID:(id *)arg1 path:(id *)arg2 withAppID:(id)arg3 fileType:(id)arg4;
+ (id)getBufferIdentity:(id)arg1;
+ (id)bufferSchema;
+ (id)fileSchema;
+ (id)getFileTypeWithData:(id)arg1;
+ (void)saveOriginalVideoWithAppID:(id)arg1 asset:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
+ (void)saveOriginalImageWithAppID:(id)arg1 asset:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
+ (id)generateImagesLocalIds:(id)arg1 fileType:(long long)arg2 appID:(id)arg3;
+ (void)syncSaveImageWithAppID:(id)arg1 images:(id)arg2 fileType:(long long)arg3 completeHandler:(CDUnknownBlockType)arg4;
+ (void)saveImageWithAppID:(id)arg1 images:(id)arg2 fileType:(long long)arg3 completeHandler:(CDUnknownBlockType)arg4;
+ (void)saveImageWithAppID:(id)arg1 images:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;

@end

