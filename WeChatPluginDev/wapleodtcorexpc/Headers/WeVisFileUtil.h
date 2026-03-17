//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WeVisFileUtil : NSObject
{
}

+ (id)modelListConfigPath;
+ (id)modelTempDir;
+ (id)modelDir;
+ (id)weVisionDir;
+ (_Bool)modelFilesExist:(id)arg1;
+ (id)modelVersionWithKey:(id)arg1;
+ (id)modelPathWithKey:(id)arg1;
+ (void)initModelConfig;
+ (id)bundleModelRoot;
+ (id)modelListConfig;
+ (void)setModelProvider:(id)arg1;

@end

