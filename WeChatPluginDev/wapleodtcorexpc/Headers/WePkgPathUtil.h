//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WePkgPathUtil
{
}

+ (id)wePkgHarInterceptFileDir;
+ (id)wePkgHarRecordFileDir;
+ (id)getFilePathIfExisted:(id)arg1 FileName:(id)arg2 ExpectMd5:(id)arg3 ExpectFileSize:(unsigned int)arg4;
+ (id)getVersionListWithSamePkgId:(id)arg1;
+ (id)pathOfPkgFile:(id)arg1 version:(id)arg2 FileName:(id)arg3;
+ (id)bigPkgFilePathOfPkgId:(id)arg1 version:(id)arg2;
+ (id)debugDirectoryPathOfPkgId:(id)arg1;
+ (id)directoryPathOfPkgId:(id)arg1 version:(id)arg2;
+ (id)directoryPathOfPkgId:(id)arg1;
+ (id)wePkgDatabasePath;
+ (id)liteAppFileDir:(id)arg1;
+ (id)wePkgDataDirPath;
+ (id)wePkgLibPath;

@end

