//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WKWebView;

@interface MMWebViewUniversalLinkMinitorLogic
{
    unsigned int _navigateActionMatchControlAction;
    WKWebView *_webview;
    NSString *_weAppAppId;
    NSString *_nsLastWebViewNavigationSourceUrl;
    NSString *_nsLastWebViewNavigationUrl;
    unsigned long long _uiLastNavigationTimeStampInMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int navigateActionMatchControlAction; // @synthesize navigateActionMatchControlAction=_navigateActionMatchControlAction;
@property(nonatomic) unsigned long long uiLastNavigationTimeStampInMs; // @synthesize uiLastNavigationTimeStampInMs=_uiLastNavigationTimeStampInMs;
@property(copy, nonatomic) NSString *nsLastWebViewNavigationUrl; // @synthesize nsLastWebViewNavigationUrl=_nsLastWebViewNavigationUrl;
@property(copy, nonatomic) NSString *nsLastWebViewNavigationSourceUrl; // @synthesize nsLastWebViewNavigationSourceUrl=_nsLastWebViewNavigationSourceUrl;
@property(copy, nonatomic) NSString *weAppAppId; // @synthesize weAppAppId=_weAppAppId;
@property(nonatomic) __weak WKWebView *webview; // @synthesize webview=_webview;
- (void)__reportUniversalLinkNavigationKVStatWhenNavigationWork:(_Bool)arg1;
- (void)reportUniversalLinkActionWithReportKey:(unsigned int)arg1;
- (void)__clearAllNavigationInfo;
- (void)onEnterBackground;
- (void)clearAllNavigationInfo;
- (void)onWebViewDidStartLoadAllowedNavigation:(id)arg1;
- (void)onRewindWebViewNavigation:(id)arg1 sourceUrl:(id)arg2;
- (void)onAllowWebViewNavigation:(id)arg1 sourceUrl:(id)arg2;
- (void)dealloc;
- (id)init;

@end

