//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class NSString, UINavigationBar, UPWKWebViewJavascriptBridge, WKWebView;
@protocol UPWebPayDelegate;

@interface UPWebController : UIViewController
{
    UPWKWebViewJavascriptBridge *_bridge;
    WKWebView *_webView;
    WKWebView *_tempWebView;
    UINavigationBar *_naviBar;
    _Bool _subPage;
    id <UPWebPayDelegate> _delegate;
    NSString *_startPage;
    NSString *_displayTitle;
}

+ (double)displayHeight;
+ (double)displayWidth;
+ (double)rotatedOffset;
+ (double)rotatedHeight;
+ (double)rotatedWidth;
@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(nonatomic) _Bool subPage; // @synthesize subPage=_subPage;
@property(copy, nonatomic) NSString *startPage; // @synthesize startPage=_startPage;
@property(nonatomic) __weak id <UPWebPayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)onBackEnable:(id)arg1;
- (void)payResult:(id)arg1 error:(id *)arg2;
- (void)onClosePage;
- (_Bool)openNewPage:(id)arg1;
- (void)registerForWebMessage;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)btnClosePressed:(id)arg1;
- (void)addBackBtn;
- (void)rotateCustomNavigationBarBackground;
- (void)setCustomNavigationBarBackground;
- (void)setupNavigationBar;
- (void)loadWebPage;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

