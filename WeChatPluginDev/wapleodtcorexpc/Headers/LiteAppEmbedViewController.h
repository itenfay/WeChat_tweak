//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LiteAppEmbedViewConsumer, LiteAppPageConfig, LiteAppReferrerInfo, LiteAppStore, MMLiteAppReporter, NSMutableDictionary, NSString, UIColor, UIViewController, WxaLiteAppStartReport;
@protocol LiteAppEmbedViewControllerDelegate, LiteAppParentViewControllerDelegate, UIGestureRecognizerDelegate;

@interface LiteAppEmbedViewController
{
    struct shared_ptr<LVUICallback> lvUICallback;
    basic_string_5909a4e2 _sourceType;
    vector_bfe5b09a _enableActions;
    vector_bfe5b09a _enableViews;
    _Bool isHiddenHomeIndicator;
    _Bool _isTransparent;
    _Bool _isPopGestureEnable;
    _Bool _openWithNewTab;
    _Bool _isReportStartTimeLine;
    _Bool _autoWidth;
    _Bool _autoHeight;
    _Bool _preGestureRecognizerEnabled;
    _Bool _isOpenApp;
    _Bool _hasCheckCoreText;
    NSString *_appId;
    NSString *_path;
    NSString *_signatureKey;
    NSString *_page;
    NSString *_query;
    LiteAppReferrerInfo *_referrerInfo;
    LiteAppPageConfig *_pageConfig;
    id <LiteAppEmbedViewControllerDelegate> _delegate;
    NSMutableDictionary *_hostInfoExtends;
    UIViewController<LiteAppParentViewControllerDelegate> *_liteAppParentViewController;
    UIColor *_preferBackgroundColor;
    WxaLiteAppStartReport *_report;
    LiteAppStore *_nativeStore;
    MMLiteAppReporter *_reporter;
    id <UIGestureRecognizerDelegate> _preGestureRecognizerDelegate;
    LiteAppEmbedViewConsumer *_consumer;
    CDUnknownBlockType _anrCheckBlock;
    CDUnknownBlockType _loadingCheckBlock;
    struct CGSize _lastSize;
    struct CGSize _delayUpdateSize;
    struct PageInfo _currentPageInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasCheckCoreText; // @synthesize hasCheckCoreText=_hasCheckCoreText;
@property(nonatomic) struct CGSize delayUpdateSize; // @synthesize delayUpdateSize=_delayUpdateSize;
@property(nonatomic) struct CGSize lastSize; // @synthesize lastSize=_lastSize;
@property(copy, nonatomic) CDUnknownBlockType loadingCheckBlock; // @synthesize loadingCheckBlock=_loadingCheckBlock;
@property(copy, nonatomic) CDUnknownBlockType anrCheckBlock; // @synthesize anrCheckBlock=_anrCheckBlock;
@property(nonatomic) _Bool isOpenApp; // @synthesize isOpenApp=_isOpenApp;
@property(retain, nonatomic) LiteAppEmbedViewConsumer *consumer; // @synthesize consumer=_consumer;
@property(nonatomic) struct PageInfo currentPageInfo; // @synthesize currentPageInfo=_currentPageInfo;
@property(nonatomic) _Bool preGestureRecognizerEnabled; // @synthesize preGestureRecognizerEnabled=_preGestureRecognizerEnabled;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> preGestureRecognizerDelegate; // @synthesize preGestureRecognizerDelegate=_preGestureRecognizerDelegate;
@property(retain, nonatomic) MMLiteAppReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) LiteAppStore *nativeStore; // @synthesize nativeStore=_nativeStore;
@property(nonatomic) _Bool autoHeight; // @synthesize autoHeight=_autoHeight;
@property(nonatomic) _Bool autoWidth; // @synthesize autoWidth=_autoWidth;
@property(nonatomic) _Bool isReportStartTimeLine; // @synthesize isReportStartTimeLine=_isReportStartTimeLine;
@property(retain, nonatomic) WxaLiteAppStartReport *report; // @synthesize report=_report;
@property(retain, nonatomic) UIColor *preferBackgroundColor; // @synthesize preferBackgroundColor=_preferBackgroundColor;
@property(nonatomic) __weak UIViewController<LiteAppParentViewControllerDelegate> *liteAppParentViewController; // @synthesize liteAppParentViewController=_liteAppParentViewController;
@property(retain, nonatomic) NSMutableDictionary *hostInfoExtends; // @synthesize hostInfoExtends=_hostInfoExtends;
@property(nonatomic) __weak id <LiteAppEmbedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool openWithNewTab; // @synthesize openWithNewTab=_openWithNewTab;
@property(nonatomic) _Bool isPopGestureEnable; // @synthesize isPopGestureEnable=_isPopGestureEnable;
@property(nonatomic) _Bool isTransparent; // @synthesize isTransparent=_isTransparent;
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
- (_Bool)canSheetDrag;
- (void)updateSize:(struct CGSize)arg1;
- (void)setCanOverScroll:(_Bool)arg1;
- (unsigned long long)getAppPtr;
- (void)setSource:(id)arg1 enableActions:(id)arg2 enableViews:(id)arg3;
- (void)setStore:(id)arg1;
- (id)getStore;
- (id)getOrCreateNativeStore;
- (void)setStatusBarHidden:(_Bool)arg1;
- (void)setForbidRightGestureEnable:(_Bool)arg1;
- (void)onBodySizeChange:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (void)onCreateLitePageViewFinish:(const void *)arg1;
- (void)onShowPageTimeStamp:(unsigned long long)arg1;
- (void)navigateBackAndReloadDebug:(id)arg1 appUuid:(unsigned int)arg2 pageNum:(int)arg3 qrcodeDebugQuery:(id)arg4;
- (void)showPage:(const void *)arg1;
- (_Bool)isHalfScreen;
- (void)onCheckSumFail:(id)arg1;
- (void)onCheckBaseLibSumFail:(id)arg1;
- (id)getViewController;
- (double)statusBarHeight;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)initParams:(const void *)arg1;
- (void)bindLVCPP;
- (void)_openWebviewByParam:(id)arg1;
- (void)_navigateBackAnimated:(_Bool)arg1;
- (void)dataReportStartLiteAppTimeLine;
- (void)tapViewWhenError:(id)arg1;
- (void)dataReportTapWhenError;
- (unsigned int)getLiteAppUuid;
- (void)preDealloc;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)reopen:(id)arg1;
- (id)initWithParams:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 referrerInfo:(id)arg5 signatureKey:(id)arg6 openWithNewTab:(_Bool)arg7 isTransparent:(_Bool)arg8 startReport:(id)arg9 reporter:(id)arg10;
- (id)initWithParams:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 openWithNewTab:(_Bool)arg6 isTransparent:(_Bool)arg7 startReport:(id)arg8 reporter:(id)arg9;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

