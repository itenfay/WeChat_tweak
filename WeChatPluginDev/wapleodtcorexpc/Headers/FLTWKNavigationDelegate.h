//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterMethodChannel, NSString;

@interface FLTWKNavigationDelegate : NSObject
{
    FlutterMethodChannel *_methodChannel;
    _Bool _hasDartNavigationDelegate;
    _Bool _shouldEnableZoom;
}

+ (id)errorCodeToString:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldEnableZoom; // @synthesize shouldEnableZoom=_shouldEnableZoom;
@property(nonatomic) _Bool hasDartNavigationDelegate; // @synthesize hasDartNavigationDelegate=_hasDartNavigationDelegate;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)onWebResourceError:(id)arg1;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (id)initWithChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

