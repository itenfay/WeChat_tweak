//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCGetCallStackReportHandler : NSObject
{
}

+ (id)getReportJsonDataWithCustomInfo:(id)arg1 withCustomKey:(id)arg2 withReportID:(id)arg3 withDumpType:(unsigned long long)arg4;
+ (id)getReportJsonDataWithFPSStack:(id)arg1 withCustomInfo:(id)arg2 withReportID:(id)arg3 withDumpType:(unsigned long long)arg4;
+ (id)getReportJsonDataWithDiskIOStack:(id)arg1 withCustomInfo:(id)arg2 withReportID:(id)arg3 withDumpType:(unsigned long long)arg4;
+ (id)getReportJsonDataWithPowerConsumeStack:(id)arg1 withReportID:(id)arg2 withDumpType:(unsigned long long)arg3;
+ (id)getReportJsonDataWithCallStackString:(id)arg1 withReportID:(id)arg2 withDumpType:(unsigned long long)arg3 withScene:(id)arg4;
+ (id)getCustomReportInfoWithReportID:(id)arg1;

@end

