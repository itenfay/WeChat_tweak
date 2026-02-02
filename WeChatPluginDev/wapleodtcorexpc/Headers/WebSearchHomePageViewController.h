//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIButton, UIImageView, UIStackView, UIView, WCWebSearchInputProvider, WSLocalTemplateController, WSWebViewPluginScheduler, WebSearchHomePagePresenter;

@interface WebSearchHomePageViewController
{
    _Bool _isPreload;
    WSWebViewPluginScheduler *_pluginScheduler;
    unsigned long long _VCType;
    NSString *_liteAppExtInfo;
    UIButton *_contentSearchHitBtn;
    UIButton *_contentVoiceInputButton;
    UIStackView *_logoContainerView;
    UIView *_searchBoxContainer;
    MMUILabel *_titleLabel;
    UIImageView *_titleLogoView;
    WebSearchHomePagePresenter *_presenter;
    WSLocalTemplateController *_webviewController;
    WCWebSearchInputProvider *_inputProvider;
    NSString *_sessionId;
}

+ (void)removeCache;
+ (id)getPreloadInstance;
+ (void)preHeatSearchHomePage;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) WCWebSearchInputProvider *inputProvider; // @synthesize inputProvider=_inputProvider;
@property(retain, nonatomic) WSLocalTemplateController *webviewController; // @synthesize webviewController=_webviewController;
@property(retain, nonatomic) WebSearchHomePagePresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) UIImageView *titleLogoView; // @synthesize titleLogoView=_titleLogoView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *searchBoxContainer; // @synthesize searchBoxContainer=_searchBoxContainer;
@property(retain, nonatomic) UIStackView *logoContainerView; // @synthesize logoContainerView=_logoContainerView;
@property(retain, nonatomic) UIButton *contentVoiceInputButton; // @synthesize contentVoiceInputButton=_contentVoiceInputButton;
@property(retain, nonatomic) UIButton *contentSearchHitBtn; // @synthesize contentSearchHitBtn=_contentSearchHitBtn;
@property(copy, nonatomic) NSString *liteAppExtInfo; // @synthesize liteAppExtInfo=_liteAppExtInfo;
@property(nonatomic) _Bool isPreload; // @synthesize isPreload=_isPreload;
@property(nonatomic) unsigned long long VCType; // @synthesize VCType=_VCType;
@property(retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
- (void)registerYReportSdk;
- (void)reloadWebview;
- (id)getSessionId;
- (void)setTransitionAnime;
- (double)getSearchBoxAnimeOffsetY;
- (void)heroDidEndAnimatingToViewController:(id)arg1;
- (void)heroDidEndAnimatingFromViewController:(id)arg1;
- (void)heroWillStartAnimatingToViewController:(id)arg1;
- (_Bool)hasFirstWebviewJsbridgeReady;
- (unsigned long long)localJSBizType;
- (id)getLocalJSLogic;
- (id)getCurViewController;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)initWebview;
- (void)initLogoView;
- (void)initView;
- (void)initData;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)tryRecycleSelf;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

