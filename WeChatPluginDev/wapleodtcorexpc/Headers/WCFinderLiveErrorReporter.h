//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderLiveErrorReporter : NSObject
{
}

+ (id)replaceCommaToSemicolon:(id)arg1;
+ (void)reportLiveFatalLogicErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
+ (void)reportLiveFatalUIErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
+ (void)reportLiveLogicErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
+ (void)reportLiveUIErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
+ (void)reportLiveLogicWarningWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
+ (void)reportLiveUIWarningWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
+ (void)reportLivePerformanceErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3 errorTags:(id)arg4 level:(unsigned int)arg5;
+ (void)reportLiveLogicErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3 severityLevel:(unsigned long long)arg4;
+ (void)reportLiveUIErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3 severityLevel:(unsigned long long)arg4;
+ (void)reportLiveLocalErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
+ (void)reportLiveCaptureErrorWithLiveId:(unsigned long long)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
+ (void)reportLiveSDKErrorWithLiveId:(unsigned long long)arg1 sdkRoomId:(unsigned int)arg2 errorCode:(int)arg3 errorMsg:(id)arg4;
+ (void)reportLiveCgiDelayWithLiveId:(unsigned long long)arg1 cgiNumber:(unsigned int)arg2 costTime:(unsigned int)arg3 errorCode:(int)arg4 errorMsg:(id)arg5;
+ (void)reportLiveCgiDelayWithLiveId:(unsigned long long)arg1 cgiNumber:(unsigned int)arg2 costTime:(unsigned int)arg3;
+ (void)reportLiveCgiErrorWithLiveId:(unsigned long long)arg1 cgiNumber:(unsigned int)arg2 errorCode:(int)arg3 errorMsg:(id)arg4;

@end

