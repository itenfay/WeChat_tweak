//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterActionBarHelper, FlutterPageStateDispacher, FlutterViewController, MMFlutterEdgeGesture, MMFlutterEngine, MMFlutterHybridNavPageState, MMFlutterInstance, MMFlutterRoute, NSMutableDictionary, NSObject, NSString, UIImageView, UIView, WebViewA8KeyLogicImpl, WebViewJSLogicImpl;
@protocol MMFlutterViewControllerAnimatedTransitioning, MMFlutterViewControllerDelegate, WXCustomWebViewControllerDelegate, YYWebViewInterface;

@interface MMFlutterViewController
{
    NSString *_engineGroupId;
    MMFlutterEdgeGesture *_screenEdgePanGesture;
    _Bool _isFirstShow;
    _Bool _hasAppeared;
    _Bool _usePlatformNav;
    _Bool _navigationBackEnable;
    _Bool _popOrDismissWithAnimation;
    _Bool _swipeEnable;
    _Bool _autoReleaseFlutterView;
    _Bool _ignoreSafeAreaBottom;
    _Bool _enablePageState;
    _Bool _isAttachFlutterView;
    _Bool _isHideStatusBar;
    _Bool _m_isPresent;
    _Bool _isSnapshoting;
    _Bool _m_enableModifyNavBar;
    _Bool _m_isAddLifeclcyeObserver;
    int _curAddedView;
    int _transitionMode;
    NSObject<MMFlutterViewControllerDelegate> *_delegate;
    MMFlutterInstance *_flutterInstance;
    NSObject<MMFlutterViewControllerAnimatedTransitioning> *_transitionManager;
    MMFlutterEngine *_engine;
    FlutterViewController *_flutterVC;
    NSString *_engineId;
    FlutterPageStateDispacher *_pageStateDispatcher;
    MMFlutterRoute *_route;
    FlutterActionBarHelper *_actionBarHelper;
    MMFlutterHybridNavPageState *_pageState;
    UIImageView *_snapshotView;
    UIView *_currentAddedView;
    CDUnknownBlockType _onViewFrameChange;
    unsigned long long _transitionStartTime;
    unsigned long long _transitionEndTime;
    id _transitionDelegate;
    CDUnknownBlockType _safeAreaInsetsDelegate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType safeAreaInsetsDelegate; // @synthesize safeAreaInsetsDelegate=_safeAreaInsetsDelegate;
@property(nonatomic) __weak id transitionDelegate; // @synthesize transitionDelegate=_transitionDelegate;
@property(nonatomic) int transitionMode; // @synthesize transitionMode=_transitionMode;
@property(nonatomic) unsigned long long transitionEndTime; // @synthesize transitionEndTime=_transitionEndTime;
@property(nonatomic) unsigned long long transitionStartTime; // @synthesize transitionStartTime=_transitionStartTime;
@property(nonatomic) _Bool m_isAddLifeclcyeObserver; // @synthesize m_isAddLifeclcyeObserver=_m_isAddLifeclcyeObserver;
@property(nonatomic) int curAddedView; // @synthesize curAddedView=_curAddedView;
@property(copy, nonatomic) CDUnknownBlockType onViewFrameChange; // @synthesize onViewFrameChange=_onViewFrameChange;
@property(nonatomic) __weak UIView *currentAddedView; // @synthesize currentAddedView=_currentAddedView;
@property(nonatomic) _Bool m_enableModifyNavBar; // @synthesize m_enableModifyNavBar=_m_enableModifyNavBar;
@property(nonatomic) _Bool isSnapshoting; // @synthesize isSnapshoting=_isSnapshoting;
@property(nonatomic) _Bool m_isPresent; // @synthesize m_isPresent=_m_isPresent;
@property(nonatomic) _Bool isHideStatusBar; // @synthesize isHideStatusBar=_isHideStatusBar;
@property(nonatomic) _Bool isAttachFlutterView; // @synthesize isAttachFlutterView=_isAttachFlutterView;
@property(retain, nonatomic) UIImageView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) MMFlutterHybridNavPageState *pageState; // @synthesize pageState=_pageState;
@property(retain, nonatomic) FlutterActionBarHelper *actionBarHelper; // @synthesize actionBarHelper=_actionBarHelper;
@property(retain, nonatomic) MMFlutterRoute *route; // @synthesize route=_route;
@property(retain, nonatomic) FlutterPageStateDispacher *pageStateDispatcher; // @synthesize pageStateDispatcher=_pageStateDispatcher;
@property(nonatomic) _Bool enablePageState; // @synthesize enablePageState=_enablePageState;
@property(nonatomic) _Bool ignoreSafeAreaBottom; // @synthesize ignoreSafeAreaBottom=_ignoreSafeAreaBottom;
@property(nonatomic) _Bool autoReleaseFlutterView; // @synthesize autoReleaseFlutterView=_autoReleaseFlutterView;
@property(nonatomic) _Bool swipeEnable; // @synthesize swipeEnable=_swipeEnable;
@property(nonatomic) _Bool popOrDismissWithAnimation; // @synthesize popOrDismissWithAnimation=_popOrDismissWithAnimation;
@property(nonatomic) _Bool navigationBackEnable; // @synthesize navigationBackEnable=_navigationBackEnable;
@property(nonatomic) _Bool usePlatformNav; // @synthesize usePlatformNav=_usePlatformNav;
@property(retain, nonatomic) NSString *engineId; // @synthesize engineId=_engineId;
@property(retain, nonatomic) FlutterViewController *flutterVC; // @synthesize flutterVC=_flutterVC;
@property(retain, nonatomic) MMFlutterEngine *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSObject<MMFlutterViewControllerAnimatedTransitioning> *transitionManager; // @synthesize transitionManager=_transitionManager;
@property(retain, nonatomic) MMFlutterInstance *flutterInstance; // @synthesize flutterInstance=_flutterInstance;
@property(nonatomic) __weak NSObject<MMFlutterViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationBecameActive:(id)arg1;
- (_Bool)isTopInCurrentNavController;
- (void)removeApplicationLifecycleObservers;
- (void)setupApplicationLifecycleObservers;
- (void)handleScreenEdgePanGesture:(id)arg1;
- (void)onTouchesEnded;
- (void)onTouchesBegan;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)checkEdgeGesture;
- (void)mmFlutterViewControllerHandleScreenEdgePanGesture:(id)arg1;
- (void)dealloc;
- (_Bool)isDestoryVMWhenDealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (id)windowSceneIfViewLoaded;
- (id)mainScreenIfViewLoaded;
- (void)onWillPushOtherViewController;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)traceTransitionAnimation:(id)arg1;
- (_Bool)shouldUseCoreText;
- (void)enableModifyNavBar:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)clearAttachedUIScrollerView;
- (void)didKeyboardFrameChange:(id)arg1;
- (void)checkRemoveView;
- (void)checkAddView:(CDUnknownBlockType)arg1;
- (void)setProxyUIScrollView:(id)arg1;
- (void)loadFlutterView;
- (void)loadFlutter;
- (void)addPlugins:(id)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)hideStatusBar;
- (void)showStatusBar;
- (void)doneSnapshot;
- (void)willSnapshot;
- (void)hideSnapshot;
- (void)updateSnapshot;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)shouldUpdatePageStateWhenPreRenderStart;
- (void)requestPreRender:(CDUnknownBlockType)arg1 timeOutInMs:(long long)arg2;
- (void)requestPreRender:(CDUnknownBlockType)arg1;
- (void)requestPreload;
- (_Bool)shouldInteractivePop;
- (_Bool)shouldInteractiveDismiss;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (_Bool)useTransparentNavibar;
- (id)navigationBarBackgroundColor;
- (id)initWithFlutterInstance:(id)arg1;
- (id)extraData;
- (id)entranceGMsgID;
- (void)isViewDidAppear;
@property(nonatomic) __weak id <WXCustomWebViewControllerDelegate> m_delegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<WXCustomWebViewControllerDelegate>",?,W,N

- (id)pluginScheduler;
- (void)logUseWebviewSchemeToJumpWithUrl:(id)arg1;
- (void)stopForcedRotationToPortrait;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)goToURL:(id)arg1;
@property(nonatomic) _Bool m_bIsJsapiUploadVideoUploading;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(retain, nonatomic) UIView<YYWebViewInterface> *webView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView<YYWebViewInterface>",?,&,N

@property(readonly, nonatomic) _Bool m_bOfflinePage;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) WebViewJSLogicImpl *m_jsLogicImpl;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"WebViewJSLogicImpl",?,R,N

@property(readonly, nonatomic) WebViewA8KeyLogicImpl *m_a8KeyLogicImpl;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"WebViewA8KeyLogicImpl",?,R,N

@property(retain, nonatomic) NSMutableDictionary *m_extraInfo;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSMutableDictionary",?,&,N

@property(readonly, nonatomic) NSString *m_initUrl;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

- (void)setWebViewContentSize:(struct CGSize)arg1;
- (_Bool)allowShareByImage;
- (_Bool)allowScanQRCodeByImage;
- (_Bool)allowImagePreview;
- (_Bool)allowFayByImage;
- (id)getInitUrl;
- (void)startupPreVerifyJSAPI:(id)arg1 failHandleBlock:(CDUnknownBlockType)arg2;
- (void)setDisableWebAlertView:(_Bool)arg1;
- (void)sendEventToJSBridge:(id)arg1 Param:(id)arg2;
- (id)getShareUrl;
- (unsigned char)getPermissionWithName:(id)arg1;
- (id)getCurrentUrl;
- (unsigned int)getCurrentScene;
- (id)getCurrentAppId;
- (void)forceShowCloseButton;
- (id)extraInfo;
- (void)enableWebContentImageLongPressingTag;
- (void)doJsApiInitEvent;
@property(nonatomic) long long storeUiStatusBarStyle;
- (id)jsApiPluginScheduler;
- (void)publishGlobalEvent:(id)arg1 params:(id)arg2;
- (unsigned int)getLiteAppUuid;
- (id)getLiteAppId;
- (void)onLayoutComplete:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (void)setCanOverScroll:(_Bool)arg1;
- (void)setForbidRightGestureEnable:(_Bool)arg1;
- (void)onBodySizeChange:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (void)setTitleBackgroundColor:(unsigned long long)arg1 darkMode:(_Bool)arg2 pageId:(unsigned long long)arg3;
- (void)onCheckLiteAppVersionError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onCheckBaseLibSumFail:(id)arg1;
- (void)onCheckSumFail:(id)arg1;
- (void)setIsPopGestureEnable:(_Bool)arg1;
- (_Bool)forbidRightGesture;
- (void)setDarkModeDidChangeBlock:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)setViewWillDisappearBlock:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)setStatusBarHidden:(unsigned int)arg1 hidden:(_Bool)arg2;
- (void)setPageOrientation:(unsigned int)arg1 pageOrientation:(int)arg2 landScapeOrientation:(unsigned long long)arg3;
- (void)setHomeIndicatorAutoHidden:(unsigned int)arg1 hidden:(_Bool)arg2;
- (void)setFlagsConfig:(unsigned int)arg1 flags:(int)arg2;
- (void)liteAppDestroy:(id)arg1 appUuid:(unsigned int)arg2;
- (void)liteAppInit:(id)arg1 appUuid:(unsigned int)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (_Bool)prefersStatusBarHidden;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)initForPluginScheduler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

