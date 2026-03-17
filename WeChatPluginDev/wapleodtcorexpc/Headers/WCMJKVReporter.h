//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCMJKVReporter : NSObject
{
}

+ (void)reportGeneralEventWithPublisherSessionMetrics:(id)arg1 eventName:(id)arg2 params:(id)arg3;
+ (void)reportPostEventMetricsWithPostSession:(id)arg1;
+ (void)reportPublisherSession3EventWithMetrics:(id)arg1;
+ (void)reportEventMetricsWithMetrics:(id)arg1;
+ (void)reportMovieComposingTaskMetricsWithMetrics:(id)arg1;
+ (void)reportShootComposingTaskMetricsWithMetrics:(id)arg1;
+ (void)reportSessionMetricsWithMetrics:(id)arg1;
+ (void)reportMaasSession3Event:(id)arg1;
+ (void)reportTemplateEventWithSessionKey:(id)arg1 reportScene:(unsigned long long)arg2 eventType:(unsigned long long)arg3 event:(id)arg4;
+ (void)reportMaasAsyncFuncMsgWithSessionKey:(id)arg1 reportScene:(unsigned long long)arg2 eventType:(unsigned long long)arg3 asyncFuncID:(unsigned long long)arg4 asyncFuncResultWithError:(id)arg5 asyncFuncDurationInMs:(unsigned long long)arg6;

@end

