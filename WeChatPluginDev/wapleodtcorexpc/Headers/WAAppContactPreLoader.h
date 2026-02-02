//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSString, WAAppOpenParameter, WAAppTaskExtInfo, WAAppTaskHandlerWrapper, WAAppTrialInfoLoader, WAContact;
@protocol IWALimitModeHelper;

@interface WAAppContactPreLoader
{
    WAAppTaskHandlerWrapper *m_handlerWrapper;
    WAAppOpenParameter *m_openInfo;
    WAAppTaskExtInfo *m_taskExtInfo;
    WAAppTrialInfoLoader *m_trialInfoLoader;
    id <IWALimitModeHelper> m_limitModeHelper;
    WAContact *m_pendingContact;
    _Bool m_isAppContactLoading;
    MMUIViewController *_loadingVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *loadingVC; // @synthesize loadingVC=_loadingVC;
- (id)getJumpFromAppTask;
- (_Bool)dismissControllerNeedMask;
- (_Bool)dismissControllerNeedZoom;
- (_Bool)presentationControllerNeedMask;
- (_Bool)presentationControllerNeedZoom;
- (void)onSystemEnterBackground:(id)arg1;
- (void)onSystemWillResignActive:(id)arg1;
- (void)onLimitModeExitWithAppId:(id)arg1 isVerified:(_Bool)arg2;
- (void)onLoadingAnimationDone;
- (void)onAppBrandLoadingViewReturn:(id)arg1;
- (void)onMenuLongPressExit;
- (void)onMenuLongPressMore;
- (void)onMenuExit:(long long)arg1;
- (void)onMenuMore;
- (id)genCapsuleMenuWithContact:(id)arg1 superview:(id)arg2;
- (id)genWALoadingViewControllerWithContact:(id)arg1;
- (void)showWeAppLoadingViewWithContact:(id)arg1;
- (void)reportForceAsyncUpdateContactWithReason:(unsigned long long)arg1;
- (void)reportFallbackToLocalContact:(id)arg1 reason:(unsigned long long)arg2;
- (void)onTaskVersionFallBackTickWithUsername:(id)arg1 appid:(id)arg2 reason:(unsigned long long)arg3;
- (void)callGetContactFailHandlerWithReason:(unsigned long long)arg1;
- (void)callGetContactSuccHandler;
- (_Bool)checkContactShouldBeBlockedInLimitedModeForMinimize:(id)arg1;
- (void)checkContactShouldBeBlockedInLimitedMode:(id)arg1;
- (_Bool)tryBlockedByLimitModeWithContact:(id)arg1;
- (void)showLoadErrViewControlelrWithTitle:(id)arg1 content:(id)arg2 onNav:(id)arg3;
- (void)showErrTipsViewControllerWithTitle:(id)arg1 content:(id)arg2;
- (void)hideLoadingViewController;
- (void)showLoadingViewController;
- (void)openErrWebViewControllerWithUrl:(id)arg1 navigationController:(id)arg2;
- (void)showOverSeaForbbidenWebView;
- (void)showDeviceForbbidenWebView;
- (id)queryParamDictFromFullUrl:(id)arg1;
- (void)registOpenAppStatInfo:(id)arg1;
- (id)topNavOnMainWindow;
- (void)initTaskExtInfoIfNeed:(id)arg1;
- (void)dealloc;
- (void)clearState;
- (void)cancelReqeustInfo;
- (void)finalyOpenAppWithContact:(id)arg1;
- (void)checkAndTriggerPreParallelDownloadIfNeeded:(id)arg1;
- (void)checkAndTriggerPreCheckCacheVersionIfNeeded:(id)arg1;
- (void)enterRDMModeWeApp:(id)arg1;
- (void)enterDevelopModeWeApp:(id)arg1;
- (void)enterAppWithContact:(id)arg1;
- (void)checkContactValidAndEnterApp:(id)arg1;
- (_Bool)canUseEarlyLoading:(id)arg1;
- (void)migrateToTargetWeAppIfHaveForContact:(id)arg1;
- (void)firstLoadWeAppContact;
- (void)updateSheetParameterBeforeHotLaunch:(id)arg1 prevTask:(id)arg2;
- (void)updateTestParameterAfterGetContactIfNeeded:(id)arg1 contact:(id)arg2;
- (void)updateTestParameterIfNeeded:(id)arg1;
- (_Bool)isPagePathInvalid:(id)arg1;
- (_Bool)isPkgExistForContact:(id)arg1;
- (_Bool)isContactExpired:(id)arg1;
- (_Bool)isNeedSyncUpdateContact:(id)arg1 getReason:(unsigned long long *)arg2;
- (_Bool)checkTaskShouldReOpenedAndDoReport:(id)arg1;
- (void)reOpenApp:(id)arg1 taskExtInfo:(id)arg2 handlerWrapper:(id)arg3;
- (void)reOpenApp:(id)arg1 taskExtInfo:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onFailed:(CDUnknownBlockType)arg4;
- (void)openApp:(id)arg1 taskExtInfo:(id)arg2 handlerWrapper:(id)arg3;
- (void)inner_openApp:(id)arg1 taskExtInfo:(id)arg2 handlerWrapper:(id)arg3;
- (void)openApp:(id)arg1 taskExtInfo:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onFailed:(CDUnknownBlockType)arg4;
- (void)openAppWithMPLinkString:(id)arg1 forbidAlert:(_Bool)arg2 fromScene:(unsigned long long)arg3 sceneNote:(id)arg4 preScene:(unsigned long long)arg5 preSceneNote:(id)arg6 chatType:(unsigned long long)arg7 extraParams:(id)arg8 hostExtraData:(id)arg9 onSuccess:(CDUnknownBlockType)arg10 onFailed:(CDUnknownBlockType)arg11;
- (void)openAppWithMPLinkString:(id)arg1 forbidAlert:(_Bool)arg2 fromScene:(unsigned long long)arg3 sceneNote:(id)arg4 preScene:(unsigned long long)arg5 preSceneNote:(id)arg6 chatType:(unsigned long long)arg7 onSuccess:(CDUnknownBlockType)arg8 onFailed:(CDUnknownBlockType)arg9;
- (void)openAppWithMPLinkString:(id)arg1 fromScene:(unsigned long long)arg2 sceneNote:(id)arg3 preScene:(unsigned long long)arg4 preSceneNote:(id)arg5 chatType:(unsigned long long)arg6 onSuccess:(CDUnknownBlockType)arg7 onFailed:(CDUnknownBlockType)arg8;
- (void)openAppWithMPLinkString:(id)arg1 fromScene:(unsigned long long)arg2 sceneNote:(id)arg3 preScene:(unsigned long long)arg4 preSceneNote:(id)arg5 onSuccess:(CDUnknownBlockType)arg6 onFailed:(CDUnknownBlockType)arg7;
- (void)openAppWithJSONString:(id)arg1 fromScene:(unsigned long long)arg2 sceneNote:(id)arg3 brandAppId:(id)arg4 navigationController:(id)arg5;
- (void)openAppWithJSONString:(id)arg1 fromScene:(unsigned long long)arg2 sceneNote:(id)arg3 brandAppId:(id)arg4;
- (void)openDebugAppFromQRCdoe:(id)arg1 fromScene:(unsigned long long)arg2 Params:(id)arg3 UserName:(id)arg4 OpenInfo:(id)arg5 handlerWrapper:(id)arg6;
- (_Bool)checkIfNeedBandJumpAppFromLongPressCode:(id)arg1 ToAppServiceType:(unsigned int)arg2;
- (void)openAppWithQRFullUrl:(id)arg1 fromScene:(unsigned long long)arg2 preScene:(unsigned long long)arg3 preSceneNote:(id)arg4 codeScene:(unsigned long long)arg5 extraSceneNote:(id)arg6 FromWeAppAppid:(id)arg7 FromViwController:(id)arg8 extraParams:(id)arg9 hostExtraData:(id)arg10 handlerWrapper:(id)arg11;
- (void)openAppWithQRFullUrl:(id)arg1 fromScene:(unsigned long long)arg2 preScene:(unsigned long long)arg3 preSceneNote:(id)arg4 codeScene:(unsigned long long)arg5 extraSceneNote:(id)arg6 FromWeAppAppid:(id)arg7 FromViwController:(id)arg8 handlerWrapper:(id)arg9;
- (void)openAppWithQRFullUrl:(id)arg1 fromScene:(unsigned long long)arg2 preScene:(unsigned long long)arg3 preSceneNote:(id)arg4 codeScene:(unsigned long long)arg5 onSuccess:(CDUnknownBlockType)arg6 onFailed:(CDUnknownBlockType)arg7;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

