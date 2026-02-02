//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCUpdateUtil : NSObject
{
}

+ (_Bool)deobfAndUnzipFile:(id)arg1 to:(id)arg2;
+ (id)getDirOfUpdateTmp;
+ (_Bool)unzipFile:(id)arg1 toDir:(id)arg2;
+ (_Bool)isInfoMatchNative:(id)arg1;
+ (id)getMatchedInfoForBundle:(id)arg1 checkClientVersion:(_Bool)arg2;
+ (id)getNativeUUIDs;
+ (id)_getNativeUUIDs;
+ (id)formatUUID:(id)arg1;
+ (_Bool)canExitOnEnteringBackground;
+ (id)getUpdateDataInBundleDirPath;
+ (id)getUpdatePluginInBundleDirPath;
+ (id)getConfigFilePathForBundle:(id)arg1;
+ (id)getUpdateFlutterDirPath;
+ (id)getUpdatePluginDirPath;
+ (id)getUpdateResDirPath;
+ (id)getTmpUpdateDataDirPath;
+ (id)getUpdateDataDirPath;
+ (id)getUpdateDataZipFilePathWithCustomVersion:(id)arg1;
+ (id)getUpdateDataZipFilePath;
+ (id)getDirOfUpdate;
- (unsigned long long)preserveStuff;

@end

