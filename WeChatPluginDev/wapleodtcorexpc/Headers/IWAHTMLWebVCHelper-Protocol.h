//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, UIColor, UIScreenEdgePanGestureRecognizer, WAWebViewController, WAWebViewPlugin_HTMLWeb, WKWebView;
@protocol IWAHTMLWebVCDelegate, YYWebViewInterface;

@protocol IWAHTMLWebVCHelper <NSObject>
@property(nonatomic) unsigned int htmlId;
@property(nonatomic) __weak WAWebViewController *superVC;
@property(nonatomic) __weak WAWebViewPlugin_HTMLWeb *plugin;
@property(copy, nonatomic) NSString *sourceAppid;
- (void)translateRevert;
- (void)translate;
- (void)captureFullScreenshotWithCompletion:(void (^)(UIImage *, NSString *))arg1;
- (void)webViewGoBack;
- (_Bool)webViewCanGoBack;
- (void)webViewGoToURL:(NSURL *)arg1;
- (void)setWAHTMLWebVCDelegate:(id <IWAHTMLWebVCDelegate>)arg1;
- (UIScreenEdgePanGestureRecognizer *)webViewInnerEdgeGoBackGesture;
- (void)setBackgroundColor:(UIColor *)arg1;
- (void)updateHTMLFrame;
- (void)configViewFrame:(struct CGRect)arg1;
- (void)handleInsertHTMLDone;
- (void)handleHTMLViewDidTerminated;
- (void)handleHTMLViewDidBePoped;
- (WKWebView<YYWebViewInterface> *)webView;
@end

