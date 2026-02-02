//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FlutterEngine, FlutterMethodChannel, NSString, NSURLRequest, UIColor, UIImageView, UIScrollView, WADebugSkylineOptions, WAFlutterViewController, WANativeViewPlugin, WASkyLineRuntime, WASkylinePageCfg, WATexturePlugin;
@protocol IWASkylineRuntime, WASkylineViewDelegate, YYWebViewDelegate;

@interface WASkylineView : UIView
{
    _Bool allowsBackForwardNavigationGestures;
    _Bool canGoBack;
    _Bool canGoForward;
    _Bool loading;
    _Bool disablePreviewElement;
    _Bool _isNewEngineHomePage;
    _Bool _isMovingView;
    _Bool _fontShapeUseCoreText;
    _Bool _isReady;
    _Bool _isRouting;
    _Bool _isFirst;
    id <YYWebViewDelegate> wvDelegate;
    UIScrollView *scrollView;
    NSURLRequest *request;
    id <WASkylineViewDelegate> _skylineDelegate;
    id <IWASkylineRuntime> _skylineRuntime;
    long long _windowId;
    WASkylinePageCfg *_pageCfg;
    WAFlutterViewController *_flutterVC;
    UIColor *_backgroundColorContent;
    WADebugSkylineOptions *_debugOptions;
    WASkyLineRuntime *_runtime;
    FlutterEngine *_flutterEngine;
    FlutterMethodChannel *_skylineChannel;
    FlutterMethodChannel *_skylineNotifyChannel;
    WANativeViewPlugin *_nativeViewPlugin;
    WATexturePlugin *_texturePlugin;
    UIImageView *_snapshotImageView;
    long long _curInputWidgetId;
    UIView *_coverRoot;
    UIView *_coverColorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *coverColorView; // @synthesize coverColorView=_coverColorView;
@property(retain, nonatomic) UIView *coverRoot; // @synthesize coverRoot=_coverRoot;
@property(nonatomic) long long curInputWidgetId; // @synthesize curInputWidgetId=_curInputWidgetId;
@property(nonatomic) _Bool isFirst; // @synthesize isFirst=_isFirst;
@property(nonatomic) _Bool isRouting; // @synthesize isRouting=_isRouting;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) UIImageView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
@property(retain, nonatomic) WATexturePlugin *texturePlugin; // @synthesize texturePlugin=_texturePlugin;
@property(retain, nonatomic) WANativeViewPlugin *nativeViewPlugin; // @synthesize nativeViewPlugin=_nativeViewPlugin;
@property(retain, nonatomic) FlutterMethodChannel *skylineNotifyChannel; // @synthesize skylineNotifyChannel=_skylineNotifyChannel;
@property(retain, nonatomic) FlutterMethodChannel *skylineChannel; // @synthesize skylineChannel=_skylineChannel;
@property(retain, nonatomic) FlutterEngine *flutterEngine; // @synthesize flutterEngine=_flutterEngine;
@property(nonatomic) __weak WASkyLineRuntime *runtime; // @synthesize runtime=_runtime;
@property(retain, nonatomic) WADebugSkylineOptions *debugOptions; // @synthesize debugOptions=_debugOptions;
@property(nonatomic) _Bool fontShapeUseCoreText; // @synthesize fontShapeUseCoreText=_fontShapeUseCoreText;
@property(retain, nonatomic) UIColor *backgroundColorContent; // @synthesize backgroundColorContent=_backgroundColorContent;
@property(nonatomic) _Bool isMovingView; // @synthesize isMovingView=_isMovingView;
@property(retain, nonatomic) WAFlutterViewController *flutterVC; // @synthesize flutterVC=_flutterVC;
@property(nonatomic) _Bool isNewEngineHomePage; // @synthesize isNewEngineHomePage=_isNewEngineHomePage;
@property(retain, nonatomic) WASkylinePageCfg *pageCfg; // @synthesize pageCfg=_pageCfg;
@property(nonatomic) long long windowId; // @synthesize windowId=_windowId;
@property(nonatomic) __weak id <IWASkylineRuntime> skylineRuntime; // @synthesize skylineRuntime=_skylineRuntime;
@property(nonatomic) __weak id <WASkylineViewDelegate> skylineDelegate; // @synthesize skylineDelegate=_skylineDelegate;
@property(nonatomic) _Bool disablePreviewElement; // @synthesize disablePreviewElement;
@property(readonly, nonatomic, getter=isLoading) _Bool loading; // @synthesize loading;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward; // @synthesize canGoForward;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack; // @synthesize canGoBack;
@property(nonatomic) _Bool allowsBackForwardNavigationGestures; // @synthesize allowsBackForwardNavigationGestures;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic) __weak id <YYWebViewDelegate> wvDelegate; // @synthesize wvDelegate;
- (void)addScriptMessageHandlerName:(id)arg1;
- (void)enableJavaScriptPopup:(_Bool)arg1;
- (void)evaluateJavaScriptFromString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)goForward;
- (void)goBack;
- (void)stopLoading;
- (void)reload;
- (void)LoadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)LoadRequest:(id)arg1;
- (void)onKeyboardDidHide:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)updateKeyboardHeight:(id)arg1;
- (void)onHideKeyboard:(id)arg1;
- (void)onShowKeyboard:(id)arg1;
- (_Bool)checkIsSubView:(id)arg1;
- (id)snapshotSkyline;
- (void)snapshotEnd;
- (void)snapshotBegin;
- (void)removeNativeView:(long long)arg1;
- (void)insertNativeView:(id)arg1 viewId:(long long)arg2;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (long long)makeWindowId;
- (void)setFrame:(struct CGRect)arg1;
- (void)initSkylineChannel;
- (void)moveViewToOldPage:(id)arg1;
- (void)moveViewToNewPage:(id)arg1;
- (void)initViewInPage:(id)arg1;
- (id)makeParam;
- (void)onFlutterViewDidRender;
- (void)onPageFirstFrame:(long long)arg1;
- (void)onNavigateBackDone:(long long)arg1;
- (void)onNavigateBack:(long long)arg1;
- (void)onRouteDone:(long long)arg1;
- (void)notifySwitchTab:(long long)arg1 pageCfg:(id)arg2;
- (void)notifyAutoReLaunch:(long long)arg1 pageCfg:(id)arg2;
- (void)notifyReLaunch:(long long)arg1 pageCfg:(id)arg2;
- (void)notifyAppLaunch:(long long)arg1 pageCfg:(id)arg2;
- (void)notifyNavigateBack:(long long)arg1 calculatedDelta:(long long)arg2 animated:(_Bool)arg3 pageCfg:(id)arg4;
- (void)notifyRedirectTo:(long long)arg1 pageCfg:(id)arg2;
- (void)notifyNavigateTo:(long long)arg1 pageCfg:(id)arg2;
- (void)onWindowReady;
- (void)updateCoverColor;
- (void)setShowCover:(_Bool)arg1;
- (void)initFlutterView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

