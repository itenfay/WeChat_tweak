//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIView, UIViewController;
@protocol WCFinderInPictureProtocol;

@interface WCFinderInPictureKeepMgr
{
    UIViewController<WCFinderInPictureProtocol> *_vcContext;
    UIViewController<WCFinderInPictureProtocol> *_cache;
    UIView *_inPictureCacheView;
}

+ (void)inPictureFromVC:(id)arg1 mediaCell:(id)arg2 contentVM:(id)arg3 silencePlay:(_Bool)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *inPictureCacheView; // @synthesize inPictureCacheView=_inPictureCacheView;
@property(retain, nonatomic) UIViewController<WCFinderInPictureProtocol> *cache; // @synthesize cache=_cache;
@property(nonatomic) __weak UIViewController<WCFinderInPictureProtocol> *vcContext; // @synthesize vcContext=_vcContext;
- (void)onFinderWillMinimizeFloatingView;
- (void)BeginInterruption;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVoipWindowDidAppear;
- (void)onBeginMultiTalk;
- (void)onMMLiveFinishedForNotifyOuter;
- (void)onMMLiveStartForNotifyOuter;
- (void)updateVcContextUsedRecord;
- (_Bool)videoPlayCompleted;
- (void)onEnterRecentUsedTask:(id)arg1;
- (void)onRecoverTaskData:(id)arg1;
- (void)dismissVCAndUpdateMinimieInfoIfNeed:(id)arg1;
- (void)updateMinizedVC:(id)arg1;
- (void)inPictureVC:(id)arg1 animated:(_Bool)arg2;
- (_Bool)isMinizing:(id)arg1;
- (_Bool)shouldBlockMinimizationEntryInInteractivePop;
- (_Bool)minimizationInteractivePopGestureRecognizerShouldBegin;
- (void)minimizationInteractivePopToMinimizeTask:(_Bool)arg1;
- (id)currentMinimizationTaskBizKey;
- (id)currentMinimizationTaskBizName;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (_Bool)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)onRemoveMinimizedTask:(id)arg1;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (id)customMinimizeTransitionForTaskData:(id)arg1 transitionContext:(id)arg2;
- (id)customMaximizeTransitionForTaskData:(id)arg1 transitionContext:(id)arg2;
- (id)taskData:(id)arg1 animated:(_Bool)arg2;
- (void)finderFeedListMediaWillStarPlay;
- (void)finderFeedListMediaDidEndPlay;
- (_Bool)setInPictureMute:(_Bool)arg1;
- (_Bool)resolveExternalConflicts;
- (void)closeInPicture;
- (void)removeTaskFor:(id)arg1;
- (_Bool)isInPictureForVC:(id)arg1;
- (_Bool)isInPicturePlaying;
- (_Bool)isInPicture;
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

