//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSProxy.h>

@class MMWebViewController, NSObject, NSString;
@protocol MMWebViewDelegate;

@interface WCFinderWebviewDelegateObject : NSProxy
{
    MMWebViewController *_webviewController;
    NSObject<MMWebViewDelegate> *_delegate;
    NSObject<MMWebViewDelegate> *_target;
}

+ (id)delegateWithWebviewController:(id)arg1 target:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<MMWebViewDelegate> *target; // @synthesize target=_target;
@property(nonatomic) __weak NSObject<MMWebViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MMWebViewController *webviewController; // @synthesize webviewController=_webviewController;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)onWebViewPerformClose:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)restore;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

