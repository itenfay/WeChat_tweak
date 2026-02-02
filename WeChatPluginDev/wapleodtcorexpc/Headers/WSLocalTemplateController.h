//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LocalJSLogicBase, NSString, WKWebSearchView, WSJSEventHandler, WSLocalTemplateConfig, WSResultViewLogic;

@interface WSLocalTemplateController : NSObject
{
    WKWebSearchView *_webview;
    WSLocalTemplateConfig *_config;
    WSJSEventHandler *_deprecatedSearchEventHandler;
    WSResultViewLogic *_resultViewLogic;
}

+ (void)preHeatSearchH5WithForceDarkMode:(_Bool)arg1;
+ (void)removeCache;
+ (id)getPreloadInstanceWith:(id)arg1 webviewOwner:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WSResultViewLogic *resultViewLogic; // @synthesize resultViewLogic=_resultViewLogic;
@property(retain, nonatomic) WSJSEventHandler *deprecatedSearchEventHandler; // @synthesize deprecatedSearchEventHandler=_deprecatedSearchEventHandler;
@property(retain, nonatomic) WSLocalTemplateConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) WKWebSearchView *webview; // @synthesize webview=_webview;
- (unsigned int)h5Version;
- (id)htmlPath;
- (id)viewStacks;
@property(readonly, nonatomic) LocalJSLogicBase *jsLogic;
- (void)setContentVC:(id)arg1;
- (void)loadH5FileFor:(unsigned long long)arg1;
- (void)loadH5File;
- (void)initJSLogic;
- (void)initWebview;
- (void)updateConfig:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (void)tryRecycleSelf;
- (void)_fetchH5FileThenLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

