//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, YYBaseWebView;
@protocol WAVConsoleJSLogicImplDelegate;

@interface WAVConsoleJSLogicImpl
{
    YYBaseWebView *_webView;
    id <WAVConsoleJSLogicImplDelegate> _delegate;
    NSString *_curRandomUUID;
    NSString *_curContextUUID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *curContextUUID; // @synthesize curContextUUID=_curContextUUID;
@property(copy, nonatomic) NSString *curRandomUUID; // @synthesize curRandomUUID=_curRandomUUID;
@property(nonatomic) __weak id <WAVConsoleJSLogicImplDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak YYBaseWebView *webView; // @synthesize webView=_webView;
- (void)sendEventToJSBridge:(id)arg1 params:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)sendMessageToJSBridge:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)injectVConsole;
- (void)injectWeixinJSBridge;
- (void)sysInitDocument:(id)arg1;
- (void)resetSysInitMarkIfNeeded;
- (void)tryInjectWeixinJSBridge:(id)arg1;
- (void)endEventWithResult:(id)arg1 callbackID:(id)arg2;
- (void)handleJSApiDispatchMessage:(id)arg1;
- (id)fetchPublicResLogic;
- (id)weixinJSBridge;
- (id)init;

@end

