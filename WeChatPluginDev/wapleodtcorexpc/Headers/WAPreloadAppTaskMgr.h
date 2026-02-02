//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAAppTaskCapsuleMenu, WACircleProgressLoadingViewController, WAPreloadAppTask, WASimulatedNativeWeAppLoadingViewController;

@interface WAPreloadAppTaskMgr
{
    WAPreloadAppTask *_preloadTask;
    _Bool _preloadTaskTerminatedToAvoidBOOM;
    unsigned long long _lastPreloadWebViewCheckAliveSuccessTimeStampInMs;
    WACircleProgressLoadingViewController *_cachedWeappLoading;
    WASimulatedNativeWeAppLoadingViewController *_cachedSimulatedNativeLoading;
    WAAppTaskCapsuleMenu *_cachedCapsuleMenu;
}

+ (unsigned int)servicePreloadMomentFromPreloadType:(unsigned int)arg1;
+ (unsigned int)preloadReportTypeForServicePreload:(unsigned int)arg1 webViewPreload:(unsigned int)arg2 silentOpen:(_Bool)arg3;
+ (unsigned int)preloadInjectValueForPreloadMoment:(unsigned int)arg1;
+ (unsigned int)preloadDegradeType;
+ (_Bool)isCloseClientPreload;
- (void).cxx_destruct;
@property(retain, nonatomic) WAAppTaskCapsuleMenu *cachedCapsuleMenu; // @synthesize cachedCapsuleMenu=_cachedCapsuleMenu;
@property(retain, nonatomic) WASimulatedNativeWeAppLoadingViewController *cachedSimulatedNativeLoading; // @synthesize cachedSimulatedNativeLoading=_cachedSimulatedNativeLoading;
@property(retain, nonatomic) WACircleProgressLoadingViewController *cachedWeappLoading; // @synthesize cachedWeappLoading=_cachedWeappLoading;
@property(nonatomic) unsigned long long lastPreloadWebViewCheckAliveSuccessTimeStampInMs; // @synthesize lastPreloadWebViewCheckAliveSuccessTimeStampInMs=_lastPreloadWebViewCheckAliveSuccessTimeStampInMs;
@property(nonatomic) _Bool preloadTaskTerminatedToAvoidBOOM; // @synthesize preloadTaskTerminatedToAvoidBOOM=_preloadTaskTerminatedToAvoidBOOM;
- (id)getAndDettachPreloadSimulatedNativeLoadingViewController;
- (id)getAndDettachPreloadCircleProgressLoadingViewController;
- (id)getAndDettachPreloadCapsuleMenu;
- (void)genNewPreloadTaskServiceIfNoTaskService:(unsigned int)arg1;
- (void)genNewPreloadTaskServiceIfNoTaskService;
- (void)genNewPreloadTaskWebViewIfNoTaskWebView:(unsigned int)arg1;
- (void)genNewPreloadTaskWebViewIfNoTaskWebView;
- (void)preCreateLaunchService;
- (void)preCreateSimulatedNativeLoading;
- (void)preCreateWeAppLoading;
- (void)preCreateCapsuleMenu;
- (void)preCreateLoading;
- (void)preloadComponents:(unsigned int)arg1;
- (void)mainThread_genNewPreloadTaskIfNoTask:(unsigned int)arg1;
- (void)genNewDegradePreloadTaskIfNoTask;
- (void)genNewPreloadTaskIfNoTaskByMoment:(unsigned int)arg1;
- (void)genNewPreloadTaskIfNoTask;
- (void)releasePreloadWebView;
- (void)releasePreloadTaskWaitQuit:(_Bool)arg1;
- (void)releasePreloadTask;
- (void)detachCurrentPreloadTask;
- (id)getPreloadTask;
- (void)createPreloadAppTaskService:(unsigned int)arg1;
- (void)createPreloadAppTaskWebView:(unsigned int)arg1;
- (void)reportPreloadWebViewAliveFailed:(id)arg1 subType:(unsigned long long)arg2;
- (void)checkPreloadWebViewAliveIfNeededShouldIgnoreGap:(_Bool)arg1;
- (void)timerCheckPreloadTaskIfNeeded;
- (void)giveBackPreloadAppTaskWebView:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

