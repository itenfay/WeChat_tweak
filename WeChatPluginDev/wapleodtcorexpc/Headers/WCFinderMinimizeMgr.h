//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MiniAudioTaskContentView, NSDictionary, NSHashTable, NSString, UIImage, WCFinderMinimizeFloatingView, WCFinderMinimizeLogic, WCFinderMinimizeSilenceMonitor, WCFinderTransaction;

@interface WCFinderMinimizeMgr
{
    _Bool _isPresentingPage;
    _Bool _limitModeOn;
    MiniAudioTaskContentView *_taskContentView;
    WCFinderMinimizeFloatingView *_minimizeFloatingView;
    WCFinderMinimizeLogic *_currentLogic;
    NSHashTable *_pendingTransactions;
    WCFinderTransaction *_currentMinimizeActionTransaction;
    NSString *_currentMinimizeCoverUrl;
    UIImage *_currentMinimizeCoverSnap;
    NSDictionary *_tmpReportUDFKV;
    WCFinderMinimizeSilenceMonitor *_silenceMonitor;
}

+ (struct CGRect)expandFloatingViewRectForFeedId:(id)arg1 imageSize:(struct CGSize)arg2 containerView:(id)arg3;
+ (struct CGRect)expandFloatingViewRectForFeedId:(id)arg1 image:(id)arg2 containerView:(id)arg3;
+ (void)removeAllMinimize:(id)arg1;
+ (_Bool)resumePlay;
+ (_Bool)pausePlay;
- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderMinimizeSilenceMonitor *silenceMonitor; // @synthesize silenceMonitor=_silenceMonitor;
@property(retain, nonatomic) NSDictionary *tmpReportUDFKV; // @synthesize tmpReportUDFKV=_tmpReportUDFKV;
@property(nonatomic) _Bool limitModeOn; // @synthesize limitModeOn=_limitModeOn;
@property(nonatomic) _Bool isPresentingPage; // @synthesize isPresentingPage=_isPresentingPage;
@property(retain, nonatomic) UIImage *currentMinimizeCoverSnap; // @synthesize currentMinimizeCoverSnap=_currentMinimizeCoverSnap;
@property(retain, nonatomic) NSString *currentMinimizeCoverUrl; // @synthesize currentMinimizeCoverUrl=_currentMinimizeCoverUrl;
@property(retain, nonatomic) WCFinderTransaction *currentMinimizeActionTransaction; // @synthesize currentMinimizeActionTransaction=_currentMinimizeActionTransaction;
@property(retain, nonatomic) NSHashTable *pendingTransactions; // @synthesize pendingTransactions=_pendingTransactions;
@property(retain, nonatomic) WCFinderMinimizeLogic *currentLogic; // @synthesize currentLogic=_currentLogic;
@property(retain, nonatomic) WCFinderMinimizeFloatingView *minimizeFloatingView; // @synthesize minimizeFloatingView=_minimizeFloatingView;
@property(retain, nonatomic) MiniAudioTaskContentView *taskContentView; // @synthesize taskContentView=_taskContentView;
- (_Bool)shouldSilencePlayOtherFeed:(id)arg1 target:(id)arg2 wakeupAction:(SEL)arg3 monitor:(id *)arg4;
- (void)onCloseCurrentMinimize;
- (void)manualNotifyVCExpand:(id)arg1;
- (id)createAnimation:(_Bool)arg1 forVC:(id)arg2 alwaysReturn:(_Bool)arg3;
- (_Bool)couldReminimizeForUserInfo:(id)arg1;
- (void)onMinimizeablePageDidAppear:(id)arg1;
- (_Bool)fetchGlobalResumePlayForFeed:(id)arg1 playPosition:(out double *)arg2 forView:(id)arg3;
- (id)minimizePageInfoKey;
- (void)updateMinimizeFloatContent:(id)arg1;
- (void)onMinimizePlayStateChanged:(id)arg1;
- (void)onMinimizePlayPlayByResume;
- (void)onMinimizePlayStopPlayReport;
- (void)onMinimizePlayStartPlayReport;
- (void)onMinimizePlayPauseByInterrupt;
- (void)EndInterruption;
- (void)BeginInterruption;
- (void)onLanguageChange;
- (void)onFontSizeChange;
- (_Bool)forbidenForLimitMode;
- (void)_onLimitModeChanged;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (void)onLimitedModeChanged;
- (void)removeMinimizeByOther:(id)arg1;
- (void)onMMMusicMVMinimizationMgrWillAddMinimizeTask;
- (void)minimizeWindowWillHide:(_Bool)arg1;
- (void)minimizeWindowWillShow:(_Bool)arg1;
- (_Bool)isMinimizeTaskPlaying:(id)arg1;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (void)onRemoveMinimizedTask:(id)arg1;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRecoverTaskData:(id)arg1;
- (void)ensureBckItemAction:(id)arg1 newNav:(id)arg2;
- (id)bizKeyForPage:(id)arg1;
- (id)minimizeDelegateFromVC:(id)arg1;
- (void)restorePlayerToVC:(id)arg1;
- (void)didEndMinimizeTransition;
- (id)hiddenCurrentMinimizeWhenEnterPage:(id)arg1;
- (_Bool)_hiddenMiniminiFloatingViewWhenEnterPage:(id)arg1 restore:(_Bool)arg2;
- (void)cancelOldMinimizeTransition:(id)arg1;
- (id)willMinimizePage:(id)arg1 newMinimize:(_Bool)arg2 requestStop:(_Bool)arg3 reportEid:(id)arg4 createType:(id)arg5;
- (id)willMinimizePage:(id)arg1;
- (void)minimizeUndisplayPage:(id)arg1;
- (void)minimizeInnerPage:(id)arg1;
- (void)minimizePageWithoutQuit:(id)arg1;
- (void)minimizePage:(id)arg1;
- (void)onAnimatorDidEndClosure:(id)arg1;
- (void)onAnimatorAnimationWillStart:(id)arg1;
- (_Bool)zoomAnimatorUseTranSnapViewWithSnapAgain;
- (id)genNewImageViewWithView:(id)arg1;
- (id)createTaskContentViewWithFrame:(struct CGRect)arg1 isClosure:(_Bool)arg2;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (id)zoomAnimator:(id)arg1 chooseWithOther:(CDUnknownBlockType)arg2;
- (void)expandMinimizeTaskView;
- (void)onFloatingViewPlayStateChanged:(_Bool)arg1;
- (void)floatingViewSizeDidChanged:(id)arg1;
- (void)floatingViewDidClickMiniWindow:(id)arg1 restoreView:(id)arg2;
- (void)floatingViewOnClickCloseButton:(id)arg1 restoreView:(id)arg2;
- (id)getCurrentMinimizeTaskFloatingView;
- (id)dataFromVC:(id)arg1 key:(id)arg2;
- (void)closeMinimize:(_Bool)arg1 reason:(id)arg2;
- (_Bool)existsVideoPlayViewMinimize;
- (_Bool)existsMinimize;
- (_Bool)hasMinimizePlaying;
- (_Bool)isMinimizingPage;
- (_Bool)isPageMinimized:(id)arg1;
- (_Bool)isMinimizePresentVC:(id)arg1;
- (_Bool)isFinderMinimizingForKey:(id)arg1;
- (id)logicForVC:(id)arg1 delegate:(id)arg2 bizKey:(id)arg3;
- (_Bool)resolveExternalConflicts:(_Bool)arg1 ignorePhoneCalling:(_Bool)arg2 outMsg:(id *)arg3;
- (_Bool)displayFloatingViewForLogic:(id)arg1 autoPlay:(int)arg2;
- (_Bool)updateDisplayFloatingViewWithContentVM:(id)arg1;
- (void)updatePageInfoFromOldLogic:(id)arg1;
- (void)updatePageInfo:(id)arg1 forLogic:(id)arg2;
- (id)currentReportUDFKV;
- (id)floatingView;
- (_Bool)enableVideoFloat;
- (_Bool)supportFloating;
- (void)floatingClicked;
- (id)init;
- (void)onServiceClearData;
- (void)onServiceInit;
- (_Bool)hasCustomAnimationFromVC:(id)arg1 toVC:(id)arg2 type:(long long)arg3 userInfo:(id)arg4;
- (_Bool)shouldTransitionProvider:(id)arg1 requestFailedToOther:(id)arg2;
- (_Bool)shouldGestureClosureAsCardForVC:(id)arg1 userInfo:(id)arg2;
- (void)onTransitionHelperWillExpandFromVC:(id)arg1 toVC:(id)arg2 userInfo:(id)arg3;
- (void)onTransitionTriggerMininize:(id)arg1 userInfo:(id)arg2 giveUpClose:(_Bool *)arg3;
- (void)onTransitionHelperDoClosureForVC:(id)arg1 userInfo:(id)arg2;
- (void)onTransitionHelperCancelClousureForVC:(id)arg1 userInfo:(id)arg2;
- (void)onTransitionHelperWillClousureFromVC:(id)arg1 toVC:(id)arg2 userInfo:(id)arg3;
- (_Bool)shouldShowMinimizeQuickSwapeEntranceForVC:(id)arg1 userInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

