//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NSEShareDataUtil : NSObject
{
}

+ (id)getCurrentConfig;
+ (void)clearAllExtIdKeyReportFiles;
+ (void)handleShareExtIdKeyReportAfterAppActive;
+ (id)getAllExtIdKeyReportFiles;
+ (id)getPathOfIDKeyReportDataDir;
+ (id)logFilePath;
+ (id)logFolderPath;
+ (id)documentPath;
+ (void)clearSynthesizeSoundData;
+ (void)saveCurrentSpeechConfig:(id)arg1;
+ (id)getPathOfSoundsLibary;
+ (id)libaryPath;
+ (_Bool)syncUserDefaultData;
+ (id)getPathOfSpeechPosDir;
+ (id)getNSEAppGroupRootDir;
+ (id)getObjectForKey:(id)arg1;
+ (void)saveCurrentUsername:(id)arg1;
+ (void)saveCurrentSpeechConfigId:(id)arg1;
+ (id)userDefaults;
+ (id)containerURL;
+ (id)appGroupID;

@end

