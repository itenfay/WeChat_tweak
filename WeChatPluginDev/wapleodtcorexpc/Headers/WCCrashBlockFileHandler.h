//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCCrashBlockFileHandler : NSObject
{
}

+ (id)getAllCoreDumpIDs;
+ (id)getCoreDumpWithReportID:(id)arg1 andReportType:(unsigned long long)arg2;
+ (void)handleOOMDumpFile:(id)arg1;
+ (id)getStackFeatFilePath;
+ (id)getLaunchBlockRecordFilePath;
+ (_Bool)haveLagFilesOnDate:(id)arg1 onType:(unsigned long long)arg2;
+ (_Bool)haveLagFilesOnType:(unsigned long long)arg1;
+ (_Bool)haveLagFilesOnDate:(id)arg1;
+ (_Bool)haveLagFiles;
+ (id)p_getFileSuffixWithType:(unsigned long long)arg1 withDate:(id)arg2;
+ (void)deleteLagDataWithReportID:(id)arg1 andReportType:(unsigned long long)arg2;
+ (id)getLagDataWithReportID:(id)arg1 andReportType:(unsigned long long)arg2;
+ (id)getLagDataWithReportIDArray:(id)arg1 andReportType:(unsigned long long)arg2;
+ (id)getLagReportIDWithType:(unsigned long long)arg1 withDate:(id)arg2 withLimitReportID:(id)arg3;
+ (id)getLagReportIDWithType:(unsigned long long)arg1 withDate:(id)arg2;
+ (id)diretoryOfUserDumpWithType:(unsigned long long)arg1;
+ (id)diretoryOfUserDump;
+ (_Bool)p_isCrashReportID:(id)arg1;
+ (void)deleteCrashDataWithReportID:(id)arg1;
+ (_Bool)hasCrashReport;
+ (id)getAllCrashReportID;
+ (id)getAllCrashReportPath;
+ (id)loadPendingCrashReportID;
+ (id)getPendingCrashReportInfoWithError:(id *)arg1;

@end

