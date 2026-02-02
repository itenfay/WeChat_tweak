//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBFileUtils : NSObject
{
}

+ (id)commonFilePathWithName:(id)arg1;
+ (void)setCommonFileDirectory:(id)arg1;
+ (id)fileNameWithPrefix:(id)arg1 subfix:(id)arg2;
+ (_Bool)deleteFileWithName:(id)arg1;
+ (id)getDataWithFileName:(id)arg1;
+ (void)saveData:(id)arg1 withFileName:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)saveData:(id)arg1 withFileName:(id)arg2;
+ (_Bool)checkRootPathExist;
+ (id)rootPath;
+ (id)libPath;
+ (_Bool)disableFileBackup:(id)arg1;

@end

