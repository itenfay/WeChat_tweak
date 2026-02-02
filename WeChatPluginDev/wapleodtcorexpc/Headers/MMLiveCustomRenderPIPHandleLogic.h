//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTask, MMFinderLiveTaskId, NSString, UIView;
@protocol MMLiveCustomRenderPIPViewProtocol;

@interface MMLiveCustomRenderPIPHandleLogic : NSObject
{
    _Bool _isHandling;
    _Bool _isPlayerAbnormalPaused;
    _Bool _isRestoreUserInterface;
    _Bool _isLiveVCAppear;
    _Bool _isShowCloseBtn;
    _Bool _isAutoStopPIP;
    _Bool _isResignActive;
    _Bool _isPIPDisable;
    _Bool _needAutoHandlePIPForEnterForeground;
    _Bool _needAutoActivePIPForEnterForeground;
    _Bool _isHideLiveMinimizeView;
    _Bool _isSystemPIPStarted;
    _Bool _isInBackground;
    MMFinderLiveTaskId *_taskId;
    CDUnknownBlockType _getCustomRenderViewBlock;
    CDUnknownBlockType _getPIPStartParamBlock;
    UIView<MMLiveCustomRenderPIPViewProtocol> *_attachedContentView;
    UIView *_testView;
    unsigned long long _currentPIPStartScene;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(nonatomic) _Bool isSystemPIPStarted; // @synthesize isSystemPIPStarted=_isSystemPIPStarted;
@property(nonatomic) unsigned long long currentPIPStartScene; // @synthesize currentPIPStartScene=_currentPIPStartScene;
@property(nonatomic) __weak UIView *testView; // @synthesize testView=_testView;
@property(nonatomic) _Bool isHideLiveMinimizeView; // @synthesize isHideLiveMinimizeView=_isHideLiveMinimizeView;
@property(nonatomic) _Bool needAutoActivePIPForEnterForeground; // @synthesize needAutoActivePIPForEnterForeground=_needAutoActivePIPForEnterForeground;
@property(nonatomic) _Bool needAutoHandlePIPForEnterForeground; // @synthesize needAutoHandlePIPForEnterForeground=_needAutoHandlePIPForEnterForeground;
@property(nonatomic) _Bool isPIPDisable; // @synthesize isPIPDisable=_isPIPDisable;
@property(nonatomic) _Bool isResignActive; // @synthesize isResignActive=_isResignActive;
@property(nonatomic) _Bool isAutoStopPIP; // @synthesize isAutoStopPIP=_isAutoStopPIP;
@property(nonatomic) _Bool isShowCloseBtn; // @synthesize isShowCloseBtn=_isShowCloseBtn;
@property(nonatomic) __weak UIView<MMLiveCustomRenderPIPViewProtocol> *attachedContentView; // @synthesize attachedContentView=_attachedContentView;
@property(copy, nonatomic) CDUnknownBlockType getPIPStartParamBlock; // @synthesize getPIPStartParamBlock=_getPIPStartParamBlock;
@property(copy, nonatomic) CDUnknownBlockType getCustomRenderViewBlock; // @synthesize getCustomRenderViewBlock=_getCustomRenderViewBlock;
@property(nonatomic) _Bool isLiveVCAppear; // @synthesize isLiveVCAppear=_isLiveVCAppear;
@property(nonatomic) _Bool isRestoreUserInterface; // @synthesize isRestoreUserInterface=_isRestoreUserInterface;
@property(nonatomic) _Bool isPlayerAbnormalPaused; // @synthesize isPlayerAbnormalPaused=_isPlayerAbnormalPaused;
@property(nonatomic) _Bool isHandling; // @synthesize isHandling=_isHandling;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)deAttachTestViewFromCustomView:(id)arg1;
- (void)attachTestViewToCustomView:(id)arg1;
@property(readonly, nonatomic) _Bool openTestMode;
- (_Bool)needOpenLivePIP;
- (_Bool)checkMinimizeWindowModeUnvalid;
- (_Bool)isOpeningLivePIPMinimizeWindow;
- (_Bool)isMinimizeWindowCurrShowPauseBtn;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (id)finderLiveViewController;
- (void)invokeRestoreCompletion:(CDUnknownBlockType)arg1 restore:(_Bool)arg2;
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;
- (void)autoRestartPIPForEnterForeground;
- (_Bool)checkNeedAutoRestartPIPForEnterForeground;
- (_Bool)checkNeedAutoRestorePIPForEnterForeground;
- (void)autoActivePIPForEnterForeground;
- (void)autoHandlePIPForEnterForeground;
- (_Bool)checkNeedAutoActivePIPForEnterForeground;
- (_Bool)checkNeedAutoStopPIPForEnterForeground;
- (void)didBecomeActive:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)onLiveTaskMinimizedWindowDismiss:(id)arg1;
- (void)onExtendFromCollapseAnimationWillStartWithLiveTask:(id)arg1;
- (void)onLiveViewControllerWillDisappear:(id)arg1;
- (void)onLiveViewControllerDidAppear:(id)arg1;
- (void)onLiveTask:(id)arg1 minimizeWindowDidClosed:(_Bool)arg2 pipMode:(_Bool)arg3;
- (void)deAttachContentView;
- (void)attachContentViewToContainer:(id)arg1;
- (id)getPIPStartParam;
- (id)getCustomContentView;
- (void)deAttachContentViewFromCustomView:(id)arg1;
- (void)attachContentViewToCustomView:(id)arg1;
- (void)updateIsShowCloseBtn:(_Bool)arg1;
- (void)hideCloseButton;
- (void)showCloseButton;
- (void)showLiveMinimizeView;
- (void)hideLiveMinimizeView;
- (void)clearLastPIPRunningTags;
- (void)resetTagsBeforeStart;
- (void)setIndicatorState:(unsigned long long)arg1;
- (_Bool)checkCurrHasPIPAuthority;
- (void)onPIPAuthorityAchieved;
- (void)onPIPAuthorityOccupied;
- (void)onCustomViewDeAttach:(id)arg1;
- (void)onCustomViewAttach:(id)arg1;
- (void)checkNeedResumeLiveAndStartTracingForPIP;
- (void)onStopPIP;
- (void)onStartPIP;
- (void)onPlayerTimeControlStatusChanged:(long long)arg1;
- (void)onCurrentActivePIPTaskBeRemoved;
- (void)stopLoading;
- (void)startLoading;
- (void)destroy;
- (struct CGRect)getHandledMainVideoViewFrameForMultiScene:(struct CGRect)arg1;
- (struct CGSize)getRenderSize;
- (struct CGRect)getRenderViewFrame;
- (void)updateRenderViewFrame;
- (void)updateRenderSize;
- (void)attachRenderView:(id)arg1;
- (void)stopHandle;
- (void)startHandle;
- (_Bool)enableStartPictureInPicture;
- (void)initNotifications;
- (void)registerExtensions;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

