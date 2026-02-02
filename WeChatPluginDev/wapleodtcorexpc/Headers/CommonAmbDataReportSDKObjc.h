//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CommonAmbDataReportSDKObjc : NSObject
{
}

+ (id)handle28683Params:(id)arg1 params:(id)arg2 routeRule:(id)arg3;
+ (_Bool)isFlutterPage:(id)arg1;
+ (id)handleJParamsValue:(id)arg1;
+ (id)changeParamInfos:(id)arg1;
+ (void)reportCustomEvents:(id)arg1;
+ (void)reportStandardViewEvents:(id)arg1;
+ (void)reportStandardPageEvents:(id)arg1;
+ (void)reportStandardViewEvent:(unsigned long long)arg1 eventId:(id)arg2 viewId:(id)arg3 paramsKeys:(id)arg4 paramsValues:(id)arg5 routeType:(unsigned int)arg6 routeRule:(unsigned int)arg7 isBatchReport:(_Bool)arg8 curPageId:(unsigned int)arg9 curPageName:(id)arg10 curPageParamsKeys:(id)arg11 curPageParamsValues:(id)arg12 sourcePageId:(unsigned int)arg13 sourcePageName:(id)arg14 sourcePageParamsKeys:(id)arg15 sourcePageParamsValues:(id)arg16;
+ (void)reportStandardPageEvent:(unsigned long long)arg1 eventId:(id)arg2 pageId:(unsigned long long)arg3 pageName:(id)arg4 paramsKeys:(id)arg5 paramsValues:(id)arg6 routeType:(unsigned int)arg7 routeRule:(unsigned int)arg8 isBatchReport:(_Bool)arg9 sourcePageId:(unsigned int)arg10 sourcePageName:(id)arg11 sourcePageParamsKeys:(id)arg12 sourcePageParamsValues:(id)arg13;

@end

