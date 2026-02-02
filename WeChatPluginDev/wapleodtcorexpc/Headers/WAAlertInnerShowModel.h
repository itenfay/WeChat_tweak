//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WAAlertModel, WAWebViewController, WAWebViewPlugin_InputKeyboard, WAWebViewPlugin_NativeView;
@protocol WAJSEventHandlerContextDelegate;

@interface WAAlertInnerShowModel : NSObject
{
    id <WAJSEventHandlerContextDelegate> _context;
    WAWebViewController *_webViewController;
    WAWebViewPlugin_InputKeyboard *_keyboardPlugin;
    WAWebViewPlugin_NativeView *_nativeInstance;
    WAAlertModel *_alertModel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WAAlertModel *alertModel; // @synthesize alertModel=_alertModel;
@property(nonatomic) __weak WAWebViewPlugin_NativeView *nativeInstance; // @synthesize nativeInstance=_nativeInstance;
@property(nonatomic) __weak WAWebViewPlugin_InputKeyboard *keyboardPlugin; // @synthesize keyboardPlugin=_keyboardPlugin;
@property(nonatomic) __weak WAWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(nonatomic) __weak id <WAJSEventHandlerContextDelegate> context; // @synthesize context=_context;
- (void)onSuccess:(id)arg1;
- (void)onError:(id)arg1;
- (void)showAlert:(id)arg1;
- (id)initWithContext:(id)arg1 webViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

