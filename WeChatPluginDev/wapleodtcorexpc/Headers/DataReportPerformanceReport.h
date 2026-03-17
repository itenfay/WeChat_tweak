//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface DataReportPerformanceReport : NSObject
{
}

+ (_Bool)isOpenPerformanceReport;
+ (void)reportLengthLimit:(unsigned int)arg1;
+ (void)reportHookFail:(unsigned long long)arg1;
+ (void)reportPageStayInfoSize:(unsigned long long)arg1;
+ (void)reportSessionStayInfoSize:(unsigned long long)arg1;
+ (void)reportStackSize:(unsigned long long)arg1;
+ (void)reportPageStorage:(unsigned long long)arg1;

@end

