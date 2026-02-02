//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSDictionary, NSString, ReportPageInfo;

@protocol FlutterDataReportHost
- (void)reportAllOutEventTime:(long long)arg1 pageId:(long long)arg2 eventId:(NSString *)arg3 pageName:(NSString *)arg4 params:(NSDictionary *)arg5 sourcePageInfo:(ReportPageInfo *)arg6 error:(id *)arg7;
- (void)reportStandardViewEventTime:(long long)arg1 eventId:(NSString *)arg2 viewId:(NSString *)arg3 params:(NSDictionary *)arg4 routeRules:(NSArray *)arg5 curPageInfo:(ReportPageInfo *)arg6 sourcePageInfo:(ReportPageInfo *)arg7 error:(id *)arg8;
- (void)reportStandardPageEventTime:(long long)arg1 eventId:(NSString *)arg2 pageHash:(long long)arg3 pageId:(long long)arg4 pageName:(NSString *)arg5 params:(NSDictionary *)arg6 routeRules:(NSArray *)arg7 sourcePageInfo:(ReportPageInfo *)arg8 error:(id *)arg9;
- (void)reportCustomCgiEventTime:(long long)arg1 eventId:(NSString *)arg2 params:(NSDictionary *)arg3 bizId:(long long)arg4 isBatchReport:(_Bool)arg5 curPageInfo:(ReportPageInfo *)arg6 sourcePageInfo:(ReportPageInfo *)arg7 error:(id *)arg8;
- (void)reportCustomEventTime:(long long)arg1 eventId:(NSString *)arg2 params:(NSDictionary *)arg3 routeRule:(long long)arg4 curPageInfo:(ReportPageInfo *)arg5 sourcePageInfo:(ReportPageInfo *)arg6 error:(id *)arg7;
- (void)viewUnexpViewId:(NSString *)arg1 params:(NSDictionary *)arg2 curPageInfo:(ReportPageInfo *)arg3 sourcePageInfo:(ReportPageInfo *)arg4 error:(id *)arg5;
- (void)viewExpViewId:(NSString *)arg1 params:(NSDictionary *)arg2 curPageInfo:(ReportPageInfo *)arg3 sourcePageInfo:(ReportPageInfo *)arg4 error:(id *)arg5;
- (void)viewClickViewId:(NSString *)arg1 params:(NSDictionary *)arg2 curPageInfo:(ReportPageInfo *)arg3 sourcePageInfo:(ReportPageInfo *)arg4 error:(id *)arg5;
- (void)pageOutPageHash:(long long)arg1 pageId:(long long)arg2 pageName:(NSString *)arg3 params:(NSDictionary *)arg4 error:(id *)arg5;
- (void)pageInPageHash:(long long)arg1 pageId:(long long)arg2 pageName:(NSString *)arg3 params:(NSDictionary *)arg4 error:(id *)arg5;
- (void)sessionOutPageHash:(long long)arg1 pageId:(long long)arg2 pageName:(NSString *)arg3 params:(NSDictionary *)arg4 error:(id *)arg5;
- (void)sessionInPageHash:(long long)arg1 pageId:(long long)arg2 pageName:(NSString *)arg3 params:(NSDictionary *)arg4 error:(id *)arg5;
@end

