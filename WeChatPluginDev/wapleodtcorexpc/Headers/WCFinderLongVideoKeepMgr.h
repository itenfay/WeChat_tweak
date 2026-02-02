//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WCFinderLongVideoPlayViewController;

@interface WCFinderLongVideoKeepMgr
{
    WCFinderLongVideoPlayViewController *_vcContext;
    NSMutableDictionary *_caches;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *caches; // @synthesize caches=_caches;
@property(nonatomic) __weak WCFinderLongVideoPlayViewController *vcContext; // @synthesize vcContext=_vcContext;
- (void)updateVcContextUsedRecord;
- (_Bool)videoPlayCompleted;
- (id)shareListViewControllerWithMegaVideo:(id)arg1;
- (void)onEnterRecentUsedTask:(id)arg1;
- (void)onRecoverTaskData:(id)arg1;
- (void)dismissVCAndUpdateMinimieInfoIfNeed:(id)arg1;
- (void)updateMinizedVC:(id)arg1;
- (void)minizeVC:(id)arg1;
- (_Bool)isMinizing:(id)arg1;
- (_Bool)shouldBlockMinimizationEntryInInteractivePop;
- (_Bool)minimizationInteractivePopGestureRecognizerShouldBegin;
- (id)minimizationInteractivePopGetPendingTaskContextWithGenerateType:(unsigned long long)arg1;
- (void)updateSnapShotWithVC:(id)arg1;
- (void)minimizationInteractivePopToMinimizeTask:(_Bool)arg1;
- (id)currentMinimizationTaskBizKey;
- (id)currentMinimizationTaskBizName;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (_Bool)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)onRemoveMinimizedTask:(id)arg1;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (id)taskDataWithType:(unsigned long long)arg1;
- (id)minimizeKey;
- (id)taskDataForVC:(id)arg1;
- (void)removeVC:(id)arg1;
- (id)cachedPlayerVCForKey:(id)arg1;
- (void)cachePlayerVC:(id)arg1 forKey:(id)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

