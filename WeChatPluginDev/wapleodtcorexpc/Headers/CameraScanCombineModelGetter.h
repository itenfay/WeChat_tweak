//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CameraScanCombineModelGetter : NSObject
{
}

+ (id)resourceNameWithoutFileExt:(id)arg1;
+ (id)pathOfModelConfigFileWithResVer:(long long)arg1;
+ (id)pathOfModelDirWithResVer:(long long)arg1;
+ (id)pathOfModelRootDir;
+ (id)pathOfModelTmpConfigFile;
+ (id)pathOfModelTmpFolderDir;
+ (id)pathOfModelTmpDir;
+ (unsigned int)ffeSdkVersion;
- (_Bool)checkModelFileValid:(id)arg1 fileIndex:(id)arg2;
- (id)genFileIndexFromConfig:(id)arg1;
- (void)clearLowerVersionResFileWithResVer:(long long)arg1;
- (_Bool)tryCreateMMResModelInfo:(id)arg1 version:(unsigned int)arg2;
- (_Bool)isModelInfoValid:(id)arg1;
- (id)fetchXNetModelInfoFromWeVision;
- (id)readLocalModelConfigForXNet;
- (id)fetchMMResModelInfoWithResVersion:(long long)arg1;
- (id)fetchBundleModelInfo;

@end

