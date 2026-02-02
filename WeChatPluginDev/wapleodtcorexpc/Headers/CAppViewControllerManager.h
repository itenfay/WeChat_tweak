//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMainViewController, MainTabBarViewController, NSMutableArray, NSMutableDictionary, NSString, PreEnterWechatLogic, SplitViewEmptyViewController, UIViewController, UIWindow, WCSplitViewController;

@interface CAppViewControllerManager
{
    UIWindow *m_window;
    unsigned int m_uCurrentTabViewIndex;
    NSMutableArray *m_vecViewController;
    _Bool m_bFromReg;
    PreEnterWechatLogic *m_PreEnterWechatLogic;
    MainTabBarViewController *m_tabbarController;
    MMMainViewController *m_mainViewController;
    SplitViewEmptyViewController *m_emptyVc;
    NSMutableArray *m_detailViewControllers;
    _Bool m_lastPush;
    _Bool _m_isHandlingOrientationEvent;
    WCSplitViewController *m_newSplitViewController;
    NSMutableArray *_m_presentedViewControllers;
    UIViewController *_m_lastPresentedViewController;
    NSMutableDictionary *_splitDetailViewControllerDict;
}

+ (_Bool)shouldTopRightMenuShowID:(id)arg1;
+ (id)getPrevNavigationControllerFor:(id)arg1;
+ (_Bool)isVisibleChildViewControllerOf:(id)arg1 ToFindViewController:(id)arg2;
+ (id)rootPresentingViewControllerWithViewController:(id)arg1;
+ (id)navigationControllerListWithViewController:(id)arg1;
+ (id)topNavigationControllerOnMainWindow;
+ (id)topViewControllerOfWindow:(id)arg1;
+ (id)topViewControllerOfMainWindow:(_Bool)arg1 cls:(Class)arg2;
+ (id)topViewControllerOfMainWindow;
+ (id)topMostController;
+ (id)getRootNavigationController;
+ (id)getCurrentNavigationController;
+ (id)getTabBarController;
+ (id)getAppViewControllerManager;
+ (_Bool)hasEnterWechatMain;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *splitDetailViewControllerDict; // @synthesize splitDetailViewControllerDict=_splitDetailViewControllerDict;
@property(nonatomic) _Bool m_isHandlingOrientationEvent; // @synthesize m_isHandlingOrientationEvent=_m_isHandlingOrientationEvent;
@property(retain, nonatomic) UIViewController *m_lastPresentedViewController; // @synthesize m_lastPresentedViewController=_m_lastPresentedViewController;
@property(retain, nonatomic) NSMutableArray *m_presentedViewControllers; // @synthesize m_presentedViewControllers=_m_presentedViewControllers;
@property(retain, nonatomic) WCSplitViewController *m_newSplitViewController; // @synthesize m_newSplitViewController;
- (void)onWCSplitDisplayModeChanged:(long long)arg1;
- (void)setStatusBarStyle:(long long)arg1 viewController:(id)arg2;
- (void)setStatusBarHidden:(_Bool)arg1 animation:(long long)arg2 viewController:(id)arg3;
- (void)onAppUserInterfaceSizeChanged:(id)arg1;
- (id)makeViewDesc:(id)arg1 str:(id)arg2;
- (void)printView:(id)arg1 linePrefix:(id)arg2 lines:(id)arg3;
- (void)printTreeView;
- (id)formatCGFloat:(double)arg1;
- (void)captureScreenIfNeeded;
- (void)didTakeSnapshot:(id)arg1;
- (void)didChangeScreenCapture:(id)arg1;
- (id)getMMTabBarController;
- (id)getMMSplitViewController;
- (id)getTabBarController;
- (void)walletLockVerifySuccess:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)UIWindowDidResignKeyNotification:(id)arg1;
- (void)UIWindowDidBecomeKeyNotification:(id)arg1;
- (void)jumpToChat:(id)arg1 msgToLocate:(id)arg2;
- (void)JumpToViewController:(id)arg1;
- (void)HandleMoreJump:(id)arg1;
- (void)HandleFindFriendJump:(id)arg1;
- (void)HandleMainFrameJump:(id)arg1;
- (id)getMainWindow;
- (void)changeLanguage;
- (void)refreshLanguage:(long long)arg1;
- (void)refreshLanguage:(long long)arg1 withChildScene:(id)arg2;
- (_Bool)jumpToMomentsTimelineAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)isNowInRootViewController;
- (void)openPluginFeature:(long long)arg1;
- (void)jumpToSettingWcRecentPrivacy:(long long)arg1;
- (void)jumpToSettingPrivacy:(_Bool)arg1;
- (void)jumpToOfflinePayWithEntryVC:(id)arg1;
- (void)jumpToQuickCall;
- (void)jumpToWriteNote;
- (void)jumpToMyQrCode;
- (void)jumpToOfflinePay;
- (void)internalJumpToShareCard;
- (void)jumpToShareCardAndCheck;
- (void)jumpToShareCard;
- (void)jumpToAlbum;
- (void)jumpToCameraScanInTopViewController:(long long)arg1;
- (void)jumpToCameraScan:(long long)arg1 showMainView:(_Bool)arg2;
- (void)jumpToCameraScan:(long long)arg1;
- (void)jumpToURLShardBy3rdApp:(id)arg1;
- (unsigned int)getCurTabBarIndex;
- (id)viewControllers;
- (id)getTopViewController;
- (void)removeViewController:(id)arg1;
- (void)addViewController:(id)arg1;
- (void)removeViewFromRootViewController:(id)arg1;
- (void)addViewControllerToRootView:(id)arg1;
- (void)removeViewFromRootView:(id)arg1;
- (void)addViewToRootView:(id)arg1;
- (unsigned int)getAppIconTotalUnReadCount;
- (id)getSplitPresentedViewController;
- (_Bool)isSplitViewPrimaryHidden;
- (_Bool)isUsingSplitView;
- (id)getSplitViewController;
- (id)getSplitDetailNavigationController;
- (id)getMMMainViewController;
- (void)closeMainFrame;
- (void)openMainFrame:(_Bool)arg1 showStyle:(id)arg2;
- (void)openMainFrame:(_Bool)arg1 showStyle:(id)arg2 startPreStep:(_Bool)arg3;
- (void)openMainFrameFirstStep:(_Bool)arg1;
- (void)openFirstView;
- (void)setAllTabBarItemEnabled:(_Bool)arg1;
- (void)newMessageByEnterpriseContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(_Bool)arg3 showSessionList:(_Bool)arg4 animated:(_Bool)arg5 extraInfo:(id)arg6;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(_Bool)arg3;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(_Bool)arg3 animated:(_Bool)arg4 reuse:(_Bool)arg5 extraInfo:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(_Bool)arg3 animated:(_Bool)arg4 extraInfo:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(_Bool)arg3 animated:(_Bool)arg4 extraInfo:(id)arg5;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(_Bool)arg3 animated:(_Bool)arg4;
- (void)moveToTab:(long long)arg1 showMainView:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveToTab:(long long)arg1 showMainView:(_Bool)arg2;
- (void)moveToTabAndShowMainView:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)moveToRootViewControllerForIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recursiveDismiss:(id)arg1 animated:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)moveToRootViewController;
- (void)safeMoveToRoot:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)safeMoveToRootViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissToRootViewControllerForIndex:(long long)arg1;
- (void)dismissToRootViewController;
- (void)mainTabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (_Bool)mainTabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)onMainTabBarMainFrameSingleClicked:(id)arg1;
- (void)onMainTabBarMainFrameDoubleClicked:(id)arg1;
- (double)getLeftColumnWidthForSplitView;
- (void)setRightViewControllerForSplitView:(id)arg1 forPush:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)setRightViewControllerForSplitView:(id)arg1 forPush:(_Bool)arg2;
- (void)setPrimaryShown;
- (void)setPrimaryHidden;
- (void)splitViewPopToRootViewController;
- (id)getRightViewControllerForSplitView;
- (_Bool)splitViewController:(id)arg1 shouldHideViewController:(id)arg2 inOrientation:(long long)arg3;
- (void)endForceUsingSingleColumnMode;
- (void)forceUsingSingleColumnMode;
- (void)onAppFirstBecomeActive:(id)arg1;
- (void)resetNavItem:(id)arg1;
- (void)presentAllViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAllPresentedViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)findLastPresentedViewControllerWith:(id)arg1;
- (void)moveToFindTabWithEntry:(unsigned long long)arg1 routeBlock:(CDUnknownBlockType)arg2;
- (void)createSplitViewControllerWithNavigationController:(id)arg1;
- (void)createMainFrameWithShowStyle:(id)arg1 startPreStep:(_Bool)arg2;
- (_Bool)shouldUseSplitView;
- (void)createTabbarController;
- (id)getCurFindFriendEntryViewController;
- (void)recreateFindFriendViewController;
- (id)getTabBarBaseViewController:(unsigned long long)arg1;
- (id)getContactsViewController;
- (id)getNewMainFrameViewController;
- (id)getPreEnterWechatLogic;
- (void)unRegisterNotification;
- (void)registerNotification;
- (void)updateMainWindow:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)restartAllFailUploadFromLocalNotification;
- (void)reSendAllMsgFromNotificationDone;
- (void)resendAllFailMsgFromLocalNotification:(id)arg1;
- (_Bool)checkResentFailMsgForNotification:(id)arg1 isFromLaunch:(_Bool)arg2;
- (void)openView:(unsigned int)arg1 launchOptions:(id)arg2 isAppUpdated:(_Bool)arg3;
- (id)getMainWindowViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

