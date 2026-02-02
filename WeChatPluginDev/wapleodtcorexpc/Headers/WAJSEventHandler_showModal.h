//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAWebViewPlugin_InputKeyboard, WAWebViewPlugin_NativeView;

@interface WAJSEventHandler_showModal
{
    WAWebViewPlugin_InputKeyboard *_keyboardPlugin;
    WAWebViewPlugin_NativeView *_nativeInstance;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WAWebViewPlugin_NativeView *nativeInstance; // @synthesize nativeInstance=_nativeInstance;
@property(nonatomic) __weak WAWebViewPlugin_InputKeyboard *keyboardPlugin; // @synthesize keyboardPlugin=_keyboardPlugin;
- (void)onSuccess:(id)arg1;
- (void)onError:(id)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

