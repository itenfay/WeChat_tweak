//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCDumpInterface : NSObject
{
}

+ (id)genFilePathWithReportType:(unsigned long long)arg1 withReportID:(id)arg2;
+ (id)genFilePathWithReportType:(unsigned long long)arg1;
+ (id)saveDump:(id)arg1 withReportType:(unsigned long long)arg2 withReportID:(id)arg3;
+ (id)dumpReportWithReportType:(unsigned long long)arg1 withExceptionReason:(id)arg2 suspendAllThreads:(_Bool)arg3 enableSnapshot:(_Bool)arg4 writeCpuUsage:(_Bool)arg5 selfDefinedPath:(_Bool)arg6;
+ (id)dumpReportWithReportType:(unsigned long long)arg1 suspendAllThreads:(_Bool)arg2 enableSnapshot:(_Bool)arg3 writeCpuUsage:(_Bool)arg4;

@end

