//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FBSDKWebViewAppLinkResolverWebViewDelegate : NSObject
{
    _Bool _hasLoaded;
    CDUnknownBlockType _didFinishLoad;
    CDUnknownBlockType _didFailLoadWithError;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property(copy, nonatomic) CDUnknownBlockType didFailLoadWithError; // @synthesize didFailLoadWithError=_didFailLoadWithError;
@property(copy, nonatomic) CDUnknownBlockType didFinishLoad; // @synthesize didFinishLoad=_didFinishLoad;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

