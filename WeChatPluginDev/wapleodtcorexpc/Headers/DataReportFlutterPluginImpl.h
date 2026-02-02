//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterDataReportFlutter, NSMutableDictionary, NSString;

@interface DataReportFlutterPluginImpl : NSObject
{
    FlutterDataReportFlutter *m_flutterAPI;
    NSMutableDictionary *m_flutterSessionIdMap;
}

+ (id)handleJParams:(id)arg1;
+ (void)reportCustomCgiEventTime:(id)arg1 eventId:(id)arg2 params:(id)arg3 bizId:(id)arg4 isBatchReport:(id)arg5 curPageInfo:(id)arg6 sourcePageInfo:(id)arg7;
- (void).cxx_destruct;
- (_Bool)isFlutterPage:(id)arg1;
- (void)reportAllOutEventTime:(long long)arg1 pageId:(long long)arg2 eventId:(id)arg3 pageName:(id)arg4 params:(id)arg5 sourcePageInfo:(id)arg6 error:(id *)arg7;
- (void)reportStandardViewEventTime:(long long)arg1 eventId:(id)arg2 viewId:(id)arg3 params:(id)arg4 routeRules:(id)arg5 curPageInfo:(id)arg6 sourcePageInfo:(id)arg7 error:(id *)arg8;
- (void)reportStandardPageEventTime:(long long)arg1 eventId:(id)arg2 pageHash:(long long)arg3 pageId:(long long)arg4 pageName:(id)arg5 params:(id)arg6 routeRules:(id)arg7 sourcePageInfo:(id)arg8 error:(id *)arg9;
- (void)reportCustomEventTime:(long long)arg1 eventId:(id)arg2 params:(id)arg3 routeRule:(long long)arg4 curPageInfo:(id)arg5 sourcePageInfo:(id)arg6 error:(id *)arg7;
- (void)reportCustomCgiEventTime:(long long)arg1 eventId:(id)arg2 params:(id)arg3 bizId:(long long)arg4 isBatchReport:(_Bool)arg5 curPageInfo:(id)arg6 sourcePageInfo:(id)arg7 error:(id *)arg8;
- (void)viewUnexpViewId:(id)arg1 params:(id)arg2 curPageInfo:(id)arg3 sourcePageInfo:(id)arg4 error:(id *)arg5;
- (void)viewExpViewId:(id)arg1 params:(id)arg2 curPageInfo:(id)arg3 sourcePageInfo:(id)arg4 error:(id *)arg5;
- (void)viewClickViewId:(id)arg1 params:(id)arg2 curPageInfo:(id)arg3 sourcePageInfo:(id)arg4 error:(id *)arg5;
- (void)pageOutPageHash:(long long)arg1 pageId:(long long)arg2 pageName:(id)arg3 params:(id)arg4 error:(id *)arg5;
- (void)pageInPageHash:(long long)arg1 pageId:(long long)arg2 pageName:(id)arg3 params:(id)arg4 error:(id *)arg5;
- (void)sessionOutPageHash:(long long)arg1 pageId:(long long)arg2 pageName:(id)arg3 params:(id)arg4 error:(id *)arg5;
- (void)sessionInPageHash:(long long)arg1 pageId:(long long)arg2 pageName:(id)arg3 params:(id)arg4 error:(id *)arg5;
- (void)onPageEventDisappear:(id)arg1;
- (void)onPageEventAppear:(id)arg1;
- (void)MMUIViewControllerDidDisappear:(id)arg1;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)nativeAppOut;
- (void)nativeAppIn;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

