//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WKWebView, WSTemplateBaseJSHandler, WSTemplateJSLogicImpl;
@protocol YYWebViewInterface;

@interface WSTemplateLogicController : NSObject
{
    _Bool _shouldEncodeURL;
    WKWebView<YYWebViewInterface> *_webView;
    WSTemplateBaseJSHandler *_jsHandler;
    WSTemplateJSLogicImpl *_jsLogicImpl;
    NSString *_templatePath;
    NSDictionary *_oriUrlParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *oriUrlParams; // @synthesize oriUrlParams=_oriUrlParams;
@property(retain, nonatomic) NSString *templatePath; // @synthesize templatePath=_templatePath;
@property(nonatomic) _Bool shouldEncodeURL; // @synthesize shouldEncodeURL=_shouldEncodeURL;
@property(retain, nonatomic) WSTemplateJSLogicImpl *jsLogicImpl; // @synthesize jsLogicImpl=_jsLogicImpl;
@property(retain, nonatomic) WSTemplateBaseJSHandler *jsHandler; // @synthesize jsHandler=_jsHandler;
@property(retain, nonatomic) WKWebView<YYWebViewInterface> *webView; // @synthesize webView=_webView;
- (void)ackWithCallBackID:(id)arg1 errorMsg:(id)arg2;
- (void)ackWithCallBackID:(id)arg1 withParams:(id)arg2;
- (void)sendEventToJSBridge:(id)arg1 params:(id)arg2;
- (_Bool)loadH5ForWebView;
- (void)initWebView;
- (void)loadTemplateWithParh:(id)arg1 urlParams:(id)arg2 jsHandler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

