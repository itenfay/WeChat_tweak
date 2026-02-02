//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol WSWebCommunicator, WSWebViewPluginableProtocol;

@interface WSWebViewPluginBase : NSObject
{
    id <WSWebViewPluginableProtocol> _webviewOwner;
    NSString *_debugModuleName;
}

+ (id)ExistInstanceFrom:(id)arg1;
+ (id)InstanceFrom:(id)arg1;
+ (id)GetExistInstanceFrom:(id)arg1;
+ (id)GetInstanceFrom:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *debugModuleName; // @synthesize debugModuleName=_debugModuleName;
@property(nonatomic) __weak id <WSWebViewPluginableProtocol> webviewOwner; // @synthesize webviewOwner=_webviewOwner;
- (id)curViewController;
@property(readonly, nonatomic) id <WSWebCommunicator> communicator;
- (id)webview;
- (void)sendEventToJSBridge:(id)arg1 withParams:(id)arg2 delaySendIfNotBridged:(_Bool)arg3;
- (void)sendEventToJSBridge:(id)arg1 withParams:(id)arg2;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
@property(nonatomic, readonly) _Bool isWebviewOnForeground;
@property(nonatomic, readonly) _Bool isWebviewPreload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

