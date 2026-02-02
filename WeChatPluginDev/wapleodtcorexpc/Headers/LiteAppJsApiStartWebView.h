//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface LiteAppJsApiStartWebView
{
    CDUnknownBlockType _callbackBlock;
}

- (void).cxx_destruct;
- (void)ShowWebViewControllerWithType:(unsigned long long)arg1 andWebViewVC:(id)arg2;
- (void)webViewReturn:(id)arg1;
- (void)delayDoAction;
- (void)invokeJsApiImpl:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

