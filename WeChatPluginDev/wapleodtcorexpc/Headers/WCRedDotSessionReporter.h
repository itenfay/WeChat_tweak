//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCRedDotSessionReporter : NSObject
{
}

+ (_Bool)getViewId:(id *)arg1 andCgiBizId:(id *)arg2 ctrlInfo:(id)arg3 showInfo:(id)arg4;
+ (_Bool)getViewId:(id *)arg1 andCgiBizId:(id *)arg2 ctrlInfo:(id)arg3;
+ (id)getSDKReportParamsWithCtrlInfo:(id)arg1;
+ (void)reportRedDotCgiWithEventId:(id)arg1 ctrlInfo:(id)arg2 showInfo:(id)arg3 params:(id)arg4;
+ (void)reportRedDotCgiWithEventId:(id)arg1 ctrlInfo:(id)arg2 params:(id)arg3;
+ (void)reportRedDotAbortSimulLimitWhenReceivedCtrlInfo:(id)arg1 params:(id)arg2;
+ (void)reportRedDotHitSimulLimitWhenReceivedCtrlInfo:(id)arg1 params:(id)arg2;
+ (void)reportRedDotBanWhenReceivedCtrlInfo:(id)arg1 params:(id)arg2;
+ (void)reportRedDotAbandonCtrlInfo:(id)arg1 params:(id)arg2;
+ (void)reportRedDotRenderFailCtrlInfo:(id)arg1 showInfo:(id)arg2 params:(id)arg3;
+ (id)getRenderFailLRUCache;

@end

