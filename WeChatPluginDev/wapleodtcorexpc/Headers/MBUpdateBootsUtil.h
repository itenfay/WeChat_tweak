//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MBUpdateBootsUtil : NSObject
{
}

+ (void)report27831:(id)arg1 pkgInfo:(id)arg2 fileExist:(long long)arg3 scene:(long long)arg4 state:(long long)arg5 errCode:(long long)arg6;
+ (id)getMagicPkgConfigList;
+ (void)removeMagicPkgInfo:(id)arg1;
+ (id)getMagicPkgInfo:(id)arg1;
+ (id)getMagicPkgList;
+ (_Bool)pkgFileExist:(id)arg1;
+ (id)getBaseWxaPkgPath:(id)arg1;
+ (id)readPkgPathFromUnZipPath:(id)arg1;
+ (id)getWxaPkgName:(id)arg1;
+ (id)getMagicPkgPath:(id)arg1 patchId:(id)arg2;
+ (id)getMagicOriginalPkgPath:(id)arg1 originalName:(id)arg2;
+ (id)getMagicZipPath:(id)arg1 patchId:(id)arg2;
+ (id)getMagicPkgTempRoot:(id)arg1;
+ (id)getMagicPkgRoot:(id)arg1;
+ (id)getDirOfMBBootsUpdate;
+ (id)getOriginalRelateWxaPath:(id)arg1 originalName:(id)arg2;
+ (id)getRelateWxaPath:(id)arg1 patchId:(id)arg2 unzipPath:(id)arg3;
+ (id)getRelatePkgPath:(id)arg1 patchId:(id)arg2;
+ (id)getRelateZipPath:(id)arg1 patchId:(id)arg2;
+ (id)getRelatePkgRootPath:(id)arg1;

@end

