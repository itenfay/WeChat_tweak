//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NewLifeEnterReporter : NSObject
{
}

+ (void)reportCgiInfo:(id)arg1 response:(id)arg2 beforeFetchClock:(unsigned long long)arg3 afterFetchClock:(unsigned long long)arg4 profileClockData:(id)arg5 redDotUuid:(id)arg6;
+ (void)reportCgiInfoFail:(id)arg1 errCode:(int)arg2 errMsg:(id)arg3 beforeFetchClock:(unsigned long long)arg4 afterFetchClock:(unsigned long long)arg5 redDotUuid:(id)arg6;
+ (void)addReportAction:(id)arg1 timestamp:(unsigned long long)arg2 upTime:(unsigned long long)arg3;
+ (id)getPeriodCost:(id)arg1 startAction:(id)arg2 endAction:(id)arg3;
+ (void)addReportAction:(id)arg1;
+ (void)setRedDotUUID:(id)arg1;
+ (void)setUseInstanceCache:(unsigned int)arg1;
+ (void)setNewLifeTab:(unsigned int)arg1;
+ (void)setCacheType:(unsigned int)arg1;
+ (void)setupReportContextOnSwitchIn;
+ (void)setupReportContext:(_Bool)arg1;
+ (void)onFindFriendDidAppear;

@end

