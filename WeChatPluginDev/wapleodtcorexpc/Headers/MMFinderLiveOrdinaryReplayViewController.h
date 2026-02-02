//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveOrdinaryReplayOperationView, NSString, WCFinderLiveReplayActionSheet, WCFinderLiveReplayReporter, WCLiveCountdownToastView;

@interface MMFinderLiveOrdinaryReplayViewController
{
    _Bool _isSeeking;
    _Bool _hasReportStartWatching;
    WCFinderLiveReplayActionSheet *_settingScrollActionSheet;
    WCLiveCountdownToastView *_tryViewCountDownToastView;
    CDUnknownBlockType _waitingPortraitBlock;
    WCFinderLiveReplayReporter *_reporter;
    long long _lastOrientation;
    unsigned long long _networkType;
    NSString *_actionSheetCustomTitle;
    unsigned long long _stopgapStartUnixEpochTime;
    unsigned long long _seekBeginTsInMS;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long seekBeginTsInMS; // @synthesize seekBeginTsInMS=_seekBeginTsInMS;
@property(nonatomic) _Bool hasReportStartWatching; // @synthesize hasReportStartWatching=_hasReportStartWatching;
@property(nonatomic) unsigned long long stopgapStartUnixEpochTime; // @synthesize stopgapStartUnixEpochTime=_stopgapStartUnixEpochTime;
@property(copy, nonatomic) NSString *actionSheetCustomTitle; // @synthesize actionSheetCustomTitle=_actionSheetCustomTitle;
@property(nonatomic) unsigned long long networkType; // @synthesize networkType=_networkType;
@property(nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property(nonatomic) long long lastOrientation; // @synthesize lastOrientation=_lastOrientation;
@property(retain, nonatomic) WCFinderLiveReplayReporter *reporter; // @synthesize reporter=_reporter;
@property(copy, nonatomic) CDUnknownBlockType waitingPortraitBlock; // @synthesize waitingPortraitBlock=_waitingPortraitBlock;
@property(retain, nonatomic) WCLiveCountdownToastView *tryViewCountDownToastView; // @synthesize tryViewCountDownToastView=_tryViewCountDownToastView;
@property(retain, nonatomic) WCFinderLiveReplayActionSheet *settingScrollActionSheet; // @synthesize settingScrollActionSheet=_settingScrollActionSheet;
- (void)onStopgapLiveInfoPollRequestedWithSuccessBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (void)onStopgapStateChanged:(unsigned long long)arg1;
- (void)ticketButtonClick;
- (void)clickRFItemCallBack:(id)arg1;
- (void)onForwardSharePreConfirmSend:(id)arg1 wxUsernameArray:(id)arg2;
- (void)onDoneForwardMessageWithContentVM:(id)arg1 andUserArray:(id)arg2 isCertificateType:(_Bool)arg3;
- (void)onDoneForwardForForwardViewWithContentVM:(id)arg1 isCertificateType:(_Bool)arg2;
- (void)openLiveFrameSettingPanel;
- (_Bool)canShowRecentForward;
- (void)reportEnterReplay;
- (void)didFinderLiveMoveToNewScene:(id)arg1;
- (void)changeToOtherAppScene;
- (void)checkScreenCaptureState;
- (void)onBecomeActive;
- (unsigned int)initialPlayTime;
- (void)clearCurrentBlock;
- (void)performBlockAfterPortrait;
- (void)checkAndHandleUIOrientationChange;
- (void)performBlockAfterOrientationPortrait:(CDUnknownBlockType)arg1;
- (void)navigateToComplainPage;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onBugCoinWithError:(id)arg1 taskId:(id)arg2 referenceId:(id)arg3;
- (void)onPurchaseChargeableLiveWithError:(id)arg1 taskId:(id)arg2;
- (void)onMMLiveOperationPayButtonClicked;
- (void)createTryViewCountDownToastView;
- (struct CGRect)currentMainVideoFrame;
- (void)onSliderSeekToTime:(double)arg1 isAtGreateTime:(_Bool)arg2;
- (void)onSliderSeekBegin;
- (void)onReplayInvalidated;
- (void)onMMLiveOperationChangeAppSceneButtonClicked;
- (void)onMMLiveOrientationButtonClicked;
- (void)onMMLivePaymentTrialCountDown:(unsigned int)arg1;
- (void)onMMLiveOperationUserHeadImageClicked:(id)arg1 userInfo:(id)arg2;
- (void)onWillMinimizeByInteractivePan;
- (void)onMMLiveOperationMinimize;
- (void)onMMLiveOperationClose;
- (void)onMMLiveActionButtonClicked;
- (void)mmliveOrdinaryReplayOperationView:(id)arg1 complainMsg:(unsigned long long)arg2 frameId:(id)arg3;
- (void)didChangeScreenCapture:(id)arg1;
- (void)reFetchLiveInfoAfterPayForReplay;
- (id)navigationController;
@property(readonly, nonatomic) MMFinderLiveOrdinaryReplayOperationView *ordinaryReplayOperationView;
- (void)onPauseReplay;
- (void)handleGetLiveInfoDone;
- (void)onClickScrollActionSheetDelete;
- (void)close;
- (void)enterLive;
- (void)updateReplayOperationViewFrame;
- (void)createReplayOperationView;
- (void)layoutUI;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)viewDidLoad;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

