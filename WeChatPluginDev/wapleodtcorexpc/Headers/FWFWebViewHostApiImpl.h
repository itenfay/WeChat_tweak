//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FWFAssetManager, FWFInstanceManager, NSBundle;

@interface FWFWebViewHostApiImpl : NSObject
{
    FWFInstanceManager *_instanceManager;
    NSBundle *_bundle;
    FWFAssetManager *_assetManager;
}

+ (id)errorForURLString:(id)arg1;
- (void).cxx_destruct;
@property(retain) FWFAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(retain) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) FWFInstanceManager *instanceManager; // @synthesize instanceManager=_instanceManager;
- (id)titleForWebViewWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)setUIDelegateForWebViewWithIdentifier:(id)arg1 delegateIdentifier:(id)arg2 error:(id *)arg3;
- (void)setNavigationDelegateForWebViewWithIdentifier:(id)arg1 delegateIdentifier:(id)arg2 error:(id *)arg3;
- (void)setAllowsBackForwardForWebViewWithIdentifier:(id)arg1 isAllowed:(id)arg2 error:(id *)arg3;
- (void)reloadWebViewWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)loadHTMLForWebViewWithIdentifier:(id)arg1 HTMLString:(id)arg2 baseURL:(id)arg3 error:(id *)arg4;
- (void)loadFileForWebViewWithIdentifier:(id)arg1 fileURL:(id)arg2 readAccessURL:(id)arg3 error:(id *)arg4;
- (void)loadAssetForWebViewWithIdentifier:(id)arg1 assetKey:(id)arg2 error:(id *)arg3;
- (void)goForwardForWebViewWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)goBackForWebViewWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)evaluateJavaScriptForWebViewWithIdentifier:(id)arg1 javaScriptString:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)estimatedProgressForWebViewWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)canGoForwardForWebViewWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)URLForWebViewWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)canGoBackForWebViewWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)setUserAgentForWebViewWithIdentifier:(id)arg1 userAgent:(id)arg2 error:(id *)arg3;
- (void)loadRequestForWebViewWithIdentifier:(id)arg1 request:(id)arg2 error:(id *)arg3;
- (void)createWithIdentifier:(id)arg1 configurationIdentifier:(id)arg2 error:(id *)arg3;
- (id)webViewForIdentifier:(id)arg1;
- (id)initWithInstanceManager:(id)arg1 bundle:(id)arg2 assetManager:(id)arg3;
- (id)initWithInstanceManager:(id)arg1;

@end

