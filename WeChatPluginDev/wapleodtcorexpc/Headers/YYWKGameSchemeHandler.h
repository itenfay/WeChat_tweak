//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameURLSessionWrapper, NSLock, NSMutableDictionary, NSString, WKHTTPCookieStore, YYWKGamePkgCachesStastics, YYWKGameWebView;

@interface YYWKGameSchemeHandler : NSObject
{
    _Bool _isGameCenterScene;
    NSLock *_networkLock;
    YYWKGameWebView *_webview;
    YYWKGamePkgCachesStastics *_pkgStastics;
    GameURLSessionWrapper *_urlSessionWrapper;
    WKHTTPCookieStore *_wkCookieStore;
    NSMutableDictionary *_md5ToCertifacateDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *md5ToCertifacateDict; // @synthesize md5ToCertifacateDict=_md5ToCertifacateDict;
@property(nonatomic) _Bool isGameCenterScene; // @synthesize isGameCenterScene=_isGameCenterScene;
@property(nonatomic) __weak WKHTTPCookieStore *wkCookieStore; // @synthesize wkCookieStore=_wkCookieStore;
@property(retain, nonatomic) GameURLSessionWrapper *urlSessionWrapper; // @synthesize urlSessionWrapper=_urlSessionWrapper;
@property(retain, nonatomic) YYWKGamePkgCachesStastics *pkgStastics; // @synthesize pkgStastics=_pkgStastics;
@property(nonatomic) __weak YYWKGameWebView *webview; // @synthesize webview=_webview;
@property(retain, nonatomic) NSLock *networkLock; // @synthesize networkLock=_networkLock;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)innerDidReceiveData:(id)arg1 response:(id)arg2 urlSchemeTask:(id)arg3;
- (void)didReceiveData:(id)arg1 response:(id)arg2 urlSchemeTask:(id)arg3;
- (id)htmlInjectStrBeforeHead;
- (id)webViewCookieStore;
- (_Bool)handleIntercept:(id)arg1 urlSchemeTask:(id)arg2;
- (void)markRequestBegin:(id)arg1 webView:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

