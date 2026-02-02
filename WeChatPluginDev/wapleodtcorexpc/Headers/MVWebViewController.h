//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSURL;

@interface MVWebViewController
{
    _Bool _webviewDidFinishLoad;
    _Bool _hasGetFirstA8Key;
    CDUnknownBlockType _webViewDidScrollCallBack;
    CDUnknownBlockType _onGetA8KeyFinishCallBack;
    CDUnknownBlockType _onWebviewReceiveNavigationResponseCallBack;
    NSURL *_initialUrl;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasGetFirstA8Key; // @synthesize hasGetFirstA8Key=_hasGetFirstA8Key;
@property(nonatomic) _Bool webviewDidFinishLoad; // @synthesize webviewDidFinishLoad=_webviewDidFinishLoad;
@property(retain, nonatomic) NSURL *initialUrl; // @synthesize initialUrl=_initialUrl;
@property(copy, nonatomic) CDUnknownBlockType onWebviewReceiveNavigationResponseCallBack; // @synthesize onWebviewReceiveNavigationResponseCallBack=_onWebviewReceiveNavigationResponseCallBack;
@property(copy, nonatomic) CDUnknownBlockType onGetA8KeyFinishCallBack; // @synthesize onGetA8KeyFinishCallBack=_onGetA8KeyFinishCallBack;
@property(copy, nonatomic) CDUnknownBlockType webViewDidScrollCallBack; // @synthesize webViewDidScrollCallBack=_webViewDidScrollCallBack;
- (_Bool)judgeAllowsAutoMediaPlay;
- (_Bool)isSameUrlWithLeft:(id)arg1 right:(id)arg2;
- (id)trimmedUrlPath:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4 navigationAction:(id)arg5;
- (void)webViewDidReceiveNavigationResponse:(id)arg1 andGetIsCancelNavigation:(_Bool *)arg2;
- (void)onGetA8KeyFinishWithRequestUrl:(id)arg1 response:(id)arg2 reason:(int)arg3;
- (void)onGetA8KeyWithRequestUrl:(id)arg1 fullUrl:(id)arg2 header:(id)arg3;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setupContentBlocker;
- (id)initWithURL:(id)arg1 presentModal:(_Bool)arg2 extraInfo:(id)arg3 presetUI:(id)arg4;

@end

