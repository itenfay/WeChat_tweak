//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdvertiseRecStatLogic : NSObject
{
}

+ (_Bool)shouldReportByAdlogCgi:(unsigned int)arg1;
+ (unsigned int)getRealLogId:(unsigned int)arg1 bySrc:(long long)arg2;
+ (_Bool)shouldForbidReportLogId:(unsigned int)arg1 bySrc:(long long)arg2;
+ (void)reportADLog:(unsigned int)arg1 logExt:(id)arg2 source:(long long)arg3;
+ (unsigned int)getClickCgiFuncBySrc:(long long)arg1;
+ (unsigned int)getExposureCgiFuncBySrc:(long long)arg1;

@end

