//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MegaVideoObjcPageMonitorCpp
{
}

+ (id)createInstance;
+ (long long)getStartTime;
+ (void)onCommonAction:(id)arg1;
+ (void)onGlobalAction:(int)arg1 pageId:(long long)arg2 pageType:(int)arg3 enterType:(int)arg4 extra:(id)arg5;
+ (void)onStart;
- (void)onCgiBack:(id)arg1 success:(_Bool)arg2 cgiTimeCost:(int)arg3 requestType:(int)arg4;
- (void)onCgiRequest:(id)arg1 requestType:(int)arg2;
- (void)useCache:(id)arg1;
- (void)onViewExpose:(id)arg1 exposeIndex:(int)arg2;
- (void)onViewAction:(int)arg1 viewId:(id)arg2;
- (void)onAction:(int)arg1;
- (void)onPageStateChange:(int)arg1;
- (void)updateMaxHorizontalScrollIndex:(int)arg1;
- (void)updateEnterType:(int)arg1;
- (void)init:(id)arg1 startTime:(long long)arg2 pageId:(long long)arg3 pageType:(int)arg4 enterType:(int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

