//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, UIImageView, UILabel, UIView, WCFinderAnimationLoadingView, YYWKWebView;

@interface WCFinderWebViewActionSheet
{
    NSString *_titleString;
    NSString *_ruleUrl;
    CDUnknownBlockType _clickAcceptBlock;
    CDUnknownBlockType _clickCancelBlock;
    UIView *_tipsView;
    MMUIButton *_acceptBtn;
    WCFinderAnimationLoadingView *_loadingView;
    unsigned long long _loadType;
    YYWKWebView *_h5WebView;
    UIImageView *_retryImageView;
    UILabel *_retryLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *retryLabel; // @synthesize retryLabel=_retryLabel;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) YYWKWebView *h5WebView; // @synthesize h5WebView=_h5WebView;
@property(nonatomic) unsigned long long loadType; // @synthesize loadType=_loadType;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMUIButton *acceptBtn; // @synthesize acceptBtn=_acceptBtn;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(copy, nonatomic) CDUnknownBlockType clickCancelBlock; // @synthesize clickCancelBlock=_clickCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType clickAcceptBlock; // @synthesize clickAcceptBlock=_clickAcceptBlock;
@property(copy, nonatomic) NSString *ruleUrl; // @synthesize ruleUrl=_ruleUrl;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void)onClickRetry:(id)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)onClickAcceptBtn;
- (void)onClickCancelBtn;
- (id)getTipsActionSheetView;
- (double)getCustomView:(double)arg1;
- (double)heightOfWholeSheet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

