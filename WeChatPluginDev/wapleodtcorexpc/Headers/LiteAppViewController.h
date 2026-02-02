//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LiteAppPageConfig, LiteAppReferrerInfo, LiteAppStore, LiteAppViewConsumer, LiteAppWindow, MMLiteAppReporter, NSMutableDictionary, NSString, UIColor, UIImage, UIViewController, WxaLiteAppStartReport;
@protocol LiteAppParentViewControllerDelegate, UIGestureRecognizerDelegate;

@interface LiteAppViewController
{
    struct shared_ptr<LVUICallback> lvUICallback;
    int lastFlags;
    basic_string_5909a4e2 _sourceType;
    vector_bfe5b09a _enableActions;
    vector_bfe5b09a _enableViews;
    unsigned long long _interfaceOrientationMask;
    long long _interfaceOrientation;
    _Bool isHiddenHomeIndicator;
    struct CGSize _size;
    _Bool _openWithNewTab;
    _Bool _isHalfScreen;
    _Bool _isPopGestureEnable;
    _Bool _isReportStartTimeLine;
    _Bool _delayShowNavBar;
    _Bool _pageOrientationDefaultValueAuto;
    _Bool _isTransparent;
    _Bool _preGestureRecognizerEnabled;
    _Bool _statusBarHidden;
    _Bool _isOpenApp;
    _Bool _isPresented;
    _Bool _isNeedShowNavBar;
    _Bool _hasCheckCoreText;
    NSString *_appId;
    NSString *_path;
    NSString *_signatureKey;
    NSString *_page;
    NSString *_query;
    LiteAppReferrerInfo *_referrerInfo;
    LiteAppPageConfig *_pageConfig;
    NSMutableDictionary *_hostInfoExtends;
    double _height;
    LiteAppWindow *_window;
    UIViewController<LiteAppParentViewControllerDelegate> *_liteAppParentViewController;
    UIColor *_preferBackgroundColor;
    UIImage *_preferBackgroundImage;
    WxaLiteAppStartReport *_report;
    LiteAppStore *_nativeStore;
    MMLiteAppReporter *_reporter;
    id <UIGestureRecognizerDelegate> _preGestureRecognizerDelegate;
    LiteAppViewConsumer *_consumer;
    CDUnknownBlockType _anrCheckBlock;
    CDUnknownBlockType _loadingCheckBlock;
    struct CGSize _delayUpdateSize;
    struct PageInfo _currentPageInfo;
}

+ (_Bool)isiPhone;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasCheckCoreText; // @synthesize hasCheckCoreText=_hasCheckCoreText;
@property(nonatomic) struct CGSize delayUpdateSize; // @synthesize delayUpdateSize=_delayUpdateSize;
@property(nonatomic) _Bool isNeedShowNavBar; // @synthesize isNeedShowNavBar=_isNeedShowNavBar;
@property(nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
@property(copy, nonatomic) CDUnknownBlockType loadingCheckBlock; // @synthesize loadingCheckBlock=_loadingCheckBlock;
@property(copy, nonatomic) CDUnknownBlockType anrCheckBlock; // @synthesize anrCheckBlock=_anrCheckBlock;
@property(nonatomic) _Bool isOpenApp; // @synthesize isOpenApp=_isOpenApp;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(retain, nonatomic) LiteAppViewConsumer *consumer; // @synthesize consumer=_consumer;
@property(nonatomic) struct PageInfo currentPageInfo; // @synthesize currentPageInfo=_currentPageInfo;
@property(nonatomic) _Bool preGestureRecognizerEnabled; // @synthesize preGestureRecognizerEnabled=_preGestureRecognizerEnabled;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> preGestureRecognizerDelegate; // @synthesize preGestureRecognizerDelegate=_preGestureRecognizerDelegate;
@property(retain, nonatomic) MMLiteAppReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) LiteAppStore *nativeStore; // @synthesize nativeStore=_nativeStore;
@property(readonly, nonatomic) _Bool isTransparent; // @synthesize isTransparent=_isTransparent;
@property(nonatomic) _Bool pageOrientationDefaultValueAuto; // @synthesize pageOrientationDefaultValueAuto=_pageOrientationDefaultValueAuto;
@property(nonatomic) _Bool delayShowNavBar; // @synthesize delayShowNavBar=_delayShowNavBar;
@property(nonatomic) _Bool isReportStartTimeLine; // @synthesize isReportStartTimeLine=_isReportStartTimeLine;
@property(retain, nonatomic) WxaLiteAppStartReport *report; // @synthesize report=_report;
@property(retain, nonatomic) UIImage *preferBackgroundImage; // @synthesize preferBackgroundImage=_preferBackgroundImage;
@property(retain, nonatomic) UIColor *preferBackgroundColor; // @synthesize preferBackgroundColor=_preferBackgroundColor;
@property(nonatomic) __weak UIViewController<LiteAppParentViewControllerDelegate> *liteAppParentViewController; // @synthesize liteAppParentViewController=_liteAppParentViewController;
@property(nonatomic) _Bool isPopGestureEnable; // @synthesize isPopGestureEnable=_isPopGestureEnable;
@property(retain, nonatomic) LiteAppWindow *window; // @synthesize window=_window;
@property double height; // @synthesize height=_height;
@property(retain, nonatomic) NSMutableDictionary *hostInfoExtends; // @synthesize hostInfoExtends=_hostInfoExtends;
@property(nonatomic) _Bool isHalfScreen; // @synthesize isHalfScreen=_isHalfScreen;
@property(nonatomic) _Bool openWithNewTab; // @synthesize openWithNewTab=_openWithNewTab;
@property(retain, nonatomic) LiteAppPageConfig *pageConfig; // @synthesize pageConfig=_pageConfig;
@property(retain, nonatomic) LiteAppReferrerInfo *referrerInfo; // @synthesize referrerInfo=_referrerInfo;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *signatureKey; // @synthesize signatureKey=_signatureKey;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)onLayoutComplete:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (void)loadConfig;
- (void)setTitleBackgroundColor:(unsigned long long)arg1 darkMode:(_Bool)arg2 pageId:(unsigned long long)arg3;
- (void)onCheckLiteAppVersionError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)checkCoreText;
- (void)updateSize:(struct CGSize)arg1;
- (void)setCanOverScroll:(_Bool)arg1;
- (void)rightGestureEvent:(id)arg1 popPage:(_Bool)arg2;
- (void)setForbidRightGestureEnable:(_Bool)arg1;
- (void)onBodySizeChange:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (unsigned long long)getAppPtr;
- (void)onCreateLitePageViewFinish:(const void *)arg1;
- (void)onShowPageTimeStamp:(unsigned long long)arg1;
- (void)navigateBackAndReloadDebug:(id)arg1 appUuid:(unsigned int)arg2 pageNum:(int)arg3 qrcodeDebugQuery:(id)arg4;
- (void)showPage:(const void *)arg1;
- (void)onCheckSumFail:(id)arg1;
- (void)onCheckBaseLibSumFail:(id)arg1;
- (id)getViewController;
- (void)handleVideoPlayerFullScreen:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (double)statusBarHeight;
- (_Bool)prefersStatusBarHidden;
- (void)setFlags:(int)arg1;
- (void)setPageOrientation:(int)arg1 landScapeOrientation:(unsigned long long)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)initParams:(const void *)arg1;
- (void)bindLVCPP;
- (void)_openWebviewByParam:(id)arg1;
- (void)_navigateBackAnimated:(_Bool)arg1;
- (void)dataReportStartLiteAppTimeLine;
- (void)tapViewWhenError:(id)arg1;
- (void)dataReportTapWhenError;
- (void)setSource:(id)arg1 enableActions:(id)arg2 enableViews:(id)arg3;
- (void)setStore:(id)arg1;
- (id)getStore;
- (id)getOrCreateNativeStore;
- (unsigned int)getLiteAppUuid;
- (void)setIsTransparent:(_Bool)arg1;
- (void)preDealloc;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)reopen:(id)arg1;
- (id)initWithParams:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 referrerInfo:(id)arg5 signatureKey:(id)arg6 openWithNewTab:(_Bool)arg7 isHalfScreen:(_Bool)arg8 isTransparent:(_Bool)arg9 startReport:(id)arg10 reporter:(id)arg11;
- (id)initWithParams:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 openWithNewTab:(_Bool)arg6 isHalfScreen:(_Bool)arg7 isTransparent:(_Bool)arg8 startReport:(id)arg9 reporter:(id)arg10;
- (id)initWithParams:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 openWithNewTab:(_Bool)arg6 startReport:(id)arg7 reporter:(id)arg8;
- (id)init;

// Remaining properties
@property(nonatomic) unsigned int appUuid;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

