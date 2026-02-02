//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString;
@protocol WSTemplateBaseJSHandlerDelegate;

@interface WSTemplateBaseJSHandler : NSObject
{
    id <WSTemplateBaseJSHandlerDelegate> _delegate;
    MMUIViewController *_containerVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(nonatomic) __weak id <WSTemplateBaseJSHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleJSApi_openFinderView:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_playVideo:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_openProfilePage:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_ClosePage:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_reportKV:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_openWeAppPage:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_log:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApi_OpenWebView:(id)arg1 callbackID:(id)arg2;
- (_Bool)onJsApiHandlerForwardDealWithFunc:(id)arg1 params:(id)arg2 callbackID:(id)arg3;
- (id)jsEventsNeedRegister;
- (void)handleJSApi_openAdPage:(id)arg1 callbackID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

