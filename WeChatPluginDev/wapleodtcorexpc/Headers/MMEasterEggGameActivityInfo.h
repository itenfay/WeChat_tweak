//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebViewController, NSString, OpenLiteAppInfo;
@protocol MMEasterEggActivity;

@interface MMEasterEggGameActivityInfo
{
    _Bool _needPreload;
    _Bool _isWebviewCached;
    NSString *_URLString;
    NSString *_liteAppUrl;
    MMWebViewController *_webviewController;
    id <MMEasterEggActivity> _curActivity;
    double _delaySeconds;
    OpenLiteAppInfo *_openLiteAppInfo;
}

+ (id)activityNodeName;
- (void).cxx_destruct;
@property(retain, nonatomic) OpenLiteAppInfo *openLiteAppInfo; // @synthesize openLiteAppInfo=_openLiteAppInfo;
@property(nonatomic) _Bool isWebviewCached; // @synthesize isWebviewCached=_isWebviewCached;
@property(nonatomic) double delaySeconds; // @synthesize delaySeconds=_delaySeconds;
@property(retain, nonatomic) id <MMEasterEggActivity> curActivity; // @synthesize curActivity=_curActivity;
@property(retain, nonatomic) MMWebViewController *webviewController; // @synthesize webviewController=_webviewController;
@property(nonatomic) _Bool needPreload; // @synthesize needPreload=_needPreload;
@property(retain, nonatomic) NSString *liteAppUrl; // @synthesize liteAppUrl=_liteAppUrl;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(readonly, copy) NSString *description;
- (void)afterDelay;
- (void)onEasterEggEnd;
- (void)releaseWebView;
- (void)webViewDidReturn:(id)arg1;
- (void)evaluateJavaScriptFromString:(id)arg1;
- (void)showWebControllerOnViewController:(id)arg1 activity:(id)arg2;
- (void)initializeWebView:(id)arg1 preload:(_Bool)arg2;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)openLiteAppOnViewController:(id)arg1;
- (_Bool)canOpenLiteApp;
- (void)easterEggDidStart:(id)arg1;
- (_Bool)isValid;
- (void)tryParseURLStringFromActivityNode:(struct XmlReaderNode_t *)arg1;
- (id)initWithActivityNode:(struct XmlReaderNode_t *)arg1 directoryPath:(id)arg2 clientEggVersion:(unsigned long long)arg3;
- (id)accessibilityLabel;
- (Class)activityClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

