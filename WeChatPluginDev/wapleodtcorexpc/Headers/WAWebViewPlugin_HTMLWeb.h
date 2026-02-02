//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, UIViewController;
@protocol IWAHTMLWebVCHelper;

@interface WAWebViewPlugin_HTMLWeb
{
    NSMutableDictionary *_enableScrollDic;
    UIViewController<IWAHTMLWebVCHelper> *_htmlWebVC;
    NSString *_javascriptForDisappear;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *javascriptForDisappear; // @synthesize javascriptForDisappear=_javascriptForDisappear;
@property(retain, nonatomic) UIViewController<IWAHTMLWebVCHelper> *htmlWebVC; // @synthesize htmlWebVC=_htmlWebVC;
@property(readonly, nonatomic) NSMutableDictionary *enableScrollDic; // @synthesize enableScrollDic=_enableScrollDic;
- (void)translateRevert;
- (void)translate;
- (id)web_backNavigationGesture;
- (void)web_view_captureLongSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)web_view_evaluateJavascript:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)web_view_goBack;
- (_Bool)web_view_canGoBack;
- (void)web_view_goToUrl:(id)arg1;
- (id)web_view_getCurrentUrl;
- (void)web_view_handleInsertHTMLDone;
- (void)web_view_configViewFrame:(struct CGRect)arg1;
- (void)web_view_setBackgroundColor:(id)arg1;
- (void)web_view_setHtmlId:(unsigned int)arg1;
- (id)web_view;
- (_Bool)web_view_isExist;
- (void)releaseHtmlVC;
- (void)genHtmlVCWithExtInfo:(id)arg1;
- (void)onTranslateRevertFinish:(_Bool)arg1;
- (void)onTranslateFinish:(_Bool)arg1;
- (void)webviewDidFinish:(id)arg1;
- (void)runJavascriptForDisappear;
- (void)onViewWillDisappear;
- (void)onUIApplicationWillResignActiveNotification;
- (void)insertHtmlVCIfNeed;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)sendEvent:(id)arg1 parma:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

