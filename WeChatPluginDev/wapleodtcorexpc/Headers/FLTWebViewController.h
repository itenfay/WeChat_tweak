//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FLTWKNavigationDelegate, FLTWKProgressionDelegate, FLTWKWebView, FlutterMethodChannel, NSMutableSet, NSString;

@interface FLTWebViewController : NSObject
{
    FLTWKWebView *_webView;
    long long _viewId;
    FlutterMethodChannel *_channel;
    NSString *_currentUrl;
    NSMutableSet *_javaScriptChannelNames;
    FLTWKNavigationDelegate *_navigationDelegate;
    FLTWKProgressionDelegate *_progressionDelegate;
}

+ (_Bool)isValidStringArgument:(id)arg1 withErrorMessage:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) FLTWKWebView *webView; // @synthesize webView=_webView;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)updateUserAgent:(id)arg1;
- (void)registerJavaScriptChannels:(id)arg1 controller:(id)arg2;
- (id)buildNSURLRequest:(id)arg1;
- (void)updateAutoMediaPlaybackPolicy:(id)arg1 inConfiguration:(id)arg2;
- (void)updateJsMode:(id)arg1;
- (void)applyConfigurationSettings:(id)arg1 toConfiguration:(id)arg2;
- (id)applySettings:(id)arg1;
- (void)getScrollY:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)getScrollX:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onScrollBy:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onScrollTo:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onGetTitle:(CDUnknownBlockType)arg1;
- (void)clearCache:(CDUnknownBlockType)arg1;
- (void)onRemoveJavaScriptChannels:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onAddJavaScriptChannels:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onRunJavaScript:(id)arg1 result:(CDUnknownBlockType)arg2 sendReturnValue:(_Bool)arg3;
- (void)onEvaluateJavaScript:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onCurrentUrl:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onReload:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onGoForward:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onGoBack:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onCanGoForward:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onCanGoBack:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onLoadRequest:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onLoadUrl:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onLoadHtmlString:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onLoadFlutterAsset:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onLoadFile:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onUpdateSettings:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)onMethodCall:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)view;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3 binaryMessenger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

