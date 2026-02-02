//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FWFNSUrlRequestData, NSNumber, NSString;

@protocol FWFWKWebViewHostApi
- (void)evaluateJavaScriptForWebViewWithIdentifier:(NSNumber *)arg1 javaScriptString:(NSString *)arg2 completion:(void (^)(id, FlutterError *))arg3;
- (void)setUserAgentForWebViewWithIdentifier:(NSNumber *)arg1 userAgent:(NSString *)arg2 error:(id *)arg3;
- (void)setAllowsBackForwardForWebViewWithIdentifier:(NSNumber *)arg1 isAllowed:(NSNumber *)arg2 error:(id *)arg3;
- (NSString *)titleForWebViewWithIdentifier:(NSNumber *)arg1 error:(id *)arg2;
- (void)reloadWebViewWithIdentifier:(NSNumber *)arg1 error:(id *)arg2;
- (void)goForwardForWebViewWithIdentifier:(NSNumber *)arg1 error:(id *)arg2;
- (void)goBackForWebViewWithIdentifier:(NSNumber *)arg1 error:(id *)arg2;
- (NSNumber *)canGoForwardForWebViewWithIdentifier:(NSNumber *)arg1 error:(id *)arg2;
- (NSNumber *)canGoBackForWebViewWithIdentifier:(NSNumber *)arg1 error:(id *)arg2;
- (void)loadAssetForWebViewWithIdentifier:(NSNumber *)arg1 assetKey:(NSString *)arg2 error:(id *)arg3;
- (void)loadFileForWebViewWithIdentifier:(NSNumber *)arg1 fileURL:(NSString *)arg2 readAccessURL:(NSString *)arg3 error:(id *)arg4;
- (void)loadHTMLForWebViewWithIdentifier:(NSNumber *)arg1 HTMLString:(NSString *)arg2 baseURL:(NSString *)arg3 error:(id *)arg4;
- (void)loadRequestForWebViewWithIdentifier:(NSNumber *)arg1 request:(FWFNSUrlRequestData *)arg2 error:(id *)arg3;
- (NSNumber *)estimatedProgressForWebViewWithIdentifier:(NSNumber *)arg1 error:(id *)arg2;
- (NSString *)URLForWebViewWithIdentifier:(NSNumber *)arg1 error:(id *)arg2;
- (void)setNavigationDelegateForWebViewWithIdentifier:(NSNumber *)arg1 delegateIdentifier:(NSNumber *)arg2 error:(id *)arg3;
- (void)setUIDelegateForWebViewWithIdentifier:(NSNumber *)arg1 delegateIdentifier:(NSNumber *)arg2 error:(id *)arg3;
- (void)createWithIdentifier:(NSNumber *)arg1 configurationIdentifier:(NSNumber *)arg2 error:(id *)arg3;
@end

