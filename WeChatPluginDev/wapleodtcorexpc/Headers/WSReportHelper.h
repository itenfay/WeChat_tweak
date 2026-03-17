//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WSReportHelper : NSObject
{
}

+ (void)ReportWebRecommendFeedsWKWebViewTerminateBackground:(id)arg1;
+ (void)ReportWebRecommendFeedsWKWebViewTerminateForeground:(id)arg1;
+ (void)ReportWebRecommendFeedsLoadSuccess;
+ (void)ReportWebRecommendFeedsForSystemError:(id)arg1 nsUrl:(id)arg2;
+ (_Bool)IsWebRecommendPublishId:(id)arg1;
+ (void)report15808Log:(unsigned int)arg1 actionType:(int)arg2;
+ (void)reportVoiceSearchEvent:(int)arg1 sessionid:(id)arg2 subSessionid:(id)arg3 query:(id)arg4 scene:(unsigned int)arg5 isNavVoice:(_Bool)arg6 exposeId:(id)arg7;
+ (void)reportVoiceSearchEvent:(int)arg1 sessionid:(id)arg2 subSessionid:(id)arg3 query:(id)arg4 scene:(unsigned int)arg5 isNavVoice:(_Bool)arg6;
+ (void)reportRtnBackEvent:(int)arg1 scene:(unsigned int)arg2 ishomepage:(_Bool)arg3 query:(id)arg4;
+ (void)reportPreviewWebviewAction:(unsigned long long)arg1 biz:(unsigned long long)arg2 timecost:(unsigned long long)arg3;
+ (void)ReportAccessTopicSearchDownloadH5;
+ (void)ReportWSLoadRecommendH5Fail;
+ (void)ReportUnRecognizedJSApi;
+ (void)ReportWSLoadH5Fail;

@end

