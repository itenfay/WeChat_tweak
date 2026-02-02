//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAppViewControllerManager, MMTimer, MMUIWindow, NSRecursiveLock, NSString, UIWindow;

@interface MicroMessengerAppDelegate
{
    CAppViewControllerManager *m_appViewControllerMgr;
    NSString *m_nsToken;
    long long m_appVerCompareWithLastRun;
    _Bool m_isActive;
    _Bool m_firstActive;
    NSRecursiveLock *mActiveLock;
    _Bool mInBackGroundFetch;
    unsigned long long m_ui64BackGroundFetchStopTime;
    CDUnknownBlockType m_fetchCompletionHandler;
    _Bool m_bLaunchFinish;
    MMUIWindow *m_launchWindow;
    _Bool m_isFirstLaunching;
    _Bool m_isNormalLaunch;
    _Bool m_isInSafeModeOrMemoryStat;
    _Bool m_isNetworkServiceInited;
    _Bool m_hasCheckEnterForeground;
    _Bool m_isCanReceiveActiveNotify;
    _Bool m_isAlreadyLaunchWhileSceneConnected;
    MMTimer *m_godLikeTimer;
    _Bool haveLazyInit;
    UIWindow *_window;
    CDUnknownBlockType _backgroundSessionCompletionHandler;
    unsigned long long _protectedDataStatus;
}

+ (id)GlobalInstance;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long protectedDataStatus; // @synthesize protectedDataStatus=_protectedDataStatus;
@property(copy, nonatomic) CDUnknownBlockType backgroundSessionCompletionHandler; // @synthesize backgroundSessionCompletionHandler=_backgroundSessionCompletionHandler;
@property(nonatomic) _Bool haveLazyInit; // @synthesize haveLazyInit;
@property(retain, nonatomic) NSRecursiveLock *mActiveLock; // @synthesize mActiveLock;
@property(nonatomic) _Bool mInBackGroundFetch; // @synthesize mInBackGroundFetch;
@property(nonatomic) _Bool m_firstActive; // @synthesize m_firstActive;
@property(readonly, nonatomic) _Bool m_isActive; // @synthesize m_isActive;
@property(readonly, nonatomic) CAppViewControllerManager *m_appViewControllerMgr; // @synthesize m_appViewControllerMgr;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIWindow",?,&,N,V_window

- (void)applicationProtectedDataDidBecomeAvailable:(id)arg1;
- (void)applicationProtectedDataWillBecomeUnavailable:(id)arg1;
- (void)onCarPlaySceneConnected;
- (void)launchIfFirstSceneConnected:(_Bool)arg1;
- (void)onMainSceneReceiveUserNotificationResponse:(id)arg1;
- (void)onMainSceneWillConnected:(_Bool)arg1;
- (void)handleReceiveLocalNotification:(id)arg1;
- (void)handleReceiveRemoteNotification:(id)arg1 requestID:(id)arg2;
- (void)internalHandleReceiveNotificationResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)parseSchemaUrlFrom:(id)arg1;
- (void)setUserAgent;
- (void)closeMainFrameWithoutReset;
- (void)dealloc;
- (long long)GetAppVerCompareWithLastRun;
- (void)saveAppVersion;
- (void)detectAppFirstRunOrFirstRunAfterUpgrade;
- (void)firstStartAfterUpgradeDowngrade;
- (void)didReceiveLocalMemoryWarning:(id)arg1;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)clearServiceMemory;
- (void)handleMemoryWarning;
- (void)application:(id)arg1 didUpdateUserActivity:(id)arg2;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (_Bool)internalApplication:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)internalApplication:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupForShortcut;
- (void)application:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (_Bool)internalApplication:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)__application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2 bundleID:(id)arg3 annotation:(id)arg4;
- (void)reportHandleOpenUrl:(id)arg1 schemeUrl:(id)arg2;
- (_Bool)dismissCurrentWAAPP;
- (void)handleBusinessJump:(id)arg1 bundleID:(id)arg2;
- (_Bool)handleOpenURL:(id)arg1 bundleID:(id)arg2;
- (void)process3rdAppSupportContentFlagFromOpenUrl:(id *)arg1 andUrlStr:(id *)arg2 appID:(id)arg3;
- (void)application:(id)arg1 didChangeStatusBarFrame:(struct CGRect)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)internalApplicationDidBecomeActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)onConfirmPushAlert;
- (void)onCancelPushAlert;
- (void)handleOpenPush;
- (void)applicationWillSuspend;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)resetBadge;
- (void)internalApplication:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)mainConsoleWindow;
- (double)getMainWindowHeight;
- (double)getMainWindowWidth;
- (void)ClearBackGroundFetch;
- (void)internalApplication:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)internalApplication:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)internalApplication:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)internalApplication:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)internalApplication:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)apnsSilentPushTimeOut:(CDUnknownBlockType)arg1;
- (void)internalApplication:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)internalApplication:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)internalApplication:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)internalApplication:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)internalApplication:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)doSendTokenTimeOut;
@property(readonly, nonatomic) NSString *apnsToken;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (_Bool)isForeground;
- (_Bool)internalApplication:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (void)reportLaunchImage;
- (void)didFinishLoad;
- (void)mainUISettingOnce;
- (void)mainUISetting;
- (void)setupCrashBlockMonitor;
- (void)tryProtectLaunchBeforeDeviceFirstUnlock;
- (_Bool)testFileProtection:(id)arg1;
- (void)tryRemoveTheProtectionOfXlog;
- (void)detectBecomeActive;
- (_Bool)hasFirstActiveOrCheckEnterForeground;
- (void)checkInitNetworkAndService;
- (void)onVoIPLaunch;
- (void)continueBackgroundLaunching;
- (void)continueMainLaunching:(id)arg1;
- (void)loadUpdateAndExcute;
- (void)careEnoughForTheLiving;
- (void)voidFunction;
- (void)preVoidFunction;
- (void)logTheFontOfiPhone;
- (void)delayMainAppDelegateThing;
- (void)goToLazyInitObject;
- (double)timeToLazyInitAfterOpenFirstView;
- (id)init;
- (void)clearServiceObject;
- (void)initServiceObject;
- (void)delayInitServiceObject;
- (void)lazyInitServiceObject;
- (void)registerLazyExtensionListener;
- (void)registerClsMethodObserver;
- (void)LogFeatureIdKey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3 isKeyLog:(_Bool)arg4;
- (void)LogFeatureExt:(unsigned int)arg1 logExt:(id)arg2 isReportNow:(_Bool)arg3 isImportant:(_Bool)arg4;
- (void)NetworkLogOutput:(id)arg1;
- (void)LogWithinCommon:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 funcName:(const char *)arg5 message:(id)arg6;
- (_Bool)ShouldLog:(int)arg1;
- (_Bool)IsChinese;
- (void)setupMMCommonAdapter;
- (void)internalSwitchToUser:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)switchToUser:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopNetworkEvent:(id)arg1;
- (void)lazyInitNetworking;
- (void)tryToLoginLastUser:(CDUnknownBlockType)arg1;
- (void)loginGuestUser:(CDUnknownBlockType)arg1;
- (void)application:(id)arg1 didDiscardSceneSessions:(id)arg2;
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;
- (void)handleMMSafeModeDidEndNotification:(id)arg1;
- (void)enterSafeMode;
- (_Bool)shouldEnterSafeMode;
- (void)handleMemoryStatDidEndNotification:(id)arg1;
- (void)enterUploadReport;
- (_Bool)shouldEnterMemoryReport;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

