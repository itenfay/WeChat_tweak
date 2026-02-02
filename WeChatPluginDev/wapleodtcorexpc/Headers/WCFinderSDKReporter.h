//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderSDKReporter : NSObject
{
}

+ (void)config:(id)arg1 bindParentVCView:(id)arg2;
+ (void)config:(id)arg1 uniqueId:(id)arg2;
+ (void)config:(id)arg1 exportMinPercent:(double)arg2;
+ (id)commonReportDict;
+ (void)fixHalfScreenReport:(id)arg1;
+ (void)customCGIReportEventID:(id)arg1 viewID:(id)arg2 proto:(unsigned long long)arg3 commentScene:(int)arg4 params:(id)arg5 isBatchReport:(_Bool)arg6;
+ (void)customCGIReportEventID:(id)arg1 viewID:(id)arg2 proto:(unsigned long long)arg3 commentScene:(int)arg4 params:(id)arg5;
+ (void)customEventID:(id)arg1 viewID:(id)arg2 proto:(unsigned long long)arg3 commentScene:(int)arg4 params:(id)arg5;
+ (void)customReportExposeBindView:(id)arg1 viewID:(id)arg2 eventID:(id)arg3 proto:(unsigned long long)arg4 params:(id)arg5;
+ (void)customCGIReportClickBindView:(id)arg1 viewID:(id)arg2 proto:(unsigned long long)arg3 commentScene:(int)arg4 params:(id)arg5;
+ (void)customCGIReportUnexposeBindView:(id)arg1 viewID:(id)arg2 proto:(unsigned long long)arg3 commentScene:(int)arg4 params:(id)arg5;
+ (void)customCGIReportExposeBindView:(id)arg1 viewID:(id)arg2 proto:(unsigned long long)arg3 commentScene:(int)arg4 params:(id)arg5;
+ (void)customReportEvent:(id)arg1 view:(id)arg2 viewID:(id)arg3 proto:(unsigned long long)arg4 params:(id)arg5;
+ (void)customReportClickBindView:(id)arg1 viewID:(id)arg2 proto:(unsigned long long)arg3 params:(id)arg4;
+ (void)customReportExposeBindView:(id)arg1 viewID:(id)arg2 proto:(unsigned long long)arg3 params:(id)arg4;
+ (void)cgiReportBindPage:(unsigned long long)arg1 page:(id)arg2 pageName:(id)arg3 proto:(long long)arg4 params:(id)arg5 paramsBlock:(CDUnknownBlockType)arg6;
+ (void)cgiReportBindPage:(unsigned long long)arg1 page:(id)arg2 pageName:(id)arg3 proto:(long long)arg4 params:(id)arg5;
+ (void)customCgiReportPage:(unsigned long long)arg1 page:(id)arg2 pageName:(id)arg3 eventID:(id)arg4 proto:(long long)arg5 params:(id)arg6;
+ (void)customReportPage:(unsigned long long)arg1 page:(id)arg2 eventID:(id)arg3 proto:(long long)arg4 params:(id)arg5;
+ (void)bindPage:(unsigned long long)arg1 page:(id)arg2 pageName:(id)arg3 proto:(long long)arg4 params:(id)arg5;
+ (void)cgiReportBind:(id)arg1 viewId:(id)arg2 commentScene:(int)arg3 params:(id)arg4 paramsBlock:(CDUnknownBlockType)arg5;
+ (void)bind:(id)arg1 viewId:(id)arg2 proto:(long long)arg3 commentScene:(int)arg4 params:(id)arg5 clickParamsBlock:(CDUnknownBlockType)arg6 exposeParamsBlock:(CDUnknownBlockType)arg7;
+ (void)bind:(id)arg1 viewId:(id)arg2 proto:(long long)arg3 commentScene:(int)arg4 params:(id)arg5 paramsBlock:(CDUnknownBlockType)arg6;
+ (void)cleanSDKReportForView:(id)arg1;
+ (void)reset:(id)arg1;

@end

