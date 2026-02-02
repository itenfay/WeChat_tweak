//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAWebViewPlugin_HTMLWeb;

@interface WAJSEventHandler_translateHTMLWebView
{
    _Bool _translate;
    WAWebViewPlugin_HTMLWeb *_htmlWeb;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool translate; // @synthesize translate=_translate;
@property(nonatomic) __weak WAWebViewPlugin_HTMLWeb *htmlWeb; // @synthesize htmlWeb=_htmlWeb;
- (void)onHTMLWeb:(id)arg1 translateRevertFinish:(_Bool)arg2;
- (void)onHTMLWeb:(id)arg1 translateFinish:(_Bool)arg2;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

