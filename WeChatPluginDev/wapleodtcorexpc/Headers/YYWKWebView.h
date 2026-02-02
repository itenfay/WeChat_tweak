//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, UIScreenEdgePanGestureRecognizer;

@interface YYWKWebView
{
    NSMutableDictionary *m_containerDict;
    _Bool _isSettingAllowsBackForwardNavigationGestures;
    UIScreenEdgePanGestureRecognizer *_swipeBackGesture;
}

+ (id)hookTagForSelector:(SEL)arg1;
+ (void)hookWKChildScrollViewWithSEL:(SEL)arg1;
+ (void)hookWKChildScrollView;
+ (unsigned int)getViewIdFromView:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UIScreenEdgePanGestureRecognizer *swipeBackGesture; // @synthesize swipeBackGesture=_swipeBackGesture;
@property(nonatomic) _Bool isSettingAllowsBackForwardNavigationGestures; // @synthesize isSettingAllowsBackForwardNavigationGestures=_isSettingAllowsBackForwardNavigationGestures;
- (void)buildMenuWithBuilder:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)showTipView:(id)arg1;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)canShowAlertInCurrentWebViewController;
- (id)currentProcessPool;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)addGestureRecognizer:(id)arg1;
- (void)setAllowsBackForwardNavigationGestures:(_Bool)arg1;
- (void)onSameLayerChangedScrollView:(id)arg1;
- (void)dumpContextInfoWhenAttachScrollViewFail:(unsigned int)arg1;
- (id)containerForNativeView:(id)arg1;
- (id)findScrollViewByViewIdentity:(id)arg1;
- (id)p_findScrollViewFromView:(id)arg1 byViewIdentity:(id)arg2;
- (id)p_findScrollViewFromView:(id)arg1 byViewId:(unsigned int)arg2;
- (_Bool)checkNativeViewStatusAndReportIfLossed;
- (_Bool)removeAllNativeView;
- (_Bool)removeChildView:(unsigned int)arg1;
- (id)getChildView:(unsigned int)arg1;
- (_Bool)insertChildView:(id)arg1 viewIdentity:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

