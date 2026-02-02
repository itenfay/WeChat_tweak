//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber, NSString, WKWebSearchView, WSLocalTemplateController, WSWebViewPluginScheduler, WSk1kViewConfig, _TtC6WeChat25WSWebviewExceptionCatcher;

@interface WSTemplateContainerView
{
    WSWebViewPluginScheduler *_pluginScheduler;
    WSk1kViewConfig *_config;
    WSLocalTemplateController *_templateController;
    WKWebSearchView *_webview;
    NSNumber *_categoryId;
    _TtC6WeChat25WSWebviewExceptionCatcher *_eCatcher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC6WeChat25WSWebviewExceptionCatcher *eCatcher; // @synthesize eCatcher=_eCatcher;
@property(retain, nonatomic) NSNumber *categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) WKWebSearchView *webview; // @synthesize webview=_webview;
@property(retain, nonatomic) WSLocalTemplateController *templateController; // @synthesize templateController=_templateController;
@property(retain, nonatomic) WSk1kViewConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
- (void)onSwitchToThisView:(id)arg1;
- (void)recreateWebview;
- (_Bool)enableShowExceptionTip;
- (void)exitPagewhenFault;
- (void)reloadWebview;
- (unsigned long long)localJSBizType;
- (id)getCurViewController;
- (id)getLocalJSLogic;
- (id)communicator;
- (void)exposed;
@property(readonly, nonatomic) _Bool isWebviewActive;
- (void)updateDaynamicConfig;
- (void)initPlugins;
- (void)initViewIfNeedFor:(unsigned long long)arg1;
- (long long)k1kCategoryId;
- (id)getCategoryId;
- (void)initViewIfNeed;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

