//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UIButton, WKWebView;
@protocol FBSDKWebDialogViewDelegate;

@interface FBSDKWebDialogView : UIView
{
    UIButton *_closeButton;
    UIActivityIndicatorView *_loadingView;
    WKWebView *_webView;
    id <FBSDKWebDialogViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBSDKWebDialogViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)_close:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)stopLoading;
- (void)loadURL:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

