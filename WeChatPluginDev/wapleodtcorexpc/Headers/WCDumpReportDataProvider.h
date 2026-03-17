//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCDumpReportDataProvider : NSObject
{
}

+ (id)getDumpReportDataWithDumpType:(unsigned long long)arg1 withDate:(id)arg2 withLimitReportIDs:(id)arg3;
+ (id)getDumpReportDataWithDumpType:(unsigned long long)arg1 withDate:(id)arg2;
+ (id)getDumpReportDataWithDumpType:(unsigned long long)arg1;
+ (id)getReportDataWithType:(unsigned long long)arg1 onDate:(id)arg2;
+ (id)getAllTypeReportDataWithDate:(id)arg1;
+ (id)getTodayOneReportDataWithLimitType:(id)arg1 withLimitReportID:(id)arg2;

@end

